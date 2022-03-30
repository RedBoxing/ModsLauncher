#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace UnityCommon.UI {

class UITempMsg
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "UnityCommon.UI", "UITempMsg"));
	}

	template <typename T = uintptr_t> T& text() {
		return *(T*)((uintptr_t)this + 0x60);
	}

	template <typename T = void> T InitView() {
		return ((T (*)(UITempMsg*))(Il2CppBase() + 0x43EB57C))(this);
	}
	template <typename T = void> T ShowView(Il2CppArray<uintptr_t>* objects) {
		return ((T (*)(UITempMsg*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x43EB654))(this, objects);
	}
	template <typename T = void> T HideView(Il2CppArray<uintptr_t>* objects) {
		return ((T (*)(UITempMsg*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x43EB9AC))(this, objects);
	}
	template <typename T = void> static T ShowTmpMsg(uintptr_t canvas, Il2CppString* msg, float seconds) {
		return ((T (*)(void *, uintptr_t, Il2CppString*, float))(Il2CppBase() + 0x43EBA88))(0, canvas, msg, seconds);
	}
	template <typename T = uintptr_t> T ShowUI(float seconds) {
		return ((T (*)(UITempMsg*, float))(Il2CppBase() + 0x43EBC6C))(this, seconds);
	}
	template <typename T = void> T ShowViewb__2_0() {
		return ((T (*)(UITempMsg*))(Il2CppBase() + 0x43EBD80))(this);
	}
	template <typename T = void> T iFixBaseProxy_InitView() {
		return ((T (*)(UITempMsg*))(Il2CppBase() + 0x43EBDE4))(this);
	}
	template <typename T = void> T iFixBaseProxy_ShowView(Il2CppArray<uintptr_t>* P0) {
		return ((T (*)(UITempMsg*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x43EBDE8))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_HideView(Il2CppArray<uintptr_t>* P0) {
		return ((T (*)(UITempMsg*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x43EBDEC))(this, P0);
	}

};

}
