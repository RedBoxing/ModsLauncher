#pragma once
#include "Il2Cpp/Il2Cpp.h"

class CreatingIceWalld14
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<CreatingIceWall>d__14"));
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
	template <typename T = int32_t> T& count() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& length() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = float> T& angle5__2() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& wait5__3() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& marker5__4() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& skill_obj_proto5__5() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = int32_t> T& damage5__6() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = Il2CppQuaternion> T& characterCurrentRotation5__7() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = int32_t> T& i5__8() {
		return *(T*)((uintptr_t)this + 0x64);
	}

	template <typename T = void> T System_IDisposable_Dispose() {
		return ((T (*)(CreatingIceWalld14*))(Il2CppBase() + 0x1E04348))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(CreatingIceWalld14*))(Il2CppBase() + 0x1E0434C))(this);
	}
	template <typename T = uintptr_t> T System_Collections_Generic_IEnumeratorSystem_Object_get_Current() {
		return ((T (*)(CreatingIceWalld14*))(Il2CppBase() + 0x1E04F48))(this);
	}
	template <typename T = void> T System_Collections_IEnumerator_Reset() {
		return ((T (*)(CreatingIceWalld14*))(Il2CppBase() + 0x1E04F50))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(CreatingIceWalld14*))(Il2CppBase() + 0x1E04FB8))(this);
	}

};

}
