#pragma once
#include "Il2Cpp/Il2Cpp.h"

class CreateMountIfGainMountFactorValidd34
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<CreateMountIfGainMountFactorValid>d__34"));
	}

	template <typename T = int32_t> T& 1__state() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& 2__current() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppVector3> T& mountPos() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = void> T System_IDisposable_Dispose() {
		return ((T (*)(CreateMountIfGainMountFactorValidd34*))(Il2CppBase() + 0x1C4D840))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(CreateMountIfGainMountFactorValidd34*))(Il2CppBase() + 0x1C4D844))(this);
	}
	template <typename T = uintptr_t> T System_Collections_Generic_IEnumeratorSystem_Object_get_Current() {
		return ((T (*)(CreateMountIfGainMountFactorValidd34*))(Il2CppBase() + 0x1C4DBD8))(this);
	}
	template <typename T = void> T System_Collections_IEnumerator_Reset() {
		return ((T (*)(CreateMountIfGainMountFactorValidd34*))(Il2CppBase() + 0x1C4DBE0))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(CreateMountIfGainMountFactorValidd34*))(Il2CppBase() + 0x1C4DC48))(this);
	}

};

}
