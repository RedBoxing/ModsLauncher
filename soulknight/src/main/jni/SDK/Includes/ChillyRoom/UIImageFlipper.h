#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace ChillyRoom {

class UIImageFlipper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ChillyRoom", "UIImageFlipper"));
	}

	template <typename T = bool> T& fliping() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppVector2> T& offsetPosition() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppVector2> T& deltaPosition() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppVector2> T& deltaDrag() {
		return *(T*)((uintptr_t)this + 0x2C);
	}

	template <typename T = void> T PageDown(bool isUp) {
		return ((T (*)(UIImageFlipper*, bool))(Il2CppBase() + 0x1E6EE24))(this, isUp);
	}
	template <typename T = Il2CppVector3> T GetImagePosition(int32_t i) {
		return ((T (*)(UIImageFlipper*, int32_t))(Il2CppBase() + 0x1E702AC))(this, i);
	}
	template <typename T = uintptr_t> T GetImageColor(bool isFront) {
		return ((T (*)(UIImageFlipper*, bool))(Il2CppBase() + 0x1E7043C))(this, isFront);
	}
	template <typename T = void> T OnDrag(uintptr_t eventData) {
		return ((T (*)(UIImageFlipper*, uintptr_t))(Il2CppBase() + 0x1E70524))(this, eventData);
	}
	template <typename T = void> T OnEndDrag(uintptr_t eventData) {
		return ((T (*)(UIImageFlipper*, uintptr_t))(Il2CppBase() + 0x1E70630))(this, eventData);
	}
	template <typename T = void> T ResetPositionAndColor() {
		return ((T (*)(UIImageFlipper*))(Il2CppBase() + 0x1E6D528))(this);
	}
	template <typename T = void> T PageDownb__1_1() {
		return ((T (*)(UIImageFlipper*))(Il2CppBase() + 0x1E70734))(this);
	}

};

}
