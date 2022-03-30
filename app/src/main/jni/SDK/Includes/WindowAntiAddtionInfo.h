#pragma once
#include "Il2Cpp/Il2Cpp.h"

class WindowAntiAddtionInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "WindowAntiAddtionInfo"));
	}

	template <typename T = uintptr_t> T& txRealName() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uintptr_t> T& txPlayedTime() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = uintptr_t> T& imRealNameIcon() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = uintptr_t> T& txIncomeFactor() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = uintptr_t> T& txStatus() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = float> T& deltaTime() {
		return *(T*)((uintptr_t)this + 0x88);
	}

	template <typename T = void> static T ShowWindow(uintptr_t parent) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4601988))(0, parent);
	}
	template <typename T = void> T InitView() {
		return ((T (*)(WindowAntiAddtionInfo*))(Il2CppBase() + 0x4601AC0))(this);
	}
	template <typename T = void> T ShowView(Il2CppArray<uintptr_t>* objects) {
		return ((T (*)(WindowAntiAddtionInfo*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4601CEC))(this, objects);
	}
	template <typename T = void> T HideView(Il2CppArray<uintptr_t>* objects) {
		return ((T (*)(WindowAntiAddtionInfo*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4602324))(this, objects);
	}
	template <typename T = void> T Refresh() {
		return ((T (*)(WindowAntiAddtionInfo*))(Il2CppBase() + 0x4601E08))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(WindowAntiAddtionInfo*))(Il2CppBase() + 0x4602B98))(this);
	}
	template <typename T = void> T OnClick_RealNameChange() {
		return ((T (*)(WindowAntiAddtionInfo*))(Il2CppBase() + 0x4602C48))(this);
	}
	template <typename T = void> T OnClick_Close() {
		return ((T (*)(WindowAntiAddtionInfo*))(Il2CppBase() + 0x4602D6C))(this);
	}
	template <typename T = Il2CppString*> T GetRealNameText() {
		return ((T (*)(WindowAntiAddtionInfo*))(Il2CppBase() + 0x4602478))(this);
	}
	template <typename T = Il2CppString*> T GetPlayedTime() {
		return ((T (*)(WindowAntiAddtionInfo*))(Il2CppBase() + 0x46028FC))(this);
	}
	template <typename T = Il2CppString*> T GetStatusText() {
		return ((T (*)(WindowAntiAddtionInfo*))(Il2CppBase() + 0x4602A6C))(this);
	}
	template <typename T = uintptr_t> T GetColor() {
		return ((T (*)(WindowAntiAddtionInfo*))(Il2CppBase() + 0x4602A0C))(this);
	}
	template <typename T = void> T iFixBaseProxy_InitView() {
		return ((T (*)(WindowAntiAddtionInfo*))(Il2CppBase() + 0x4602E18))(this);
	}
	template <typename T = void> T iFixBaseProxy_ShowView(Il2CppArray<uintptr_t>* P0) {
		return ((T (*)(WindowAntiAddtionInfo*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4602E20))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_HideView(Il2CppArray<uintptr_t>* P0) {
		return ((T (*)(WindowAntiAddtionInfo*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4602E28))(this, P0);
	}

};

}
