#pragma once
#include "Il2Cpp/Il2Cpp.h"

class Attacking5d33
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<Attacking5>d__33"));
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
	template <typename T = int32_t> T& index5__2() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = float> T& start_angle5__3() {
		return *(T*)((uintptr_t)this + 0x2C);
	}

	template <typename T = void> T System_IDisposable_Dispose() {
		return ((T (*)(Attacking5d33*))(Il2CppBase() + 0x2943AC8))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(Attacking5d33*))(Il2CppBase() + 0x2943ACC))(this);
	}
	template <typename T = uintptr_t> T System_Collections_Generic_IEnumeratorSystem_Object_get_Current() {
		return ((T (*)(Attacking5d33*))(Il2CppBase() + 0x294401C))(this);
	}
	template <typename T = void> T System_Collections_IEnumerator_Reset() {
		return ((T (*)(Attacking5d33*))(Il2CppBase() + 0x2944024))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(Attacking5d33*))(Il2CppBase() + 0x294408C))(this);
	}

};

}
