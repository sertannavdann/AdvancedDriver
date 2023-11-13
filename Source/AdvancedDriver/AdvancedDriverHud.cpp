// Copyright Epic Games, Inc. All Rights Reserved.

#include "AdvancedDriverHud.h"
#include "AdvancedDriverPawn.h"
#include "Engine/Canvas.h"
#include "Engine/Font.h"
#include "CanvasItem.h"
#include "UObject/ConstructorHelpers.h"
#include "Engine/Engine.h"

// Needed for VR Headset
#include "Engine.h"

#define LOCTEXT_NAMESPACE "VehicleHUD"

#ifndef HMD_MODULE_INCLUDED
#define HMD_MODULE_INCLUDED 0
#endif

AAdvancedDriverHud::AAdvancedDriverHud()
{
	static ConstructorHelpers::FObjectFinder<UFont> Font(TEXT("/Engine/EngineFonts/RobotoDistanceField"));
	HUDFont = Font.Object;
}

void AAdvancedDriverHud::DrawHUD()
{
	Super::DrawHUD();

	// Calculate ratio from 720p
	const float HUDXRatio = Canvas->SizeX / 1920.f;
	const float HUDYRatio = Canvas->SizeY / 1080.f;

	bool bHMDDeviceActive = false;

	// We dont want the onscreen hud when using a HMD device	
#if HMD_MODULE_INCLUDED
	bHMDDeviceActive = GEngine->IsStereoscopic3D();
#endif // HMD_MODULE_INCLUDED
	if( bHMDDeviceActive == false )
	{
		// Get our vehicle so we can check if we are in car. If we are we don't want onscreen HUD
		AAdvancedDriverPawn* Vehicle = Cast<AAdvancedDriverPawn>(GetOwningPawn());
		if ((Vehicle != nullptr) && (Vehicle->bIsSpeedGearVisible == false))
		{
			FVector2D ScaleVec(HUDYRatio * 1.4f, HUDYRatio * 1.4f);

			// Speed
			FCanvasTextItem SpeedTextItem(FVector2D(HUDXRatio * 805.f, HUDYRatio * 455), Vehicle->SpeedDisplayString, HUDFont, FLinearColor::White);
			SpeedTextItem.Scale = ScaleVec;
			Canvas->DrawItem(SpeedTextItem);

			// Gear
			FCanvasTextItem GearTextItem(FVector2D(HUDXRatio * 805.f, HUDYRatio * 500.f), Vehicle->GearDisplayString, HUDFont, Vehicle->bInReverseGear == false ? Vehicle->GearDisplayColor : Vehicle->GearDisplayReverseColor);
			GearTextItem.Scale = ScaleVec;
			Canvas->DrawItem(GearTextItem);
		}
	}
}

#undef LOCTEXT_NAMESPACE
/*
#include "Async/TaskGraphInterfaces.h" // Include necessary header for Task Graph

// Example Task Function
void MyTaskFunction()
{
    // Perform some work here...
}

// Main function where we schedule tasks
void ScheduleTasks()
{
    // Create a task to run on a background thread
    // FFunctionGraphTask::CreateAndDispatchWhenReady creates a new task
    // and schedules it on the task graph to be executed when ready
    FFunctionGraphTask::CreateAndDispatchWhenReady(
        [](){
            // This is the body of the first task
            // Code to execute in the first task
            MyTaskFunction();
        },
        TStatId(), // TStatId is used for profiling, STATGROUP_TaskGraphTasks is a common group to use
        nullptr, // This is the list of tasks that must be completed before this task runs (dependencies)
        ENamedThreads::AnyBackgroundThreadNormalTask // Specifies on which thread the task should run
    );

    // Define a dependent task which should execute after the first task
    FGraphEventRef TaskOneCompleted = FFunctionGraphTask::CreateAndDispatchWhenReady(
        [](){
            // This is the body of the second task which depends on the first task
            // Perform the next piece of work here, after the first task has completed
        },
        TStatId(), // TStatId for the second task, also for profiling purposes
        nullptr, // Initially, there are no dependencies; we will set it next
        ENamedThreads::AnyBackgroundThreadNormalTask // This task also runs on any background thread
        );

    // Now we set the dependency of the second task on the first task
    // by using the FGraphEventRef from the first task.
    FGraphEventArray Prerequisites;
    Prerequisites.Add(TaskOneCompleted); // Add the first task to the prerequisites

    // Dispatch the second task with the dependency set
    FFunctionGraphTask::CreateAndDispatchWhenReady(
        [](){
            // This is the body of the second task
            // It will only execute after the first task is completed
        },
        TStatId(), // Profiling ID for the second task
        &Prerequisites, // Pass the dependencies
        ENamedThreads::AnyBackgroundThreadNormalTask // Specify the thread for the second task
        );
}
*/
// Call ScheduleTasks somewhere in your code to schedule the example tasks.