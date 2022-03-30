#pragma once
#include "Il2Cpp/Il2Cpp.h"

class RoomInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RoomInfo"));
	}

	template <typename T = int64_t> T& gameId() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& isBadass() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& gameMode() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& factors() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = bool> T& isNewGame() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppString*> T& roomName() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppString*> T& gameVer() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = Il2CppString*> T& netVer() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = int32_t> T& initSampleSeed() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = int32_t> T& initMapSeed() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = int32_t> T& lastLevel() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uint16_t> T& curPlayerCount() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = uint16_t> T& maxPlayerCount() {
		return *(T*)((uintptr_t)this + 0x56);
	}
	template <typename T = bool> T& openGame() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = int32_t> T& multi_room_skin_index() {
		return *(T*)((uintptr_t)this + 0x5C);
	}

	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(RoomInfo*))(Il2CppBase() + 0x1BF7230))(this);
	}
	template <typename T = bool> T HasNormalFactor() {
		return ((T (*)(RoomInfo*))(Il2CppBase() + 0x1BF72C4))(this);
	}
	template <typename T = Il2CppString*> T iFixBaseProxy_ToString() {
		return ((T (*)(RoomInfo*))(Il2CppBase() + 0x1BF7380))(this);
	}

};

}
