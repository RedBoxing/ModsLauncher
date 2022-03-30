#pragma once
#include "Il2Cpp/Il2Cpp.h"

class ExplodeIceBox
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ExplodeIceBox"));
	}

	template <typename T = uintptr_t> T& broken_effect() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& targetbuff() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = bool> T& hit_player() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = bool> T& hit_enemy() {
		return *(T*)((uintptr_t)this + 0x69);
	}
	template <typename T = bool> T& freeze() {
		return *(T*)((uintptr_t)this + 0x6A);
	}
	template <typename T = int32_t> T& damage() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = int32_t> T& repel() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = uintptr_t> T& source_object() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = bool> T& exploding() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = void*> T& OnInstantiateBuff() {
		return *(T*)((uintptr_t)this + 0x88);
	}

	template <typename T = void> T add_OnInstantiateBuff(void* value) {
		return ((T (*)(ExplodeIceBox*, void*))(Il2CppBase() + 0x446DA48))(this, value);
	}
	template <typename T = void> T remove_OnInstantiateBuff(void* value) {
		return ((T (*)(ExplodeIceBox*, void*))(Il2CppBase() + 0x446DB34))(this, value);
	}
	template <typename T = bool> T Hit(int32_t damage, uintptr_t source_object, int32_t camp) {
		return ((T (*)(ExplodeIceBox*, int32_t, uintptr_t, int32_t))(Il2CppBase() + 0x446DC20))(this, damage, source_object, camp);
	}
	template <typename T = void> T SetSourceObject(uintptr_t value) {
		return ((T (*)(ExplodeIceBox*, uintptr_t))(Il2CppBase() + 0x446DCE4))(this, value);
	}
	template <typename T = uintptr_t> T GetSourceObject() {
		return ((T (*)(ExplodeIceBox*))(Il2CppBase() + 0x446DE20))(this);
	}
	template <typename T = void> T OnTriggerEnter2D(uintptr_t other) {
		return ((T (*)(ExplodeIceBox*, uintptr_t))(Il2CppBase() + 0x446DE80))(this, other);
	}
	template <typename T = void> T ExplodeTrigger(uintptr_t other) {
		return ((T (*)(ExplodeIceBox*, uintptr_t))(Il2CppBase() + 0x446DF10))(this, other);
	}
	template <typename T = void> T BoxDestroy(uintptr_t source_object) {
		return ((T (*)(ExplodeIceBox*, uintptr_t))(Il2CppBase() + 0x446EDB4))(this, source_object);
	}
	template <typename T = void> T ExplodeStartEnd() {
		return ((T (*)(ExplodeIceBox*))(Il2CppBase() + 0x446EF3C))(this);
	}
	template <typename T = void> T InBroken() {
		return ((T (*)(ExplodeIceBox*))(Il2CppBase() + 0x446EFD4))(this);
	}
	template <typename T = bool> T iFixBaseProxy_Hit(int32_t P0, uintptr_t P1, int32_t P2) {
		return ((T (*)(ExplodeIceBox*, int32_t, uintptr_t, int32_t))(Il2CppBase() + 0x446F064))(this, P0, P1, P2);
	}
	template <typename T = void> T iFixBaseProxy_BoxDestroy(uintptr_t P0) {
		return ((T (*)(ExplodeIceBox*, uintptr_t))(Il2CppBase() + 0x446F06C))(this, P0);
	}

};

}
