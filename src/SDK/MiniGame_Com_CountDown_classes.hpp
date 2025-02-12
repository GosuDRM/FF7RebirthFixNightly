#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MiniGame_Com_CountDown

#include "Basic.hpp"

#include "EndGame_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass MiniGame_Com_CountDown.MiniGame_Com_CountDown_C
// 0x0208 (0x05D0 - 0x03C8)
class UMiniGame_Com_CountDown_C final : public UEndUserWidget
{
public:
	class UWidgetAnimation*                       GameOver;                                          // 0x03C8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Ready;                                             // 0x03D0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Round;                                             // 0x03D8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       CountDown_Start;                                   // 0x03E0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       CountDown_1;                                       // 0x03E8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       CountDown_2;                                       // 0x03F0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       CountDown_3;                                       // 0x03F8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       CountDown;                                         // 0x0400(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       TimeUp;                                            // 0x0408(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Finish;                                            // 0x0410(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UEndImage*                              Ciecle01;                                          // 0x0418(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              Ciecle02;                                          // 0x0420(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              EndImage_0;                                        // 0x0428(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              Img_Num1;                                          // 0x0430(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              Img_Num12;                                         // 0x0438(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              Img_Num2;                                          // 0x0440(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              Img_Num22;                                         // 0x0448(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              Img_Num3;                                          // 0x0450(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              Img_Num32;                                         // 0x0458(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              Line11_01;                                         // 0x0460(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              Line11_02;                                         // 0x0468(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              Line11_03;                                         // 0x0470(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              Line11_04;                                         // 0x0478(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              Line12_01;                                         // 0x0480(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              Line12_02;                                         // 0x0488(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              Line1_01;                                          // 0x0490(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              Line1_02;                                          // 0x0498(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              Line1_s_01;                                        // 0x04A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              Line1_s_02;                                        // 0x04A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              Line2_01;                                          // 0x04B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              Line2_02;                                          // 0x04B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              Line2_s_01;                                        // 0x04C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              Line2_s_02;                                        // 0x04C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              Line3_01;                                          // 0x04D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              Line3_02;                                          // 0x04D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              Line3_s_01;                                        // 0x04E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              Line3_s_02;                                        // 0x04E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              Line4_01;                                          // 0x04F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              Line4_02;                                          // 0x04F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              Line4_s_01;                                        // 0x0500(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              Line4_s_02;                                        // 0x0508(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              Line5_01;                                          // 0x0510(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              Line5_02;                                          // 0x0518(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              Line5_s_01;                                        // 0x0520(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              Line5_s_02;                                        // 0x0528(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              Line6_01;                                          // 0x0530(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              Line6_02;                                          // 0x0538(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              Line6_s_01;                                        // 0x0540(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              Line6_s_02;                                        // 0x0548(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              Line_Center_01;                                    // 0x0550(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              Line_Center_02;                                    // 0x0558(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              Line_Center_Arrow1_1;                              // 0x0560(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              Line_Center_Arrow1_2;                              // 0x0568(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              Line_Center_Arrow2_1;                              // 0x0570(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              Line_Center_Arrow2_2;                              // 0x0578(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              Num_Light;                                         // 0x0580(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              Square1;                                           // 0x0588(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              Square2;                                           // 0x0590(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              Square3;                                           // 0x0598(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              Square4;                                           // 0x05A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              Start_Light0;                                      // 0x05A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              Start_Light1;                                      // 0x05B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              Start_Light2;                                      // 0x05B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              Start_Light3;                                      // 0x05C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndTextBlock*                          Txt_Title;                                         // 0x05C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"MiniGame_Com_CountDown_C">();
	}
	static class UMiniGame_Com_CountDown_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMiniGame_Com_CountDown_C>();
	}
};
static_assert(alignof(UMiniGame_Com_CountDown_C) == 0x000008, "Wrong alignment on UMiniGame_Com_CountDown_C");
static_assert(sizeof(UMiniGame_Com_CountDown_C) == 0x0005D0, "Wrong size on UMiniGame_Com_CountDown_C");
static_assert(offsetof(UMiniGame_Com_CountDown_C, GameOver) == 0x0003C8, "Member 'UMiniGame_Com_CountDown_C::GameOver' has a wrong offset!");
static_assert(offsetof(UMiniGame_Com_CountDown_C, Ready) == 0x0003D0, "Member 'UMiniGame_Com_CountDown_C::Ready' has a wrong offset!");
static_assert(offsetof(UMiniGame_Com_CountDown_C, Round) == 0x0003D8, "Member 'UMiniGame_Com_CountDown_C::Round' has a wrong offset!");
static_assert(offsetof(UMiniGame_Com_CountDown_C, CountDown_Start) == 0x0003E0, "Member 'UMiniGame_Com_CountDown_C::CountDown_Start' has a wrong offset!");
static_assert(offsetof(UMiniGame_Com_CountDown_C, CountDown_1) == 0x0003E8, "Member 'UMiniGame_Com_CountDown_C::CountDown_1' has a wrong offset!");
static_assert(offsetof(UMiniGame_Com_CountDown_C, CountDown_2) == 0x0003F0, "Member 'UMiniGame_Com_CountDown_C::CountDown_2' has a wrong offset!");
static_assert(offsetof(UMiniGame_Com_CountDown_C, CountDown_3) == 0x0003F8, "Member 'UMiniGame_Com_CountDown_C::CountDown_3' has a wrong offset!");
static_assert(offsetof(UMiniGame_Com_CountDown_C, CountDown) == 0x000400, "Member 'UMiniGame_Com_CountDown_C::CountDown' has a wrong offset!");
static_assert(offsetof(UMiniGame_Com_CountDown_C, TimeUp) == 0x000408, "Member 'UMiniGame_Com_CountDown_C::TimeUp' has a wrong offset!");
static_assert(offsetof(UMiniGame_Com_CountDown_C, Finish) == 0x000410, "Member 'UMiniGame_Com_CountDown_C::Finish' has a wrong offset!");
static_assert(offsetof(UMiniGame_Com_CountDown_C, Ciecle01) == 0x000418, "Member 'UMiniGame_Com_CountDown_C::Ciecle01' has a wrong offset!");
static_assert(offsetof(UMiniGame_Com_CountDown_C, Ciecle02) == 0x000420, "Member 'UMiniGame_Com_CountDown_C::Ciecle02' has a wrong offset!");
static_assert(offsetof(UMiniGame_Com_CountDown_C, EndImage_0) == 0x000428, "Member 'UMiniGame_Com_CountDown_C::EndImage_0' has a wrong offset!");
static_assert(offsetof(UMiniGame_Com_CountDown_C, Img_Num1) == 0x000430, "Member 'UMiniGame_Com_CountDown_C::Img_Num1' has a wrong offset!");
static_assert(offsetof(UMiniGame_Com_CountDown_C, Img_Num12) == 0x000438, "Member 'UMiniGame_Com_CountDown_C::Img_Num12' has a wrong offset!");
static_assert(offsetof(UMiniGame_Com_CountDown_C, Img_Num2) == 0x000440, "Member 'UMiniGame_Com_CountDown_C::Img_Num2' has a wrong offset!");
static_assert(offsetof(UMiniGame_Com_CountDown_C, Img_Num22) == 0x000448, "Member 'UMiniGame_Com_CountDown_C::Img_Num22' has a wrong offset!");
static_assert(offsetof(UMiniGame_Com_CountDown_C, Img_Num3) == 0x000450, "Member 'UMiniGame_Com_CountDown_C::Img_Num3' has a wrong offset!");
static_assert(offsetof(UMiniGame_Com_CountDown_C, Img_Num32) == 0x000458, "Member 'UMiniGame_Com_CountDown_C::Img_Num32' has a wrong offset!");
static_assert(offsetof(UMiniGame_Com_CountDown_C, Line11_01) == 0x000460, "Member 'UMiniGame_Com_CountDown_C::Line11_01' has a wrong offset!");
static_assert(offsetof(UMiniGame_Com_CountDown_C, Line11_02) == 0x000468, "Member 'UMiniGame_Com_CountDown_C::Line11_02' has a wrong offset!");
static_assert(offsetof(UMiniGame_Com_CountDown_C, Line11_03) == 0x000470, "Member 'UMiniGame_Com_CountDown_C::Line11_03' has a wrong offset!");
static_assert(offsetof(UMiniGame_Com_CountDown_C, Line11_04) == 0x000478, "Member 'UMiniGame_Com_CountDown_C::Line11_04' has a wrong offset!");
static_assert(offsetof(UMiniGame_Com_CountDown_C, Line12_01) == 0x000480, "Member 'UMiniGame_Com_CountDown_C::Line12_01' has a wrong offset!");
static_assert(offsetof(UMiniGame_Com_CountDown_C, Line12_02) == 0x000488, "Member 'UMiniGame_Com_CountDown_C::Line12_02' has a wrong offset!");
static_assert(offsetof(UMiniGame_Com_CountDown_C, Line1_01) == 0x000490, "Member 'UMiniGame_Com_CountDown_C::Line1_01' has a wrong offset!");
static_assert(offsetof(UMiniGame_Com_CountDown_C, Line1_02) == 0x000498, "Member 'UMiniGame_Com_CountDown_C::Line1_02' has a wrong offset!");
static_assert(offsetof(UMiniGame_Com_CountDown_C, Line1_s_01) == 0x0004A0, "Member 'UMiniGame_Com_CountDown_C::Line1_s_01' has a wrong offset!");
static_assert(offsetof(UMiniGame_Com_CountDown_C, Line1_s_02) == 0x0004A8, "Member 'UMiniGame_Com_CountDown_C::Line1_s_02' has a wrong offset!");
static_assert(offsetof(UMiniGame_Com_CountDown_C, Line2_01) == 0x0004B0, "Member 'UMiniGame_Com_CountDown_C::Line2_01' has a wrong offset!");
static_assert(offsetof(UMiniGame_Com_CountDown_C, Line2_02) == 0x0004B8, "Member 'UMiniGame_Com_CountDown_C::Line2_02' has a wrong offset!");
static_assert(offsetof(UMiniGame_Com_CountDown_C, Line2_s_01) == 0x0004C0, "Member 'UMiniGame_Com_CountDown_C::Line2_s_01' has a wrong offset!");
static_assert(offsetof(UMiniGame_Com_CountDown_C, Line2_s_02) == 0x0004C8, "Member 'UMiniGame_Com_CountDown_C::Line2_s_02' has a wrong offset!");
static_assert(offsetof(UMiniGame_Com_CountDown_C, Line3_01) == 0x0004D0, "Member 'UMiniGame_Com_CountDown_C::Line3_01' has a wrong offset!");
static_assert(offsetof(UMiniGame_Com_CountDown_C, Line3_02) == 0x0004D8, "Member 'UMiniGame_Com_CountDown_C::Line3_02' has a wrong offset!");
static_assert(offsetof(UMiniGame_Com_CountDown_C, Line3_s_01) == 0x0004E0, "Member 'UMiniGame_Com_CountDown_C::Line3_s_01' has a wrong offset!");
static_assert(offsetof(UMiniGame_Com_CountDown_C, Line3_s_02) == 0x0004E8, "Member 'UMiniGame_Com_CountDown_C::Line3_s_02' has a wrong offset!");
static_assert(offsetof(UMiniGame_Com_CountDown_C, Line4_01) == 0x0004F0, "Member 'UMiniGame_Com_CountDown_C::Line4_01' has a wrong offset!");
static_assert(offsetof(UMiniGame_Com_CountDown_C, Line4_02) == 0x0004F8, "Member 'UMiniGame_Com_CountDown_C::Line4_02' has a wrong offset!");
static_assert(offsetof(UMiniGame_Com_CountDown_C, Line4_s_01) == 0x000500, "Member 'UMiniGame_Com_CountDown_C::Line4_s_01' has a wrong offset!");
static_assert(offsetof(UMiniGame_Com_CountDown_C, Line4_s_02) == 0x000508, "Member 'UMiniGame_Com_CountDown_C::Line4_s_02' has a wrong offset!");
static_assert(offsetof(UMiniGame_Com_CountDown_C, Line5_01) == 0x000510, "Member 'UMiniGame_Com_CountDown_C::Line5_01' has a wrong offset!");
static_assert(offsetof(UMiniGame_Com_CountDown_C, Line5_02) == 0x000518, "Member 'UMiniGame_Com_CountDown_C::Line5_02' has a wrong offset!");
static_assert(offsetof(UMiniGame_Com_CountDown_C, Line5_s_01) == 0x000520, "Member 'UMiniGame_Com_CountDown_C::Line5_s_01' has a wrong offset!");
static_assert(offsetof(UMiniGame_Com_CountDown_C, Line5_s_02) == 0x000528, "Member 'UMiniGame_Com_CountDown_C::Line5_s_02' has a wrong offset!");
static_assert(offsetof(UMiniGame_Com_CountDown_C, Line6_01) == 0x000530, "Member 'UMiniGame_Com_CountDown_C::Line6_01' has a wrong offset!");
static_assert(offsetof(UMiniGame_Com_CountDown_C, Line6_02) == 0x000538, "Member 'UMiniGame_Com_CountDown_C::Line6_02' has a wrong offset!");
static_assert(offsetof(UMiniGame_Com_CountDown_C, Line6_s_01) == 0x000540, "Member 'UMiniGame_Com_CountDown_C::Line6_s_01' has a wrong offset!");
static_assert(offsetof(UMiniGame_Com_CountDown_C, Line6_s_02) == 0x000548, "Member 'UMiniGame_Com_CountDown_C::Line6_s_02' has a wrong offset!");
static_assert(offsetof(UMiniGame_Com_CountDown_C, Line_Center_01) == 0x000550, "Member 'UMiniGame_Com_CountDown_C::Line_Center_01' has a wrong offset!");
static_assert(offsetof(UMiniGame_Com_CountDown_C, Line_Center_02) == 0x000558, "Member 'UMiniGame_Com_CountDown_C::Line_Center_02' has a wrong offset!");
static_assert(offsetof(UMiniGame_Com_CountDown_C, Line_Center_Arrow1_1) == 0x000560, "Member 'UMiniGame_Com_CountDown_C::Line_Center_Arrow1_1' has a wrong offset!");
static_assert(offsetof(UMiniGame_Com_CountDown_C, Line_Center_Arrow1_2) == 0x000568, "Member 'UMiniGame_Com_CountDown_C::Line_Center_Arrow1_2' has a wrong offset!");
static_assert(offsetof(UMiniGame_Com_CountDown_C, Line_Center_Arrow2_1) == 0x000570, "Member 'UMiniGame_Com_CountDown_C::Line_Center_Arrow2_1' has a wrong offset!");
static_assert(offsetof(UMiniGame_Com_CountDown_C, Line_Center_Arrow2_2) == 0x000578, "Member 'UMiniGame_Com_CountDown_C::Line_Center_Arrow2_2' has a wrong offset!");
static_assert(offsetof(UMiniGame_Com_CountDown_C, Num_Light) == 0x000580, "Member 'UMiniGame_Com_CountDown_C::Num_Light' has a wrong offset!");
static_assert(offsetof(UMiniGame_Com_CountDown_C, Square1) == 0x000588, "Member 'UMiniGame_Com_CountDown_C::Square1' has a wrong offset!");
static_assert(offsetof(UMiniGame_Com_CountDown_C, Square2) == 0x000590, "Member 'UMiniGame_Com_CountDown_C::Square2' has a wrong offset!");
static_assert(offsetof(UMiniGame_Com_CountDown_C, Square3) == 0x000598, "Member 'UMiniGame_Com_CountDown_C::Square3' has a wrong offset!");
static_assert(offsetof(UMiniGame_Com_CountDown_C, Square4) == 0x0005A0, "Member 'UMiniGame_Com_CountDown_C::Square4' has a wrong offset!");
static_assert(offsetof(UMiniGame_Com_CountDown_C, Start_Light0) == 0x0005A8, "Member 'UMiniGame_Com_CountDown_C::Start_Light0' has a wrong offset!");
static_assert(offsetof(UMiniGame_Com_CountDown_C, Start_Light1) == 0x0005B0, "Member 'UMiniGame_Com_CountDown_C::Start_Light1' has a wrong offset!");
static_assert(offsetof(UMiniGame_Com_CountDown_C, Start_Light2) == 0x0005B8, "Member 'UMiniGame_Com_CountDown_C::Start_Light2' has a wrong offset!");
static_assert(offsetof(UMiniGame_Com_CountDown_C, Start_Light3) == 0x0005C0, "Member 'UMiniGame_Com_CountDown_C::Start_Light3' has a wrong offset!");
static_assert(offsetof(UMiniGame_Com_CountDown_C, Txt_Title) == 0x0005C8, "Member 'UMiniGame_Com_CountDown_C::Txt_Title' has a wrong offset!");

}

