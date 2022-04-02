#pragma once
#include "Il2Cpp/Il2Cpp.h"

class CreateObjectd11
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<CreateObject>d__11"));
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

	template <typename T = void> T System_IDisposable_Dispose() {
		return ((T (*)(CreateObjectd11*))(Il2CppBase() + 0x1CDC2FC))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(CreateObjectd11*))(Il2CppBase() + 0x1CDC300))(this);
	}
	template <typename T = uintptr_t> T System_Collections_Generic_IEnumeratorSystem_Object_get_Current() {
		return ((T (*)(CreateObjectd11*))(Il2CppBase() + 0x1CDC840))(this);
	}
	template <typename T = void> T System_Collections_IEnumerator_Reset() {
		return ((T (*)(CreateObjectd11*))(Il2CppBase() + 0x1CDC848))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(CreateObjectd11*))(Il2CppBase() + 0x1CDC8B0))(this);
	}

};

}
