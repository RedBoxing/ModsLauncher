#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace Com.LuisPedroFonseca.ProCamera2D {

class ProCamera2DPointerInfluence
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Com.LuisPedroFonseca.ProCamera2D", "ProCamera2DPointerInfluence"));
	}

	template <typename T = Il2CppString*> static T& ExtensionName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> T& MaxHorizontalInfluence() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = float> T& MaxVerticalInfluence() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = float> T& InfluenceSmoothness() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = Il2CppVector2> T& _influence() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = Il2CppVector2> T& _velocity() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = int32_t> T& _prmOrder() {
		return *(T*)((uintptr_t)this + 0x74);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(ProCamera2DPointerInfluence*))(Il2CppBase() + 0x2C25F08))(this);
	}
	template <typename T = void> T OnReset() {
		return ((T (*)(ProCamera2DPointerInfluence*))(Il2CppBase() + 0x2C25F90))(this);
	}
	template <typename T = void> T PreMove(float deltaTime) {
		return ((T (*)(ProCamera2DPointerInfluence*, float))(Il2CppBase() + 0x2C26048))(this, deltaTime);
	}
	template <typename T = int32_t> T get_PrMOrder() {
		return ((T (*)(ProCamera2DPointerInfluence*))(Il2CppBase() + 0x2C262B8))(this);
	}
	template <typename T = void> T set_PrMOrder(int32_t value) {
		return ((T (*)(ProCamera2DPointerInfluence*, int32_t))(Il2CppBase() + 0x2C26318))(this, value);
	}
	template <typename T = void> T ApplyInfluence() {
		return ((T (*)(ProCamera2DPointerInfluence*))(Il2CppBase() + 0x2C260DC))(this);
	}
	template <typename T = void> T iFixBaseProxy_Awake() {
		return ((T (*)(ProCamera2DPointerInfluence*))(Il2CppBase() + 0x2C26518))(this);
	}
	template <typename T = void> T iFixBaseProxy_OnReset() {
		return ((T (*)(ProCamera2DPointerInfluence*))(Il2CppBase() + 0x2C26520))(this);
	}

};

}
