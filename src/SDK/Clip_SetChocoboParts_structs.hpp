#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Clip_SetChocoboParts

#include "Basic.hpp"


namespace SDK
{

// UserDefinedStruct Clip_SetChocoboParts.Clip_SetChocoboParts
// 0x0020 (0x0020 - 0x0000)
struct FClip_SetChocoboParts final
{
public:
	TArray<class FName>                           ActorNames_8_E55CAB2348826ACFBA5A03AA078D8B6D;     // 0x0000(0x0010)(Edit, BlueprintVisible)
	int32                                         HeadPartsIndex_13_87B346534E5FBF79D61AB98EE270C91C; // 0x0010(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	int32                                         BodyPartsIndex_14_97ABD2134D98F4C69849B6A1D998F796; // 0x0014(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	int32                                         LeagsPartsIndex_15_C650C34A47148170FBBE249D03876560; // 0x0018(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                          bClearParts_12_EC375E4A44164D00D810A098DF757A7D;   // 0x001C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper)
};
static_assert(alignof(FClip_SetChocoboParts) == 0x000008, "Wrong alignment on FClip_SetChocoboParts");
static_assert(sizeof(FClip_SetChocoboParts) == 0x000020, "Wrong size on FClip_SetChocoboParts");
static_assert(offsetof(FClip_SetChocoboParts, ActorNames_8_E55CAB2348826ACFBA5A03AA078D8B6D) == 0x000000, "Member 'FClip_SetChocoboParts::ActorNames_8_E55CAB2348826ACFBA5A03AA078D8B6D' has a wrong offset!");
static_assert(offsetof(FClip_SetChocoboParts, HeadPartsIndex_13_87B346534E5FBF79D61AB98EE270C91C) == 0x000010, "Member 'FClip_SetChocoboParts::HeadPartsIndex_13_87B346534E5FBF79D61AB98EE270C91C' has a wrong offset!");
static_assert(offsetof(FClip_SetChocoboParts, BodyPartsIndex_14_97ABD2134D98F4C69849B6A1D998F796) == 0x000014, "Member 'FClip_SetChocoboParts::BodyPartsIndex_14_97ABD2134D98F4C69849B6A1D998F796' has a wrong offset!");
static_assert(offsetof(FClip_SetChocoboParts, LeagsPartsIndex_15_C650C34A47148170FBBE249D03876560) == 0x000018, "Member 'FClip_SetChocoboParts::LeagsPartsIndex_15_C650C34A47148170FBBE249D03876560' has a wrong offset!");
static_assert(offsetof(FClip_SetChocoboParts, bClearParts_12_EC375E4A44164D00D810A098DF757A7D) == 0x00001C, "Member 'FClip_SetChocoboParts::bClearParts_12_EC375E4A44164D00D810A098DF757A7D' has a wrong offset!");

}

