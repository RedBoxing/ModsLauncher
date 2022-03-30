#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace Com.LuisPedroFonseca.ProCamera2D {

class BasePC2D
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Com.LuisPedroFonseca.ProCamera2D", "BasePC2D"));
	}

	template <typename T = uintptr_t> T& ProCamera2D() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = void*> T& Vector3H() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = void*> T& Vector3V() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = void*> T& Vector3D() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = void*> T& VectorHV() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = void*> T& VectorHVD() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& _transform() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = bool> T& _enabled() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = int32_t> T& _drawGizmosCounter() {
		return *(T*)((uintptr_t)this + 0x54);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(BasePC2D*))(Il2CppBase() + 0x20786C0))(this);
	}
	template <typename T = void> T OnEnable() {
		return ((T (*)(BasePC2D*))(Il2CppBase() + 0x20793D0))(this);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(BasePC2D*))(Il2CppBase() + 0x2079430))(this);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(BasePC2D*))(Il2CppBase() + 0x2079618))(this);
	}
	template <typename T = void> T OnReset() {
		return ((T (*)(BasePC2D*))(Il2CppBase() + 0x2079678))(this);
	}
	template <typename T = void> T Enable() {
		return ((T (*)(BasePC2D*))(Il2CppBase() + 0x20789A4))(this);
	}
	template <typename T = void> T Disable() {
		return ((T (*)(BasePC2D*))(Il2CppBase() + 0x2079490))(this);
	}
	template <typename T = void> T ResetAxisFunctions() {
		return ((T (*)(BasePC2D*))(Il2CppBase() + 0x2078AF8))(this);
	}

};

}
