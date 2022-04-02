#pragma once
#include "Il2Cpp/Il2Cpp.h"

class ItemTriggerMessage
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ItemTriggerMessage"));
	}

	template <typename T = int32_t> T& transformId() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& netId() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppString*> T& ext_info() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T Serialize(uintptr_t writer) {
		return ((T (*)(ItemTriggerMessage*, uintptr_t))(Il2CppBase() + 0x219D8E0))(this, writer);
	}
	template <typename T = void> T Deserialize(uintptr_t reader) {
		return ((T (*)(ItemTriggerMessage*, uintptr_t))(Il2CppBase() + 0x219D9D4))(this, reader);
	}
	template <typename T = void> T iFixBaseProxy_Serialize(uintptr_t P0) {
		return ((T (*)(ItemTriggerMessage*, uintptr_t))(Il2CppBase() + 0x219DAC8))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_Deserialize(uintptr_t P0) {
		return ((T (*)(ItemTriggerMessage*, uintptr_t))(Il2CppBase() + 0x219DAD0))(this, P0);
	}

};

}
