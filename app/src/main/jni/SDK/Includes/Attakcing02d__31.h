#pragma once
#include "Il2Cpp/Il2Cpp.h"

class Attakcing02d31
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<Attakcing02>d__31"));
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
	template <typename T = float> T& angle5__2() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& count5__3() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& wait5__4() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> T& i5__5() {
		return *(T*)((uintptr_t)this + 0x38);
	}

	template <typename T = void> T System_IDisposable_Dispose() {
		return ((T (*)(Attakcing02d31*))(Il2CppBase() + 0x294B318))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(Attakcing02d31*))(Il2CppBase() + 0x294B31C))(this);
	}
	template <typename T = uintptr_t> T System_Collections_Generic_IEnumeratorSystem_Object_get_Current() {
		return ((T (*)(Attakcing02d31*))(Il2CppBase() + 0x294B834))(this);
	}
	template <typename T = void> T System_Collections_IEnumerator_Reset() {
		return ((T (*)(Attakcing02d31*))(Il2CppBase() + 0x294B83C))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(Attakcing02d31*))(Il2CppBase() + 0x294B8A4))(this);
	}

};

}
