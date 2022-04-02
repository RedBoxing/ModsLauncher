#pragma once
#include "Il2Cpp/Il2Cpp.h"

class GetHurtCheckd18
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<GetHurtCheck>d__18"));
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
	template <typename T = int32_t> T& damage() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppString*> T& error() {
		return *(T*)((uintptr_t)this + 0x30);
	}

	template <typename T = void> T System_IDisposable_Dispose() {
		return ((T (*)(GetHurtCheckd18*))(Il2CppBase() + 0x26EF5E4))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(GetHurtCheckd18*))(Il2CppBase() + 0x26EF5E8))(this);
	}
	template <typename T = uintptr_t> T System_Collections_Generic_IEnumeratorSystem_Object_get_Current() {
		return ((T (*)(GetHurtCheckd18*))(Il2CppBase() + 0x26EF778))(this);
	}
	template <typename T = void> T System_Collections_IEnumerator_Reset() {
		return ((T (*)(GetHurtCheckd18*))(Il2CppBase() + 0x26EF780))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(GetHurtCheckd18*))(Il2CppBase() + 0x26EF7E8))(this);
	}

};

}
