#pragma once
#include "Il2Cpp/Il2Cpp.h"

class AnimationRealTimed4
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<AnimationRealTime>d__4"));
	}

	template <typename T = int32_t> T& 1__state() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& 2__current() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& animeTime() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = void*> T& percentageHandler() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = float> T& startTime5__2() {
		return *(T*)((uintptr_t)this + 0x30);
	}

	template <typename T = void> T System_IDisposable_Dispose() {
		return ((T (*)(AnimationRealTimed4*))(Il2CppBase() + 0x456B0FC))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(AnimationRealTimed4*))(Il2CppBase() + 0x456B100))(this);
	}
	template <typename T = uintptr_t> T System_Collections_Generic_IEnumeratorSystem_Object_get_Current() {
		return ((T (*)(AnimationRealTimed4*))(Il2CppBase() + 0x456B208))(this);
	}
	template <typename T = void> T System_Collections_IEnumerator_Reset() {
		return ((T (*)(AnimationRealTimed4*))(Il2CppBase() + 0x456B210))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(AnimationRealTimed4*))(Il2CppBase() + 0x456B278))(this);
	}

};

}
