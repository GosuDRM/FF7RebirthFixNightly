#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: obm1350_aljunon_3280_JNONT_Single_CheerWoman03

#include "Basic.hpp"

#include "obm1350_aljunon_3280_JNONT_Single_CheerWoman03_classes.hpp"
#include "obm1350_aljunon_3280_JNONT_Single_CheerWoman03_parameters.hpp"


namespace SDK
{

// Function obm1350_aljunon_3280_JNONT_Single_CheerWoman03.obm1350_aljunon_3280_JNONT_Single_CheerWoman03_C.CreateMobCommand
// (Event, Public, BlueprintEvent)

void Aobm1350_aljunon_3280_JNONT_Single_CheerWoman03_C::CreateMobCommand()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("obm1350_aljunon_3280_JNONT_Single_CheerWoman03_C", "CreateMobCommand");

	UObject::ProcessEvent(Func, nullptr);
}


// Function obm1350_aljunon_3280_JNONT_Single_CheerWoman03.obm1350_aljunon_3280_JNONT_Single_CheerWoman03_C.ExecuteUbergraph_obm1350_aljunon_3280_JNONT_Single_CheerWoman03
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Aobm1350_aljunon_3280_JNONT_Single_CheerWoman03_C::ExecuteUbergraph_obm1350_aljunon_3280_JNONT_Single_CheerWoman03(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("obm1350_aljunon_3280_JNONT_Single_CheerWoman03_C", "ExecuteUbergraph_obm1350_aljunon_3280_JNONT_Single_CheerWoman03");

	Params::obm1350_aljunon_3280_JNONT_Single_CheerWoman03_C_ExecuteUbergraph_obm1350_aljunon_3280_JNONT_Single_CheerWoman03 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

