#pragma once
#include "Il2Cpp/Il2Cpp.h"

class InstantiateEnemiesd22
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<InstantiateEnemies>d__22"));
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
	template <typename T = uintptr_t> T& duration5__2() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& enemyShowWait5__3() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> T& enemyCount5__4() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = Il2CppVector3> T& position5__5() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = int32_t> T& i5__6() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = Il2CppVector3> T& enemyPosition5__7() {
		return *(T*)((uintptr_t)this + 0x4C);
	}

	template <typename T = void> T System_IDisposable_Dispose() {
		return ((T (*)(InstantiateEnemiesd22*))(Il2CppBase() + 0x42C6D18))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(InstantiateEnemiesd22*))(Il2CppBase() + 0x42C6D1C))(this);
	}
	template <typename T = uintptr_t> T System_Collections_Generic_IEnumeratorSystem_Object_get_Current() {
		return ((T (*)(InstantiateEnemiesd22*))(Il2CppBase() + 0x42C7360))(this);
	}
	template <typename T = void> T System_Collections_IEnumerator_Reset() {
		return ((T (*)(InstantiateEnemiesd22*))(Il2CppBase() + 0x42C7368))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(InstantiateEnemiesd22*))(Il2CppBase() + 0x42C73D0))(this);
	}

};

}
