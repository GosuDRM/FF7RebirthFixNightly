#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SampleCableCart00

#include "Basic.hpp"

#include "SamplePlugCable00_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass SampleCableCart00.SampleCableCart00_C
// 0x0000 (0x0BC0 - 0x0BC0)
class ASampleCableCart00_C final : public ASamplePlugCable00_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SampleCableCart00_C">();
	}
	static class ASampleCableCart00_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ASampleCableCart00_C>();
	}
};
static_assert(alignof(ASampleCableCart00_C) == 0x000010, "Wrong alignment on ASampleCableCart00_C");
static_assert(sizeof(ASampleCableCart00_C) == 0x000BC0, "Wrong size on ASampleCableCart00_C");

}

