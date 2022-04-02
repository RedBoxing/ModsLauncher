#pragma once
#include "Il2Cpp/Il2Cpp.h"

class ObjectPassHistory
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ObjectPassHistory"));
	}

	template <typename T = int32_t> T& pass_history_idx() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> T& the_name() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = bool> T& has_pass_history() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = void> T Start() {
		return ((T (*)(ObjectPassHistory*))(Il2CppBase() + 0x1DB8E84))(this);
	}
	template <typename T = void> T OnTriggerEnter2D(uintptr_t other) {
		return ((T (*)(ObjectPassHistory*, uintptr_t))(Il2CppBase() + 0x1DB8FA0))(this, other);
	}
	template <typename T = void> T OnTriggerExit2D(uintptr_t other) {
		return ((T (*)(ObjectPassHistory*, uintptr_t))(Il2CppBase() + 0x1DB9160))(this, other);
	}
	template <typename T = int32_t> T GetItemValue() {
		return ((T (*)(ObjectPassHistory*))(Il2CppBase() + 0x1DB92EC))(this);
	}
	template <typename T = Il2CppString*> T GetItemName() {
		return ((T (*)(ObjectPassHistory*))(Il2CppBase() + 0x1DB934C))(this);
	}
	template <typename T = int32_t> T GetItemLevel() {
		return ((T (*)(ObjectPassHistory*))(Il2CppBase() + 0x1DB93D8))(this);
	}
	template <typename T = bool> T CanUse() {
		return ((T (*)(ObjectPassHistory*))(Il2CppBase() + 0x1DB9438))(this);
	}
	template <typename T = void> T SyncItemTrigger(uintptr_t controller, Il2CppString* ext_info) {
		return ((T (*)(ObjectPassHistory*, uintptr_t, Il2CppString*))(Il2CppBase() + 0x1DB9498))(this, controller, ext_info);
	}
	template <typename T = void> T ItemTrigger(uintptr_t controller) {
		return ((T (*)(ObjectPassHistory*, uintptr_t))(Il2CppBase() + 0x1DB9510))(this, controller);
	}

};

}
