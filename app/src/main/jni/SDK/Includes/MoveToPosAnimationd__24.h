#pragma once
#include "Il2Cpp/Il2Cpp.h"

class MoveToPosAnimationd24
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<MoveToPosAnimation>d__24"));
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
	template <typename T = Il2CppVector3> T& targetPos() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = float> T& modifier5__2() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = Il2CppVector3> T& initialPos5__3() {
		return *(T*)((uintptr_t)this + 0x38);
	}

	template <typename T = void> T System_IDisposable_Dispose() {
		return ((T (*)(MoveToPosAnimationd24*))(Il2CppBase() + 0x1A41734))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(MoveToPosAnimationd24*))(Il2CppBase() + 0x1A41738))(this);
	}
	template <typename T = uintptr_t> T System_Collections_Generic_IEnumeratorSystem_Object_get_Current() {
		return ((T (*)(MoveToPosAnimationd24*))(Il2CppBase() + 0x1A418D8))(this);
	}
	template <typename T = void> T System_Collections_IEnumerator_Reset() {
		return ((T (*)(MoveToPosAnimationd24*))(Il2CppBase() + 0x1A418E0))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(MoveToPosAnimationd24*))(Il2CppBase() + 0x1A41948))(this);
	}

};

}
