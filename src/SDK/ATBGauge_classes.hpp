#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ATBGauge

#include "Basic.hpp"

#include "EndGame_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass ATBGauge.ATBGauge_C
// 0x0020 (0x0448 - 0x0428)
class UATBGauge_C final : public UEndActiveTimeGaugeIcon
{
public:
	class UEndGauge*                              Gauge_ATB;                                         // 0x0428(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              Img_Gauge_Head;                                    // 0x0430(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImageSet*                           Ims_ATBGaugeCover;                                 // 0x0438(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndCanvasPanel*                        Nut_Gauge_Head;                                    // 0x0440(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ATBGauge_C">();
	}
	static class UATBGauge_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UATBGauge_C>();
	}
};
static_assert(alignof(UATBGauge_C) == 0x000008, "Wrong alignment on UATBGauge_C");
static_assert(sizeof(UATBGauge_C) == 0x000448, "Wrong size on UATBGauge_C");
static_assert(offsetof(UATBGauge_C, Gauge_ATB) == 0x000428, "Member 'UATBGauge_C::Gauge_ATB' has a wrong offset!");
static_assert(offsetof(UATBGauge_C, Img_Gauge_Head) == 0x000430, "Member 'UATBGauge_C::Img_Gauge_Head' has a wrong offset!");
static_assert(offsetof(UATBGauge_C, Ims_ATBGaugeCover) == 0x000438, "Member 'UATBGauge_C::Ims_ATBGaugeCover' has a wrong offset!");
static_assert(offsetof(UATBGauge_C, Nut_Gauge_Head) == 0x000440, "Member 'UATBGauge_C::Nut_Gauge_Head' has a wrong offset!");

}

