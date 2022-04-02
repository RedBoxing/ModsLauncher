#pragma once
#include "Il2Cpp/Il2Cpp.h"

class RelicEntranceMessage
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RelicEntranceMessage"));
	}

	template <typename T = int32_t> T& messageType() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& runeIndex() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& directionIndex() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& playerIndex() {
		return *(T*)((uintptr_t)this + 0x1C);
	}

	template <typename T = void> T Serialize(uintptr_t writer) {
		return ((T (*)(RelicEntranceMessage*, uintptr_t))(Il2CppBase() + 0x42B88A4))(this, writer);
	}
	template <typename T = void> T Deserialize(uintptr_t reader) {
		return ((T (*)(RelicEntranceMessage*, uintptr_t))(Il2CppBase() + 0x42B89A8))(this, reader);
	}
	template <typename T = void> T iFixBaseProxy_Serialize(uintptr_t P0) {
		return ((T (*)(RelicEntranceMessage*, uintptr_t))(Il2CppBase() + 0x42B8AAC))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_Deserialize(uintptr_t P0) {
		return ((T (*)(RelicEntranceMessage*, uintptr_t))(Il2CppBase() + 0x42B8AB4))(this, P0);
	}

};

}
