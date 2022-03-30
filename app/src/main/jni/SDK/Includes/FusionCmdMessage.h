#pragma once
#include "Il2Cpp/Il2Cpp.h"

class FusionCmdMessage
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "FusionCmdMessage"));
	}

	template <typename T = int32_t> T& transformId() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& netId() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& weaponTfIds() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T Serialize(uintptr_t writer) {
		return ((T (*)(FusionCmdMessage*, uintptr_t))(Il2CppBase() + 0x442BC48))(this, writer);
	}
	template <typename T = void> T Deserialize(uintptr_t reader) {
		return ((T (*)(FusionCmdMessage*, uintptr_t))(Il2CppBase() + 0x442BD3C))(this, reader);
	}
	template <typename T = void> T iFixBaseProxy_Serialize(uintptr_t P0) {
		return ((T (*)(FusionCmdMessage*, uintptr_t))(Il2CppBase() + 0x442BE30))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_Deserialize(uintptr_t P0) {
		return ((T (*)(FusionCmdMessage*, uintptr_t))(Il2CppBase() + 0x442BE38))(this, P0);
	}

};

}
