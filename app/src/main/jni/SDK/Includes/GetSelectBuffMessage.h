#pragma once
#include "Il2Cpp/Il2Cpp.h"

class GetSelectBuffMessage
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GetSelectBuffMessage"));
	}

	template <typename T = int32_t> T& selectBuff() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& selectGrid() {
		return *(T*)((uintptr_t)this + 0x14);
	}

	template <typename T = void> T Serialize(uintptr_t writer) {
		return ((T (*)(GetSelectBuffMessage*, uintptr_t))(Il2CppBase() + 0x44395EC))(this, writer);
	}
	template <typename T = void> T Deserialize(uintptr_t reader) {
		return ((T (*)(GetSelectBuffMessage*, uintptr_t))(Il2CppBase() + 0x44396D0))(this, reader);
	}
	template <typename T = void> T iFixBaseProxy_Serialize(uintptr_t P0) {
		return ((T (*)(GetSelectBuffMessage*, uintptr_t))(Il2CppBase() + 0x44397B4))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_Deserialize(uintptr_t P0) {
		return ((T (*)(GetSelectBuffMessage*, uintptr_t))(Il2CppBase() + 0x44397BC))(this, P0);
	}

};

}
