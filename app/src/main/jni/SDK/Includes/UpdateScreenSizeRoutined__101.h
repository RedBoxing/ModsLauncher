#pragma once
#include "Il2Cpp/Il2Cpp.h"

class UpdateScreenSizeRoutined101
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<UpdateScreenSizeRoutine>d__101"));
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
	template <typename T = float> T& duration() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = float> T& finalSize() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& easeType() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = float> T& startSize5__2() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = float> T& t5__3() {
		return *(T*)((uintptr_t)this + 0x38);
	}

	template <typename T = void> T System_IDisposable_Dispose() {
		return ((T (*)(UpdateScreenSizeRoutined101*))(Il2CppBase() + 0x2C1A738))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(UpdateScreenSizeRoutined101*))(Il2CppBase() + 0x2C1A73C))(this);
	}
	template <typename T = uintptr_t> T System_Collections_Generic_IEnumeratorSystem_Object_get_Current() {
		return ((T (*)(UpdateScreenSizeRoutined101*))(Il2CppBase() + 0x2C1A884))(this);
	}
	template <typename T = void> T System_Collections_IEnumerator_Reset() {
		return ((T (*)(UpdateScreenSizeRoutined101*))(Il2CppBase() + 0x2C1A88C))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(UpdateScreenSizeRoutined101*))(Il2CppBase() + 0x2C1A8F4))(this);
	}

};

}
