#pragma once
#include "Il2Cpp/Il2Cpp.h"

class MapModel
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MapModel"));
	}

	template <typename T = uintptr_t> T& size() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppList<int32_t>*> T& data() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& extraData() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& index() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = int32_t> T get_Item(int32_t x, int32_t y) {
		return ((T (*)(MapModel*, int32_t, int32_t))(Il2CppBase() + 0x425BC4C))(this, x, y);
	}
	template <typename T = void> T set_Item(int32_t x, int32_t y, int32_t value) {
		return ((T (*)(MapModel*, int32_t, int32_t, int32_t))(Il2CppBase() + 0x425BD1C))(this, x, y, value);
	}

};

}
