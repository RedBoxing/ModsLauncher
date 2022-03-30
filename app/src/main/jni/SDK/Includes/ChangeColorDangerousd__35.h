#pragma once
#include "Il2Cpp/Il2Cpp.h"

class ChangeColorDangerousd35
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<ChangeColorDangerous>d__35"));
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
	template <typename T = float> T& animeTime5__2() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = void> T System_IDisposable_Dispose() {
		return ((T (*)(ChangeColorDangerousd35*))(Il2CppBase() + 0x4349888))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(ChangeColorDangerousd35*))(Il2CppBase() + 0x434988C))(this);
	}
	template <typename T = uintptr_t> T System_Collections_Generic_IEnumeratorSystem_Object_get_Current() {
		return ((T (*)(ChangeColorDangerousd35*))(Il2CppBase() + 0x4349A28))(this);
	}
	template <typename T = void> T System_Collections_IEnumerator_Reset() {
		return ((T (*)(ChangeColorDangerousd35*))(Il2CppBase() + 0x4349A30))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(ChangeColorDangerousd35*))(Il2CppBase() + 0x4349A98))(this);
	}

};

}
