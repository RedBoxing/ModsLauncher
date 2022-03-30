#pragma once
#include "Il2Cpp/Il2Cpp.h"

class ItemRoomSeller
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ItemRoomSeller"));
	}

	template <typename T = uintptr_t> T& audio_clip() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = uintptr_t> T& talk() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = Il2CppVector3> T& originPos() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = bool> T& isReplacing() {
		return *(T*)((uintptr_t)this + 0xD4);
	}
	template <typename T = void*> T& replacingPlace() {
		return *(T*)((uintptr_t)this + 0xD8);
	}

	template <typename T = int32_t> T get_maxRefreshTime() {
		return ((T (*)(ItemRoomSeller*))(Il2CppBase() + 0x1CDC8B8))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(ItemRoomSeller*))(Il2CppBase() + 0x1CDC970))(this);
	}
	template <typename T = void> T OnItemTriggerState(uintptr_t controller, int32_t state) {
		return ((T (*)(ItemRoomSeller*, uintptr_t, int32_t))(Il2CppBase() + 0x1CDCB38))(this, controller, state);
	}
	template <typename T = bool> T Triggerable(uintptr_t controller) {
		return ((T (*)(ItemRoomSeller*, uintptr_t))(Il2CppBase() + 0x1CDCCA0))(this, controller);
	}
	template <typename T = void> T OnItemTriggerSuccess(uintptr_t controller) {
		return ((T (*)(ItemRoomSeller*, uintptr_t))(Il2CppBase() + 0x1CDCD14))(this, controller);
	}
	template <typename T = void> T OnItemTriggerFail(uintptr_t controller) {
		return ((T (*)(ItemRoomSeller*, uintptr_t))(Il2CppBase() + 0x1CDCDF4))(this, controller);
	}
	template <typename T = int32_t> T GetItemValue() {
		return ((T (*)(ItemRoomSeller*))(Il2CppBase() + 0x1CDCEA4))(this);
	}
	template <typename T = void> T ChangeCommodity(uintptr_t sellPlace) {
		return ((T (*)(ItemRoomSeller*, uintptr_t))(Il2CppBase() + 0x1CDCF68))(this, sellPlace);
	}
	template <typename T = void> T CheckReplace() {
		return ((T (*)(ItemRoomSeller*))(Il2CppBase() + 0x1CDD080))(this);
	}
	template <typename T = void> T DoChangeCommodity(uintptr_t sellPlace) {
		return ((T (*)(ItemRoomSeller*, uintptr_t))(Il2CppBase() + 0x1CDD24C))(this, sellPlace);
	}
	template <typename T = void> T BackToOriginPos() {
		return ((T (*)(ItemRoomSeller*))(Il2CppBase() + 0x1CDD59C))(this);
	}
	template <typename T = void> T BackToOriginPosb__16_0() {
		return ((T (*)(ItemRoomSeller*))(Il2CppBase() + 0x1CDD80C))(this);
	}
	template <typename T = void> T iFixBaseProxy_OnItemTriggerState(uintptr_t P0, int32_t P1) {
		return ((T (*)(ItemRoomSeller*, uintptr_t, int32_t))(Il2CppBase() + 0x1CDD814))(this, P0, P1);
	}
	template <typename T = bool> T iFixBaseProxy_Triggerable(uintptr_t P0) {
		return ((T (*)(ItemRoomSeller*, uintptr_t))(Il2CppBase() + 0x1CDD81C))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_OnItemTriggerSuccess(uintptr_t P0) {
		return ((T (*)(ItemRoomSeller*, uintptr_t))(Il2CppBase() + 0x1CDD824))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_OnItemTriggerFail(uintptr_t P0) {
		return ((T (*)(ItemRoomSeller*, uintptr_t))(Il2CppBase() + 0x1CDD82C))(this, P0);
	}
	template <typename T = int32_t> T iFixBaseProxy_GetItemValue() {
		return ((T (*)(ItemRoomSeller*))(Il2CppBase() + 0x1CDD834))(this);
	}

};

}
