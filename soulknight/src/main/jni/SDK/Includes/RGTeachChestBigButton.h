#pragma once
#include "Il2Cpp/Il2Cpp.h"

class RGTeachChestBigButton
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RGTeachChestBigButton"));
	}

	template <typename T = uintptr_t> T& sprite_ide() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& sprite_click() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& sprite_render() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& button_index() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& the_chest() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& other() {
		return *(T*)((uintptr_t)this + 0x40);
	}

	template <typename T = void> T Start() {
		return ((T (*)(RGTeachChestBigButton*))(Il2CppBase() + 0x43E4C64))(this);
	}
	template <typename T = void> T OnTriggerEnter2D(uintptr_t other) {
		return ((T (*)(RGTeachChestBigButton*, uintptr_t))(Il2CppBase() + 0x43E4D5C))(this, other);
	}
	template <typename T = void> T OnTriggerExit2D(uintptr_t other) {
		return ((T (*)(RGTeachChestBigButton*, uintptr_t))(Il2CppBase() + 0x43E4FA0))(this, other);
	}

};

}
