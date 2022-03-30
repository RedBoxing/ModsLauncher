#pragma once
#include "Il2Cpp/Il2Cpp.h"

class SkillEyeLaserModel
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SkillEyeLaserModel"));
	}

	template <typename T = uintptr_t> T& audio() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& layserInfo() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = float> T& startAngle() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = float> T& endAngle() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = float> T& initStayDuration() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = float> T& duration() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uintptr_t> T& leftEyePos() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& rightEyePos() {
		return *(T*)((uintptr_t)this + 0x50);
	}


};

}
