#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PartyLevel

#include "Basic.hpp"

#include "PartyLevel_classes.hpp"
#include "PartyLevel_parameters.hpp"


namespace SDK
{

// Function PartyLevel.PartyLevel_C.ExecuteUbergraph_PartyLevel
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPartyLevel_C::ExecuteUbergraph_PartyLevel(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PartyLevel_C", "ExecuteUbergraph_PartyLevel");

	Params::PartyLevel_C_ExecuteUbergraph_PartyLevel Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PartyLevel.PartyLevel_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UPartyLevel_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PartyLevel_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

}

