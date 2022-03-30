#pragma once
#include "Il2Cpp/Il2Cpp.h"

class CloudSaveRoleIcon
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CloudSaveRoleIcon"));
	}

	template <typename T = uintptr_t> T& hero() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& icon() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& starsGroup() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(CloudSaveRoleIcon*))(Il2CppBase() + 0x1E83694))(this);
	}
	template <typename T = void> T SetInfo(uintptr_t gameData) {
		return ((T (*)(CloudSaveRoleIcon*, uintptr_t))(Il2CppBase() + 0x1E7FF58))(this, gameData);
	}

};

}
