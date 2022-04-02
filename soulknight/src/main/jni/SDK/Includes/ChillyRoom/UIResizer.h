#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace ChillyRoom {

class UIResizer
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ChillyRoom", "UIResizer"));
	}

	template <typename T = bool> T& isResizing() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& rectTransform() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppVector2> T& sizeDelta() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppVector3> T& positionDelta() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppVector2> T& targetSize() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = Il2CppVector3> T& targetPosition() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = float> T& speed() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& onResized() {
		return *(T*)((uintptr_t)this + 0x58);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(UIResizer*))(Il2CppBase() + 0x1E71C7C))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(UIResizer*))(Il2CppBase() + 0x1E71D14))(this);
	}
	template <typename T = void> T Resize(uintptr_t from, uintptr_t to, uintptr_t onResized) {
		return ((T (*)(UIResizer*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x1E69588))(this, from, to, onResized);
	}
	template <typename T = uintptr_t> T Resizing() {
		return ((T (*)(UIResizer*))(Il2CppBase() + 0x1E71D70))(this);
	}

};

}
