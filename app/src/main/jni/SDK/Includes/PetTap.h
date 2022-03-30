#pragma once
#include "Il2Cpp/Il2Cpp.h"

class PetTap
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PetTap"));
	}

	template <typename T = uintptr_t> T& tap() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& tapPressed() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& tapAudio() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& spriteRenderer() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = bool> T& isPressed() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = bool> T& skinValid() {
		return *(T*)((uintptr_t)this + 0x39);
	}
	template <typename T = uintptr_t> T& click_collider() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = bool> T& touch_down() {
		return *(T*)((uintptr_t)this + 0x48);
	}

	template <typename T = void> T Start() {
		return ((T (*)(PetTap*))(Il2CppBase() + 0x438C82C))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(PetTap*))(Il2CppBase() + 0x438C930))(this);
	}
	template <typename T = void> T CheckClick() {
		return ((T (*)(PetTap*))(Il2CppBase() + 0x438CA58))(this);
	}
	template <typename T = void> T UnLockPet() {
		return ((T (*)(PetTap*))(Il2CppBase() + 0x438CEF8))(this);
	}
	template <typename T = void> T TapDown() {
		return ((T (*)(PetTap*))(Il2CppBase() + 0x438CFC0))(this);
	}
	template <typename T = void> T TapUp() {
		return ((T (*)(PetTap*))(Il2CppBase() + 0x438D020))(this);
	}
	template <typename T = void> T OnMouseDown() {
		return ((T (*)(PetTap*))(Il2CppBase() + 0x438CDCC))(this);
	}
	template <typename T = void> T OnMouseUp() {
		return ((T (*)(PetTap*))(Il2CppBase() + 0x438CE98))(this);
	}
	template <typename T = void> T OnSkinChanged(int32_t index) {
		return ((T (*)(PetTap*, int32_t))(Il2CppBase() + 0x438D080))(this, index);
	}

};

}
