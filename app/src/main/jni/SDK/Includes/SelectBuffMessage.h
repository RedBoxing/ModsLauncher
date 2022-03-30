#pragma once
#include "Il2Cpp/Il2Cpp.h"

class SelectBuffMessage
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SelectBuffMessage"));
	}

	template <typename T = Il2CppString*> T& path() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& buff_index() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T Serialize(uintptr_t writer) {
		return ((T (*)(SelectBuffMessage*, uintptr_t))(Il2CppBase() + 0x181FF10))(this, writer);
	}
	template <typename T = void> T Deserialize(uintptr_t reader) {
		return ((T (*)(SelectBuffMessage*, uintptr_t))(Il2CppBase() + 0x181FFF4))(this, reader);
	}
	template <typename T = void> T iFixBaseProxy_Serialize(uintptr_t P0) {
		return ((T (*)(SelectBuffMessage*, uintptr_t))(Il2CppBase() + 0x18200D8))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_Deserialize(uintptr_t P0) {
		return ((T (*)(SelectBuffMessage*, uintptr_t))(Il2CppBase() + 0x18200E0))(this, P0);
	}

};

}
