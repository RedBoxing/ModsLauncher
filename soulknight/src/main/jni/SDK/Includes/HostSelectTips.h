#pragma once
#include "Il2Cpp/Il2Cpp.h"

class HostSelectTips
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "HostSelectTips"));
	}

	template <typename T = uintptr_t> T& bg() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& hostRoot() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& hostText() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& hostTips() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& hostCdText() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& clientRoot() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& hostStateText() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& clientTips() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& clientCdText() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& miniBg() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uintptr_t> T& minihostCdText() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = uintptr_t> T& miniClientCdText() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = uintptr_t> static T& _inst() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = bool> static T HasInstance() {
		return ((T (*)(void *))(Il2CppBase() + 0x4205E9C))(0);
	}
	template <typename T = bool> T get_IsHost() {
		return ((T (*)(HostSelectTips*))(Il2CppBase() + 0x4205F54))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(HostSelectTips*))(Il2CppBase() + 0x4205FCC))(this);
	}
	template <typename T = void> static T ShowHostSelectTips() {
		return ((T (*)(void *))(Il2CppBase() + 0x4206194))(0);
	}
	template <typename T = void> static T Hide() {
		return ((T (*)(void *))(Il2CppBase() + 0x4206478))(0);
	}
	template <typename T = void> static T Show(bool mini) {
		return ((T (*)(void *, bool))(Il2CppBase() + 0x4206580))(0, mini);
	}
	template <typename T = void> T OnEnable() {
		return ((T (*)(HostSelectTips*))(Il2CppBase() + 0x4206834))(this);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(HostSelectTips*))(Il2CppBase() + 0x4206BF8))(this);
	}
	template <typename T = void> T OnHostEnterMultiRoom(uintptr_t e) {
		return ((T (*)(HostSelectTips*, uintptr_t))(Il2CppBase() + 0x4206CDC))(this, e);
	}
	template <typename T = void> T OnChoseSkinEnter(uintptr_t e) {
		return ((T (*)(HostSelectTips*, uintptr_t))(Il2CppBase() + 0x4206D84))(this, e);
	}
	template <typename T = void> T ClientUpdateHostState() {
		return ((T (*)(HostSelectTips*))(Il2CppBase() + 0x4206920))(this);
	}
	template <typename T = void> T ShowMiniCD() {
		return ((T (*)(HostSelectTips*))(Il2CppBase() + 0x42066C8))(this);
	}

};

}
