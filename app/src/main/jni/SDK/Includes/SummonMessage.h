#pragma once
#include "Il2Cpp/Il2Cpp.h"

class SummonMessage
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SummonMessage"));
	}

	template <typename T = int32_t> T& NetId() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& CreatureName() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppVector3> T& Position() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppString*> T& EffectName() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = bool> T& IsServant() {
		return *(T*)((uintptr_t)this + 0x38);
	}

	template <typename T = void> T Serialize(uintptr_t writer) {
		return ((T (*)(SummonMessage*, uintptr_t))(Il2CppBase() + 0x42A6C40))(this, writer);
	}
	template <typename T = void> T Deserialize(uintptr_t reader) {
		return ((T (*)(SummonMessage*, uintptr_t))(Il2CppBase() + 0x42A6D58))(this, reader);
	}
	template <typename T = void> T iFixBaseProxy_Serialize(uintptr_t P0) {
		return ((T (*)(SummonMessage*, uintptr_t))(Il2CppBase() + 0x42A6E74))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_Deserialize(uintptr_t P0) {
		return ((T (*)(SummonMessage*, uintptr_t))(Il2CppBase() + 0x42A6E7C))(this, P0);
	}

};

}
