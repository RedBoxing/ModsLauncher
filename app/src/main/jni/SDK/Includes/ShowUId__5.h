#pragma once
#include "Il2Cpp/Il2Cpp.h"

class ShowUId5
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<ShowUI>d__5"));
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
	template <typename T = float> T& seconds() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = float> T& time5__2() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& rectTrans5__3() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = float> T& y5__4() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& frame5__5() {
		return *(T*)((uintptr_t)this + 0x40);
	}

	template <typename T = void> T System_IDisposable_Dispose() {
		return ((T (*)(ShowUId5*))(Il2CppBase() + 0x43EBDF0))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(ShowUId5*))(Il2CppBase() + 0x43EBDF4))(this);
	}
	template <typename T = uintptr_t> T System_Collections_Generic_IEnumeratorSystem_Object_get_Current() {
		return ((T (*)(ShowUId5*))(Il2CppBase() + 0x43EC12C))(this);
	}
	template <typename T = void> T System_Collections_IEnumerator_Reset() {
		return ((T (*)(ShowUId5*))(Il2CppBase() + 0x43EC134))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(ShowUId5*))(Il2CppBase() + 0x43EC19C))(this);
	}

};

}
