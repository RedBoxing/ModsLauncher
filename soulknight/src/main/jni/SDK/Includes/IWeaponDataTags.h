#pragma once
#include "Il2Cpp/Il2Cpp.h"

class IWeaponDataTags
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IWeaponDataTags"));
	}


	template <typename T = Il2CppList<Il2CppString*>*> T get_CustomTags() {
		return ((T (*)(IWeaponDataTags*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T HandleTags(Il2CppList<Il2CppString*>* customTags) {
		return ((T (*)(IWeaponDataTags*, Il2CppList<Il2CppString*>*))(Il2CppBase() + 0x0))(this, customTags);
	}

};

}
