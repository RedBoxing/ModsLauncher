#pragma once
#include "Il2Cpp/Il2Cpp.h"

class TSAssassin
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TSAssassin"));
	}

	template <typename T = uintptr_t> T& normal_color_mat() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& phantoms() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = int32_t> T& phantomsIndex() {
		return *(T*)((uintptr_t)this + 0x68);
	}

	template <typename T = int32_t> T get_maxPhantom() {
		return ((T (*)(TSAssassin*))(Il2CppBase() + 0x18C44C0))(this);
	}
	template <typename T = int32_t> T get_skinIndex() {
		return ((T (*)(TSAssassin*))(Il2CppBase() + 0x18C4534))(this);
	}
	template <typename T = void> T RoleSkill() {
		return ((T (*)(TSAssassin*))(Il2CppBase() + 0x18C45A8))(this);
	}
	template <typename T = uintptr_t> T CreatePhantom() {
		return ((T (*)(TSAssassin*))(Il2CppBase() + 0x18C4834))(this);
	}
	template <typename T = int32_t> T iFixBaseProxy_get_skinIndex() {
		return ((T (*)(TSAssassin*))(Il2CppBase() + 0x18C4984))(this);
	}
	template <typename T = void> T iFixBaseProxy_RoleSkill() {
		return ((T (*)(TSAssassin*))(Il2CppBase() + 0x18C498C))(this);
	}

};

}
