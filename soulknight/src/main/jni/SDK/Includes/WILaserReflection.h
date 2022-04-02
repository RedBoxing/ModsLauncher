#pragma once
#include "Il2Cpp/Il2Cpp.h"

class WILaserReflection
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "WILaserReflection"));
	}

	template <typename T = int32_t> T& reflect_add_num() {
		return *(T*)((uintptr_t)this + 0xDC);
	}

	template <typename T = void> T MakeEffect(bool isSeup) {
		return ((T (*)(WILaserReflection*, bool))(Il2CppBase() + 0x43602A4))(this, isSeup);
	}
	template <typename T = void> T RemoveEffect() {
		return ((T (*)(WILaserReflection*))(Il2CppBase() + 0x436072C))(this);
	}
	template <typename T = void> T iFixBaseProxy_MakeEffect(bool P0) {
		return ((T (*)(WILaserReflection*, bool))(Il2CppBase() + 0x43608A0))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_RemoveEffect() {
		return ((T (*)(WILaserReflection*))(Il2CppBase() + 0x43608AC))(this);
	}

};

}
