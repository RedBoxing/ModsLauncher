#pragma once
#include "Il2Cpp/Il2Cpp.h"

class ChangeColord36
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<ChangeColor>d__36"));
	}

	template <typename T = int32_t> T& 1__state() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& 2__current() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& from() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& to() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& 4__this() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = float> T& animeTime() {
		return *(T*)((uintptr_t)this + 0x48);
	}

	template <typename T = void> T System_IDisposable_Dispose() {
		return ((T (*)(ChangeColord36*))(Il2CppBase() + 0x43496D0))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(ChangeColord36*))(Il2CppBase() + 0x43496D4))(this);
	}
	template <typename T = uintptr_t> T System_Collections_Generic_IEnumeratorSystem_Object_get_Current() {
		return ((T (*)(ChangeColord36*))(Il2CppBase() + 0x4349810))(this);
	}
	template <typename T = void> T System_Collections_IEnumerator_Reset() {
		return ((T (*)(ChangeColord36*))(Il2CppBase() + 0x4349818))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(ChangeColord36*))(Il2CppBase() + 0x4349880))(this);
	}

};

}
