#pragma once
#include "Il2Cpp/Il2Cpp.h"

class RestoreArmorModel
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RestoreArmorModel"));
	}

	template <typename T = uintptr_t> T& armor() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& effectPrefab() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = float> T& initDelay() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = float> T& afterDelay() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& effectTransform() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = Il2CppVector3> T& effectPositionOffset() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& clip() {
		return *(T*)((uintptr_t)this + 0x58);
	}


};

}
