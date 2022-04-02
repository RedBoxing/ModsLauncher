#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace NewDynamicConfig {

class MultiGameConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "NewDynamicConfig", "MultiGameConfig"));
	}

	template <typename T = bool> T& CanChangeRoomName() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = Il2CppString*> T& ChangeRoomNameTips() {
		return *(T*)((uintptr_t)this + 0x48);
	}

	template <typename T = void> T ForceConfig() {
		return ((T (*)(MultiGameConfig*))(Il2CppBase() + 0x451F8DC))(this);
	}
	template <typename T = void> T iFixBaseProxy_ForceConfig() {
		return ((T (*)(MultiGameConfig*))(Il2CppBase() + 0x451F9C8))(this);
	}

};

}
