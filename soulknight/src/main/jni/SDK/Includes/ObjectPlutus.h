#pragma once
#include "Il2Cpp/Il2Cpp.h"

class ObjectPlutus
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ObjectPlutus"));
	}

	template <typename T = uintptr_t> T& window() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T OnTriggerEnter2D(uintptr_t other) {
		return ((T (*)(ObjectPlutus*, uintptr_t))(Il2CppBase() + 0x1DBAC14))(this, other);
	}
	template <typename T = void> T OnTriggerExit2D(uintptr_t other) {
		return ((T (*)(ObjectPlutus*, uintptr_t))(Il2CppBase() + 0x1DBADEC))(this, other);
	}
	template <typename T = void> T ItemTrigger(uintptr_t controller) {
		return ((T (*)(ObjectPlutus*, uintptr_t))(Il2CppBase() + 0x1DBAF78))(this, controller);
	}
	template <typename T = int32_t> T GetItemValue() {
		return ((T (*)(ObjectPlutus*))(Il2CppBase() + 0x1DBB114))(this);
	}
	template <typename T = Il2CppString*> T GetItemName() {
		return ((T (*)(ObjectPlutus*))(Il2CppBase() + 0x1DBB174))(this);
	}
	template <typename T = int32_t> T GetItemLevel() {
		return ((T (*)(ObjectPlutus*))(Il2CppBase() + 0x1DBB200))(this);
	}
	template <typename T = bool> T CanUse() {
		return ((T (*)(ObjectPlutus*))(Il2CppBase() + 0x1DBB260))(this);
	}
	template <typename T = void> T SyncItemTrigger(uintptr_t controller, Il2CppString* ext_info) {
		return ((T (*)(ObjectPlutus*, uintptr_t, Il2CppString*))(Il2CppBase() + 0x1DBB2C0))(this, controller, ext_info);
	}

};

}
