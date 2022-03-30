#pragma once
#include "Il2Cpp/Il2Cpp.h"

class DizzyStated32
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<DizzyState>d__32"));
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
	template <typename T = float> T& dizzy_time5__2() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = float> T& check_time_scale5__3() {
		return *(T*)((uintptr_t)this + 0x2C);
	}

	template <typename T = void> T System_IDisposable_Dispose() {
		return ((T (*)(DizzyStated32*))(Il2CppBase() + 0x26F3420))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(DizzyStated32*))(Il2CppBase() + 0x26F3424))(this);
	}
	template <typename T = uintptr_t> T System_Collections_Generic_IEnumeratorSystem_Object_get_Current() {
		return ((T (*)(DizzyStated32*))(Il2CppBase() + 0x26F3760))(this);
	}
	template <typename T = void> T System_Collections_IEnumerator_Reset() {
		return ((T (*)(DizzyStated32*))(Il2CppBase() + 0x26F3768))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(DizzyStated32*))(Il2CppBase() + 0x26F37D0))(this);
	}

};

}
