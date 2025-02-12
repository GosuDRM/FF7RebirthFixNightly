#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BG0316_00_Elevator_Standard

#include "Basic.hpp"

#include "EndGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BG0316_00_Elevator_Standard.BG0316_00_Elevator_Standard_C
// 0x0008 (0x0818 - 0x0810)
class ABG0316_00_Elevator_Standard_C final : public AEndEnvironmentSkeletalMeshActor
{
public:
	class UEndBonamikBoxScaleGroupParamsComponent* EndBonamikBoxScaleGroupParams;                     // 0x0810(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BG0316_00_Elevator_Standard_C">();
	}
	static class ABG0316_00_Elevator_Standard_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABG0316_00_Elevator_Standard_C>();
	}
};
static_assert(alignof(ABG0316_00_Elevator_Standard_C) == 0x000008, "Wrong alignment on ABG0316_00_Elevator_Standard_C");
static_assert(sizeof(ABG0316_00_Elevator_Standard_C) == 0x000818, "Wrong size on ABG0316_00_Elevator_Standard_C");
static_assert(offsetof(ABG0316_00_Elevator_Standard_C, EndBonamikBoxScaleGroupParams) == 0x000810, "Member 'ABG0316_00_Elevator_Standard_C::EndBonamikBoxScaleGroupParams' has a wrong offset!");

}

