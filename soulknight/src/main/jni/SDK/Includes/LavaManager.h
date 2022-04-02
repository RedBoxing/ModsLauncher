#pragma once
#include "Il2Cpp/Il2Cpp.h"

class LavaManager
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "LavaManager"));
	}

	template <typename T = uintptr_t> static T& _instance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& riseSprites() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& lavaSprites() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& fallSprites() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& lavaRenderers() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& lavaCols() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = int32_t> T& _index() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = float> T& _intervel() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = float> T& _time() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = float> T& _cd() {
		return *(T*)((uintptr_t)this + 0x4C);
	}

	template <typename T = uintptr_t> static T GetManager() {
		return ((T (*)(void *))(Il2CppBase() + 0x425AF34))(0);
	}
	template <typename T = void> T Register(uintptr_t objectFireFloor) {
		return ((T (*)(LavaManager*, uintptr_t))(Il2CppBase() + 0x425B0B4))(this, objectFireFloor);
	}
	template <typename T = void> T Update() {
		return ((T (*)(LavaManager*))(Il2CppBase() + 0x425B1DC))(this);
	}
	template <typename T = void> T UpdateSprite() {
		return ((T (*)(LavaManager*))(Il2CppBase() + 0x425B2A4))(this);
	}

};

}
