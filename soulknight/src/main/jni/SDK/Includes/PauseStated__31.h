#pragma once
#include "Il2Cpp/Il2Cpp.h"

class PauseStated31
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<PauseState>d__31"));
	}

	template <typename T = int32_t> T& 1__state() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& 2__current() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& pause_time() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& check_time_scale() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& 4__this() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppVector3> T& init_boss_position() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> T& check_times5__2() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = int32_t> T& i5__3() {
		return *(T*)((uintptr_t)this + 0x40);
	}

	template <typename T = void> T System_IDisposable_Dispose() {
		return ((T (*)(PauseStated31*))(Il2CppBase() + 0x26F3FF0))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(PauseStated31*))(Il2CppBase() + 0x26F3FF4))(this);
	}
	template <typename T = uintptr_t> T System_Collections_Generic_IEnumeratorSystem_Object_get_Current() {
		return ((T (*)(PauseStated31*))(Il2CppBase() + 0x26F427C))(this);
	}
	template <typename T = void> T System_Collections_IEnumerator_Reset() {
		return ((T (*)(PauseStated31*))(Il2CppBase() + 0x26F4284))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(PauseStated31*))(Il2CppBase() + 0x26F42EC))(this);
	}

};

}
