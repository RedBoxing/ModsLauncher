#pragma once
#include "Il2Cpp/Il2Cpp.h"

class GetAllComps
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GetAllComps"));
	}

	template <typename T = uintptr_t> T& target() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> T& recursive() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = void> T GetAllCompsName() {
		return ((T (*)(GetAllComps*))(Il2CppBase() + 0x4438D40))(this);
	}
	template <typename T = void> T LogAllComps(uintptr_t obj) {
		return ((T (*)(GetAllComps*, uintptr_t))(Il2CppBase() + 0x4438E0C))(this, obj);
	}
	template <typename T = void> T LogAllCompsInChildren(uintptr_t parent) {
		return ((T (*)(GetAllComps*, uintptr_t))(Il2CppBase() + 0x4439190))(this, parent);
	}
	template <typename T = void> T LogComp(Il2CppString* objName, Il2CppString* compName) {
		return ((T (*)(GetAllComps*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x443909C))(this, objName, compName);
	}

};

}
