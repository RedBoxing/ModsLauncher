#pragma once
#include "Il2Cpp/Il2Cpp.h"

class ObjectGiveItem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ObjectGiveItem"));
	}

	template <typename T = uintptr_t> T& special_item() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = Il2CppString*> T& give_talk() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> T& given_clip() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = bool> T& given() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = uintptr_t> T& collider() {
		return *(T*)((uintptr_t)this + 0xB8);
	}

	template <typename T = void> T Start() {
		return ((T (*)(ObjectGiveItem*))(Il2CppBase() + 0x1D5F648))(this);
	}
	template <typename T = void> T OnTriggerExit2D(uintptr_t other) {
		return ((T (*)(ObjectGiveItem*, uintptr_t))(Il2CppBase() + 0x1D5F6E8))(this, other);
	}
	template <typename T = void> T OnItemTriggerSuccess(uintptr_t controller) {
		return ((T (*)(ObjectGiveItem*, uintptr_t))(Il2CppBase() + 0x1D5F784))(this, controller);
	}
	template <typename T = bool> T Triggerable(uintptr_t controller) {
		return ((T (*)(ObjectGiveItem*, uintptr_t))(Il2CppBase() + 0x1D5FD24))(this, controller);
	}
	template <typename T = void> T iFixBaseProxy_Start() {
		return ((T (*)(ObjectGiveItem*))(Il2CppBase() + 0x1D5FE08))(this);
	}
	template <typename T = void> T iFixBaseProxy_OnTriggerExit2D(uintptr_t P0) {
		return ((T (*)(ObjectGiveItem*, uintptr_t))(Il2CppBase() + 0x1D5FE10))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_OnItemTriggerSuccess(uintptr_t P0) {
		return ((T (*)(ObjectGiveItem*, uintptr_t))(Il2CppBase() + 0x1D5FE18))(this, P0);
	}
	template <typename T = bool> T iFixBaseProxy_Triggerable(uintptr_t P0) {
		return ((T (*)(ObjectGiveItem*, uintptr_t))(Il2CppBase() + 0x1D5FE20))(this, P0);
	}

};

}
