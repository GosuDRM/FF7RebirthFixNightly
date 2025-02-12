#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Shop_Footer

#include "Basic.hpp"

#include "EndGame_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass Shop_Footer.Shop_Footer_C
// 0x0058 (0x0420 - 0x03C8)
class UShop_Footer_C final : public UEndUserWidget
{
public:
	class UWidgetAnimation*                       GoldSaucer;                                        // 0x03C8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Moogle;                                            // 0x03D0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Chocobo;                                           // 0x03D8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Chadley;                                           // 0x03E0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Normal;                                            // 0x03E8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UEndImage*                              Base;                                              // 0x03F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              Base_00;                                           // 0x03F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImageSet*                           Icon_Currency;                                     // 0x0400(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIcon_Currency_C*                       Icon_Currency_2;                                   // 0x0408(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIcon_Currency_C*                       Icon_Currency_new;                                 // 0x0410(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              Txt_Bg;                                            // 0x0418(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Shop_Footer_C">();
	}
	static class UShop_Footer_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UShop_Footer_C>();
	}
};
static_assert(alignof(UShop_Footer_C) == 0x000008, "Wrong alignment on UShop_Footer_C");
static_assert(sizeof(UShop_Footer_C) == 0x000420, "Wrong size on UShop_Footer_C");
static_assert(offsetof(UShop_Footer_C, GoldSaucer) == 0x0003C8, "Member 'UShop_Footer_C::GoldSaucer' has a wrong offset!");
static_assert(offsetof(UShop_Footer_C, Moogle) == 0x0003D0, "Member 'UShop_Footer_C::Moogle' has a wrong offset!");
static_assert(offsetof(UShop_Footer_C, Chocobo) == 0x0003D8, "Member 'UShop_Footer_C::Chocobo' has a wrong offset!");
static_assert(offsetof(UShop_Footer_C, Chadley) == 0x0003E0, "Member 'UShop_Footer_C::Chadley' has a wrong offset!");
static_assert(offsetof(UShop_Footer_C, Normal) == 0x0003E8, "Member 'UShop_Footer_C::Normal' has a wrong offset!");
static_assert(offsetof(UShop_Footer_C, Base) == 0x0003F0, "Member 'UShop_Footer_C::Base' has a wrong offset!");
static_assert(offsetof(UShop_Footer_C, Base_00) == 0x0003F8, "Member 'UShop_Footer_C::Base_00' has a wrong offset!");
static_assert(offsetof(UShop_Footer_C, Icon_Currency) == 0x000400, "Member 'UShop_Footer_C::Icon_Currency' has a wrong offset!");
static_assert(offsetof(UShop_Footer_C, Icon_Currency_2) == 0x000408, "Member 'UShop_Footer_C::Icon_Currency_2' has a wrong offset!");
static_assert(offsetof(UShop_Footer_C, Icon_Currency_new) == 0x000410, "Member 'UShop_Footer_C::Icon_Currency_new' has a wrong offset!");
static_assert(offsetof(UShop_Footer_C, Txt_Bg) == 0x000418, "Member 'UShop_Footer_C::Txt_Bg' has a wrong offset!");

}

