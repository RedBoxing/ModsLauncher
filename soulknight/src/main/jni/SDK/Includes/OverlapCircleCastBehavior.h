#pragma once
#include "Il2Cpp/Il2Cpp.h"

class OverlapCircleCastBehavior
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "OverlapCircleCastBehavior"));
	}

	template <typename T = Il2CppString*> T& layerName() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& castRadius() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = void*> T& onColliderUpdate() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _colliderCache() {
		return *(T*)((uintptr_t)this + 0x30);
	}

	template <typename T = void> T add_onColliderUpdate(void* value) {
		return ((T (*)(OverlapCircleCastBehavior*, void*))(Il2CppBase() + 0x26DBE44))(this, value);
	}
	template <typename T = void> T remove_onColliderUpdate(void* value) {
		return ((T (*)(OverlapCircleCastBehavior*, void*))(Il2CppBase() + 0x26DBF30))(this, value);
	}
	template <typename T = void> T Update() {
		return ((T (*)(OverlapCircleCastBehavior*))(Il2CppBase() + 0x26DC01C))(this);
	}
	template <typename T = void> T OnDrawGizmos() {
		return ((T (*)(OverlapCircleCastBehavior*))(Il2CppBase() + 0x26DC1DC))(this);
	}

};

}
