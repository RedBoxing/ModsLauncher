#pragma once
#include "Il2Cpp/Il2Cpp.h"

class Rollingd41
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<Rolling>d__41"));
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
	template <typename T = uintptr_t> T& wait5__2() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = void> T System_IDisposable_Dispose() {
		return ((T (*)(Rollingd41*))(Il2CppBase() + 0x1E01738))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(Rollingd41*))(Il2CppBase() + 0x1E0173C))(this);
	}
	template <typename T = uintptr_t> T System_Collections_Generic_IEnumeratorSystem_Object_get_Current() {
		return ((T (*)(Rollingd41*))(Il2CppBase() + 0x1E01B54))(this);
	}
	template <typename T = void> T System_Collections_IEnumerator_Reset() {
		return ((T (*)(Rollingd41*))(Il2CppBase() + 0x1E01B5C))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(Rollingd41*))(Il2CppBase() + 0x1E01BC4))(this);
	}

};

}
