// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class NetworkingIntro_2023 : ModuleRules
{
	public NetworkingIntro_2023(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay", "EnhancedInput" });
	}
}
