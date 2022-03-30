#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace RGScript.UI.InfiniteList {

class SkinCell
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "RGScript.UI.InfiniteList", "SkinCell"));
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
	template <typename T = uintptr_t> T& lightBackground() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& darkBackground() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& silverFrame() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& goldFrame() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& silverStar() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uintptr_t> T& goldStar() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = uintptr_t> T& _lockImage() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = uintptr_t> T& _redPoint() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = uintptr_t> T& _bg() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& _frame() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& _star() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = float> T& _currentPosition() {
		return *(T*)((uintptr_t)this + 0x98);
	}

	template <typename T = void> T Initialize() {
		return ((T (*)(SkinCell*))(Il2CppBase() + 0x44FB114))(this);
	}
	template <typename T = void> T UpdateContent(uintptr_t itemData) {
		return ((T (*)(SkinCell*, uintptr_t))(Il2CppBase() + 0x44FB35C))(this, itemData);
	}
	template <typename T = void> T UpdatePosition(float position) {
		return ((T (*)(SkinCell*, float))(Il2CppBase() + 0x44FB738))(this, position);
	}
	template <typename T = void> T OnEnable() {
		return ((T (*)(SkinCell*))(Il2CppBase() + 0x44FB86C))(this);
	}
	template <typename T = void> T Initializeb__15_0() {
		return ((T (*)(SkinCell*))(Il2CppBase() + 0x44FB928))(this);
	}
	template <typename T = void> T iFixBaseProxy_Initialize() {
		return ((T (*)(SkinCell*))(Il2CppBase() + 0x44FB9C4))(this);
	}

};

}
