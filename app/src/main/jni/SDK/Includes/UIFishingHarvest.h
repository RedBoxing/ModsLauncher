#pragma once
#include "Il2Cpp/Il2Cpp.h"

class UIFishingHarvest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UIFishingHarvest"));
	}

	template <typename T = uintptr_t> T& label_YOU_GOT() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& panel1() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uintptr_t> T& panel2() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = uintptr_t> T& itemSprite() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = uintptr_t> T& _panel() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = uintptr_t> T& onClose() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, uintptr_t>*> T& audioClips() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = bool> T& _canClose() {
		return *(T*)((uintptr_t)this + 0x90);
	}

	template <typename T = void> T SetHarvest(uintptr_t obj, bool succeed) {
		return ((T (*)(UIFishingHarvest*, uintptr_t, bool))(Il2CppBase() + 0x4330FE8))(this, obj, succeed);
	}
	template <typename T = void> T Start() {
		return ((T (*)(UIFishingHarvest*))(Il2CppBase() + 0x4331AD4))(this);
	}
	template <typename T = void> T OnClickAir() {
		return ((T (*)(UIFishingHarvest*))(Il2CppBase() + 0x4331C90))(this);
	}
	template <typename T = void> T Startb__9_0() {
		return ((T (*)(UIFishingHarvest*))(Il2CppBase() + 0x4331DC4))(this);
	}

};

}
