#pragma once
#include "Il2Cpp/Il2Cpp.h"

class PromotionInfo2Config
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PromotionInfo2Config"));
	}

	template <typename T = uintptr_t> T& promotionInfo2() {
		return *(T*)((uintptr_t)this + 0x40);
	}

	template <typename T = void> T ForceConfig() {
		return ((T (*)(PromotionInfo2Config*))(Il2CppBase() + 0x1BA10D4))(this);
	}
	template <typename T = void> T iFixBaseProxy_ForceConfig() {
		return ((T (*)(PromotionInfo2Config*))(Il2CppBase() + 0x1BA119C))(this);
	}

};

}
