#pragma once
#include "Il2Cpp/Il2Cpp.h"

class ConfigModel
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ConfigModel"));
	}

	template <typename T = Il2CppString*> T& id() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& driedFishAmount() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& previewSprite() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppString*> T& localizationKey() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& textColor() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = float> T& imageScale() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = Il2CppVector2> T& position() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = Il2CppString*> T& rewardType() {
		return *(T*)((uintptr_t)this + 0x50);
	}

	template <typename T = void*> T get_RewardTypeDropDownList() {
		return ((T (*)(ConfigModel*))(Il2CppBase() + 0x447BE50))(this);
	}

};

}
