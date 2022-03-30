#pragma once
#include "Il2Cpp/Il2Cpp.h"

class NpcTimer
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "NpcTimer"));
	}

	template <typename T = uintptr_t> T& audio_clip() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& flash_clip() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = bool> T& can_use() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& time_text() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& time_text2() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& mesh_renderer() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& mesh_renderer2() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = float> T& start_time() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = float> T& tmp_last_time() {
		return *(T*)((uintptr_t)this + 0x54);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(NpcTimer*))(Il2CppBase() + 0x4537A44))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(NpcTimer*))(Il2CppBase() + 0x4537C90))(this);
	}
	template <typename T = void> T OnTriggerEnter2D(uintptr_t other) {
		return ((T (*)(NpcTimer*, uintptr_t))(Il2CppBase() + 0x4537F08))(this, other);
	}
	template <typename T = void> T OnTriggerExit2D(uintptr_t other) {
		return ((T (*)(NpcTimer*, uintptr_t))(Il2CppBase() + 0x4538138))(this, other);
	}
	template <typename T = void> T SyncItemTrigger(uintptr_t controller, Il2CppString* ext_info) {
		return ((T (*)(NpcTimer*, uintptr_t, Il2CppString*))(Il2CppBase() + 0x45382F8))(this, controller, ext_info);
	}
	template <typename T = void> T Update() {
		return ((T (*)(NpcTimer*))(Il2CppBase() + 0x4538440))(this);
	}
	template <typename T = void> T UpdateTime(float game_time) {
		return ((T (*)(NpcTimer*, float))(Il2CppBase() + 0x4537D24))(this, game_time);
	}
	template <typename T = void> T ItemTrigger(uintptr_t controller) {
		return ((T (*)(NpcTimer*, uintptr_t))(Il2CppBase() + 0x45384F4))(this, controller);
	}
	template <typename T = void> T PlayFlash() {
		return ((T (*)(NpcTimer*))(Il2CppBase() + 0x45387B4))(this);
	}
	template <typename T = void> T StateMents() {
		return ((T (*)(NpcTimer*))(Il2CppBase() + 0x45388D4))(this);
	}
	template <typename T = int32_t> T GetItemValue() {
		return ((T (*)(NpcTimer*))(Il2CppBase() + 0x45389E0))(this);
	}
	template <typename T = Il2CppString*> T GetItemName() {
		return ((T (*)(NpcTimer*))(Il2CppBase() + 0x4538A40))(this);
	}
	template <typename T = int32_t> T GetItemLevel() {
		return ((T (*)(NpcTimer*))(Il2CppBase() + 0x4538ACC))(this);
	}
	template <typename T = bool> T CanUse() {
		return ((T (*)(NpcTimer*))(Il2CppBase() + 0x4538B2C))(this);
	}

};

}
