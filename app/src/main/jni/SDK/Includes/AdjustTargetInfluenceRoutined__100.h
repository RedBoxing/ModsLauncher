#pragma once
#include "Il2Cpp/Il2Cpp.h"

class AdjustTargetInfluenceRoutined100
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<AdjustTargetInfluenceRoutine>d__100"));
	}

	template <typename T = int32_t> T& 1__state() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& 2__current() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& cameraTarget() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& 4__this() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = float> T& duration() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = float> T& influenceH() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = float> T& influenceV() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = bool> T& removeIfZeroInfluence() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = float> T& startInfluenceH5__2() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = float> T& startInfluenceV5__3() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = float> T& t5__4() {
		return *(T*)((uintptr_t)this + 0x48);
	}

	template <typename T = void> T System_IDisposable_Dispose() {
		return ((T (*)(AdjustTargetInfluenceRoutined100*))(Il2CppBase() + 0x2C19F00))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(AdjustTargetInfluenceRoutined100*))(Il2CppBase() + 0x2C19F04))(this);
	}
	template <typename T = uintptr_t> T System_Collections_Generic_IEnumeratorSystem_Object_get_Current() {
		return ((T (*)(AdjustTargetInfluenceRoutined100*))(Il2CppBase() + 0x2C1A28C))(this);
	}
	template <typename T = void> T System_Collections_IEnumerator_Reset() {
		return ((T (*)(AdjustTargetInfluenceRoutined100*))(Il2CppBase() + 0x2C1A294))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(AdjustTargetInfluenceRoutined100*))(Il2CppBase() + 0x2C1A2FC))(this);
	}

};

}
