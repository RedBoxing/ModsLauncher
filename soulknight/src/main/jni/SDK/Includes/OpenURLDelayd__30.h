#pragma once
#include "Il2Cpp/Il2Cpp.h"

class OpenURLDelayd30
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<OpenURLDelay>d__30"));
	}

	template <typename T = int32_t> T& 1__state() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& 2__current() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> T& url() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = void> T System_IDisposable_Dispose() {
		return ((T (*)(OpenURLDelayd30*))(Il2CppBase() + 0x1E6FEAC))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(OpenURLDelayd30*))(Il2CppBase() + 0x1E6FEB0))(this);
	}
	template <typename T = uintptr_t> T System_Collections_Generic_IEnumeratorSystem_Object_get_Current() {
		return ((T (*)(OpenURLDelayd30*))(Il2CppBase() + 0x1E6FF54))(this);
	}
	template <typename T = void> T System_Collections_IEnumerator_Reset() {
		return ((T (*)(OpenURLDelayd30*))(Il2CppBase() + 0x1E6FF5C))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(OpenURLDelayd30*))(Il2CppBase() + 0x1E6FFC4))(this);
	}

};

}
