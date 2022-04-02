#pragma once
#include "Il2Cpp/Il2Cpp.h"

class SyncBuffMessage
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SyncBuffMessage"));
	}

	template <typename T = uintptr_t> T& Type() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& Buff() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& Index() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T Serialize(uintptr_t writer) {
		return ((T (*)(SyncBuffMessage*, uintptr_t))(Il2CppBase() + 0x18C15D4))(this, writer);
	}
	template <typename T = void> T Deserialize(uintptr_t reader) {
		return ((T (*)(SyncBuffMessage*, uintptr_t))(Il2CppBase() + 0x18C16C8))(this, reader);
	}
	template <typename T = void> T iFixBaseProxy_Serialize(uintptr_t P0) {
		return ((T (*)(SyncBuffMessage*, uintptr_t))(Il2CppBase() + 0x18C17BC))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_Deserialize(uintptr_t P0) {
		return ((T (*)(SyncBuffMessage*, uintptr_t))(Il2CppBase() + 0x18C17C4))(this, P0);
	}

};

}
