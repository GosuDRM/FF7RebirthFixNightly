#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: COMON_SingleJikeidan2_02

#include "Basic.hpp"

#include "COMON_SingleJikeidan2_02_classes.hpp"
#include "COMON_SingleJikeidan2_02_parameters.hpp"


namespace SDK
{

// Function COMON_SingleJikeidan2_02.COMON_SingleJikeidan2_02_C.ExecuteUbergraph_COMON_SingleJikeidan2_02
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ACOMON_SingleJikeidan2_02_C::ExecuteUbergraph_COMON_SingleJikeidan2_02(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("COMON_SingleJikeidan2_02_C", "ExecuteUbergraph_COMON_SingleJikeidan2_02");

	Params::COMON_SingleJikeidan2_02_C_ExecuteUbergraph_COMON_SingleJikeidan2_02 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function COMON_SingleJikeidan2_02.COMON_SingleJikeidan2_02_C.CreateMobCommand
// (Event, Public, BlueprintEvent)

void ACOMON_SingleJikeidan2_02_C::CreateMobCommand()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("COMON_SingleJikeidan2_02_C", "CreateMobCommand");

	UObject::ProcessEvent(Func, nullptr);
}

}

