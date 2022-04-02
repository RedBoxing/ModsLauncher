#pragma once
#include "Il2Cpp/Il2Cpp.h"

class ObjectRoleAdapter
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ObjectRoleAdapter"));
	}

	template <typename T = uintptr_t> T& award_clip() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& state() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = bool> T& multi_game_can_use() {
		return *(T*)((uintptr_t)this + 0x24);
	}

	template <typename T = void> T OnTriggerEnter2D(uintptr_t other) {
		return ((T (*)(ObjectRoleAdapter*, uintptr_t))(Il2CppBase() + 0x1DBD1A8))(this, other);
	}
	template <typename T = void> T OnEnterShow(uintptr_t ctrl) {
		return ((T (*)(ObjectRoleAdapter*, uintptr_t))(Il2CppBase() + 0x1DBD2F0))(this, ctrl);
	}
	template <typename T = void> T OnTriggerExit2D(uintptr_t other) {
		return ((T (*)(ObjectRoleAdapter*, uintptr_t))(Il2CppBase() + 0x1DBD420))(this, other);
	}
	template <typename T = void> T OnExitShow(uintptr_t ctrl) {
		return ((T (*)(ObjectRoleAdapter*, uintptr_t))(Il2CppBase() + 0x1DBD52C))(this, ctrl);
	}
	template <typename T = void> T ItemTrigger(uintptr_t controller) {
		return ((T (*)(ObjectRoleAdapter*, uintptr_t))(Il2CppBase() + 0x1DBD62C))(this, controller);
	}
	template <typename T = void> T OnItemTrigger(uintptr_t controller) {
		return ((T (*)(ObjectRoleAdapter*, uintptr_t))(Il2CppBase() + 0x1DBD714))(this, controller);
	}
	template <typename T = int32_t> T GetItemValue() {
		return ((T (*)(ObjectRoleAdapter*))(Il2CppBase() + 0x1DBD784))(this);
	}
	template <typename T = Il2CppString*> T GetItemName() {
		return ((T (*)(ObjectRoleAdapter*))(Il2CppBase() + 0x1DBD7E4))(this);
	}
	template <typename T = int32_t> T GetItemLevel() {
		return ((T (*)(ObjectRoleAdapter*))(Il2CppBase() + 0x1DBD870))(this);
	}
	template <typename T = bool> T CanUse() {
		return ((T (*)(ObjectRoleAdapter*))(Il2CppBase() + 0x1DBD8D0))(this);
	}
	template <typename T = void> T SyncItemTrigger(uintptr_t controller, Il2CppString* ext_info) {
		return ((T (*)(ObjectRoleAdapter*, uintptr_t, Il2CppString*))(Il2CppBase() + 0x1DBD930))(this, controller, ext_info);
	}

};

}
