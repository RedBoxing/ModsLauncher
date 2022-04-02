#pragma once
#include "Il2Cpp/Il2Cpp.h"

class NetReportView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "NetReportView"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& PlayerIndexSprites() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uintptr_t> T& CommentViewGa() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = uintptr_t> T& ReportTypeViewGa() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = uintptr_t> T& ReportFinishViewGa() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = uintptr_t> T& ReportPlayerViewGa() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& NegativeButton() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& PositiveButton() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& ReportTypeBtnGroup() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& ReportTypeProtoGa() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> T& ExitReportFinishViewBtn() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& MainText() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = uintptr_t> T& SubText() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = uintptr_t> T& ReportPlayerToggleGroup() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = uintptr_t> T& ReportPlayerToggleProtoGa() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = uintptr_t> T& ReportPlayerTitleText() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = uintptr_t> T& ConfirmReportBtn() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = uintptr_t> T& ExitReportPlayerVeiwBtn() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = uintptr_t> T& CommonViewCountDownBtn() {
		return *(T*)((uintptr_t)this + 0xE8);
	}
	template <typename T = uintptr_t> T& ReportTypeViewCountDownBtn() {
		return *(T*)((uintptr_t)this + 0xF0);
	}
	template <typename T = uintptr_t> T& ReportPlayerViewCountDownBtn() {
		return *(T*)((uintptr_t)this + 0xF8);
	}
	template <typename T = uintptr_t> T& CommonViewCountDownText() {
		return *(T*)((uintptr_t)this + 0x100);
	}
	template <typename T = uintptr_t> T& ReportTypeViewCountDownText() {
		return *(T*)((uintptr_t)this + 0x108);
	}
	template <typename T = uintptr_t> T& ReportFinishViewCountDownText() {
		return *(T*)((uintptr_t)this + 0x110);
	}
	template <typename T = uintptr_t> T& ReportPlayerViewCountDownText() {
		return *(T*)((uintptr_t)this + 0x118);
	}
	template <typename T = bool> T& isFromCommentWindow() {
		return *(T*)((uintptr_t)this + 0x120);
	}
	template <typename T = uintptr_t> T& _showType() {
		return *(T*)((uintptr_t)this + 0x124);
	}
	template <typename T = int32_t> T& CountDownSeconds() {
		return *(T*)((uintptr_t)this + 0x128);
	}
	template <typename T = int32_t> T& RemainSeconds() {
		return *(T*)((uintptr_t)this + 0x12C);
	}
	template <typename T = uintptr_t> T& countDownCoroutine() {
		return *(T*)((uintptr_t)this + 0x130);
	}
	template <typename T = Il2CppString*> static T& PrefabName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& prefab() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& reporPlayerType() {
		return *(T*)((uintptr_t)this + 0x138);
	}
	template <typename T = Il2CppDictionary<int32_t, Il2CppString*>*> T& NetUserDataDic() {
		return *(T*)((uintptr_t)this + 0x140);
	}
	template <typename T = Il2CppDictionary<int32_t, void*>*> T& NetUserHeroDataDic() {
		return *(T*)((uintptr_t)this + 0x148);
	}
	template <typename T = Il2CppList<void*>*> T& ReportPlayerList() {
		return *(T*)((uintptr_t)this + 0x150);
	}

	template <typename T = void> T InitView() {
		return ((T (*)(NetReportView*))(Il2CppBase() + 0x4457F24))(this);
	}
	template <typename T = void> T ShowView(Il2CppArray<uintptr_t>* objects) {
		return ((T (*)(NetReportView*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x44591F4))(this, objects);
	}
	template <typename T = void> T HideView(Il2CppArray<uintptr_t>* objects) {
		return ((T (*)(NetReportView*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x44592C0))(this, objects);
	}
	template <typename T = uintptr_t> static T GetView() {
		return ((T (*)(void *))(Il2CppBase() + 0x44593E4))(0);
	}
	template <typename T = void> static T ShowReportWindow() {
		return ((T (*)(void *))(Il2CppBase() + 0x4459650))(0);
	}
	template <typename T = void> static T ShowCommentWindow() {
		return ((T (*)(void *))(Il2CppBase() + 0x4459950))(0);
	}
	template <typename T = void> T CopyData() {
		return ((T (*)(NetReportView*))(Il2CppBase() + 0x44597D8))(this);
	}
	template <typename T = uintptr_t> T SetIsFromCommentWindow(bool isFromReportWindow) {
		return ((T (*)(NetReportView*, bool))(Il2CppBase() + 0x44596F0))(this, isFromReportWindow);
	}
	template <typename T = void> T ShowCommentView() {
		return ((T (*)(NetReportView*))(Il2CppBase() + 0x44599F0))(this);
	}
	template <typename T = void> T ShowReportTypeView() {
		return ((T (*)(NetReportView*))(Il2CppBase() + 0x445976C))(this);
	}
	template <typename T = void> T ShowReportFinishView(bool isReportPlayer) {
		return ((T (*)(NetReportView*, bool))(Il2CppBase() + 0x4459C78))(this, isReportPlayer);
	}
	template <typename T = void> T ShowReportPlayerView(uintptr_t reportType) {
		return ((T (*)(NetReportView*, uintptr_t))(Il2CppBase() + 0x4459E18))(this, reportType);
	}
	template <typename T = void> T ShowSubView(uintptr_t showViewGa) {
		return ((T (*)(NetReportView*, uintptr_t))(Il2CppBase() + 0x4459A58))(this, showViewGa);
	}
	template <typename T = void> T ClickPositiveBtn() {
		return ((T (*)(NetReportView*))(Il2CppBase() + 0x445A7C4))(this);
	}
	template <typename T = void> T ClickNegativeBtn() {
		return ((T (*)(NetReportView*))(Il2CppBase() + 0x445A878))(this);
	}
	template <typename T = void> T ClickReportTypeReturn() {
		return ((T (*)(NetReportView*))(Il2CppBase() + 0x445A8D8))(this);
	}
	template <typename T = void> T ClickConfirmReportBtn() {
		return ((T (*)(NetReportView*))(Il2CppBase() + 0x445A994))(this);
	}
	template <typename T = void> T ClickReportPlayerReturn() {
		return ((T (*)(NetReportView*))(Il2CppBase() + 0x445AE94))(this);
	}
	template <typename T = void> T ClickReportType(uintptr_t reportType) {
		return ((T (*)(NetReportView*, uintptr_t))(Il2CppBase() + 0x445AEF4))(this, reportType);
	}
	template <typename T = uintptr_t> T CountDown() {
		return ((T (*)(NetReportView*))(Il2CppBase() + 0x4459140))(this);
	}
	template <typename T = bool> T OnEvent(uintptr_t navigationEvent) {
		return ((T (*)(NetReportView*, uintptr_t))(Il2CppBase() + 0x445AFD0))(this, navigationEvent);
	}
	template <typename T = void> T InitViewb__31_0() {
		return ((T (*)(NetReportView*))(Il2CppBase() + 0x445B19C))(this);
	}
	template <typename T = void> T InitViewb__31_1() {
		return ((T (*)(NetReportView*))(Il2CppBase() + 0x445B200))(this);
	}
	template <typename T = void> T InitViewb__31_2() {
		return ((T (*)(NetReportView*))(Il2CppBase() + 0x445B264))(this);
	}
	template <typename T = void> T InitViewb__31_3() {
		return ((T (*)(NetReportView*))(Il2CppBase() + 0x445B2C8))(this);
	}
	template <typename T = void> T iFixBaseProxy_InitView() {
		return ((T (*)(NetReportView*))(Il2CppBase() + 0x445B32C))(this);
	}
	template <typename T = void> T iFixBaseProxy_ShowView(Il2CppArray<uintptr_t>* P0) {
		return ((T (*)(NetReportView*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x445B334))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_HideView(Il2CppArray<uintptr_t>* P0) {
		return ((T (*)(NetReportView*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x445B33C))(this, P0);
	}
	template <typename T = bool> T iFixBaseProxy_OnEvent(uintptr_t P0) {
		return ((T (*)(NetReportView*, uintptr_t))(Il2CppBase() + 0x445B344))(this, P0);
	}

};

}
