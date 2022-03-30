#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace UnityRealName.UI {

class AdditionInfoView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "UnityRealName.UI", "AdditionInfoView"));
	}

	template <typename T = uintptr_t> T& DecribeText() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uintptr_t> T& ReVerifyRealNameBtn() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = uintptr_t> T& ExitBtn() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = uintptr_t> T& DescribeBgBtn() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = uint16_t> T& RefleshUIInterval() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> static T& AfterShowView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& AfterHideView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = Il2CppString*> T& calledFrom() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = bool> static T& IsShowing() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> T& LongTouch() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = Il2CppString*> static T& ForceFetchRealNameDataTag() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> T& time() {
		return *(T*)((uintptr_t)this + 0x98);
	}

	template <typename T = void> static T add_AfterShowView(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x43F8C6C))(0, value);
	}
	template <typename T = void> static T remove_AfterShowView(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x43FA064))(0, value);
	}
	template <typename T = void> static T add_AfterHideView(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x43F8D68))(0, value);
	}
	template <typename T = void> static T remove_AfterHideView(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x43FA160))(0, value);
	}
	template <typename T = void> T InitView() {
		return ((T (*)(AdditionInfoView*))(Il2CppBase() + 0x43FA260))(this);
	}
	template <typename T = void> T ShowView(Il2CppArray<uintptr_t>* objects) {
		return ((T (*)(AdditionInfoView*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x43FA70C))(this, objects);
	}
	template <typename T = void> T HideView(Il2CppArray<uintptr_t>* objects) {
		return ((T (*)(AdditionInfoView*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x43FAB98))(this, objects);
	}
	template <typename T = void> T RefleshData() {
		return ((T (*)(AdditionInfoView*))(Il2CppBase() + 0x43FA80C))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(AdditionInfoView*))(Il2CppBase() + 0x43FB358))(this);
	}
	template <typename T = Il2CppString*> T GetRealNameText() {
		return ((T (*)(AdditionInfoView*))(Il2CppBase() + 0x43FAC8C))(this);
	}
	template <typename T = Il2CppString*> T GetPlayedTime() {
		return ((T (*)(AdditionInfoView*))(Il2CppBase() + 0x43FB154))(this);
	}
	template <typename T = Il2CppString*> T GetStatusText() {
		return ((T (*)(AdditionInfoView*))(Il2CppBase() + 0x43FB264))(this);
	}
	template <typename T = uintptr_t> static T ShowInfo(Il2CppString* calledFrom) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x43FB3FC))(0, calledFrom);
	}
	template <typename T = uintptr_t> static T HideInfo() {
		return ((T (*)(void *))(Il2CppBase() + 0x43FB4D8))(0);
	}
	template <typename T = void> T InitViewb__15_0() {
		return ((T (*)(AdditionInfoView*))(Il2CppBase() + 0x43FB5B4))(this);
	}
	template <typename T = void> T InitViewb__15_1() {
		return ((T (*)(AdditionInfoView*))(Il2CppBase() + 0x43FB618))(this);
	}
	template <typename T = void> T InitViewb__15_2() {
		return ((T (*)(AdditionInfoView*))(Il2CppBase() + 0x43FB79C))(this);
	}
	template <typename T = void> T InitViewb__15_3() {
		return ((T (*)(AdditionInfoView*))(Il2CppBase() + 0x43FB848))(this);
	}
	template <typename T = void> T InitViewb__15_4(bool _) {
		return ((T (*)(AdditionInfoView*, bool))(Il2CppBase() + 0x43FB910))(this, _);
	}
	template <typename T = void> T InitViewb__15_5() {
		return ((T (*)(AdditionInfoView*))(Il2CppBase() + 0x43FBA60))(this);
	}
	template <typename T = void> T iFixBaseProxy_InitView() {
		return ((T (*)(AdditionInfoView*))(Il2CppBase() + 0x43FBB1C))(this);
	}
	template <typename T = void> T iFixBaseProxy_ShowView(Il2CppArray<uintptr_t>* P0) {
		return ((T (*)(AdditionInfoView*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x43FBB20))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_HideView(Il2CppArray<uintptr_t>* P0) {
		return ((T (*)(AdditionInfoView*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x43FBB24))(this, P0);
	}

};

}
