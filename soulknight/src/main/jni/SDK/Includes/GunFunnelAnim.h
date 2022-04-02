#pragma once
#include "Il2Cpp/Il2Cpp.h"

class GunFunnelAnim
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GunFunnelAnim"));
	}

	template <typename T = Il2CppString*> T& attackAnimTriggerName() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& animator() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = void> T Start() {
		return ((T (*)(GunFunnelAnim*))(Il2CppBase() + 0x2497988))(this);
	}
	template <typename T = void> T TriggerAtkAnim() {
		return ((T (*)(GunFunnelAnim*))(Il2CppBase() + 0x2497A8C))(this);
	}

};

}
