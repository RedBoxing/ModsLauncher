#pragma once
#include "Il2Cpp/Il2Cpp.h"

class ObjectDinner
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ObjectDinner"));
	}

	template <typename T = uintptr_t> T& audio_clip() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& mercenarySkins() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& state() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = bool> T& can_use() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& table() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& charactors() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& col() {
		return *(T*)((uintptr_t)this + 0x48);
	}

	template <typename T = void> T Start() {
		return ((T (*)(ObjectDinner*))(Il2CppBase() + 0x1D530DC))(this);
	}
	template <typename T = void> T OnReady() {
		return ((T (*)(ObjectDinner*))(Il2CppBase() + 0x1D532E0))(this);
	}
	template <typename T = void> T OnSetRGRandomSeed(int32_t seed) {
		return ((T (*)(ObjectDinner*, int32_t))(Il2CppBase() + 0x1D5333C))(this, seed);
	}
	template <typename T = void> T Restore(uintptr_t controller) {
		return ((T (*)(ObjectDinner*, uintptr_t))(Il2CppBase() + 0x1D53BA8))(this, controller);
	}
	template <typename T = void> T ChangeSkin() {
		return ((T (*)(ObjectDinner*))(Il2CppBase() + 0x1D533B0))(this);
	}
	template <typename T = void> T OnTriggerEnter2D(uintptr_t other) {
		return ((T (*)(ObjectDinner*, uintptr_t))(Il2CppBase() + 0x1D53D48))(this, other);
	}
	template <typename T = void> T OnTriggerExit2D(uintptr_t other) {
		return ((T (*)(ObjectDinner*, uintptr_t))(Il2CppBase() + 0x1D53F4C))(this, other);
	}
	template <typename T = void> T ItemTrigger(uintptr_t controller) {
		return ((T (*)(ObjectDinner*, uintptr_t))(Il2CppBase() + 0x1D5410C))(this, controller);
	}
	template <typename T = void> T SyncItemTrigger(uintptr_t controller, Il2CppString* ext_info) {
		return ((T (*)(ObjectDinner*, uintptr_t, Il2CppString*))(Il2CppBase() + 0x1D54544))(this, controller, ext_info);
	}
	template <typename T = int32_t> T GetItemValue() {
		return ((T (*)(ObjectDinner*))(Il2CppBase() + 0x1D54620))(this);
	}
	template <typename T = Il2CppString*> T GetItemName() {
		return ((T (*)(ObjectDinner*))(Il2CppBase() + 0x1D54680))(this);
	}
	template <typename T = int32_t> T GetItemLevel() {
		return ((T (*)(ObjectDinner*))(Il2CppBase() + 0x1D5470C))(this);
	}
	template <typename T = bool> T CanUse() {
		return ((T (*)(ObjectDinner*))(Il2CppBase() + 0x1D5476C))(this);
	}
	template <typename T = void> T iFixBaseProxy_OnSetRGRandomSeed(int32_t P0) {
		return ((T (*)(ObjectDinner*, int32_t))(Il2CppBase() + 0x1D547DC))(this, P0);
	}

};

}
