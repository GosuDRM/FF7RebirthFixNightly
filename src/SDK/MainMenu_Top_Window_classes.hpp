#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MainMenu_Top_Window

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "EndGame_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass MainMenu_Top_Window.MainMenu_Top_Window_C
// 0x0010 (0x0500 - 0x04F0)
class UMainMenu_Top_Window_C final : public UEndMainMenuTopWindow
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x04F0(0x0008)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UWidgetAnimation*                       Menu_In;                                           // 0x04F8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_MainMenu_Top_Window(int32 EntryPoint);
	void Construct();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"MainMenu_Top_Window_C">();
	}
	static class UMainMenu_Top_Window_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMainMenu_Top_Window_C>();
	}
};
static_assert(alignof(UMainMenu_Top_Window_C) == 0x000008, "Wrong alignment on UMainMenu_Top_Window_C");
static_assert(sizeof(UMainMenu_Top_Window_C) == 0x000500, "Wrong size on UMainMenu_Top_Window_C");
static_assert(offsetof(UMainMenu_Top_Window_C, UberGraphFrame) == 0x0004F0, "Member 'UMainMenu_Top_Window_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UMainMenu_Top_Window_C, Menu_In) == 0x0004F8, "Member 'UMainMenu_Top_Window_C::Menu_In' has a wrong offset!");

}

