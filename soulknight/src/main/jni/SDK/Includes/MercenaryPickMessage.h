#pragma once
#include "Il2Cpp/Il2Cpp.h"

class MercenaryPickMessage
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MercenaryPickMessage"));
	}

	template <typename T = int32_t> T& mercenaryId() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& weaponId() {
		return *(T*)((uintptr_t)this + 0x14);
	}

	template <typename T = void> T Serialize(uintptr_t writer) {
		return ((T (*)(MercenaryPickMessage*, uintptr_t))(Il2CppBase() + 0x41E7A5C))(this, writer);
	}
	template <typename T = void> T Deserialize(uintptr_t reader) {
		return ((T (*)(MercenaryPickMessage*, uintptr_t))(Il2CppBase() + 0x41E7B40))(this, reader);
	}
	template <typename T = void> T iFixBaseProxy_Serialize(uintptr_t P0) {
		return ((T (*)(MercenaryPickMessage*, uintptr_t))(Il2CppBase() + 0x41E7C24))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_Deserialize(uintptr_t P0) {
		return ((T (*)(MercenaryPickMessage*, uintptr_t))(Il2CppBase() + 0x41E7C2C))(this, P0);
	}

};

}
