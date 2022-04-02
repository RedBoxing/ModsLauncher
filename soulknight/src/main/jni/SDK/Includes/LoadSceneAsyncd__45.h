#pragma once
#include "Il2Cpp/Il2Cpp.h"

class LoadSceneAsyncd45
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<LoadSceneAsync>d__45"));
	}

	template <typename T = int32_t> T& 1__state() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& 2__current() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> T& sceneName() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& 4__this() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppString*> T& bundleName5__2() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& 7__wrap2() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = int32_t> T& 7__wrap3() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& bundleRequest5__5() {
		return *(T*)((uintptr_t)this + 0x48);
	}

	template <typename T = void> T System_IDisposable_Dispose() {
		return ((T (*)(LoadSceneAsyncd45*))(Il2CppBase() + 0x41847A0))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(LoadSceneAsyncd45*))(Il2CppBase() + 0x41847A4))(this);
	}
	template <typename T = uintptr_t> T System_Collections_Generic_IEnumeratorSystem_Object_get_Current() {
		return ((T (*)(LoadSceneAsyncd45*))(Il2CppBase() + 0x4184C24))(this);
	}
	template <typename T = void> T System_Collections_IEnumerator_Reset() {
		return ((T (*)(LoadSceneAsyncd45*))(Il2CppBase() + 0x4184C2C))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(LoadSceneAsyncd45*))(Il2CppBase() + 0x4184C94))(this);
	}

};

}
