#pragma once
#include "Il2Cpp/Il2Cpp.h"

class SelectHeroMessage
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SelectHeroMessage"));
	}

	template <typename T = uintptr_t> T& hero() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& skinIdx() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& skillIdx() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uint32_t> T& netId() {
		return *(T*)((uintptr_t)this + 0x1C);
	}

	template <typename T = void> T Serialize(uintptr_t writer) {
		return ((T (*)(SelectHeroMessage*, uintptr_t))(Il2CppBase() + 0x18218AC))(this, writer);
	}
	template <typename T = void> T Deserialize(uintptr_t reader) {
		return ((T (*)(SelectHeroMessage*, uintptr_t))(Il2CppBase() + 0x18219B0))(this, reader);
	}
	template <typename T = void> T iFixBaseProxy_Serialize(uintptr_t P0) {
		return ((T (*)(SelectHeroMessage*, uintptr_t))(Il2CppBase() + 0x1821AB4))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_Deserialize(uintptr_t P0) {
		return ((T (*)(SelectHeroMessage*, uintptr_t))(Il2CppBase() + 0x1821ABC))(this, P0);
	}

};

}
