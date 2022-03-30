#pragma once
#include "Il2Cpp/Il2Cpp.h"

class GoToCinematicTargetRoutined46
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<GoToCinematicTargetRoutine>d__46"));
	}

	template <typename T = int32_t> T& 1__state() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& 2__current() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& cinematicTarget() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& 4__this() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& targetIndex() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = float> T& initialPosH5__2() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = float> T& initialPosV5__3() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = float> T& currentCameraSize5__4() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = float> T& t5__5() {
		return *(T*)((uintptr_t)this + 0x40);
	}

	template <typename T = void> T System_IDisposable_Dispose() {
		return ((T (*)(GoToCinematicTargetRoutined46*))(Il2CppBase() + 0x2C1CD5C))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(GoToCinematicTargetRoutined46*))(Il2CppBase() + 0x2C1CD60))(this);
	}
	template <typename T = uintptr_t> T System_Collections_Generic_IEnumeratorSystem_Object_get_Current() {
		return ((T (*)(GoToCinematicTargetRoutined46*))(Il2CppBase() + 0x2C1D670))(this);
	}
	template <typename T = void> T System_Collections_IEnumerator_Reset() {
		return ((T (*)(GoToCinematicTargetRoutined46*))(Il2CppBase() + 0x2C1D678))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(GoToCinematicTargetRoutined46*))(Il2CppBase() + 0x2C1D6E0))(this);
	}

};

}
