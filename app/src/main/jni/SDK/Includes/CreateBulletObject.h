#pragma once
#include "Il2Cpp/Il2Cpp.h"

class CreateBulletObject
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CreateBulletObject"));
	}

	template <typename T = uintptr_t> T& audip_clip() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& atk() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& speed() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = int32_t> T& critical() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& count() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = int32_t> T& angle() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = bool> T& pierced() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& bullet() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& source_object() {
		return *(T*)((uintptr_t)this + 0x40);
	}

	template <typename T = void> T OnTaken() {
		return ((T (*)(CreateBulletObject*))(Il2CppBase() + 0x427BE10))(this);
	}
	template <typename T = void> T SetSourceObject(uintptr_t value) {
		return ((T (*)(CreateBulletObject*, uintptr_t))(Il2CppBase() + 0x427BE6C))(this, value);
	}
	template <typename T = uintptr_t> T GetSourceObject() {
		return ((T (*)(CreateBulletObject*))(Il2CppBase() + 0x427C34C))(this);
	}
	template <typename T = void> T Attack() {
		return ((T (*)(CreateBulletObject*))(Il2CppBase() + 0x427BEE4))(this);
	}
	template <typename T = void> T DestroySelf(float totalTime) {
		return ((T (*)(CreateBulletObject*, float))(Il2CppBase() + 0x427C3AC))(this, totalTime);
	}
	template <typename T = uintptr_t> T Destroying(float totalTime) {
		return ((T (*)(CreateBulletObject*, float))(Il2CppBase() + 0x427C474))(this, totalTime);
	}

};

}
