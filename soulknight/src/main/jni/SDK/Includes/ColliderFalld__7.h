#pragma once
#include "Il2Cpp/Il2Cpp.h"

class ColliderFalld7
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<ColliderFall>d__7"));
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
	template <typename T = uintptr_t> T& triggerCollider() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppVector3> T& fallTargetPosition() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& playerTransform5__2() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& playerImgPath5__3() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& playerController5__4() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = Il2CppString*> T& playerKey5__5() {
		return *(T*)((uintptr_t)this + 0x58);
	}

	template <typename T = void> T System_IDisposable_Dispose() {
		return ((T (*)(ColliderFalld7*))(Il2CppBase() + 0x4357634))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(ColliderFalld7*))(Il2CppBase() + 0x4357638))(this);
	}
	template <typename T = uintptr_t> T System_Collections_Generic_IEnumeratorSystem_Object_get_Current() {
		return ((T (*)(ColliderFalld7*))(Il2CppBase() + 0x4357DBC))(this);
	}
	template <typename T = void> T System_Collections_IEnumerator_Reset() {
		return ((T (*)(ColliderFalld7*))(Il2CppBase() + 0x4357DC4))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(ColliderFalld7*))(Il2CppBase() + 0x4357E2C))(this);
	}

};

}
