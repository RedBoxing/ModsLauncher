#pragma once
#include "Il2Cpp/Il2Cpp.h"

class cDisplayClass01
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass0_1"));
	}

	template <typename T = float> T& in_room_x() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& the_room_width() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppVector3> T& temp_v3() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& rge() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = void> T Startb__1() {
		return ((T (*)(cDisplayClass01*))(Il2CppBase() + 0x1FE8900))(this);
	}

};

}
