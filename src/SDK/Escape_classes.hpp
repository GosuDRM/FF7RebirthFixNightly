#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Escape

#include "Basic.hpp"

#include "EndGame_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass Escape.Escape_C
// 0x0088 (0x0450 - 0x03C8)
class UEscape_C final : public UEndUserWidget
{
public:
	class UWidgetAnimation*                       Escaped_Out;                                       // 0x03C8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Out;                                               // 0x03D0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Loop;                                              // 0x03D8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       In;                                                // 0x03E0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UEndCanvasPanel*                        All_Escape;                                        // 0x03E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndBorder*                             All_Nut_Escape;                                    // 0x03F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              Base_Effect_Red00;                                 // 0x03F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              Light_Red_01;                                      // 0x0400(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              Light_Yellow_02;                                   // 0x0408(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              Light_Yellow_Left;                                 // 0x0410(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              Light_Yellow_Left2;                                // 0x0418(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              Light_Yellow_Loop;                                 // 0x0420(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              Light_Yellow_Right;                                // 0x0428(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              Light_Yellow_Right2;                               // 0x0430(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndBorder*                             Nut_Txt;                                           // 0x0438(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndCanvasPanel*                        Pnl_Escape;                                        // 0x0440(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndTextBlock*                          Txt_Escaping;                                      // 0x0448(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Escape_C">();
	}
	static class UEscape_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UEscape_C>();
	}
};
static_assert(alignof(UEscape_C) == 0x000008, "Wrong alignment on UEscape_C");
static_assert(sizeof(UEscape_C) == 0x000450, "Wrong size on UEscape_C");
static_assert(offsetof(UEscape_C, Escaped_Out) == 0x0003C8, "Member 'UEscape_C::Escaped_Out' has a wrong offset!");
static_assert(offsetof(UEscape_C, Out) == 0x0003D0, "Member 'UEscape_C::Out' has a wrong offset!");
static_assert(offsetof(UEscape_C, Loop) == 0x0003D8, "Member 'UEscape_C::Loop' has a wrong offset!");
static_assert(offsetof(UEscape_C, In) == 0x0003E0, "Member 'UEscape_C::In' has a wrong offset!");
static_assert(offsetof(UEscape_C, All_Escape) == 0x0003E8, "Member 'UEscape_C::All_Escape' has a wrong offset!");
static_assert(offsetof(UEscape_C, All_Nut_Escape) == 0x0003F0, "Member 'UEscape_C::All_Nut_Escape' has a wrong offset!");
static_assert(offsetof(UEscape_C, Base_Effect_Red00) == 0x0003F8, "Member 'UEscape_C::Base_Effect_Red00' has a wrong offset!");
static_assert(offsetof(UEscape_C, Light_Red_01) == 0x000400, "Member 'UEscape_C::Light_Red_01' has a wrong offset!");
static_assert(offsetof(UEscape_C, Light_Yellow_02) == 0x000408, "Member 'UEscape_C::Light_Yellow_02' has a wrong offset!");
static_assert(offsetof(UEscape_C, Light_Yellow_Left) == 0x000410, "Member 'UEscape_C::Light_Yellow_Left' has a wrong offset!");
static_assert(offsetof(UEscape_C, Light_Yellow_Left2) == 0x000418, "Member 'UEscape_C::Light_Yellow_Left2' has a wrong offset!");
static_assert(offsetof(UEscape_C, Light_Yellow_Loop) == 0x000420, "Member 'UEscape_C::Light_Yellow_Loop' has a wrong offset!");
static_assert(offsetof(UEscape_C, Light_Yellow_Right) == 0x000428, "Member 'UEscape_C::Light_Yellow_Right' has a wrong offset!");
static_assert(offsetof(UEscape_C, Light_Yellow_Right2) == 0x000430, "Member 'UEscape_C::Light_Yellow_Right2' has a wrong offset!");
static_assert(offsetof(UEscape_C, Nut_Txt) == 0x000438, "Member 'UEscape_C::Nut_Txt' has a wrong offset!");
static_assert(offsetof(UEscape_C, Pnl_Escape) == 0x000440, "Member 'UEscape_C::Pnl_Escape' has a wrong offset!");
static_assert(offsetof(UEscape_C, Txt_Escaping) == 0x000448, "Member 'UEscape_C::Txt_Escaping' has a wrong offset!");

}

