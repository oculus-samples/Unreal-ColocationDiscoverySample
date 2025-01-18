/*
Copyright (c) Meta Platforms, Inc. and affiliates.
All rights reserved.

This source code is licensed under the license found in the
LICENSE file in the root directory of this source tree.
*/

using UnrealBuildTool;

public class ColocationDiscovery : ModuleRules
{
    public ColocationDiscovery(ReadOnlyTargetRules Target) : base(Target)
    {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

        PublicDependencyModuleNames.AddRange(new string[]
            {
                "Core",
                "CoreUObject",
                "Engine",
                "InputCore",
                "Json",
                "AndroidPermission",
                "Sockets",
                "UMG",
                "OculusXRHMD",
                "OculusXRAnchors",
                "OculusXRColocation"
            });


        PrivateDependencyModuleNames.AddRange(new string[]
            {
                "Slate",
                "SlateCore",
                "OnlineSubsystem"
            });

        if (Target.Platform != UnrealTargetPlatform.Android)
        {
            PrecompileForTargets = PrecompileTargetsType.None;
        }
    }
}
