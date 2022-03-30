#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace WallGenerate {

class TileModel
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "WallGenerate", "TileModel"));
	}

	template <typename T = uintptr_t> T& tile() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& weight() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = int32_t> T get_Weight() {
		return ((T (*)(TileModel*))(Il2CppBase() + 0x4365640))(this);
	}

};

}
