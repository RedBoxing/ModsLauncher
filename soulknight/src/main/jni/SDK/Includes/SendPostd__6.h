#pragma once
#include "Il2Cpp/Il2Cpp.h"

class SendPostd6
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<SendPost>d__6"));
	}

	template <typename T = int32_t> T& 1__state() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& 2__current() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> T& _url() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& _wForm() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = void*> T& onError() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = void*> T& onComplete() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& www5__2() {
		return *(T*)((uintptr_t)this + 0x40);
	}

	template <typename T = void> T System_IDisposable_Dispose() {
		return ((T (*)(SendPostd6*))(Il2CppBase() + 0x19FE54C))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(SendPostd6*))(Il2CppBase() + 0x19FE628))(this);
	}
	template <typename T = void> T m__Finally1() {
		return ((T (*)(SendPostd6*))(Il2CppBase() + 0x19FE568))(this);
	}
	template <typename T = uintptr_t> T System_Collections_Generic_IEnumeratorSystem_Object_get_Current() {
		return ((T (*)(SendPostd6*))(Il2CppBase() + 0x19FE930))(this);
	}
	template <typename T = void> T System_Collections_IEnumerator_Reset() {
		return ((T (*)(SendPostd6*))(Il2CppBase() + 0x19FE938))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(SendPostd6*))(Il2CppBase() + 0x19FE9A0))(this);
	}

};

}
