#pragma once
#include "Il2Cpp/Il2Cpp.h"

class SequenceTalkTrigger
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SequenceTalkTrigger"));
	}

	template <typename T = Il2CppString*> T& npc_name() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& height() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& talk_list() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& cur_talk_idx() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& onShowTalk() {
		return *(T*)((uintptr_t)this + 0x38);
	}

	template <typename T = void> T OnTriggerEnter2D(uintptr_t other) {
		return ((T (*)(SequenceTalkTrigger*, uintptr_t))(Il2CppBase() + 0x18225D4))(this, other);
	}
	template <typename T = void> T OnTriggerExit2D(uintptr_t other) {
		return ((T (*)(SequenceTalkTrigger*, uintptr_t))(Il2CppBase() + 0x18227DC))(this, other);
	}
	template <typename T = void> T ItemTrigger(uintptr_t controller) {
		return ((T (*)(SequenceTalkTrigger*, uintptr_t))(Il2CppBase() + 0x182299C))(this, controller);
	}
	template <typename T = void> T ShowNexTalk() {
		return ((T (*)(SequenceTalkTrigger*))(Il2CppBase() + 0x1822B54))(this);
	}
	template <typename T = int32_t> T GetItemValue() {
		return ((T (*)(SequenceTalkTrigger*))(Il2CppBase() + 0x1822D10))(this);
	}
	template <typename T = Il2CppString*> T GetItemName() {
		return ((T (*)(SequenceTalkTrigger*))(Il2CppBase() + 0x1822D70))(this);
	}
	template <typename T = int32_t> T GetItemLevel() {
		return ((T (*)(SequenceTalkTrigger*))(Il2CppBase() + 0x1822DFC))(this);
	}
	template <typename T = bool> T CanUse() {
		return ((T (*)(SequenceTalkTrigger*))(Il2CppBase() + 0x1822E5C))(this);
	}
	template <typename T = void> T SyncItemTrigger(uintptr_t controller, Il2CppString* ext_info) {
		return ((T (*)(SequenceTalkTrigger*, uintptr_t, Il2CppString*))(Il2CppBase() + 0x1822EBC))(this, controller, ext_info);
	}

};

}
