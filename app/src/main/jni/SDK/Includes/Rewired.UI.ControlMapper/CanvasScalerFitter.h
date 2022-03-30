#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace Rewired.UI.ControlMapper {

class CanvasScalerFitter
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Rewired.UI.ControlMapper", "CanvasScalerFitter"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& breakPoints() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& canvasScaler() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& screenWidth() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& screenHeight() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& ScreenSizeChanged() {
		return *(T*)((uintptr_t)this + 0x30);
	}

	template <typename T = void> T OnEnable() {
		return ((T (*)(CanvasScalerFitter*))(Il2CppBase() + 0x1E8BE30))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(CanvasScalerFitter*))(Il2CppBase() + 0x1E8BEE4))(this);
	}
	template <typename T = void> T UpdateSize() {
		return ((T (*)(CanvasScalerFitter*))(Il2CppBase() + 0x1E8BF90))(this);
	}

};

}
