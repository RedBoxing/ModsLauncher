#pragma once
#include "Il2Cpp/Il2Cpp.h"

class ItemHireboard
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ItemHireboard"));
	}

	template <typename T = uintptr_t> T& itemGallery() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = Il2CppVector3> T& targetPosition() {
		return *(T*)((uintptr_t)this + 0xA0);
	}

	template <typename T = bool> T get_showable() {
		return ((T (*)(ItemHireboard*))(Il2CppBase() + 0x1DA98D0))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(ItemHireboard*))(Il2CppBase() + 0x1DA9A14))(this);
	}
	template <typename T = void> T OnTriggerEnter2D(uintptr_t other) {
		return ((T (*)(ItemHireboard*, uintptr_t))(Il2CppBase() + 0x1DA9B1C))(this, other);
	}
	template <typename T = void> T OnItemTriggerSuccess(uintptr_t controller) {
		return ((T (*)(ItemHireboard*, uintptr_t))(Il2CppBase() + 0x1DA9DC4))(this, controller);
	}
	template <typename T = Il2CppString*> T GetItemName() {
		return ((T (*)(ItemHireboard*))(Il2CppBase() + 0x1DA9F44))(this);
	}
	template <typename T = void> T iFixBaseProxy_Start() {
		return ((T (*)(ItemHireboard*))(Il2CppBase() + 0x1DAA038))(this);
	}
	template <typename T = void> T iFixBaseProxy_OnTriggerEnter2D(uintptr_t P0) {
		return ((T (*)(ItemHireboard*, uintptr_t))(Il2CppBase() + 0x1DAA040))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_OnItemTriggerSuccess(uintptr_t P0) {
		return ((T (*)(ItemHireboard*, uintptr_t))(Il2CppBase() + 0x1DAA048))(this, P0);
	}
	template <typename T = Il2CppString*> T iFixBaseProxy_GetItemName() {
		return ((T (*)(ItemHireboard*))(Il2CppBase() + 0x1DAA050))(this);
	}

};

}
