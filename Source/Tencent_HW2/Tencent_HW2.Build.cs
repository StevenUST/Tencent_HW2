// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Tencent_HW2 : ModuleRules
{
	public Tencent_HW2(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
