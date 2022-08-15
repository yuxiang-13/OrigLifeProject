// Fill out your copyright notice in the Description page of Project Settings.


#include "UI/HUD/OrigLifeMenuHUD.h"

#include "SlateBasics.h"

AOrigLifeMenuHUD::AOrigLifeMenuHUD()
{
	if (GEngine && GEngine->GameViewport)
	{
		// //（创建widget保存在共享指针内） 使用 SAssignNew() 来创建控件，并将它分配给 TSharedPtr 成员
		// SAssignNew(MenuHUDWidget, SOrigLifeMenuHUDWidget);
		// // SNew(SWeakWidget) 是引擎 内部函数
		// // 添加到 视图上
		// GEngine->GameViewport->AddViewportWidgetContent(SNew(SWeakWidget).PossiblyNullContent(MenuHUDWidget.ToSharedRef()));
		//
		// /* https://docs.unrealengine.com/5.0/zh-CN/using-slate-in-game-in-unreal-engine/ */
	}
}
