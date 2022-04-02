#pragma once
#include "Il2Cpp/Il2Cpp.h"

class IPriestSkill3Pointer
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IPriestSkill3Pointer"));
	}


	template <typename T = void> T Init(uintptr_t controller) {
		return ((T (*)(IPriestSkill3Pointer*, uintptr_t))(Il2CppBase() + 0x0))(this, controller);
	}
	template <typename T = void> T Flush(int32_t maxCount) {
		return ((T (*)(IPriestSkill3Pointer*, int32_t))(Il2CppBase() + 0x0))(this, maxCount);
	}
	template <typename T = void> T AddShadow(int32_t maxCount) {
		return ((T (*)(IPriestSkill3Pointer*, int32_t))(Il2CppBase() + 0x0))(this, maxCount);
	}
	template <typename T = void> T ReleaseShadow(int32_t maxCount) {
		return ((T (*)(IPriestSkill3Pointer*, int32_t))(Il2CppBase() + 0x0))(this, maxCount);
	}
	template <typename T = void> T ToNormalMode(int32_t maxCount) {
		return ((T (*)(IPriestSkill3Pointer*, int32_t))(Il2CppBase() + 0x0))(this, maxCount);
	}
	template <typename T = void> T ToShadowMode(int32_t maxCount) {
		return ((T (*)(IPriestSkill3Pointer*, int32_t))(Il2CppBase() + 0x0))(this, maxCount);
	}

};

}
