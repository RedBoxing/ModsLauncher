#pragma once
#include "Il2Cpp/Il2Cpp.h"

class SetItemSized44
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<SetItemSize>d__44"));
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
		return ((T (*)(SetItemSized44*))(Il2CppBase() + 0x43368E4))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(SetItemSized44*))(Il2CppBase() + 0x43368E8))(this);
	}
	template <typename T = uintptr_t> T System_Collections_Generic_IEnumeratorSystem_Object_get_Current() {
		return ((T (*)(SetItemSized44*))(Il2CppBase() + 0x4336AEC))(this);
	}
	template <typename T = void> T System_Collections_IEnumerator_Reset() {
		return ((T (*)(SetItemSized44*))(Il2CppBase() + 0x4336AF4))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(SetItemSized44*))(Il2CppBase() + 0x4336B5C))(this);
	}

};

}
