// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class DX_ThirdPerson : ModuleRules
{
	public DX_ThirdPerson(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
