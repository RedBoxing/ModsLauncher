#pragma once
#include "Il2Cpp/Il2Cpp.h"

class CreateEndExpd46
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<CreateEndExp>d__46"));
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
	template <typename T = uintptr_t> T& delayWait5__2() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& explodeBulletInfo5__3() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppVector2> T& expDirection5__4() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = float> T& currentPositionOffset5__5() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = float> T& maxDistance5__6() {
		return *(T*)((uintptr_t)this + 0x44);
	}

	template <typename T = void> T System_IDisposable_Dispose() {
		return ((T (*)(CreateEndExpd46*))(Il2CppBase() + 0x24A1EF0))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(CreateEndExpd46*))(Il2CppBase() + 0x24A1EF4))(this);
	}
	template <typename T = uintptr_t> T System_Collections_Generic_IEnumeratorSystem_Object_get_Current() {
		return ((T (*)(CreateEndExpd46*))(Il2CppBase() + 0x24A23E8))(this);
	}
	template <typename T = void> T System_Collections_IEnumerator_Reset() {
		return ((T (*)(CreateEndExpd46*))(Il2CppBase() + 0x24A23F0))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(CreateEndExpd46*))(Il2CppBase() + 0x24A2458))(this);
	}

};

}
