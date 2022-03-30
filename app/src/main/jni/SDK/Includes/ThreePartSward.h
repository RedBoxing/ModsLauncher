#pragma once
#include "Il2Cpp/Il2Cpp.h"

class ThreePartSward
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ThreePartSward"));
	}

	template <typename T = uintptr_t> T& sward1() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& sward2() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& sward3() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& sward4() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> T& duration() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = int32_t> T& virbot() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = int32_t> T& randomness() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = float> T& strength() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = Il2CppVector3> T& strengthVector3() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& gun006() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& gController() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uintptr_t> T& animator() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = uintptr_t> T& ga() {
		return *(T*)((uintptr_t)this + 0x70);
	}

	template <typename T = void> T Start() {
		return ((T (*)(ThreePartSward*))(Il2CppBase() + 0x1E42780))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(ThreePartSward*))(Il2CppBase() + 0x1E42940))(this);
	}
	template <typename T = void> T Attack3() {
		return ((T (*)(ThreePartSward*))(Il2CppBase() + 0x1E4299C))(this);
	}

};

}
