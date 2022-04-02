#pragma once
#include "Il2Cpp/Il2Cpp.h"

class ShootingBullet05d43
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<ShootingBullet05>d__43"));
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
	template <typename T = int32_t> T& count5__2() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = float> T& bulletSize5__3() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& bullets5__4() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& wait5__5() {
		return *(T*)((uintptr_t)this + 0x38);
	}

	template <typename T = void> T System_IDisposable_Dispose() {
		return ((T (*)(ShootingBullet05d43*))(Il2CppBase() + 0x294BAA4))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(ShootingBullet05d43*))(Il2CppBase() + 0x294BAA8))(this);
	}
	template <typename T = uintptr_t> T System_Collections_Generic_IEnumeratorSystem_Object_get_Current() {
		return ((T (*)(ShootingBullet05d43*))(Il2CppBase() + 0x294C408))(this);
	}
	template <typename T = void> T System_Collections_IEnumerator_Reset() {
		return ((T (*)(ShootingBullet05d43*))(Il2CppBase() + 0x294C410))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(ShootingBullet05d43*))(Il2CppBase() + 0x294C478))(this);
	}

};

}
