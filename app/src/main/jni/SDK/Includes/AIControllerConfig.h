#pragma once
#include "Il2Cpp/Il2Cpp.h"

class AIControllerConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AIControllerConfig"));
	}

	template <typename T = Il2CppVector3> T& positionOffset() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppVector2> T& warnSize() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppVector2> T& fallSize() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& fallLayer() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = Il2CppString*> T& bodyImgPath() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& fallEffect() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& showEffect() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = Il2CppVector3> T& effectOffset() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = float> T& fallDuration() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = float> T& fallThreshold() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = int32_t> T& fallMaxDamage() {
		return *(T*)((uintptr_t)this + 0x5C);
	}


};

}
