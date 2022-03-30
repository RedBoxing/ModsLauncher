#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace VfxHelper {

class VfxScaleObject
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "VfxHelper", "VfxScaleObject"));
	}

	template <typename T = float> T& startScale() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& endScale() {
		return *(T*)((uintptr_t)this + 0x1C);
	}

	template <typename T = void> T OnStart(uintptr_t creator) {
		return ((T (*)(VfxScaleObject*, uintptr_t))(Il2CppBase() + 0x4359C1C))(this, creator);
	}
	template <typename T = void> T OnFinish(uintptr_t creator) {
		return ((T (*)(VfxScaleObject*, uintptr_t))(Il2CppBase() + 0x4359D40))(this, creator);
	}

};

}
