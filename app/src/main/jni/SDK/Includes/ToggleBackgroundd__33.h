#pragma once
#include "Il2Cpp/Il2Cpp.h"

class ToggleBackgroundd33
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<ToggleBackground>d__33"));
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
	template <typename T = float> T& backgroundAlpha5__2() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = float> T& maxTime5__3() {
		return *(T*)((uintptr_t)this + 0x2C);
	}

	template <typename T = void> T System_IDisposable_Dispose() {
		return ((T (*)(ToggleBackgroundd33*))(Il2CppBase() + 0x4349E50))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(ToggleBackgroundd33*))(Il2CppBase() + 0x4349E54))(this);
	}
	template <typename T = uintptr_t> T System_Collections_Generic_IEnumeratorSystem_Object_get_Current() {
		return ((T (*)(ToggleBackgroundd33*))(Il2CppBase() + 0x4349F6C))(this);
	}
	template <typename T = void> T System_Collections_IEnumerator_Reset() {
		return ((T (*)(ToggleBackgroundd33*))(Il2CppBase() + 0x4349F74))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(ToggleBackgroundd33*))(Il2CppBase() + 0x4349FDC))(this);
	}

};

}
