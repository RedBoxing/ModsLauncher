#pragma once
#include "Il2Cpp/Il2Cpp.h"

class UIHeroInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UIHeroInfo"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& img_list() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& text_list() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& hero_info() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& hero_value() {
		return *(T*)((uintptr_t)this + 0x30);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(UIHeroInfo*))(Il2CppBase() + 0x4336B64))(this);
	}
	template <typename T = void> T GetChoice(int32_t heroIndex, int32_t level) {
		return ((T (*)(UIHeroInfo*, int32_t, int32_t))(Il2CppBase() + 0x4336E08))(this, heroIndex, level);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetHeroProperties(int32_t heroIndex, int32_t level) {
		return ((T (*)(UIHeroInfo*, int32_t, int32_t))(Il2CppBase() + 0x4337134))(this, heroIndex, level);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetValueBarLength(int32_t heroIndex, Il2CppArray<uintptr_t>* properties) {
		return ((T (*)(UIHeroInfo*, int32_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x43374CC))(this, heroIndex, properties);
	}

};

}
