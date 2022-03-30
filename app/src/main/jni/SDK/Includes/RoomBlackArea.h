#pragma once
#include "Il2Cpp/Il2Cpp.h"

class RoomBlackArea
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RoomBlackArea"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& black_area() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& light_color() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& dark_color() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = float> T& fade_dur_time() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> static T& onDoWhite() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = void> T Start() {
		return ((T (*)(RoomBlackArea*))(Il2CppBase() + 0x1BF3AD8))(this);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(RoomBlackArea*))(Il2CppBase() + 0x1BF3DD8))(this);
	}
	template <typename T = void> T OnDoWhite() {
		return ((T (*)(RoomBlackArea*))(Il2CppBase() + 0x1BF3F84))(this);
	}
	template <typename T = void> T DoBlack() {
		return ((T (*)(RoomBlackArea*))(Il2CppBase() + 0x1BF3BB4))(this);
	}
	template <typename T = void> static T add_onDoWhite(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x1BF3CDC))(0, value);
	}
	template <typename T = void> static T remove_onDoWhite(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x1BF3E88))(0, value);
	}
	template <typename T = void> static T DoWhite() {
		return ((T (*)(void *))(Il2CppBase() + 0x1BF40AC))(0);
	}

};

}
