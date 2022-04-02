#pragma once
#include "Il2Cpp/Il2Cpp.h"

class ShowWaitd6
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<ShowWait>d__6"));
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

	template <typename T = void> T System_IDisposable_Dispose() {
		return ((T (*)(ShowWaitd6*))(Il2CppBase() + 0x4586754))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(ShowWaitd6*))(Il2CppBase() + 0x4586758))(this);
	}
	template <typename T = uintptr_t> T System_Collections_Generic_IEnumeratorSystem_Object_get_Current() {
		return ((T (*)(ShowWaitd6*))(Il2CppBase() + 0x4586840))(this);
	}
	template <typename T = void> T System_Collections_IEnumerator_Reset() {
		return ((T (*)(ShowWaitd6*))(Il2CppBase() + 0x4586848))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(ShowWaitd6*))(Il2CppBase() + 0x45868B0))(this);
	}

};

}
