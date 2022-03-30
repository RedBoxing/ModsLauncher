#pragma once
#include "Il2Cpp/Il2Cpp.h"

class DefaultWeaponMaterial
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DefaultWeaponMaterial"));
	}

	template <typename T = uintptr_t> static T& _data() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppDictionary<uintptr_t, float>*> T& meterialFactor() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = Il2CppDictionary<uintptr_t, float>*> T& extraMeterialFactor() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = Il2CppDictionary<uintptr_t, Il2CppArray<uintptr_t>*>*> T& defaultMaterial() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& baseMaterialNumber() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& extraMaterialNumber() {
		return *(T*)((uintptr_t)this + 0x78);
	}

	template <typename T = uintptr_t> static T get_data() {
		return ((T (*)(void *))(Il2CppBase() + 0x42E45BC))(0);
	}
	template <typename T = Il2CppDictionary<uintptr_t, int32_t>*> T GetMaterials(uintptr_t type) {
		return ((T (*)(DefaultWeaponMaterial*, uintptr_t))(Il2CppBase() + 0x42E46B0))(this, type);
	}

};

}
