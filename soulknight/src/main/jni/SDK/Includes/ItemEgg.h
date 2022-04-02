#pragma once
#include "Il2Cpp/Il2Cpp.h"

class ItemEgg
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ItemEgg"));
	}

	template <typename T = uintptr_t> T& audio_clip() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& item() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> T& anim() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = int32_t> T& level() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& objects() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = uintptr_t> T& mineral_obj() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = Il2CppString*> T& obj_name() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = bool> T& need_rabbit() {
		return *(T*)((uintptr_t)this + 0xD0);
	}

	template <typename T = void> T Start() {
		return ((T (*)(ItemEgg*))(Il2CppBase() + 0x1DA2150))(this);
	}
	template <typename T = Il2CppString*> T GetItemName() {
		return ((T (*)(ItemEgg*))(Il2CppBase() + 0x1DA2264))(this);
	}
	template <typename T = void> T OnItemTriggerSuccess(uintptr_t controller) {
		return ((T (*)(ItemEgg*, uintptr_t))(Il2CppBase() + 0x1DA22C8))(this, controller);
	}
	template <typename T = uintptr_t> T CreateObject(uintptr_t controller) {
		return ((T (*)(ItemEgg*, uintptr_t))(Il2CppBase() + 0x1DA2418))(this, controller);
	}
	template <typename T = void> T CreateRabbit(uintptr_t controller) {
		return ((T (*)(ItemEgg*, uintptr_t))(Il2CppBase() + 0x1DA2524))(this, controller);
	}
	template <typename T = void> T OpenChest() {
		return ((T (*)(ItemEgg*))(Il2CppBase() + 0x1DA2888))(this);
	}
	template <typename T = void> T CreateObject_1() {
		return ((T (*)(ItemEgg*))(Il2CppBase() + 0x1DA2B64))(this);
	}
	template <typename T = void> T CreateMineral() {
		return ((T (*)(ItemEgg*))(Il2CppBase() + 0x1DA2DC8))(this);
	}
	template <typename T = void> T iFixBaseProxy_Start() {
		return ((T (*)(ItemEgg*))(Il2CppBase() + 0x1DA313C))(this);
	}
	template <typename T = Il2CppString*> T iFixBaseProxy_GetItemName() {
		return ((T (*)(ItemEgg*))(Il2CppBase() + 0x1DA3144))(this);
	}
	template <typename T = void> T iFixBaseProxy_OnItemTriggerSuccess(uintptr_t P0) {
		return ((T (*)(ItemEgg*, uintptr_t))(Il2CppBase() + 0x1DA314C))(this, P0);
	}

};

}
