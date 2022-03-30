#pragma once
#include "Il2Cpp/Il2Cpp.h"

class BossrushDoorEnter
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BossrushDoorEnter"));
	}

	template <typename T = uintptr_t> T& audio_clip() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> T& can_use() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& normalPortal() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& pureModePortal() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = bool> T& _puremode() {
		return *(T*)((uintptr_t)this + 0x38);
	}

	template <typename T = void> T Start() {
		return ((T (*)(BossrushDoorEnter*))(Il2CppBase() + 0x20A1938))(this);
	}
	template <typename T = void> T OnTriggerEnter2D(uintptr_t other) {
		return ((T (*)(BossrushDoorEnter*, uintptr_t))(Il2CppBase() + 0x20A1C78))(this, other);
	}
	template <typename T = void> T OnTriggerExit2D(uintptr_t other) {
		return ((T (*)(BossrushDoorEnter*, uintptr_t))(Il2CppBase() + 0x20A1E9C))(this, other);
	}
	template <typename T = void> T ItemTrigger(uintptr_t controller) {
		return ((T (*)(BossrushDoorEnter*, uintptr_t))(Il2CppBase() + 0x20A205C))(this, controller);
	}
	template <typename T = void> T EnterMode() {
		return ((T (*)(BossrushDoorEnter*))(Il2CppBase() + 0x20A2274))(this);
	}
	template <typename T = void> T SyncItemTrigger(uintptr_t controller, Il2CppString* ext_info) {
		return ((T (*)(BossrushDoorEnter*, uintptr_t, Il2CppString*))(Il2CppBase() + 0x20A2794))(this, controller, ext_info);
	}
	template <typename T = int32_t> T GetItemValue() {
		return ((T (*)(BossrushDoorEnter*))(Il2CppBase() + 0x20A280C))(this);
	}
	template <typename T = Il2CppString*> T GetItemName() {
		return ((T (*)(BossrushDoorEnter*))(Il2CppBase() + 0x20A286C))(this);
	}
	template <typename T = int32_t> T GetItemLevel() {
		return ((T (*)(BossrushDoorEnter*))(Il2CppBase() + 0x20A28F8))(this);
	}
	template <typename T = bool> T CanUse() {
		return ((T (*)(BossrushDoorEnter*))(Il2CppBase() + 0x20A2958))(this);
	}
	template <typename T = bool> T HasNoWeapon() {
		return ((T (*)(BossrushDoorEnter*))(Il2CppBase() + 0x20A1A34))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(BossrushDoorEnter*))(Il2CppBase() + 0x20A29CC))(this);
	}
	template <typename T = void> T ItemTriggerb__8_0() {
		return ((T (*)(BossrushDoorEnter*))(Il2CppBase() + 0x20A2B24))(this);
	}

};

}
