#pragma once
#include "Il2Cpp/Il2Cpp.h"

class CompositeAssultRifleTarget
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CompositeAssultRifleTarget"));
	}

	template <typename T = Il2CppDictionary<Il2CppString*, uintptr_t>*> T& fusionModels() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& sprite() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& uiHsvShader() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppString*> T& shaderHueShiftField() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& _weapon() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = int32_t> T& _shaderHueShiftId() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = Il2CppString*> T& _sourceWeaponName() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = Il2CppList<Il2CppString*>*> T& CustomTags() {
		return *(T*)((uintptr_t)this + 0x50);
	}

	template <typename T = void> T FusionFrom(Il2CppArray<uintptr_t>* sourceWeaponNames) {
		return ((T (*)(CompositeAssultRifleTarget*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x42754F0))(this, sourceWeaponNames);
	}
	template <typename T = Il2CppList<Il2CppString*>*> T get_CustomTags() {
		return ((T (*)(CompositeAssultRifleTarget*))(Il2CppBase() + 0x4275560))(this);
	}
	template <typename T = void> T HandleTags(Il2CppList<Il2CppString*>* customTags) {
		return ((T (*)(CompositeAssultRifleTarget*, Il2CppList<Il2CppString*>*))(Il2CppBase() + 0x4275568))(this, customTags);
	}

};

}
