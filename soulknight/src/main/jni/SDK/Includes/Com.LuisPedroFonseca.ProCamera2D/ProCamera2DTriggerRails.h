#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace Com.LuisPedroFonseca.ProCamera2D {

class ProCamera2DTriggerRails
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Com.LuisPedroFonseca.ProCamera2D", "ProCamera2DTriggerRails"));
	}

	template <typename T = Il2CppString*> static T& TriggerName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& ProCamera2DRails() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& Mode() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = float> T& TransitionDuration() {
		return *(T*)((uintptr_t)this + 0xB4);
	}

	template <typename T = void> T Start() {
		return ((T (*)(ProCamera2DTriggerRails*))(Il2CppBase() + 0x2C315EC))(this);
	}
	template <typename T = void> T EnteredTrigger() {
		return ((T (*)(ProCamera2DTriggerRails*))(Il2CppBase() + 0x2C31784))(this);
	}
	template <typename T = void> T iFixBaseProxy_EnteredTrigger() {
		return ((T (*)(ProCamera2DTriggerRails*))(Il2CppBase() + 0x2C318AC))(this);
	}

};

}
