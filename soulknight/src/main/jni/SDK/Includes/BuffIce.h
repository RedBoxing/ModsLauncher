#pragma once
#include "Il2Cpp/Il2Cpp.h"

class BuffIce
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BuffIce"));
	}

	template <typename T = uintptr_t> T& ice_end() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = uintptr_t> T& audio_clip() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = uintptr_t> T& onBuffEnd() {
		return *(T*)((uintptr_t)this + 0x80);
	}

	template <typename T = void> T SetSourceObject(uintptr_t value) {
		return ((T (*)(BuffIce*, uintptr_t))(Il2CppBase() + 0x4599758))(this, value);
	}
	template <typename T = uintptr_t> T GetSourceObject() {
		return ((T (*)(BuffIce*))(Il2CppBase() + 0x4599CE8))(this);
	}
	template <typename T = void> T BuffEnd() {
		return ((T (*)(BuffIce*))(Il2CppBase() + 0x4599D48))(this);
	}
	template <typename T = void> T Disappear() {
		return ((T (*)(BuffIce*))(Il2CppBase() + 0x4599FC8))(this);
	}
	template <typename T = void> T iFixBaseProxy_BuffEnd() {
		return ((T (*)(BuffIce*))(Il2CppBase() + 0x459A09C))(this);
	}

};

}
