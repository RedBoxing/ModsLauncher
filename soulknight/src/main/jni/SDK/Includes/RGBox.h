#pragma once
#include "Il2Cpp/Il2Cpp.h"

class RGBox
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RGBox"));
	}

	template <typename T = int32_t> T& hp() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> T& hasDestroyState() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& destroyedStateObj() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = bool> T& disableColliderOnDestroy() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& explode() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& the_source_object() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = int32_t> T& camp() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = void*> T& isActive() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& boxDestroyEvent() {
		return *(T*)((uintptr_t)this + 0x50);
	}

	template <typename T = uintptr_t> T get_boxDestroyEvent() {
		return ((T (*)(RGBox*))(Il2CppBase() + 0x1BBD0EC))(this);
	}
	template <typename T = void> T set_boxDestroyEvent(uintptr_t value) {
		return ((T (*)(RGBox*, uintptr_t))(Il2CppBase() + 0x1BBD0F4))(this, value);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(RGBox*))(Il2CppBase() + 0x1BBD0FC))(this);
	}
	template <typename T = bool> T Hit(int32_t damage, uintptr_t source_object, int32_t camp) {
		return ((T (*)(RGBox*, int32_t, uintptr_t, int32_t))(Il2CppBase() + 0x1BBD19C))(this, damage, source_object, camp);
	}
	template <typename T = Il2CppVector3> T GetPosition() {
		return ((T (*)(RGBox*))(Il2CppBase() + 0x1BBD2D4))(this);
	}
	template <typename T = void> T BoxDestroy(uintptr_t source_object) {
		return ((T (*)(RGBox*, uintptr_t))(Il2CppBase() + 0x1BBD350))(this, source_object);
	}
	template <typename T = void> T CreateItem() {
		return ((T (*)(RGBox*))(Il2CppBase() + 0x1BBD870))(this);
	}
	template <typename T = void> T SetSourceObject(uintptr_t value) {
		return ((T (*)(RGBox*, uintptr_t))(Il2CppBase() + 0x1BBDB50))(this, value);
	}

};

}
