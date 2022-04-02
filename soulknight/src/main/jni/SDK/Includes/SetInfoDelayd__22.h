#pragma once
#include "Il2Cpp/Il2Cpp.h"

class SetInfoDelayd22
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<SetInfoDelay>d__22"));
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
	template <typename T = uintptr_t> T& info() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = void> T System_IDisposable_Dispose() {
		return ((T (*)(SetInfoDelayd22*))(Il2CppBase() + 0x4286F14))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(SetInfoDelayd22*))(Il2CppBase() + 0x4286F18))(this);
	}
	template <typename T = uintptr_t> T System_Collections_Generic_IEnumeratorSystem_Object_get_Current() {
		return ((T (*)(SetInfoDelayd22*))(Il2CppBase() + 0x428706C))(this);
	}
	template <typename T = void> T System_Collections_IEnumerator_Reset() {
		return ((T (*)(SetInfoDelayd22*))(Il2CppBase() + 0x4287074))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(SetInfoDelayd22*))(Il2CppBase() + 0x42870DC))(this);
	}

};

}
