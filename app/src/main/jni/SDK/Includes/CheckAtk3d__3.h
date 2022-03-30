#pragma once
#include "Il2Cpp/Il2Cpp.h"

class CheckAtk3d3
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<CheckAtk3>d__3"));
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
	template <typename T = float> T& time_scale5__2() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& check_times5__3() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = Il2CppVector3> T& post_position5__4() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> T& i5__5() {
		return *(T*)((uintptr_t)this + 0x3C);
	}

	template <typename T = void> T System_IDisposable_Dispose() {
		return ((T (*)(CheckAtk3d3*))(Il2CppBase() + 0x26ED354))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(CheckAtk3d3*))(Il2CppBase() + 0x26ED358))(this);
	}
	template <typename T = uintptr_t> T System_Collections_Generic_IEnumeratorSystem_Object_get_Current() {
		return ((T (*)(CheckAtk3d3*))(Il2CppBase() + 0x26EDB1C))(this);
	}
	template <typename T = void> T System_Collections_IEnumerator_Reset() {
		return ((T (*)(CheckAtk3d3*))(Il2CppBase() + 0x26EDB24))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(CheckAtk3d3*))(Il2CppBase() + 0x26EDB8C))(this);
	}

};

}
