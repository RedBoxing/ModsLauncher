#pragma once
#include "Il2Cpp/Il2Cpp.h"

class GunInitNecromancer
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GunInitNecromancer"));
	}

	template <typename T = int32_t> T& targetLayer() {
		return *(T*)((uintptr_t)this + 0x1B8);
	}

	template <typename T = void> T SpriteLayerSetting(int32_t target_layer, bool is_pet) {
		return ((T (*)(GunInitNecromancer*, int32_t, bool))(Il2CppBase() + 0x227113C))(this, target_layer, is_pet);
	}
	template <typename T = void> T SpriteLayerSetting_1(int32_t target_layer, Il2CppString* layer_name) {
		return ((T (*)(GunInitNecromancer*, int32_t, Il2CppString*))(Il2CppBase() + 0x2271294))(this, target_layer, layer_name);
	}
	template <typename T = void> T iFixBaseProxy_SpriteLayerSetting(int32_t P0, bool P1) {
		return ((T (*)(GunInitNecromancer*, int32_t, bool))(Il2CppBase() + 0x2271420))(this, P0, P1);
	}
	template <typename T = void> T iFixBaseProxy_SpriteLayerSetting_1(int32_t P0, Il2CppString* P1) {
		return ((T (*)(GunInitNecromancer*, int32_t, Il2CppString*))(Il2CppBase() + 0x227142C))(this, P0, P1);
	}

};

}
