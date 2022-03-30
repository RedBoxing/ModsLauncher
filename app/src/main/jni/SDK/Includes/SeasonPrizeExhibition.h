#pragma once
#include "Il2Cpp/Il2Cpp.h"

class SeasonPrizeExhibition
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SeasonPrizeExhibition"));
	}

	template <typename T = uintptr_t> static T& CURRENT_SEASON() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& season() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = uintptr_t> T& seasonPrize() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = Il2CppDictionary<uintptr_t, int32_t>*> T& prize2Level() {
		return *(T*)((uintptr_t)this + 0xA0);
	}

	template <typename T = void> T OnTriggerEnter2D(uintptr_t other) {
		return ((T (*)(SeasonPrizeExhibition*, uintptr_t))(Il2CppBase() + 0x181F130))(this, other);
	}
	template <typename T = bool> T Triggerable(uintptr_t controller) {
		return ((T (*)(SeasonPrizeExhibition*, uintptr_t))(Il2CppBase() + 0x181F3C8))(this, controller);
	}
	template <typename T = void> T OnItemTriggerSuccess(uintptr_t controller) {
		return ((T (*)(SeasonPrizeExhibition*, uintptr_t))(Il2CppBase() + 0x181F444))(this, controller);
	}
	template <typename T = Il2CppString*> T GetItemName() {
		return ((T (*)(SeasonPrizeExhibition*))(Il2CppBase() + 0x181F4CC))(this);
	}
	template <typename T = int32_t> T GetItemLevel() {
		return ((T (*)(SeasonPrizeExhibition*))(Il2CppBase() + 0x181F5F4))(this);
	}
	template <typename T = void> T SetSeasonPrizeInfo(uintptr_t season) {
		return ((T (*)(SeasonPrizeExhibition*, uintptr_t))(Il2CppBase() + 0x181F69C))(this, season);
	}
	template <typename T = void> T iFixBaseProxy_OnTriggerEnter2D(uintptr_t P0) {
		return ((T (*)(SeasonPrizeExhibition*, uintptr_t))(Il2CppBase() + 0x181F988))(this, P0);
	}
	template <typename T = bool> T iFixBaseProxy_Triggerable(uintptr_t P0) {
		return ((T (*)(SeasonPrizeExhibition*, uintptr_t))(Il2CppBase() + 0x181F990))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_OnItemTriggerSuccess(uintptr_t P0) {
		return ((T (*)(SeasonPrizeExhibition*, uintptr_t))(Il2CppBase() + 0x181F998))(this, P0);
	}
	template <typename T = Il2CppString*> T iFixBaseProxy_GetItemName() {
		return ((T (*)(SeasonPrizeExhibition*))(Il2CppBase() + 0x181F9A0))(this);
	}
	template <typename T = int32_t> T iFixBaseProxy_GetItemLevel() {
		return ((T (*)(SeasonPrizeExhibition*))(Il2CppBase() + 0x181F9A8))(this);
	}

};

}
