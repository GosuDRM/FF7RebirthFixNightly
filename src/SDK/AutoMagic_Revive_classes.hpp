#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AutoMagic_Revive

#include "Basic.hpp"

#include "EndGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass AutoMagic_Revive.AutoMagic_Revive_C
// 0x0000 (0x0060 - 0x0060)
class UAutoMagic_Revive_C final : public UEndAIBattlePlayerAutoMagicRule
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AutoMagic_Revive_C">();
	}
	static class UAutoMagic_Revive_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAutoMagic_Revive_C>();
	}
};
static_assert(alignof(UAutoMagic_Revive_C) == 0x000008, "Wrong alignment on UAutoMagic_Revive_C");
static_assert(sizeof(UAutoMagic_Revive_C) == 0x000060, "Wrong size on UAutoMagic_Revive_C");

}

