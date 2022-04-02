#pragma once
#include "Il2Cpp/Il2Cpp.h"

class WIBulletModifyProssessor
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "WIBulletModifyProssessor"));
	}

	template <typename T = Il2CppDictionary<Il2CppString*, uintptr_t>*> static T& processorDic() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> static T& hasInit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = bool> static T hasProcessor(uintptr_t weapon) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x435E9E4))(0, weapon);
	}
	template <typename T = void> static T MakeEffect(uintptr_t bulletModify, uintptr_t weapon) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x435EAE8))(0, bulletModify, weapon);
	}
	template <typename T = void> static T RemoveEffect(uintptr_t bulletModify, uintptr_t weapon) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x435ED60))(0, bulletModify, weapon);
	}

};

}
