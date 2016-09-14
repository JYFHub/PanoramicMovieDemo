// Copyright 2015 Kite & Lightning.  All rights reserved.

namespace UnrealBuildTool.Rules
{
	public class StereoPanoramaDCC : ModuleRules
	{
		public StereoPanoramaDCC( TargetInfo Target )
		{
			PrivateIncludePaths.AddRange(
				new string[] {
                    "Runtime/StereoPanoramaDCC/Private",
				}
			);

			PrivateDependencyModuleNames.AddRange(
				new string[] {
					"Core",
					"CoreUObject",
					"Engine",
					"ImageWrapper",
					"InputCore",
					"RenderCore",
					"ShaderCore",
					"RHI",
					"Slate",
				}
			);
		}
	}
}