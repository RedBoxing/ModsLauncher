#pragma once
#include "Il2Cpp/Il2Cpp.h"

class MoveToTargetd27
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<MoveToTarget>d__27"));
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
	template <typename T = void*> T& path_pos5__2() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = float> T& dt5__3() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppVector3> T& pos5__4() {
		return *(T*)((uintptr_t)this + 0x34);
	}

	template <typename T = void> T System_IDisposable_Dispose() {
		return ((T (*)(MoveToTargetd27*))(Il2CppBase() + 0x29577C8))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(MoveToTargetd27*))(Il2CppBase() + 0x29577CC))(this);
	}
	template <typename T = uintptr_t> T System_Collections_Generic_IEnumeratorSystem_Object_get_Current() {
		return ((T (*)(MoveToTargetd27*))(Il2CppBase() + 0x2957E9C))(this);
	}
	template <typename T = void> T System_Collections_IEnumerator_Reset() {
		return ((T (*)(MoveToTargetd27*))(Il2CppBase() + 0x2957EA4))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(MoveToTargetd27*))(Il2CppBase() + 0x2957F0C))(this);
	}

};

}
