#pragma once
#include "Il2Cpp/Il2Cpp.h"

class AutoAttackingd143
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<AutoAttacking>d__143"));
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
	template <typename T = Il2CppString*> T& tag() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = float> T& speedFactor() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = float> T& duration() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& wait5__2() {
		return *(T*)((uintptr_t)this + 0x38);
	}

	template <typename T = void> T System_IDisposable_Dispose() {
		return ((T (*)(AutoAttackingd143*))(Il2CppBase() + 0x44D3598))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(AutoAttackingd143*))(Il2CppBase() + 0x44D359C))(this);
	}
	template <typename T = uintptr_t> T System_Collections_Generic_IEnumeratorSystem_Object_get_Current() {
		return ((T (*)(AutoAttackingd143*))(Il2CppBase() + 0x44D3900))(this);
	}
	template <typename T = void> T System_Collections_IEnumerator_Reset() {
		return ((T (*)(AutoAttackingd143*))(Il2CppBase() + 0x44D3908))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(AutoAttackingd143*))(Il2CppBase() + 0x44D3970))(this);
	}

};

}
