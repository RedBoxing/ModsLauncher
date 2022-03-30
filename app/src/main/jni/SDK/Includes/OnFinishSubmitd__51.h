#pragma once
#include "Il2Cpp/Il2Cpp.h"

class OnFinishSubmitd51
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<OnFinishSubmit>d__51"));
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
	template <typename T = float> T& fadeTime5__2() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = float> T& elapsedTime5__3() {
		return *(T*)((uintptr_t)this + 0x2C);
	}

	template <typename T = void> T System_IDisposable_Dispose() {
		return ((T (*)(OnFinishSubmitd51*))(Il2CppBase() + 0x21ED9B0))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(OnFinishSubmitd51*))(Il2CppBase() + 0x21ED9B4))(this);
	}
	template <typename T = uintptr_t> T System_Collections_Generic_IEnumeratorSystem_Object_get_Current() {
		return ((T (*)(OnFinishSubmitd51*))(Il2CppBase() + 0x21EDAE4))(this);
	}
	template <typename T = void> T System_Collections_IEnumerator_Reset() {
		return ((T (*)(OnFinishSubmitd51*))(Il2CppBase() + 0x21EDAEC))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(OnFinishSubmitd51*))(Il2CppBase() + 0x21EDB54))(this);
	}

};

}
