#pragma once
#include "Il2Cpp/Il2Cpp.h"

class ObjectMysteriouStatue
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ObjectMysteriouStatue"));
	}

	template <typename T = uintptr_t> T& statue_audio() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& statues() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = int32_t> T& totalWeight() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = bool> T& canUse() {
		return *(T*)((uintptr_t)this + 0xAC);
	}

	template <typename T = void> T Start() {
		return ((T (*)(ObjectMysteriouStatue*))(Il2CppBase() + 0x1DB6D74))(this);
	}
	template <typename T = bool> T Triggerable(uintptr_t controller) {
		return ((T (*)(ObjectMysteriouStatue*, uintptr_t))(Il2CppBase() + 0x1DB6EE0))(this, controller);
	}
	template <typename T = void> T OnItemTriggerSuccess(uintptr_t controller) {
		return ((T (*)(ObjectMysteriouStatue*, uintptr_t))(Il2CppBase() + 0x1DB700C))(this, controller);
	}
	template <typename T = bool> T CanHasKnightStatue(int32_t statueIdx) {
		return ((T (*)(ObjectMysteriouStatue*, int32_t))(Il2CppBase() + 0x1DB787C))(this, statueIdx);
	}
	template <typename T = int32_t> T GetItemValue() {
		return ((T (*)(ObjectMysteriouStatue*))(Il2CppBase() + 0x1DB7920))(this);
	}
	template <typename T = void> T ItemTrigger(uintptr_t controller) {
		return ((T (*)(ObjectMysteriouStatue*, uintptr_t))(Il2CppBase() + 0x1DB7A10))(this, controller);
	}
	template <typename T = void> T OnItemTriggerFail(uintptr_t controller) {
		return ((T (*)(ObjectMysteriouStatue*, uintptr_t))(Il2CppBase() + 0x1DB7AA0))(this, controller);
	}
	template <typename T = void> T AddStatue(uintptr_t controller, int32_t needGem) {
		return ((T (*)(ObjectMysteriouStatue*, uintptr_t, int32_t))(Il2CppBase() + 0x1DB71D0))(this, controller, needGem);
	}
	template <typename T = int32_t> T GetRandomStatue() {
		return ((T (*)(ObjectMysteriouStatue*))(Il2CppBase() + 0x1DB7E3C))(this);
	}
	template <typename T = void> T iFixBaseProxy_Start() {
		return ((T (*)(ObjectMysteriouStatue*))(Il2CppBase() + 0x1DB8018))(this);
	}
	template <typename T = bool> T iFixBaseProxy_Triggerable(uintptr_t P0) {
		return ((T (*)(ObjectMysteriouStatue*, uintptr_t))(Il2CppBase() + 0x1DB8020))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_OnItemTriggerSuccess(uintptr_t P0) {
		return ((T (*)(ObjectMysteriouStatue*, uintptr_t))(Il2CppBase() + 0x1DB8028))(this, P0);
	}
	template <typename T = int32_t> T iFixBaseProxy_GetItemValue() {
		return ((T (*)(ObjectMysteriouStatue*))(Il2CppBase() + 0x1DB8030))(this);
	}
	template <typename T = void> T iFixBaseProxy_ItemTrigger(uintptr_t P0) {
		return ((T (*)(ObjectMysteriouStatue*, uintptr_t))(Il2CppBase() + 0x1DB8038))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_OnItemTriggerFail(uintptr_t P0) {
		return ((T (*)(ObjectMysteriouStatue*, uintptr_t))(Il2CppBase() + 0x1DB8040))(this, P0);
	}

};

}
