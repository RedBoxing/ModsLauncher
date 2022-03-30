#pragma once
#include "Il2Cpp/Il2Cpp.h"

class DropPickable
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DropPickable"));
	}


	template <typename T = void> T Start() {
		return ((T (*)(DropPickable*))(Il2CppBase() + 0x42EF7CC))(this);
	}
	template <typename T = void> T FixedUpdate() {
		return ((T (*)(DropPickable*))(Il2CppBase() + 0x42EF8BC))(this);
	}
	template <typename T = void> T GetItem() {
		return ((T (*)(DropPickable*))(Il2CppBase() + 0x42EFD80))(this);
	}
	template <typename T = void> T iFixBaseProxy_GetItem() {
		return ((T (*)(DropPickable*))(Il2CppBase() + 0x42F031C))(this);
	}

};

}
