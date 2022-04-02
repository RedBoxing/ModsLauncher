#pragma once
#include "Il2Cpp/Il2Cpp.h"

class Testd10
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<Test>d__10"));
	}

	template <typename T = int32_t> T& 1__state() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& 2__current() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& chestLevel() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& testGO() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppString*> T& targetName() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& 4__this() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = int32_t> T& maxTimes() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& mockPlayerController5__2() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& prefab5__3() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = int32_t> T& i5__4() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& wellGO5__5() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uintptr_t> T& wishingWell5__6() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = int32_t> T& j5__7() {
		return *(T*)((uintptr_t)this + 0x70);
	}

	template <typename T = void> T System_IDisposable_Dispose() {
		return ((T (*)(Testd10*))(Il2CppBase() + 0x43C1DBC))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(Testd10*))(Il2CppBase() + 0x43C1DC0))(this);
	}
	template <typename T = uintptr_t> T System_Collections_Generic_IEnumeratorSystem_Object_get_Current() {
		return ((T (*)(Testd10*))(Il2CppBase() + 0x43C2514))(this);
	}
	template <typename T = void> T System_Collections_IEnumerator_Reset() {
		return ((T (*)(Testd10*))(Il2CppBase() + 0x43C251C))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(Testd10*))(Il2CppBase() + 0x43C2584))(this);
	}

};

}
