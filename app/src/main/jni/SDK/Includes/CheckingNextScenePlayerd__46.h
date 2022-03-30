#pragma once
#include "Il2Cpp/Il2Cpp.h"

class CheckingNextScenePlayerd46
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<CheckingNextScenePlayer>d__46"));
	}

	template <typename T = int32_t> T& 1__state() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& 2__current() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> T& targetScene() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& 8__1() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& 4__this() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = bool> T& allConnPlayerReady5__2() {
		return *(T*)((uintptr_t)this + 0x38);
	}

	template <typename T = void> T System_IDisposable_Dispose() {
		return ((T (*)(CheckingNextScenePlayerd46*))(Il2CppBase() + 0x41F4F18))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(CheckingNextScenePlayerd46*))(Il2CppBase() + 0x41F4F1C))(this);
	}
	template <typename T = uintptr_t> T System_Collections_Generic_IEnumeratorSystem_Object_get_Current() {
		return ((T (*)(CheckingNextScenePlayerd46*))(Il2CppBase() + 0x41F52C4))(this);
	}
	template <typename T = void> T System_Collections_IEnumerator_Reset() {
		return ((T (*)(CheckingNextScenePlayerd46*))(Il2CppBase() + 0x41F52CC))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(CheckingNextScenePlayerd46*))(Il2CppBase() + 0x41F5334))(this);
	}

};

}
