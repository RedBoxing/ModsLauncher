#pragma once
#include "Il2Cpp/Il2Cpp.h"

class EmoticonMessage
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "EmoticonMessage"));
	}

	template <typename T = int32_t> T& emoticonId() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& netId() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& seed() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T Serialize(uintptr_t writer) {
		return ((T (*)(EmoticonMessage*, uintptr_t))(Il2CppBase() + 0x22AEA18))(this, writer);
	}
	template <typename T = void> T Deserialize(uintptr_t reader) {
		return ((T (*)(EmoticonMessage*, uintptr_t))(Il2CppBase() + 0x22AEB0C))(this, reader);
	}
	template <typename T = void> T iFixBaseProxy_Serialize(uintptr_t P0) {
		return ((T (*)(EmoticonMessage*, uintptr_t))(Il2CppBase() + 0x22AEC00))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_Deserialize(uintptr_t P0) {
		return ((T (*)(EmoticonMessage*, uintptr_t))(Il2CppBase() + 0x22AEC08))(this, P0);
	}

};

}
