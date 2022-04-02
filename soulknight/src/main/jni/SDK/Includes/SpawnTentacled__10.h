#pragma once
#include "Il2Cpp/Il2Cpp.h"

class SpawnTentacled10
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<SpawnTentacle>d__10"));
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
	template <typename T = Il2CppVector3> T& position() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = void*> T& 7__wrap1() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = Il2CppVector3> T& p5__3() {
		return *(T*)((uintptr_t)this + 0x58);
	}

	template <typename T = void> T System_IDisposable_Dispose() {
		return ((T (*)(SpawnTentacled10*))(Il2CppBase() + 0x18B722C))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(SpawnTentacled10*))(Il2CppBase() + 0x18B72A0))(this);
	}
	template <typename T = void> T m__Finally1() {
		return ((T (*)(SpawnTentacled10*))(Il2CppBase() + 0x18B7248))(this);
	}
	template <typename T = uintptr_t> T System_Collections_Generic_IEnumeratorSystem_Object_get_Current() {
		return ((T (*)(SpawnTentacled10*))(Il2CppBase() + 0x18B7B68))(this);
	}
	template <typename T = void> T System_Collections_IEnumerator_Reset() {
		return ((T (*)(SpawnTentacled10*))(Il2CppBase() + 0x18B7B70))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(SpawnTentacled10*))(Il2CppBase() + 0x18B7BD8))(this);
	}

};

}
