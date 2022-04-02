#pragma once
#include "Il2Cpp/Il2Cpp.h"

class NpcExhibition
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "NpcExhibition"));
	}

	template <typename T = uintptr_t> T& npcInfo() {
		return *(T*)((uintptr_t)this + 0x98);
	}

	template <typename T = void> T ChangeIcon(bool isLarge) {
		return ((T (*)(NpcExhibition*, bool))(Il2CppBase() + 0x452A9A8))(this, isLarge);
	}
	template <typename T = void> T Start() {
		return ((T (*)(NpcExhibition*))(Il2CppBase() + 0x452ADE0))(this);
	}
	template <typename T = void> T OnTriggerEnter2D(uintptr_t other) {
		return ((T (*)(NpcExhibition*, uintptr_t))(Il2CppBase() + 0x452B018))(this, other);
	}
	template <typename T = void> T OnItemTriggerSuccess(uintptr_t controller) {
		return ((T (*)(NpcExhibition*, uintptr_t))(Il2CppBase() + 0x452B250))(this, controller);
	}
	template <typename T = Il2CppString*> T GetItemName() {
		return ((T (*)(NpcExhibition*))(Il2CppBase() + 0x452B3C4))(this);
	}
	template <typename T = int32_t> T GetItemLevel() {
		return ((T (*)(NpcExhibition*))(Il2CppBase() + 0x452B480))(this);
	}
	template <typename T = bool> T ShowInfo() {
		return ((T (*)(NpcExhibition*))(Il2CppBase() + 0x452AF34))(this);
	}
	template <typename T = void> T SetNpcInfo(uintptr_t info, bool isLarge) {
		return ((T (*)(NpcExhibition*, uintptr_t, bool))(Il2CppBase() + 0x452B504))(this, info, isLarge);
	}
	template <typename T = void> T iFixBaseProxy_Start() {
		return ((T (*)(NpcExhibition*))(Il2CppBase() + 0x452B5F0))(this);
	}
	template <typename T = void> T iFixBaseProxy_OnTriggerEnter2D(uintptr_t P0) {
		return ((T (*)(NpcExhibition*, uintptr_t))(Il2CppBase() + 0x452B5F8))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_OnItemTriggerSuccess(uintptr_t P0) {
		return ((T (*)(NpcExhibition*, uintptr_t))(Il2CppBase() + 0x452B600))(this, P0);
	}
	template <typename T = Il2CppString*> T iFixBaseProxy_GetItemName() {
		return ((T (*)(NpcExhibition*))(Il2CppBase() + 0x452B608))(this);
	}
	template <typename T = int32_t> T iFixBaseProxy_GetItemLevel() {
		return ((T (*)(NpcExhibition*))(Il2CppBase() + 0x452B610))(this);
	}

};

}
