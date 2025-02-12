#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Story_Progress

#include "Basic.hpp"

#include "EndGame_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass Story_Progress.Story_Progress_C
// 0x0038 (0x0400 - 0x03C8)
class UStory_Progress_C final : public UEndUserWidget
{
public:
	class UWidgetAnimation*                       Fail;                                              // 0x03C8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Achieve_Closed;                                    // 0x03D0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Achieve;                                           // 0x03D8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Active;                                            // 0x03E0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UEndImage*                              Img_Check;                                         // 0x03E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              Img_Check_1;                                       // 0x03F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              Img_Frame;                                         // 0x03F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Story_Progress_C">();
	}
	static class UStory_Progress_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UStory_Progress_C>();
	}
};
static_assert(alignof(UStory_Progress_C) == 0x000008, "Wrong alignment on UStory_Progress_C");
static_assert(sizeof(UStory_Progress_C) == 0x000400, "Wrong size on UStory_Progress_C");
static_assert(offsetof(UStory_Progress_C, Fail) == 0x0003C8, "Member 'UStory_Progress_C::Fail' has a wrong offset!");
static_assert(offsetof(UStory_Progress_C, Achieve_Closed) == 0x0003D0, "Member 'UStory_Progress_C::Achieve_Closed' has a wrong offset!");
static_assert(offsetof(UStory_Progress_C, Achieve) == 0x0003D8, "Member 'UStory_Progress_C::Achieve' has a wrong offset!");
static_assert(offsetof(UStory_Progress_C, Active) == 0x0003E0, "Member 'UStory_Progress_C::Active' has a wrong offset!");
static_assert(offsetof(UStory_Progress_C, Img_Check) == 0x0003E8, "Member 'UStory_Progress_C::Img_Check' has a wrong offset!");
static_assert(offsetof(UStory_Progress_C, Img_Check_1) == 0x0003F0, "Member 'UStory_Progress_C::Img_Check_1' has a wrong offset!");
static_assert(offsetof(UStory_Progress_C, Img_Frame) == 0x0003F8, "Member 'UStory_Progress_C::Img_Frame' has a wrong offset!");

}

