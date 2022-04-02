#pragma once
#include "Il2Cpp/Il2Cpp.h"

class StatueCrabDropd22
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<StatueCrabDrop>d__22"));
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
	template <typename T = uintptr_t> T& wait5__2() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = float> T& startAnimTime5__3() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppVector3> T& initPosition5__4() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = Il2CppVector3> T& targetCrabPosition5__5() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = float> T& currentHeight5__6() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = float> T& ySpeed5__7() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = float> T& currentGravity5__8() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = float> T& angularVelocity5__9() {
		return *(T*)((uintptr_t)this + 0x58);
	}

	template <typename T = void> T System_IDisposable_Dispose() {
		return ((T (*)(StatueCrabDropd22*))(Il2CppBase() + 0x1FDA0E0))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(StatueCrabDropd22*))(Il2CppBase() + 0x1FDA0E4))(this);
	}
	template <typename T = uintptr_t> T System_Collections_Generic_IEnumeratorSystem_Object_get_Current() {
		return ((T (*)(StatueCrabDropd22*))(Il2CppBase() + 0x1FDA8F4))(this);
	}
	template <typename T = void> T System_Collections_IEnumerator_Reset() {
		return ((T (*)(StatueCrabDropd22*))(Il2CppBase() + 0x1FDA8FC))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(StatueCrabDropd22*))(Il2CppBase() + 0x1FDA964))(this);
	}

};

}
