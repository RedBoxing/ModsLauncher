#pragma once
#include "Il2Cpp/Il2Cpp.h"

class ObjectMuseumGate
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ObjectMuseumGate"));
	}

	template <typename T = Il2CppString*> T& text() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppVector3> T& targetPosition() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& speedRate() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = float> T& labelHeight() {
		return *(T*)((uintptr_t)this + 0x30);
	}

	template <typename T = void> T OnTriggerEnter2D(uintptr_t other) {
		return ((T (*)(ObjectMuseumGate*, uintptr_t))(Il2CppBase() + 0x1DB6474))(this, other);
	}
	template <typename T = void> T OnTriggerExit2D(uintptr_t other) {
		return ((T (*)(ObjectMuseumGate*, uintptr_t))(Il2CppBase() + 0x1DB6644))(this, other);
	}
	template <typename T = void> T ItemTrigger(uintptr_t controller) {
		return ((T (*)(ObjectMuseumGate*, uintptr_t))(Il2CppBase() + 0x1DB67D0))(this, controller);
	}
	template <typename T = int32_t> T GetItemValue() {
		return ((T (*)(ObjectMuseumGate*))(Il2CppBase() + 0x1DB6AB0))(this);
	}
	template <typename T = Il2CppString*> T GetItemName() {
		return ((T (*)(ObjectMuseumGate*))(Il2CppBase() + 0x1DB6B10))(this);
	}
	template <typename T = int32_t> T GetItemLevel() {
		return ((T (*)(ObjectMuseumGate*))(Il2CppBase() + 0x1DB6B9C))(this);
	}
	template <typename T = bool> T CanUse() {
		return ((T (*)(ObjectMuseumGate*))(Il2CppBase() + 0x1DB6BFC))(this);
	}
	template <typename T = void> T SyncItemTrigger(uintptr_t controller, Il2CppString* ext_info) {
		return ((T (*)(ObjectMuseumGate*, uintptr_t, Il2CppString*))(Il2CppBase() + 0x1DB6C5C))(this, controller, ext_info);
	}

};

}
