#pragma once
#include "Il2Cpp/Il2Cpp.h"

class Testd9
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<Test>d__9"));
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
	template <typename T = Il2CppString*> T& weaponName() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppString*> T& targetName() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> T& maxTimes() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& mockPlayerController5__2() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& smithPrefab5__3() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = int32_t> T& i5__4() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& tempParent5__5() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& smithGO5__6() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uintptr_t> T& weaponItemStore5__7() {
		return *(T*)((uintptr_t)this + 0x68);
	}

	template <typename T = void> T System_IDisposable_Dispose() {
		return ((T (*)(Testd9*))(Il2CppBase() + 0x43C0B58))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(Testd9*))(Il2CppBase() + 0x43C0B5C))(this);
	}
	template <typename T = uintptr_t> T System_Collections_Generic_IEnumeratorSystem_Object_get_Current() {
		return ((T (*)(Testd9*))(Il2CppBase() + 0x43C140C))(this);
	}
	template <typename T = void> T System_Collections_IEnumerator_Reset() {
		return ((T (*)(Testd9*))(Il2CppBase() + 0x43C1414))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(Testd9*))(Il2CppBase() + 0x43C147C))(this);
	}

};

}
