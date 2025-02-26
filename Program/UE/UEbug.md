# 打包
## 打包设置

## 打包报错
1. ERROR: More than one Game project found for project
    原因：修改了uproject的名字导致的
    解决方法：把intermediate文件夹删除掉

# 编译报错
## winioctl.h(10380): [C4668] 没有将“_WIN32_WINNT_WIN10_RS4”定义为预处理器宏，用“0”替换“#if/#elif”
- 在TowerDefence.Build文件中加一行代码`bEnableUndefinedIdentifierWarnings = false;`
~~~C++
// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class TowerDefence : ModuleRules
{
	public TowerDefence(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
		bEnableUndefinedIdentifierWarnings = false;//在这
		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore" });

		PrivateDependencyModuleNames.AddRange(new string[] {  });

		// Uncomment if you are using Slate UI
		// PrivateDependencyModuleNames.AddRange(new string[] { "Slate", "SlateCore" });
		
		// Uncomment if you are using online features
		// PrivateDependencyModuleNames.Add("OnlineSubsystem");

		// To include OnlineSubsystemSteam, add it to the plugins section in your uproject file with the Enabled attribute set to true
	}
}
~~~
# 摄像机镜头拉近后，静态网格体或者骨骼网格体会消失
- 静态网格体：修改模型的BoundScale
- 骨骼网格体：修改图元尺寸


