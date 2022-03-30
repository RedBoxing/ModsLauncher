#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace FancyScrollView.InfiniteList {

class Cell
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "FancyScrollView.InfiniteList", "Cell"));
	}

	template <typename T = uintptr_t> T& animator() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& image() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& button() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = float> T& currentPosition() {
		return *(T*)((uintptr_t)this + 0x40);
	}

	template <typename T = int32_t> T get_index() {
		return ((T (*)(Cell*))(Il2CppBase() + 0x44746C4))(this);
	}
	template <typename T = void> T Initialize() {
		return ((T (*)(Cell*))(Il2CppBase() + 0x4474768))(this);
	}
	template <typename T = void> T UpdateContent(uintptr_t itemData) {
		return ((T (*)(Cell*, uintptr_t))(Il2CppBase() + 0x447485C))(this, itemData);
	}
	template <typename T = void> T UpdatePosition(float position) {
		return ((T (*)(Cell*, float))(Il2CppBase() + 0x4474954))(this, position);
	}
	template <typename T = void> T OnEnable() {
		return ((T (*)(Cell*))(Il2CppBase() + 0x4474A88))(this);
	}
	template <typename T = void> T Initializeb__6_0() {
		return ((T (*)(Cell*))(Il2CppBase() + 0x4474B44))(this);
	}
	template <typename T = void> T iFixBaseProxy_Initialize() {
		return ((T (*)(Cell*))(Il2CppBase() + 0x4474BE0))(this);
	}

};

}
