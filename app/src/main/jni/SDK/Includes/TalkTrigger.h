#pragma once
#include "Il2Cpp/Il2Cpp.h"

class TalkTrigger
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TalkTrigger"));
	}

	template <typename T = Il2CppString*> T& npc_name() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& talk_list() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& talk_time() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = float> T& height() {
		return *(T*)((uintptr_t)this + 0x30);
	}

	template <typename T = void> T OnTriggerEnter2D(uintptr_t other) {
		return ((T (*)(TalkTrigger*, uintptr_t))(Il2CppBase() + 0x43B1144))(this, other);
	}
	template <typename T = void> T OnTriggerExit2D(uintptr_t other) {
		return ((T (*)(TalkTrigger*, uintptr_t))(Il2CppBase() + 0x43B134C))(this, other);
	}
	template <typename T = void> T ItemTrigger(uintptr_t controller) {
		return ((T (*)(TalkTrigger*, uintptr_t))(Il2CppBase() + 0x43B150C))(this, controller);
	}
	template <typename T = int32_t> T GetItemValue() {
		return ((T (*)(TalkTrigger*))(Il2CppBase() + 0x43B17C8))(this);
	}
	template <typename T = Il2CppString*> T GetItemName() {
		return ((T (*)(TalkTrigger*))(Il2CppBase() + 0x43B1828))(this);
	}
	template <typename T = int32_t> T GetItemLevel() {
		return ((T (*)(TalkTrigger*))(Il2CppBase() + 0x43B18B4))(this);
	}
	template <typename T = bool> T CanUse() {
		return ((T (*)(TalkTrigger*))(Il2CppBase() + 0x43B1914))(this);
	}
	template <typename T = void> T SyncItemTrigger(uintptr_t controller, Il2CppString* ext_info) {
		return ((T (*)(TalkTrigger*, uintptr_t, Il2CppString*))(Il2CppBase() + 0x43B1974))(this, controller, ext_info);
	}

};

}
