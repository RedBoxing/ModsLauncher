#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace UI.MultiRemote {

class RoomInfoView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "UI.MultiRemote", "RoomInfoView"));
	}

	template <typename T = uintptr_t> T& badassImg() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& bossrushImg() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& roomInfoRoot() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& roomInfoText() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& factorImgs() {
		return *(T*)((uintptr_t)this + 0x38);
	}

	template <typename T = void> T UpdateInfoText(Il2CppString* content) {
		return ((T (*)(RoomInfoView*, Il2CppString*))(Il2CppBase() + 0x441AAD8))(this, content);
	}
	template <typename T = void> T SetEmpty() {
		return ((T (*)(RoomInfoView*))(Il2CppBase() + 0x441AB8C))(this);
	}
	template <typename T = void> T UpdateRoomInfo(uintptr_t roomInfo) {
		return ((T (*)(RoomInfoView*, uintptr_t))(Il2CppBase() + 0x441ABF0))(this, roomInfo);
	}

};

}
