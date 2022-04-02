#pragma once
#include "Il2Cpp/Il2Cpp.h"

class ReleaseBulletd8
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<ReleaseBullet>d__8"));
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
	template <typename T = Il2CppList<void*>*> T& bullets5__2() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppVector3> T& currentPosition5__3() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = float> T& currentRadius5__4() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = Il2CppVector3> T& moveVelocity5__5() {
		return *(T*)((uintptr_t)this + 0x40);
	}

	template <typename T = void> T System_IDisposable_Dispose() {
		return ((T (*)(ReleaseBulletd8*))(Il2CppBase() + 0x1B89088))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(ReleaseBulletd8*))(Il2CppBase() + 0x1B8908C))(this);
	}
	template <typename T = uintptr_t> T System_Collections_Generic_IEnumeratorSystem_Object_get_Current() {
		return ((T (*)(ReleaseBulletd8*))(Il2CppBase() + 0x1B89A48))(this);
	}
	template <typename T = void> T System_Collections_IEnumerator_Reset() {
		return ((T (*)(ReleaseBulletd8*))(Il2CppBase() + 0x1B89A50))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(ReleaseBulletd8*))(Il2CppBase() + 0x1B89AB8))(this);
	}

};

}
