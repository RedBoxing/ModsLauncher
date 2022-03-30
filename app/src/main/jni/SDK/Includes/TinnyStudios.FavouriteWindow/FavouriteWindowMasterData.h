#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace TinnyStudios.FavouriteWindow {

class FavouriteWindowMasterData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "TinnyStudios.FavouriteWindow", "FavouriteWindowMasterData"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& Labels() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> T& RefreshInPlayMode() {
		return *(T*)((uintptr_t)this + 0x20);
	}


};

}
