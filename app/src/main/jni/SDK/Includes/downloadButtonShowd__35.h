#pragma once
#include "Il2Cpp/Il2Cpp.h"

class downloadButtonShowd35
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<downloadButtonShow>d__35"));
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
	template <typename T = uintptr_t> T& buttonBg5__2() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = float> T& time5__3() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& wait5__4() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& bgColor5__5() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& txColor5__6() {
		return *(T*)((uintptr_t)this + 0x50);
	}

	template <typename T = void> T System_IDisposable_Dispose() {
		return ((T (*)(downloadButtonShowd35*))(Il2CppBase() + 0x1E6B2F4))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(downloadButtonShowd35*))(Il2CppBase() + 0x1E6B2F8))(this);
	}
	template <typename T = uintptr_t> T System_Collections_Generic_IEnumeratorSystem_Object_get_Current() {
		return ((T (*)(downloadButtonShowd35*))(Il2CppBase() + 0x1E6B600))(this);
	}
	template <typename T = void> T System_Collections_IEnumerator_Reset() {
		return ((T (*)(downloadButtonShowd35*))(Il2CppBase() + 0x1E6B608))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(downloadButtonShowd35*))(Il2CppBase() + 0x1E6B670))(this);
	}

};

}
