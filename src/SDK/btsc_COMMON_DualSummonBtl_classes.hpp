#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: btsc_COMMON_DualSummonBtl

#include "Basic.hpp"

#include "EndDataBase_structs.hpp"
#include "Engine_structs.hpp"
#include "EndGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass btsc_COMMON_DualSummonBtl.btsc_COMMON_DualSummonBtl_C
// 0x0020 (0x02E0 - 0x02C0)
class Abtsc_COMMON_DualSummonBtl_C final : public AEndBattleSceneBlueprint
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02C0(0x0008)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x02C8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class AActor*                                 Out_Actor;                                         // 0x02D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          SoloMode;                                          // 0x02D8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          ReservedCutSceneAbility;                           // 0x02D9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          CompleteEntryBattleScene;                          // 0x02DA(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_btsc_COMMON_DualSummonBtl(int32 EntryPoint);
	void SetTargetNearestEnemyFromUCPC();
	void OnTakeDamage(int32 Damage, const class FName& CauserCharaName, const class FName& DamagedCharaName, const class FName& AbilityId, bool bBind, bool bGuard, const class FName& hitBoneName, bool bAttributeHit, bool bResistHit, const class FName& DamageSourceID, EEndBattleAttributeType appendAttribute, float justHitRotYaw, const struct FVector& hitPosition, bool bHeal, bool bBurst, bool bLock);
	void OnPostEntryBattleScene();
	void OnIncrementBattleCountPerID(class FName CauserCharaName, class FName TargetCharaName, EEndBattleCountLogType Type, class FName ID, int32 Count);
	void OnBPMessageFromAIBP(class AEndCharacter* SendCharacter, const class FName& Message);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"btsc_COMMON_DualSummonBtl_C">();
	}
	static class Abtsc_COMMON_DualSummonBtl_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<Abtsc_COMMON_DualSummonBtl_C>();
	}
};
static_assert(alignof(Abtsc_COMMON_DualSummonBtl_C) == 0x000008, "Wrong alignment on Abtsc_COMMON_DualSummonBtl_C");
static_assert(sizeof(Abtsc_COMMON_DualSummonBtl_C) == 0x0002E0, "Wrong size on Abtsc_COMMON_DualSummonBtl_C");
static_assert(offsetof(Abtsc_COMMON_DualSummonBtl_C, UberGraphFrame) == 0x0002C0, "Member 'Abtsc_COMMON_DualSummonBtl_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(Abtsc_COMMON_DualSummonBtl_C, DefaultSceneRoot) == 0x0002C8, "Member 'Abtsc_COMMON_DualSummonBtl_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(Abtsc_COMMON_DualSummonBtl_C, Out_Actor) == 0x0002D0, "Member 'Abtsc_COMMON_DualSummonBtl_C::Out_Actor' has a wrong offset!");
static_assert(offsetof(Abtsc_COMMON_DualSummonBtl_C, SoloMode) == 0x0002D8, "Member 'Abtsc_COMMON_DualSummonBtl_C::SoloMode' has a wrong offset!");
static_assert(offsetof(Abtsc_COMMON_DualSummonBtl_C, ReservedCutSceneAbility) == 0x0002D9, "Member 'Abtsc_COMMON_DualSummonBtl_C::ReservedCutSceneAbility' has a wrong offset!");
static_assert(offsetof(Abtsc_COMMON_DualSummonBtl_C, CompleteEntryBattleScene) == 0x0002DA, "Member 'Abtsc_COMMON_DualSummonBtl_C::CompleteEntryBattleScene' has a wrong offset!");

}

