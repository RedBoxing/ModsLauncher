#pragma once
#include "Il2Cpp/Il2Cpp.h"

class DelayFlushPickabled93
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<DelayFlushPickable>d__93"));
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
	template <typename T = float> T& waittime5__2() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& wait5__3() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& waitForEndOfFrame5__4() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = Il2CppList<Il2CppString*>*> T& matsNameList5__5() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = Il2CppList<int32_t>*> T& matsCountList5__6() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = void*> T& 7__wrap6() {
		return *(T*)((uintptr_t)this + 0x50);
	}

	template <typename T = void> T System_IDisposable_Dispose() {
		return ((T (*)(DelayFlushPickabled93*))(Il2CppBase() + 0x41BF554))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(DelayFlushPickabled93*))(Il2CppBase() + 0x41BF5D8))(this);
	}
	template <typename T = void> T m__Finally1() {
		return ((T (*)(DelayFlushPickabled93*))(Il2CppBase() + 0x41BF580))(this);
	}
	template <typename T = uintptr_t> T System_Collections_Generic_IEnumeratorSystem_Object_get_Current() {
		return ((T (*)(DelayFlushPickabled93*))(Il2CppBase() + 0x41C0890))(this);
	}
	template <typename T = void> T System_Collections_IEnumerator_Reset() {
		return ((T (*)(DelayFlushPickabled93*))(Il2CppBase() + 0x41C0898))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(DelayFlushPickabled93*))(Il2CppBase() + 0x41C0900))(this);
	}

};

}
