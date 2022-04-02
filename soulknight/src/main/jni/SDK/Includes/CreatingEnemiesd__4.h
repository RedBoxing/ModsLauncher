#pragma once
#include "Il2Cpp/Il2Cpp.h"

class CreatingEnemiesd4
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<CreatingEnemies>d__4"));
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
	template <typename T = float> T& interval() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& enemyProto() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> T& totalCount() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& wait5__2() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = int32_t> T& i5__3() {
		return *(T*)((uintptr_t)this + 0x48);
	}

	template <typename T = void> T System_IDisposable_Dispose() {
		return ((T (*)(CreatingEnemiesd4*))(Il2CppBase() + 0x1FE6950))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(CreatingEnemiesd4*))(Il2CppBase() + 0x1FE6954))(this);
	}
	template <typename T = uintptr_t> T System_Collections_Generic_IEnumeratorSystem_Object_get_Current() {
		return ((T (*)(CreatingEnemiesd4*))(Il2CppBase() + 0x1FE6CFC))(this);
	}
	template <typename T = void> T System_Collections_IEnumerator_Reset() {
		return ((T (*)(CreatingEnemiesd4*))(Il2CppBase() + 0x1FE6D04))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(CreatingEnemiesd4*))(Il2CppBase() + 0x1FE6D6C))(this);
	}

};

}
