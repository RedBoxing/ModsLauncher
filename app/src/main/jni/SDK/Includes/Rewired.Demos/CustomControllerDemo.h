#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace Rewired.Demos {

class CustomControllerDemo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Rewired.Demos", "CustomControllerDemo"));
	}

	template <typename T = int32_t> T& playerId() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> T& controllerTag() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = bool> T& useUpdateCallbacks() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& buttonCount() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = int32_t> T& axisCount() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& axisValues() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& buttonValues() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& joysticks() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& buttons() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& controller() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = bool> T& initialized() {
		return *(T*)((uintptr_t)this + 0x60);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(CustomControllerDemo*))(Il2CppBase() + 0x2062C50))(this);
	}
	template <typename T = void> T Initialize() {
		return ((T (*)(CustomControllerDemo*))(Il2CppBase() + 0x2062CDC))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(CustomControllerDemo*))(Il2CppBase() + 0x2063084))(this);
	}
	template <typename T = void> T OnInputSourceUpdate() {
		return ((T (*)(CustomControllerDemo*))(Il2CppBase() + 0x2063148))(this);
	}
	template <typename T = void> T GetSourceAxisValues() {
		return ((T (*)(CustomControllerDemo*))(Il2CppBase() + 0x20631D4))(this);
	}
	template <typename T = void> T GetSourceButtonValues() {
		return ((T (*)(CustomControllerDemo*))(Il2CppBase() + 0x2063350))(this);
	}
	template <typename T = void> T SetControllerAxisValues() {
		return ((T (*)(CustomControllerDemo*))(Il2CppBase() + 0x2063478))(this);
	}
	template <typename T = void> T SetControllerButtonValues() {
		return ((T (*)(CustomControllerDemo*))(Il2CppBase() + 0x206357C))(this);
	}
	template <typename T = float> T GetAxisValueCallback(int32_t index) {
		return ((T (*)(CustomControllerDemo*, int32_t))(Il2CppBase() + 0x2063678))(this, index);
	}
	template <typename T = bool> T GetButtonValueCallback(int32_t index) {
		return ((T (*)(CustomControllerDemo*, int32_t))(Il2CppBase() + 0x2063740))(this, index);
	}

};

}
