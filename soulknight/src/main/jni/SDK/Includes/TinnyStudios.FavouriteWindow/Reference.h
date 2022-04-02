#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace TinnyStudios.FavouriteWindow {

class Reference
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "TinnyStudios.FavouriteWindow", "Reference"));
	}

	template <typename T = uintptr_t> T& Object() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& Expand() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> T& Favourited() {
		return *(T*)((uintptr_t)this + 0x19);
	}
	template <typename T = bool> T& IndexFolder() {
		return *(T*)((uintptr_t)this + 0x1A);
	}
	template <typename T = Il2CppString*> T& Path() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& Color() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppList<Il2CppString*>*> T& Files() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = int32_t> T& LabelIndex() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& Children() {
		return *(T*)((uintptr_t)this + 0x48);
	}


};

}
