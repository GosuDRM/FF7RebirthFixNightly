#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MiniGame_SimpleResult

#include "Basic.hpp"

#include "EndGame_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass MiniGame_SimpleResult.MiniGame_SimpleResult_C
// 0x00A0 (0x0468 - 0x03C8)
class UMiniGame_SimpleResult_C final : public UEndUserWidget
{
public:
	class UWidgetAnimation*                       Normal;                                            // 0x03C8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       BAD;                                               // 0x03D0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       GOOD;                                              // 0x03D8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       GREAT;                                             // 0x03E0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Out;                                               // 0x03E8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       In;                                                // 0x03F0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UEndImage*                              Base1;                                             // 0x03F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              Base2;                                             // 0x0400(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              Icon_X1;                                           // 0x0408(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              Icon_X2;                                           // 0x0410(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              Light1;                                            // 0x0418(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              Light2;                                            // 0x0420(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              Light3;                                            // 0x0428(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              Line1;                                             // 0x0430(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              Line2;                                             // 0x0438(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndTextBlock*                          Txt_Item1;                                         // 0x0440(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndTextBlock*                          Txt_Item1_Value;                                   // 0x0448(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndTextBlock*                          Txt_Item2;                                         // 0x0450(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndTextBlock*                          Txt_Item2_Value;                                   // 0x0458(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndTextBlock*                          Txt_Result;                                        // 0x0460(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"MiniGame_SimpleResult_C">();
	}
	static class UMiniGame_SimpleResult_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMiniGame_SimpleResult_C>();
	}
};
static_assert(alignof(UMiniGame_SimpleResult_C) == 0x000008, "Wrong alignment on UMiniGame_SimpleResult_C");
static_assert(sizeof(UMiniGame_SimpleResult_C) == 0x000468, "Wrong size on UMiniGame_SimpleResult_C");
static_assert(offsetof(UMiniGame_SimpleResult_C, Normal) == 0x0003C8, "Member 'UMiniGame_SimpleResult_C::Normal' has a wrong offset!");
static_assert(offsetof(UMiniGame_SimpleResult_C, BAD) == 0x0003D0, "Member 'UMiniGame_SimpleResult_C::BAD' has a wrong offset!");
static_assert(offsetof(UMiniGame_SimpleResult_C, GOOD) == 0x0003D8, "Member 'UMiniGame_SimpleResult_C::GOOD' has a wrong offset!");
static_assert(offsetof(UMiniGame_SimpleResult_C, GREAT) == 0x0003E0, "Member 'UMiniGame_SimpleResult_C::GREAT' has a wrong offset!");
static_assert(offsetof(UMiniGame_SimpleResult_C, Out) == 0x0003E8, "Member 'UMiniGame_SimpleResult_C::Out' has a wrong offset!");
static_assert(offsetof(UMiniGame_SimpleResult_C, In) == 0x0003F0, "Member 'UMiniGame_SimpleResult_C::In' has a wrong offset!");
static_assert(offsetof(UMiniGame_SimpleResult_C, Base1) == 0x0003F8, "Member 'UMiniGame_SimpleResult_C::Base1' has a wrong offset!");
static_assert(offsetof(UMiniGame_SimpleResult_C, Base2) == 0x000400, "Member 'UMiniGame_SimpleResult_C::Base2' has a wrong offset!");
static_assert(offsetof(UMiniGame_SimpleResult_C, Icon_X1) == 0x000408, "Member 'UMiniGame_SimpleResult_C::Icon_X1' has a wrong offset!");
static_assert(offsetof(UMiniGame_SimpleResult_C, Icon_X2) == 0x000410, "Member 'UMiniGame_SimpleResult_C::Icon_X2' has a wrong offset!");
static_assert(offsetof(UMiniGame_SimpleResult_C, Light1) == 0x000418, "Member 'UMiniGame_SimpleResult_C::Light1' has a wrong offset!");
static_assert(offsetof(UMiniGame_SimpleResult_C, Light2) == 0x000420, "Member 'UMiniGame_SimpleResult_C::Light2' has a wrong offset!");
static_assert(offsetof(UMiniGame_SimpleResult_C, Light3) == 0x000428, "Member 'UMiniGame_SimpleResult_C::Light3' has a wrong offset!");
static_assert(offsetof(UMiniGame_SimpleResult_C, Line1) == 0x000430, "Member 'UMiniGame_SimpleResult_C::Line1' has a wrong offset!");
static_assert(offsetof(UMiniGame_SimpleResult_C, Line2) == 0x000438, "Member 'UMiniGame_SimpleResult_C::Line2' has a wrong offset!");
static_assert(offsetof(UMiniGame_SimpleResult_C, Txt_Item1) == 0x000440, "Member 'UMiniGame_SimpleResult_C::Txt_Item1' has a wrong offset!");
static_assert(offsetof(UMiniGame_SimpleResult_C, Txt_Item1_Value) == 0x000448, "Member 'UMiniGame_SimpleResult_C::Txt_Item1_Value' has a wrong offset!");
static_assert(offsetof(UMiniGame_SimpleResult_C, Txt_Item2) == 0x000450, "Member 'UMiniGame_SimpleResult_C::Txt_Item2' has a wrong offset!");
static_assert(offsetof(UMiniGame_SimpleResult_C, Txt_Item2_Value) == 0x000458, "Member 'UMiniGame_SimpleResult_C::Txt_Item2_Value' has a wrong offset!");
static_assert(offsetof(UMiniGame_SimpleResult_C, Txt_Result) == 0x000460, "Member 'UMiniGame_SimpleResult_C::Txt_Result' has a wrong offset!");

}

