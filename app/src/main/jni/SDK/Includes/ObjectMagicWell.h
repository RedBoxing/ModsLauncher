#pragma once
#include "Il2Cpp/Il2Cpp.h"

class ObjectMagicWell
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ObjectMagicWell"));
	}

	template <typename T = uintptr_t> T& wellAudio() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = int32_t> T& frogManProbability() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> T& frogManPrefab() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& waterClip() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = bool> T& used() {
		return *(T*)((uintptr_t)this + 0xB8);
	}

	template <typename T = void> T Start() {
		return ((T (*)(ObjectMagicWell*))(Il2CppBase() + 0x1DB3D98))(this);
	}
	template <typename T = bool> T Triggerable(uintptr_t controller) {
		return ((T (*)(ObjectMagicWell*, uintptr_t))(Il2CppBase() + 0x1DB3DFC))(this, controller);
	}
	template <typename T = void> T OnItemTriggerSuccess(uintptr_t controller) {
		return ((T (*)(ObjectMagicWell*, uintptr_t))(Il2CppBase() + 0x1DB3E94))(this, controller);
	}
	template <typename T = void> T CreateMercenary(uintptr_t prefab, uintptr_t master) {
		return ((T (*)(ObjectMagicWell*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1DB422C))(this, prefab, master);
	}
	template <typename T = void> T OnItemTriggerFail(uintptr_t controller) {
		return ((T (*)(ObjectMagicWell*, uintptr_t))(Il2CppBase() + 0x1DB4678))(this, controller);
	}
	template <typename T = void> T AddBuff(uintptr_t controller) {
		return ((T (*)(ObjectMagicWell*, uintptr_t))(Il2CppBase() + 0x1DB4140))(this, controller);
	}
	template <typename T = void> T iFixBaseProxy_Start() {
		return ((T (*)(ObjectMagicWell*))(Il2CppBase() + 0x1DB48AC))(this);
	}
	template <typename T = bool> T iFixBaseProxy_Triggerable(uintptr_t P0) {
		return ((T (*)(ObjectMagicWell*, uintptr_t))(Il2CppBase() + 0x1DB48B4))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_OnItemTriggerSuccess(uintptr_t P0) {
		return ((T (*)(ObjectMagicWell*, uintptr_t))(Il2CppBase() + 0x1DB48BC))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_OnItemTriggerFail(uintptr_t P0) {
		return ((T (*)(ObjectMagicWell*, uintptr_t))(Il2CppBase() + 0x1DB48C4))(this, P0);
	}

};

}
