#pragma once
#include "Il2Cpp/Il2Cpp.h"

class CreateRoomd91
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<CreateRoom>d__91"));
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
	template <typename T = int32_t> T& room_type() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& vx() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = int32_t> T& vy() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> T& r15__2() {
		return *(T*)((uintptr_t)this + 0x34);
	}

	template <typename T = void> T System_IDisposable_Dispose() {
		return ((T (*)(CreateRoomd91*))(Il2CppBase() + 0x41E2958))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(CreateRoomd91*))(Il2CppBase() + 0x41E295C))(this);
	}
	template <typename T = uintptr_t> T System_Collections_Generic_IEnumeratorSystem_Object_get_Current() {
		return ((T (*)(CreateRoomd91*))(Il2CppBase() + 0x41E3B64))(this);
	}
	template <typename T = void> T System_Collections_IEnumerator_Reset() {
		return ((T (*)(CreateRoomd91*))(Il2CppBase() + 0x41E3B6C))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(CreateRoomd91*))(Il2CppBase() + 0x41E3BD4))(this);
	}

};

}
