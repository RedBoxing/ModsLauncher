#pragma once
#include "Il2Cpp/Il2Cpp.h"

class PermissionItem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PermissionItem"));
	}

	template <typename T = Il2CppString*> T& Channel() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& Key() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& Platform() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppString*> T& Title() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppString*> T& Content() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = bool> T& isForce() {
		return *(T*)((uintptr_t)this + 0x38);
	}

	template <typename T = bool> T FitCurrectPlatform() {
		return ((T (*)(PermissionItem*))(Il2CppBase() + 0x45C108C))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T GetPermissionItems() {
		return ((T (*)(void *))(Il2CppBase() + 0x45BE738))(0);
	}

};

}
