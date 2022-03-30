#pragma once
#include "Il2Cpp/Il2Cpp.h"

class Digestingd96
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<Digesting>d__96"));
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
		return ((T (*)(Digestingd96*))(Il2CppBase() + 0x1F024F4))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(Digestingd96*))(Il2CppBase() + 0x1F024F8))(this);
	}
	template <typename T = uintptr_t> T System_Collections_Generic_IEnumeratorSystem_Object_get_Current() {
		return ((T (*)(Digestingd96*))(Il2CppBase() + 0x1F02984))(this);
	}
	template <typename T = void> T System_Collections_IEnumerator_Reset() {
		return ((T (*)(Digestingd96*))(Il2CppBase() + 0x1F0298C))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(Digestingd96*))(Il2CppBase() + 0x1F029F4))(this);
	}

};

}
