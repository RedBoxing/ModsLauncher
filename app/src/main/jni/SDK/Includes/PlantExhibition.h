#pragma once
#include "Il2Cpp/Il2Cpp.h"

class PlantExhibition
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PlantExhibition"));
	}

	template <typename T = uintptr_t> T& plant() {
		return *(T*)((uintptr_t)this + 0x98);
	}

	template <typename T = void> T ChangeIcon(bool isLarge) {
		return ((T (*)(PlantExhibition*, bool))(Il2CppBase() + 0x4396E78))(this, isLarge);
	}
	template <typename T = void> T Start() {
		return ((T (*)(PlantExhibition*))(Il2CppBase() + 0x43976B0))(this);
	}
	template <typename T = void> T OnTriggerEnter2D(uintptr_t other) {
		return ((T (*)(PlantExhibition*, uintptr_t))(Il2CppBase() + 0x43978F4))(this, other);
	}
	template <typename T = void> T OnItemTriggerSuccess(uintptr_t controller) {
		return ((T (*)(PlantExhibition*, uintptr_t))(Il2CppBase() + 0x4397B58))(this, controller);
	}
	template <typename T = Il2CppString*> T GetItemName() {
		return ((T (*)(PlantExhibition*))(Il2CppBase() + 0x4397CCC))(this);
	}
	template <typename T = int32_t> T GetItemLevel() {
		return ((T (*)(PlantExhibition*))(Il2CppBase() + 0x4397D90))(this);
	}
	template <typename T = bool> T ShowInfo() {
		return ((T (*)(PlantExhibition*))(Il2CppBase() + 0x4397804))(this);
	}
	template <typename T = void> T SetSeedInfo(uintptr_t info, bool isLarge) {
		return ((T (*)(PlantExhibition*, uintptr_t, bool))(Il2CppBase() + 0x4397E28))(this, info, isLarge);
	}
	template <typename T = void> T iFixBaseProxy_Start() {
		return ((T (*)(PlantExhibition*))(Il2CppBase() + 0x4397F98))(this);
	}
	template <typename T = void> T iFixBaseProxy_OnTriggerEnter2D(uintptr_t P0) {
		return ((T (*)(PlantExhibition*, uintptr_t))(Il2CppBase() + 0x4397FA0))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_OnItemTriggerSuccess(uintptr_t P0) {
		return ((T (*)(PlantExhibition*, uintptr_t))(Il2CppBase() + 0x4397FA8))(this, P0);
	}
	template <typename T = Il2CppString*> T iFixBaseProxy_GetItemName() {
		return ((T (*)(PlantExhibition*))(Il2CppBase() + 0x4397FB0))(this);
	}
	template <typename T = int32_t> T iFixBaseProxy_GetItemLevel() {
		return ((T (*)(PlantExhibition*))(Il2CppBase() + 0x4397FB8))(this);
	}

};

}
