#pragma once
#include "Il2Cpp/Il2Cpp.h"

class FillAlphaAnimed12
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<FillAlphaAnime>d__12"));
	}

	template <typename T = int32_t> T& 1__state() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& 2__current() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& from() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& to() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& 4__this() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = float> T& animeTime() {
		return *(T*)((uintptr_t)this + 0x30);
	}

	template <typename T = void> T System_IDisposable_Dispose() {
		return ((T (*)(FillAlphaAnimed12*))(Il2CppBase() + 0x434A7A0))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(FillAlphaAnimed12*))(Il2CppBase() + 0x434A7A4))(this);
	}
	template <typename T = uintptr_t> T System_Collections_Generic_IEnumeratorSystem_Object_get_Current() {
		return ((T (*)(FillAlphaAnimed12*))(Il2CppBase() + 0x434A8D8))(this);
	}
	template <typename T = void> T System_Collections_IEnumerator_Reset() {
		return ((T (*)(FillAlphaAnimed12*))(Il2CppBase() + 0x434A8E0))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(FillAlphaAnimed12*))(Il2CppBase() + 0x434A948))(this);
	}

};

}
