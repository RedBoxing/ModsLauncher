#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace RGScript.Other.CloudSave {

class UITrick
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "RGScript.Other.CloudSave", "UITrick"));
	}

	template <typename T = uintptr_t> T& UnClickSprite() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& ClickSprite() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& ShowOrHideGa() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& ClearOrCipherInputField() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& button() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& SpriteImage() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& _state() {
		return *(T*)((uintptr_t)this + 0x48);
	}

	template <typename T = uintptr_t> T get_MyState() {
		return ((T (*)(UITrick*))(Il2CppBase() + 0x44E6064))(this);
	}
	template <typename T = void> T set_MyState(uintptr_t value) {
		return ((T (*)(UITrick*, uintptr_t))(Il2CppBase() + 0x44E60C4))(this, value);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(UITrick*))(Il2CppBase() + 0x44E6538))(this);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(UITrick*))(Il2CppBase() + 0x44E66F8))(this);
	}
	template <typename T = void> T HandleTrick() {
		return ((T (*)(UITrick*))(Il2CppBase() + 0x44E675C))(this);
	}
	template <typename T = void> T HandleState(uintptr_t state) {
		return ((T (*)(UITrick*, uintptr_t))(Il2CppBase() + 0x44E6144))(this, state);
	}

};

}
