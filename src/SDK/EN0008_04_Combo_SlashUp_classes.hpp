#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: EN0008_04_Combo_SlashUp

#include "Basic.hpp"

#include "Enemy_ComboDefBase_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass EN0008_04_Combo_SlashUp.EN0008_04_Combo_SlashUp_C
// 0x0000 (0x0090 - 0x0090)
class UEN0008_04_Combo_SlashUp_C final : public UEnemy_ComboDefBase_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"EN0008_04_Combo_SlashUp_C">();
	}
	static class UEN0008_04_Combo_SlashUp_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UEN0008_04_Combo_SlashUp_C>();
	}
};
static_assert(alignof(UEN0008_04_Combo_SlashUp_C) == 0x000008, "Wrong alignment on UEN0008_04_Combo_SlashUp_C");
static_assert(sizeof(UEN0008_04_Combo_SlashUp_C) == 0x000090, "Wrong size on UEN0008_04_Combo_SlashUp_C");

}

