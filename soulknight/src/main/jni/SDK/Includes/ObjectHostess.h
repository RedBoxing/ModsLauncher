#pragma once
#include "Il2Cpp/Il2Cpp.h"

class ObjectHostess
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ObjectHostess"));
	}

	template <typename T = uintptr_t> T& type() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = uintptr_t> T& award_clip() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = Il2CppString*> T& travalDialog() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = Il2CppString*> T& travalDialogSuccess() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = Il2CppString*> T& travalDialogDefault() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = Il2CppString*> T& travalDialogSuccessDefault() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = Il2CppString*> T& normalTravelDialog() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = Il2CppString*> T& normalTravelDialogSuccess() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = uintptr_t> T& tabTransform() {
		return *(T*)((uintptr_t)this + 0xD0);
	}

	template <typename T = void> T OnEnable() {
		return ((T (*)(ObjectHostess*))(Il2CppBase() + 0x1D624D4))(this);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(ObjectHostess*))(Il2CppBase() + 0x1D62588))(this);
	}
	template <typename T = void> T EventReadGuideView() {
		return ((T (*)(ObjectHostess*))(Il2CppBase() + 0x1D6263C))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(ObjectHostess*))(Il2CppBase() + 0x1D62734))(this);
	}
	template <typename T = void> T ItemTrigger(uintptr_t controller) {
		return ((T (*)(ObjectHostess*, uintptr_t))(Il2CppBase() + 0x1D628C4))(this, controller);
	}
	template <typename T = void> T OnItemTriggerSuccess(uintptr_t controller) {
		return ((T (*)(ObjectHostess*, uintptr_t))(Il2CppBase() + 0x1D62C64))(this, controller);
	}
	template <typename T = void> T CheckTeach() {
		return ((T (*)(ObjectHostess*))(Il2CppBase() + 0x1D62FE8))(this);
	}
	template <typename T = void> T OnItemTriggerFail(uintptr_t controller) {
		return ((T (*)(ObjectHostess*, uintptr_t))(Il2CppBase() + 0x1D6342C))(this, controller);
	}
	template <typename T = bool> T HasReadSpecialFactorGuide() {
		return ((T (*)(ObjectHostess*))(Il2CppBase() + 0x1D637B4))(this);
	}
	template <typename T = bool> T Triggerable(uintptr_t controller) {
		return ((T (*)(ObjectHostess*, uintptr_t))(Il2CppBase() + 0x1D6383C))(this, controller);
	}
	template <typename T = bool> T CanTalk() {
		return ((T (*)(ObjectHostess*))(Il2CppBase() + 0x1D63754))(this);
	}
	template <typename T = bool> T get_inMultiHeroRoom() {
		return ((T (*)(ObjectHostess*))(Il2CppBase() + 0x1D636D8))(this);
	}
	template <typename T = bool> T get_inTravel() {
		return ((T (*)(ObjectHostess*))(Il2CppBase() + 0x1D62E44))(this);
	}
	template <typename T = void> T ChangeTravel() {
		return ((T (*)(ObjectHostess*))(Il2CppBase() + 0x1D62F78))(this);
	}
	template <typename T = void> T SetTravel(bool isSet) {
		return ((T (*)(ObjectHostess*, bool))(Il2CppBase() + 0x1D638CC))(this, isSet);
	}
	template <typename T = void> T iFixBaseProxy_Start() {
		return ((T (*)(ObjectHostess*))(Il2CppBase() + 0x1D63F20))(this);
	}
	template <typename T = void> T iFixBaseProxy_ItemTrigger(uintptr_t P0) {
		return ((T (*)(ObjectHostess*, uintptr_t))(Il2CppBase() + 0x1D63F28))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_OnItemTriggerSuccess(uintptr_t P0) {
		return ((T (*)(ObjectHostess*, uintptr_t))(Il2CppBase() + 0x1D63F30))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_OnItemTriggerFail(uintptr_t P0) {
		return ((T (*)(ObjectHostess*, uintptr_t))(Il2CppBase() + 0x1D63F38))(this, P0);
	}
	template <typename T = bool> T iFixBaseProxy_Triggerable(uintptr_t P0) {
		return ((T (*)(ObjectHostess*, uintptr_t))(Il2CppBase() + 0x1D63F40))(this, P0);
	}

};

}
