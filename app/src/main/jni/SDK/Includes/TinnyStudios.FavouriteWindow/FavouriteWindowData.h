#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace TinnyStudios.FavouriteWindow {

class FavouriteWindowData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "TinnyStudios.FavouriteWindow", "FavouriteWindowData"));
	}

	template <typename T = Il2CppString*> T& Name() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& References() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& AllReferences() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& Favourites() {
		return *(T*)((uintptr_t)this + 0x28);
	}


};

}
