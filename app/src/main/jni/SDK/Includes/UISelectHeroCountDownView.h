#pragma once
#include "Il2Cpp/Il2Cpp.h"

class UISelectHeroCountDownView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UISelectHeroCountDownView"));
	}

	template <typename T = uintptr_t> T& cdText() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> static T& commonCd() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = bool> T get_IsHost() {
		return ((T (*)(UISelectHeroCountDownView*))(Il2CppBase() + 0x423BF88))(this);
	}
	template <typename T = void> T OnEnable() {
		return ((T (*)(UISelectHeroCountDownView*))(Il2CppBase() + 0x423C000))(this);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(UISelectHeroCountDownView*))(Il2CppBase() + 0x423C284))(this);
	}
	template <typename T = void> T OnUpdateCDTime(uintptr_t e) {
		return ((T (*)(UISelectHeroCountDownView*, uintptr_t))(Il2CppBase() + 0x423C368))(this, e);
	}
	template <typename T = void> T UpdateCDTime(int32_t restTime) {
		return ((T (*)(UISelectHeroCountDownView*, int32_t))(Il2CppBase() + 0x423C19C))(this, restTime);
	}

};

}
