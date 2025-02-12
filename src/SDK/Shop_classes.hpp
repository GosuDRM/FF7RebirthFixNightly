#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Shop

#include "Basic.hpp"

#include "EndGame_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass Shop.Shop_C
// 0x0060 (0x0560 - 0x0500)
class UShop_C final : public UEndShopMenu
{
public:
	class UWidgetAnimation*                       GoldSaucer;                                        // 0x0500(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Moogle;                                            // 0x0508(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Chocobo;                                           // 0x0510(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Chadley;                                           // 0x0518(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Normal;                                            // 0x0520(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       In;                                                // 0x0528(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UEndImageSet*                           Filter_01;                                         // 0x0530(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              Filter_Black;                                      // 0x0538(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              Filter_L00;                                        // 0x0540(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              Filter_R00;                                        // 0x0548(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UShop_Footer_C*                         Shop_Foot;                                         // 0x0550(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UShop_Menu_C*                           Shop_Menu;                                         // 0x0558(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Shop_C">();
	}
	static class UShop_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UShop_C>();
	}
};
static_assert(alignof(UShop_C) == 0x000008, "Wrong alignment on UShop_C");
static_assert(sizeof(UShop_C) == 0x000560, "Wrong size on UShop_C");
static_assert(offsetof(UShop_C, GoldSaucer) == 0x000500, "Member 'UShop_C::GoldSaucer' has a wrong offset!");
static_assert(offsetof(UShop_C, Moogle) == 0x000508, "Member 'UShop_C::Moogle' has a wrong offset!");
static_assert(offsetof(UShop_C, Chocobo) == 0x000510, "Member 'UShop_C::Chocobo' has a wrong offset!");
static_assert(offsetof(UShop_C, Chadley) == 0x000518, "Member 'UShop_C::Chadley' has a wrong offset!");
static_assert(offsetof(UShop_C, Normal) == 0x000520, "Member 'UShop_C::Normal' has a wrong offset!");
static_assert(offsetof(UShop_C, In) == 0x000528, "Member 'UShop_C::In' has a wrong offset!");
static_assert(offsetof(UShop_C, Filter_01) == 0x000530, "Member 'UShop_C::Filter_01' has a wrong offset!");
static_assert(offsetof(UShop_C, Filter_Black) == 0x000538, "Member 'UShop_C::Filter_Black' has a wrong offset!");
static_assert(offsetof(UShop_C, Filter_L00) == 0x000540, "Member 'UShop_C::Filter_L00' has a wrong offset!");
static_assert(offsetof(UShop_C, Filter_R00) == 0x000548, "Member 'UShop_C::Filter_R00' has a wrong offset!");
static_assert(offsetof(UShop_C, Shop_Foot) == 0x000550, "Member 'UShop_C::Shop_Foot' has a wrong offset!");
static_assert(offsetof(UShop_C, Shop_Menu) == 0x000558, "Member 'UShop_C::Shop_Menu' has a wrong offset!");

}

