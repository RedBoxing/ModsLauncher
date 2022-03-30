#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace TinnyStudios.FavouriteWindow {

class ESearchFilterType
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "TinnyStudios.FavouriteWindow", "ESearchFilterType"));
	}

	template <typename T = int32_t> T& value__() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> static T& Name() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& Type() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
