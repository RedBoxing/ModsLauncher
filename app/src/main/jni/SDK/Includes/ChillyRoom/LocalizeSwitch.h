#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace ChillyRoom {

class LocalizeSwitch
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ChillyRoom", "LocalizeSwitch"));
	}

	template <typename T = uintptr_t> T& cnObject() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& enObject() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(LocalizeSwitch*))(Il2CppBase() + 0x187AA9C))(this);
	}
	template <typename T = bool> T IsChinese() {
		return ((T (*)(LocalizeSwitch*))(Il2CppBase() + 0x187ABF0))(this);
	}

};

}
