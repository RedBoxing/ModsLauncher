#pragma once
#include "Il2Cpp/Il2Cpp.h"

class MyDiscovery
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MyDiscovery"));
	}

	template <typename T = Il2CppString*> T& enterIp() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uint32_t> static T& Msg_Sign() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = unsigned char> static T& Msg_Type_RoomInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = unsigned char> static T& Msg_Type_Discover() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = unsigned char> static T& Msg_Type_RoomDel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& m_net() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = bool> T& hasInit() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& coroScan() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& _room_info() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = void*> T& OnRecvRoomInfo() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = void*> T& OnLostRoomInfo() {
		return *(T*)((uintptr_t)this + 0x48);
	}

	template <typename T = Il2CppString*> static T get_NET_VERSION() {
		return ((T (*)(void *))(Il2CppBase() + 0x437D49C))(0);
	}
	template <typename T = Il2CppString*> static T LocNetVer() {
		return ((T (*)(void *))(Il2CppBase() + 0x437D4F0))(0);
	}
	template <typename T = Il2CppString*> static T get_REMOTE_VER() {
		return ((T (*)(void *))(Il2CppBase() + 0x437D574))(0);
	}
	template <typename T = Il2CppString*> static T RemoteVer() {
		return ((T (*)(void *))(Il2CppBase() + 0x437D5C8))(0);
	}
	template <typename T = bool> T get_hasInit() {
		return ((T (*)(MyDiscovery*))(Il2CppBase() + 0x437D64C))(this);
	}
	template <typename T = void> T set_hasInit(bool value) {
		return ((T (*)(MyDiscovery*, bool))(Il2CppBase() + 0x437D654))(this, value);
	}
	template <typename T = void> T Init() {
		return ((T (*)(MyDiscovery*))(Il2CppBase() + 0x437D660))(this);
	}
	template <typename T = void> T TcpSvr(uintptr_t ls) {
		return ((T (*)(MyDiscovery*, uintptr_t))(Il2CppBase() + 0x437D7D0))(this, ls);
	}
	template <typename T = void> T StartDiscovering() {
		return ((T (*)(MyDiscovery*))(Il2CppBase() + 0x437D908))(this);
	}
	template <typename T = void> T StopDiscovering() {
		return ((T (*)(MyDiscovery*))(Il2CppBase() + 0x437333C))(this);
	}
	template <typename T = void> T StopBroadcast() {
		return ((T (*)(MyDiscovery*))(Il2CppBase() + 0x4375C80))(this);
	}
	template <typename T = void> T BroadcastRoomInfo(uintptr_t info) {
		return ((T (*)(MyDiscovery*, uintptr_t))(Il2CppBase() + 0x436F67C))(this, info);
	}
	template <typename T = uintptr_t> T MakeMsg(unsigned char typ) {
		return ((T (*)(MyDiscovery*, unsigned char))(Il2CppBase() + 0x437DA20))(this, typ);
	}
	template <typename T = void> T _OnRecvUdp(Il2CppString* addr, uintptr_t recv) {
		return ((T (*)(MyDiscovery*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x437DB20))(this, addr, recv);
	}
	template <typename T = void> T CheckHost(Il2CppString* ip, void* cb) {
		return ((T (*)(MyDiscovery*, Il2CppString*, void*))(Il2CppBase() + 0x437DD28))(this, ip, cb);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(MyDiscovery*))(Il2CppBase() + 0x437DF8C))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(MyDiscovery*))(Il2CppBase() + 0x437E000))(this);
	}
	template <typename T = void> T SetOnRecvRoomInfo(void* v) {
		return ((T (*)(MyDiscovery*, void*))(Il2CppBase() + 0x43732C8))(this, v);
	}
	template <typename T = void> T SetOnLostRoomInfo(void* v) {
		return ((T (*)(MyDiscovery*, void*))(Il2CppBase() + 0x437E074))(this, v);
	}

};

}
