#pragma once
#include "Il2Cpp/Il2Cpp.h"

class LoadingBundled26
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<LoadingBundle>d__26"));
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
	template <typename T = Il2CppString*> T& bundleName() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& bundleRequest5__2() {
		return *(T*)((uintptr_t)this + 0x30);
	}

	template <typename T = void> T System_IDisposable_Dispose() {
		return ((T (*)(LoadingBundled26*))(Il2CppBase() + 0x4185138))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(LoadingBundled26*))(Il2CppBase() + 0x418513C))(this);
	}
	template <typename T = uintptr_t> T System_Collections_Generic_IEnumeratorSystem_Object_get_Current() {
		return ((T (*)(LoadingBundled26*))(Il2CppBase() + 0x4185374))(this);
	}
	template <typename T = void> T System_Collections_IEnumerator_Reset() {
		return ((T (*)(LoadingBundled26*))(Il2CppBase() + 0x418537C))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(LoadingBundled26*))(Il2CppBase() + 0x41853E4))(this);
	}

};

}
