#pragma once
#include "Il2Cpp/Il2Cpp.h"

class ObjectSting
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ObjectSting"));
	}

	template <typename T = int32_t> T& damage() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& offet_time() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = float> T& show_time() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& hide_time() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = bool> T& hit_player() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = bool> T& hit_enemy() {
		return *(T*)((uintptr_t)this + 0x29);
	}
	template <typename T = bool> T& show_sting() {
		return *(T*)((uintptr_t)this + 0x2A);
	}
	template <typename T = bool> T& can_hit() {
		return *(T*)((uintptr_t)this + 0x2B);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& hit_list() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& ding_sr() {
		return *(T*)((uintptr_t)this + 0x38);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(ObjectSting*))(Il2CppBase() + 0x1DC532C))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(ObjectSting*))(Il2CppBase() + 0x1DC5488))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(ObjectSting*))(Il2CppBase() + 0x1DC560C))(this);
	}
	template <typename T = void> T TurnCanHit() {
		return ((T (*)(ObjectSting*))(Il2CppBase() + 0x1DC5C80))(this);
	}
	template <typename T = void> T ShowSting() {
		return ((T (*)(ObjectSting*))(Il2CppBase() + 0x1DC5D24))(this);
	}
	template <typename T = void> T HideSting() {
		return ((T (*)(ObjectSting*))(Il2CppBase() + 0x1DC5DEC))(this);
	}
	template <typename T = void> T AddDelegate() {
		return ((T (*)(ObjectSting*))(Il2CppBase() + 0x1DC550C))(this);
	}
	template <typename T = void> T RemoveDelegate() {
		return ((T (*)(ObjectSting*))(Il2CppBase() + 0x1DC5EB4))(this);
	}
	template <typename T = void> T OnGameStateChange(int32_t value) {
		return ((T (*)(ObjectSting*, int32_t))(Il2CppBase() + 0x1DC5FB4))(this, value);
	}

};

}
