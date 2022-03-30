#pragma once
#include "Il2Cpp/Il2Cpp.h"

class BuffStatue
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BuffStatue"));
	}

	template <typename T = float> T& cd() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& audio_clip() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& this_time() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = uintptr_t> T get_buff_img() {
		return ((T (*)(BuffStatue*))(Il2CppBase() + 0x45A0060))(this);
	}
	template <typename T = void> T UseSkill() {
		return ((T (*)(BuffStatue*))(Il2CppBase() + 0x45A00F0))(this);
	}
	template <typename T = void> T OnCoolDown() {
		return ((T (*)(BuffStatue*))(Il2CppBase() + 0x45A014C))(this);
	}
	template <typename T = void> T OnMount(bool isMount) {
		return ((T (*)(BuffStatue*, bool))(Il2CppBase() + 0x45A02E0))(this, isMount);
	}

};

}
