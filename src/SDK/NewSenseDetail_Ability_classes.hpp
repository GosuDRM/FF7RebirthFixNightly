#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: NewSenseDetail_Ability

#include "Basic.hpp"

#include "EndGame_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass NewSenseDetail_Ability.NewSenseDetail_Ability_C
// 0x0010 (0x03F0 - 0x03E0)
class UNewSenseDetail_Ability_C final : public UEndNewSenseDetailAbility
{
public:
	class UWidgetAnimation*                       Info_Switching;                                    // 0x03E0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UEndTiledImage*                         Line;                                              // 0x03E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"NewSenseDetail_Ability_C">();
	}
	static class UNewSenseDetail_Ability_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNewSenseDetail_Ability_C>();
	}
};
static_assert(alignof(UNewSenseDetail_Ability_C) == 0x000008, "Wrong alignment on UNewSenseDetail_Ability_C");
static_assert(sizeof(UNewSenseDetail_Ability_C) == 0x0003F0, "Wrong size on UNewSenseDetail_Ability_C");
static_assert(offsetof(UNewSenseDetail_Ability_C, Info_Switching) == 0x0003E0, "Member 'UNewSenseDetail_Ability_C::Info_Switching' has a wrong offset!");
static_assert(offsetof(UNewSenseDetail_Ability_C, Line) == 0x0003E8, "Member 'UNewSenseDetail_Ability_C::Line' has a wrong offset!");

}

