#pragma once
#include "Il2Cpp/Il2Cpp.h"

class CallAliend13
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<CallAlien>d__13"));
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
	template <typename T = Il2CppVector2> T& dir5__3() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppVector2> T& tmp_pos5__4() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = float> T& invert5__5() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = int32_t> T& i5__6() {
		return *(T*)((uintptr_t)this + 0x44);
	}

	template <typename T = void> T System_IDisposable_Dispose() {
		return ((T (*)(CallAliend13*))(Il2CppBase() + 0x1FE3584))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(CallAliend13*))(Il2CppBase() + 0x1FE3588))(this);
	}
	template <typename T = uintptr_t> T System_Collections_Generic_IEnumeratorSystem_Object_get_Current() {
		return ((T (*)(CallAliend13*))(Il2CppBase() + 0x1FE39F8))(this);
	}
	template <typename T = void> T System_Collections_IEnumerator_Reset() {
		return ((T (*)(CallAliend13*))(Il2CppBase() + 0x1FE3A00))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(CallAliend13*))(Il2CppBase() + 0x1FE3A68))(this);
	}

};

}
