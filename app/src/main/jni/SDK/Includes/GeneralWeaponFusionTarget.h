#pragma once
#include "Il2Cpp/Il2Cpp.h"

class GeneralWeaponFusionTarget
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GeneralWeaponFusionTarget"));
	}

	template <typename T = Il2CppDictionary<Il2CppString*, uintptr_t>*> T& fusionModels() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& sprites() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uintptr_t> T& hsvShader() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = Il2CppString*> T& shaderHueShiftField() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = Il2CppString*> T& weaponDataPrefix() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = uintptr_t> T& _weapon() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = int32_t> T& _shaderHueShiftFieldId() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = Il2CppString*> T& _sourceWeaponName() {
		return *(T*)((uintptr_t)this + 0x90);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(GeneralWeaponFusionTarget*))(Il2CppBase() + 0x443588C))(this);
	}
	template <typename T = void> T CopyFromWeapon(uintptr_t obj) {
		return ((T (*)(GeneralWeaponFusionTarget*, uintptr_t))(Il2CppBase() + 0x44359E0))(this, obj);
	}
	template <typename T = void> T FlushUIMaterial() {
		return ((T (*)(GeneralWeaponFusionTarget*))(Il2CppBase() + 0x4435DF4))(this);
	}
	template <typename T = void> T FusionFrom(Il2CppArray<uintptr_t>* sourceWeaponNames) {
		return ((T (*)(GeneralWeaponFusionTarget*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4435B60))(this, sourceWeaponNames);
	}
	template <typename T = Il2CppList<Il2CppString*>*> T get_CustomTags() {
		return ((T (*)(GeneralWeaponFusionTarget*))(Il2CppBase() + 0x4435F4C))(this);
	}
	template <typename T = void> T HandleTags(Il2CppList<Il2CppString*>* customTags) {
		return ((T (*)(GeneralWeaponFusionTarget*, Il2CppList<Il2CppString*>*))(Il2CppBase() + 0x443605C))(this, customTags);
	}

};

}
