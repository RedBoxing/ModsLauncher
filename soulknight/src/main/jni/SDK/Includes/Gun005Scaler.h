#pragma once
#include "Il2Cpp/Il2Cpp.h"

class Gun005Scaler
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "Gun005Scaler"));
	}

	template <typename T = uintptr_t> T& bow() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& anim() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& startSize() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = float> T& endSize() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = float> T& size() {
		return *(T*)((uintptr_t)this + 0x30);
	}

	template <typename T = void> T Start() {
		return ((T (*)(Gun005Scaler*))(Il2CppBase() + 0x462260C))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(Gun005Scaler*))(Il2CppBase() + 0x46226BC))(this);
	}

};

}
