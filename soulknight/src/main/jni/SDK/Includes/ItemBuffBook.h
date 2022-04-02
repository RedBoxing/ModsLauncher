#pragma once
#include "Il2Cpp/Il2Cpp.h"

class ItemBuffBook
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ItemBuffBook"));
	}

	template <typename T = uintptr_t> T& buff() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = bool> T& setupOnStart() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = bool> T& use_target_buff() {
		return *(T*)((uintptr_t)this + 0x99);
	}

	template <typename T = void> T OnSetRGRandomSeed(int32_t seed) {
		return ((T (*)(ItemBuffBook*, int32_t))(Il2CppBase() + 0x1A54B94))(this, seed);
	}
	template <typename T = void> T ResetBuffType() {
		return ((T (*)(ItemBuffBook*))(Il2CppBase() + 0x1A54C30))(this);
	}
	template <typename T = void> T ResetBuffType_1(Il2CppList<Il2CppString*>* invalidBuffs, uintptr_t ran) {
		return ((T (*)(ItemBuffBook*, Il2CppList<Il2CppString*>*, uintptr_t))(Il2CppBase() + 0x1A55030))(this, invalidBuffs, ran);
	}
	template <typename T = uintptr_t> T GetValidBuffIndex(Il2CppList<Il2CppString*>* invalidBuffs, uintptr_t ran) {
		return ((T (*)(ItemBuffBook*, Il2CppList<Il2CppString*>*, uintptr_t))(Il2CppBase() + 0x1A54CAC))(this, invalidBuffs, ran);
	}
	template <typename T = void> T RefreshBuffIcon() {
		return ((T (*)(ItemBuffBook*))(Il2CppBase() + 0x1A54F10))(this);
	}
	template <typename T = void> T OnTriggerEnter2D(uintptr_t other) {
		return ((T (*)(ItemBuffBook*, uintptr_t))(Il2CppBase() + 0x1A550C0))(this, other);
	}
	template <typename T = void> T ShowBuffInfo() {
		return ((T (*)(ItemBuffBook*))(Il2CppBase() + 0x1A551F4))(this);
	}
	template <typename T = void> T OnTriggerExit2D(uintptr_t other) {
		return ((T (*)(ItemBuffBook*, uintptr_t))(Il2CppBase() + 0x1A55310))(this, other);
	}
	template <typename T = void> T OnItemTriggerSuccess(uintptr_t controller) {
		return ((T (*)(ItemBuffBook*, uintptr_t))(Il2CppBase() + 0x1A5545C))(this, controller);
	}
	template <typename T = void> T OnItemTriggerFail(uintptr_t controller) {
		return ((T (*)(ItemBuffBook*, uintptr_t))(Il2CppBase() + 0x1A55680))(this, controller);
	}
	template <typename T = bool> T Triggerable(uintptr_t controller) {
		return ((T (*)(ItemBuffBook*, uintptr_t))(Il2CppBase() + 0x1A55808))(this, controller);
	}
	template <typename T = void> T iFixBaseProxy_OnSetRGRandomSeed(int32_t P0) {
		return ((T (*)(ItemBuffBook*, int32_t))(Il2CppBase() + 0x1A55978))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_OnTriggerEnter2D(uintptr_t P0) {
		return ((T (*)(ItemBuffBook*, uintptr_t))(Il2CppBase() + 0x1A55980))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_OnTriggerExit2D(uintptr_t P0) {
		return ((T (*)(ItemBuffBook*, uintptr_t))(Il2CppBase() + 0x1A55988))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_OnItemTriggerSuccess(uintptr_t P0) {
		return ((T (*)(ItemBuffBook*, uintptr_t))(Il2CppBase() + 0x1A55990))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_OnItemTriggerFail(uintptr_t P0) {
		return ((T (*)(ItemBuffBook*, uintptr_t))(Il2CppBase() + 0x1A55998))(this, P0);
	}
	template <typename T = bool> T iFixBaseProxy_Triggerable(uintptr_t P0) {
		return ((T (*)(ItemBuffBook*, uintptr_t))(Il2CppBase() + 0x1A559A0))(this, P0);
	}

};

}
