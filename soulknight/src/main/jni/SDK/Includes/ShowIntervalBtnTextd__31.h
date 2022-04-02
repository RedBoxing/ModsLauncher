#pragma once
#include "Il2Cpp/Il2Cpp.h"

class ShowIntervalBtnTextd31
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<ShowIntervalBtnText>d__31"));
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
	template <typename T = float> T& time5__2() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& frame5__3() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& btnText5__4() {
		return *(T*)((uintptr_t)this + 0x38);
	}

	template <typename T = void> T System_IDisposable_Dispose() {
		return ((T (*)(ShowIntervalBtnTextd31*))(Il2CppBase() + 0x43217AC))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(ShowIntervalBtnTextd31*))(Il2CppBase() + 0x43217B0))(this);
	}
	template <typename T = uintptr_t> T System_Collections_Generic_IEnumeratorSystem_Object_get_Current() {
		return ((T (*)(ShowIntervalBtnTextd31*))(Il2CppBase() + 0x4321A9C))(this);
	}
	template <typename T = void> T System_Collections_IEnumerator_Reset() {
		return ((T (*)(ShowIntervalBtnTextd31*))(Il2CppBase() + 0x4321AA4))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(ShowIntervalBtnTextd31*))(Il2CppBase() + 0x4321B0C))(this);
	}

};

}
