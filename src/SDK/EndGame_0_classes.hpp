#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: EndGame_0

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass EndGame.EndGame_C
// 0x0008 (0x0238 - 0x0230)
class AEndGame_C final : public ALevelScriptActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0230(0x0008)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)

public:
	void ReceiveBeginPlay();
	void ExecuteUbergraph_EndGame(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"EndGame_C">();
	}
	static class AEndGame_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AEndGame_C>();
	}
};
static_assert(alignof(AEndGame_C) == 0x000008, "Wrong alignment on AEndGame_C");
static_assert(sizeof(AEndGame_C) == 0x000238, "Wrong size on AEndGame_C");
static_assert(offsetof(AEndGame_C, UberGraphFrame) == 0x000230, "Member 'AEndGame_C::UberGraphFrame' has a wrong offset!");

}

