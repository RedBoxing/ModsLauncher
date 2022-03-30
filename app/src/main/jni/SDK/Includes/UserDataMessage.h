#pragma once
#include "Il2Cpp/Il2Cpp.h"

class UserDataMessage
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UserDataMessage"));
	}

	template <typename T = int32_t> T& NetId() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& Data() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T Serialize(uintptr_t writer) {
		return ((T (*)(UserDataMessage*, uintptr_t))(Il2CppBase() + 0x4401F70))(this, writer);
	}
	template <typename T = void> T Deserialize(uintptr_t reader) {
		return ((T (*)(UserDataMessage*, uintptr_t))(Il2CppBase() + 0x4402054))(this, reader);
	}
	template <typename T = void> T iFixBaseProxy_Serialize(uintptr_t P0) {
		return ((T (*)(UserDataMessage*, uintptr_t))(Il2CppBase() + 0x4402138))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_Deserialize(uintptr_t P0) {
		return ((T (*)(UserDataMessage*, uintptr_t))(Il2CppBase() + 0x4402140))(this, P0);
	}

};

}
