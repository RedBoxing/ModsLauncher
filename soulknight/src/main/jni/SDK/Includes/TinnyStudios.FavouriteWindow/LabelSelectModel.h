#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace TinnyStudios.FavouriteWindow {

class LabelSelectModel
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "TinnyStudios.FavouriteWindow", "LabelSelectModel"));
	}

	template <typename T = uintptr_t> T& Reference() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& Index() {
		return *(T*)((uintptr_t)this + 0x18);
	}


};

}
