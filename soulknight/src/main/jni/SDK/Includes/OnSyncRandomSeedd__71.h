#pragma once
#include "Il2Cpp/Il2Cpp.h"

class OnSyncRandomSeedd71
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<OnSyncRandomSeed>d__71"));
	}

	template <typename T = int32_t> T& 1__state() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& 2__current() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& eParam() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& 4__this() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& msg5__2() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = bool> T& inLoadingScene5__3() {
		return *(T*)((uintptr_t)this + 0x38);
	}

	template <typename T = void> T System_IDisposable_Dispose() {
		return ((T (*)(OnSyncRandomSeedd71*))(Il2CppBase() + 0x436FCC8))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(OnSyncRandomSeedd71*))(Il2CppBase() + 0x436FCCC))(this);
	}
	template <typename T = uintptr_t> T System_Collections_Generic_IEnumeratorSystem_Object_get_Current() {
		return ((T (*)(OnSyncRandomSeedd71*))(Il2CppBase() + 0x436FE94))(this);
	}
	template <typename T = void> T System_Collections_IEnumerator_Reset() {
		return ((T (*)(OnSyncRandomSeedd71*))(Il2CppBase() + 0x436FE9C))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(OnSyncRandomSeedd71*))(Il2CppBase() + 0x436FF04))(this);
	}

};

}
