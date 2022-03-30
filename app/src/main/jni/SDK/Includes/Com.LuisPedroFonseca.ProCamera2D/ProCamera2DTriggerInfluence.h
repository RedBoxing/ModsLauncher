#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace Com.LuisPedroFonseca.ProCamera2D {

class ProCamera2DTriggerInfluence
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Com.LuisPedroFonseca.ProCamera2D", "ProCamera2DTriggerInfluence"));
	}

	template <typename T = Il2CppString*> static T& TriggerName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& FocusPoint() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = float> T& InfluenceSmoothness() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = float> T& ExclusiveInfluencePercentage() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = Il2CppVector2> T& _influence() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = Il2CppVector2> T& _velocity() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = Il2CppVector3> T& _exclusivePointVelocity() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = Il2CppVector3> T& _tempExclusivePoint() {
		return *(T*)((uintptr_t)this + 0xD4);
	}

	template <typename T = void> T Start() {
		return ((T (*)(ProCamera2DTriggerInfluence*))(Il2CppBase() + 0x2C2FF58))(this);
	}
	template <typename T = void> T EnteredTrigger() {
		return ((T (*)(ProCamera2DTriggerInfluence*))(Il2CppBase() + 0x2C30098))(this);
	}
	template <typename T = void> T ExitedTrigger() {
		return ((T (*)(ProCamera2DTriggerInfluence*))(Il2CppBase() + 0x2C301C8))(this);
	}
	template <typename T = uintptr_t> T InsideTriggerRoutine() {
		return ((T (*)(ProCamera2DTriggerInfluence*))(Il2CppBase() + 0x2C30114))(this);
	}
	template <typename T = uintptr_t> T OutsideTriggerRoutine() {
		return ((T (*)(ProCamera2DTriggerInfluence*))(Il2CppBase() + 0x2C30244))(this);
	}
	template <typename T = void> T iFixBaseProxy_EnteredTrigger() {
		return ((T (*)(ProCamera2DTriggerInfluence*))(Il2CppBase() + 0x2C303C4))(this);
	}
	template <typename T = void> T iFixBaseProxy_ExitedTrigger() {
		return ((T (*)(ProCamera2DTriggerInfluence*))(Il2CppBase() + 0x2C303CC))(this);
	}

};

}
