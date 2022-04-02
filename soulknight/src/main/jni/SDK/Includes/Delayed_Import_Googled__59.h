#pragma once
#include "Il2Cpp/Il2Cpp.h"

class DelayedImportGoogled59
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<Delayed_Import_Google>d__59"));
	}

	template <typename T = int32_t> T& 1__state() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& 2__current() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& delay() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& source() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = bool> T& justCheck() {
		return *(T*)((uintptr_t)this + 0x30);
	}

	template <typename T = void> T System_IDisposable_Dispose() {
		return ((T (*)(DelayedImportGoogled59*))(Il2CppBase() + 0x45E18E4))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(DelayedImportGoogled59*))(Il2CppBase() + 0x45E18E8))(this);
	}
	template <typename T = uintptr_t> T System_Collections_Generic_IEnumeratorSystem_Object_get_Current() {
		return ((T (*)(DelayedImportGoogled59*))(Il2CppBase() + 0x45E19A0))(this);
	}
	template <typename T = void> T System_Collections_IEnumerator_Reset() {
		return ((T (*)(DelayedImportGoogled59*))(Il2CppBase() + 0x45E19A8))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(DelayedImportGoogled59*))(Il2CppBase() + 0x45E1A10))(this);
	}

};

}
