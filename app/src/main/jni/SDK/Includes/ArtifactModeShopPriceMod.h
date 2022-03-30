#pragma once
#include "Il2Cpp/Il2Cpp.h"

class ArtifactModeShopPriceMod
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ArtifactModeShopPriceMod"));
	}


	template <typename T = int32_t> T Modify(int32_t oldPrice) {
		return ((T (*)(ArtifactModeShopPriceMod*, int32_t))(Il2CppBase() + 0x1CA805C))(this, oldPrice);
	}

};

}
