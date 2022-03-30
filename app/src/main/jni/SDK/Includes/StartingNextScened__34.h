#pragma once
#include "Il2Cpp/Il2Cpp.h"

class StartingNextScened34
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<StartingNextScene>d__34"));
	}

	template <typename T = int32_t> T& 1__state() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& 2__current() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> T& sceneName() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = void> T System_IDisposable_Dispose() {
		return ((T (*)(StartingNextScened34*))(Il2CppBase() + 0x41D4A1C))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(StartingNextScened34*))(Il2CppBase() + 0x41D4A20))(this);
	}
	template <typename T = uintptr_t> T System_Collections_Generic_IEnumeratorSystem_Object_get_Current() {
		return ((T (*)(StartingNextScened34*))(Il2CppBase() + 0x41D4DC4))(this);
	}
	template <typename T = void> T System_Collections_IEnumerator_Reset() {
		return ((T (*)(StartingNextScened34*))(Il2CppBase() + 0x41D4DCC))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(StartingNextScened34*))(Il2CppBase() + 0x41D4E34))(this);
	}

};

}
