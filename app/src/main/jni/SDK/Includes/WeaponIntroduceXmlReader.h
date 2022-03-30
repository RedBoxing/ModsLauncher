#pragma once
#include "Il2Cpp/Il2Cpp.h"

class WeaponIntroduceXmlReader
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "WeaponIntroduceXmlReader"));
	}

	template <typename T = uintptr_t> static T& xml_document() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = void> T Start() {
		return ((T (*)(WeaponIntroduceXmlReader*))(Il2CppBase() + 0x45F43D4))(this);
	}
	template <typename T = uintptr_t> T GetWeaponIntroduce(Il2CppString* weapon_id) {
		return ((T (*)(WeaponIntroduceXmlReader*, Il2CppString*))(Il2CppBase() + 0x45F458C))(this, weapon_id);
	}

};

}
