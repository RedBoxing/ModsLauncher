#pragma once
#include "Il2Cpp/Il2Cpp.h"

class HalloweenCapsuleGhost
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "HalloweenCapsuleGhost"));
	}

	template <typename T = float> T& checkRadius() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& animator() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppString*> T& animIdOut() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppString*> T& animIdIn() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = float> T& outSettingTime() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = float> T& inSettingTime() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = float> T& _settingTime() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = bool> T& _isOut() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _colliderBuffer() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = void*> T& _controllerCache() {
		return *(T*)((uintptr_t)this + 0x50);
	}

	template <typename T = void> T FixedUpdate() {
		return ((T (*)(HalloweenCapsuleGhost*))(Il2CppBase() + 0x1A305D8))(this);
	}
	template <typename T = void> T OnDrawGizmosSelected() {
		return ((T (*)(HalloweenCapsuleGhost*))(Il2CppBase() + 0x1A3093C))(this);
	}

};

}
