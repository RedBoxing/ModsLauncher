#pragma once
#include "Il2Cpp/Il2Cpp.h"

class IShopPriceModifier
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IShopPriceModifier"));
	}


	template <typename T = int32_t> T Modify(int32_t oldPrice) {
		return ((T (*)(IShopPriceModifier*, int32_t))(Il2CppBase() + 0x0))(this, oldPrice);
	}

};

}
