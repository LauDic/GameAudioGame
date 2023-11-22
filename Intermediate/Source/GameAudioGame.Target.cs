using UnrealBuildTool;

public class GameAudioGameTarget : TargetRules
{
	public GameAudioGameTarget(TargetInfo Target) : base(Target)
	{
		DefaultBuildSettings = BuildSettingsVersion.V2;
		Type = TargetType.Game;
		ExtraModuleNames.Add("GameAudioGame");
	}
}
