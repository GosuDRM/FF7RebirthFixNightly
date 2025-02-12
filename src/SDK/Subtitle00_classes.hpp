#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Subtitle00

#include "Basic.hpp"

#include "EndGame_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass Subtitle00.Subtitle00_C
// 0x0038 (0x0410 - 0x03D8)
class USubtitle00_C final : public UEndSubtitle
{
public:
	class UWidgetAnimation*                       Out;                                               // 0x03D8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       In;                                                // 0x03E0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Arrow_Loop;                                        // 0x03E8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UEndImage*                              Img_Arrow;                                         // 0x03F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              Img_Underline;                                     // 0x03F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndTextBlock*                          Txt_Lines;                                         // 0x0400(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndTextBlock*                          Txt_Name;                                          // 0x0408(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Subtitle00_C">();
	}
	static class USubtitle00_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USubtitle00_C>();
	}
};
static_assert(alignof(USubtitle00_C) == 0x000008, "Wrong alignment on USubtitle00_C");
static_assert(sizeof(USubtitle00_C) == 0x000410, "Wrong size on USubtitle00_C");
static_assert(offsetof(USubtitle00_C, Out) == 0x0003D8, "Member 'USubtitle00_C::Out' has a wrong offset!");
static_assert(offsetof(USubtitle00_C, In) == 0x0003E0, "Member 'USubtitle00_C::In' has a wrong offset!");
static_assert(offsetof(USubtitle00_C, Arrow_Loop) == 0x0003E8, "Member 'USubtitle00_C::Arrow_Loop' has a wrong offset!");
static_assert(offsetof(USubtitle00_C, Img_Arrow) == 0x0003F0, "Member 'USubtitle00_C::Img_Arrow' has a wrong offset!");
static_assert(offsetof(USubtitle00_C, Img_Underline) == 0x0003F8, "Member 'USubtitle00_C::Img_Underline' has a wrong offset!");
static_assert(offsetof(USubtitle00_C, Txt_Lines) == 0x000400, "Member 'USubtitle00_C::Txt_Lines' has a wrong offset!");
static_assert(offsetof(USubtitle00_C, Txt_Name) == 0x000408, "Member 'USubtitle00_C::Txt_Name' has a wrong offset!");

}

