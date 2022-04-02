#pragma once
#include "Il2Cpp/Il2Cpp.h"

class CreateBulletd35
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<CreateBullet>d__35"));
	}

	template <typename T = int32_t> T& 1__state() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& 2__current() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& 4__this() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& percentage() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& totalCount5__2() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = int32_t> T& finalDamage5__3() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> T& finalCritic5__4() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = float> T& finalSpeed5__5() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = int32_t> T& finalThroughCount5__6() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = float> T& finalSize5__7() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = float> T& d_angle5__8() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = float> T& finalAngle5__9() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = int32_t> T& i5__10() {
		return *(T*)((uintptr_t)this + 0x4C);
	}

	template <typename T = void> T System_IDisposable_Dispose() {
		return ((T (*)(CreateBulletd35*))(Il2CppBase() + 0x4624E54))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(CreateBulletd35*))(Il2CppBase() + 0x4624E58))(this);
	}
	template <typename T = uintptr_t> T System_Collections_Generic_IEnumeratorSystem_Object_get_Current() {
		return ((T (*)(CreateBulletd35*))(Il2CppBase() + 0x46258E0))(this);
	}
	template <typename T = void> T System_Collections_IEnumerator_Reset() {
		return ((T (*)(CreateBulletd35*))(Il2CppBase() + 0x46258E8))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(CreateBulletd35*))(Il2CppBase() + 0x4625950))(this);
	}

};

}
