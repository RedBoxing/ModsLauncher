#pragma once
#include "Il2Cpp/Il2Cpp.h"

class LimitCanvas
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "LimitCanvas"));
	}

	template <typename T = uintptr_t> T& activateOnOrientation() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& mode() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = bool> static T& is_ipx() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = void*> T& LimitSafeAreaEvent() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& canvasSizeX() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = float> T& screenRatio() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& rectTrans() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppVector2> T& prevAnchorMin() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = Il2CppVector2> T& originAnchorMax() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = Il2CppVector2> T& originAnchorMin() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = Il2CppVector2> T& originDeltaSize() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = Il2CppVector2> T& originOffsetMin() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = Il2CppVector2> T& originOffsetMax() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = bool> T& needAdjust() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = int32_t> T& frame_count() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = uintptr_t> static T& Orientation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = bool> T get_IsNotOffsetMode() {
		return ((T (*)(LimitCanvas*))(Il2CppBase() + 0x4261FFC))(this);
	}
	template <typename T = void> T add_LimitSafeAreaEvent(void* value) {
		return ((T (*)(LimitCanvas*, void*))(Il2CppBase() + 0x4262064))(this, value);
	}
	template <typename T = void> T remove_LimitSafeAreaEvent(void* value) {
		return ((T (*)(LimitCanvas*, void*))(Il2CppBase() + 0x4262150))(this, value);
	}
	template <typename T = Il2CppRect> T GetSafeArea() {
		return ((T (*)(LimitCanvas*))(Il2CppBase() + 0x426223C))(this);
	}
	template <typename T = void> T EnableSimIPX() {
		return ((T (*)(LimitCanvas*))(Il2CppBase() + 0x4262974))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(LimitCanvas*))(Il2CppBase() + 0x4262A24))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(LimitCanvas*))(Il2CppBase() + 0x4262C68))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(LimitCanvas*))(Il2CppBase() + 0x4263158))(this);
	}
	template <typename T = void> T UpdateOffset(Il2CppRect safeArea) {
		return ((T (*)(LimitCanvas*, Il2CppRect))(Il2CppBase() + 0x4263584))(this, safeArea);
	}
	template <typename T = int32_t> static T GetAndroidCutOutHeight() {
		return ((T (*)(void *))(Il2CppBase() + 0x42626C8))(0);
	}
	template <typename T = int32_t> static T GetAndroidStatusBarHeight() {
		return ((T (*)(void *))(Il2CppBase() + 0x426241C))(0);
	}

};

}
