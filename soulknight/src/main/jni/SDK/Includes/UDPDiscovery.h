#pragma once
#include "Il2Cpp/Il2Cpp.h"

class UDPDiscovery
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UDPDiscovery"));
	}

	template <typename T = uintptr_t> T& m_client() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& m_discovery() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& coroScan() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = void*> T& m_nets() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppString*> T& m_key() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = int32_t> T& kHostPort() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& m_host() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = Il2CppString*> T& m_hostMsg() {
		return *(T*)((uintptr_t)this + 0x50);
	}

	template <typename T = void> T StartDiscovering(Il2CppString* key, uintptr_t ptr) {
		return ((T (*)(UDPDiscovery*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x44191C0))(this, key, ptr);
	}
	template <typename T = void> T StopDiscovering() {
		return ((T (*)(UDPDiscovery*))(Il2CppBase() + 0x44196EC))(this);
	}
	template <typename T = Il2CppList<Il2CppString*>*> T SubnetAddrs() {
		return ((T (*)(UDPDiscovery*))(Il2CppBase() + 0x4419270))(this);
	}
	template <typename T = uintptr_t> T Scan(Il2CppList<Il2CppString*>* addrList) {
		return ((T (*)(UDPDiscovery*, Il2CppList<Il2CppString*>*))(Il2CppBase() + 0x441960C))(this, addrList);
	}
	template <typename T = void> T ScanRecv(uintptr_t resp) {
		return ((T (*)(UDPDiscovery*, uintptr_t))(Il2CppBase() + 0x44197A4))(this, resp);
	}
	template <typename T = void> T HostRecv(uintptr_t res) {
		return ((T (*)(UDPDiscovery*, uintptr_t))(Il2CppBase() + 0x4419CE8))(this, res);
	}
	template <typename T = void> T StartHost(Il2CppString* key, Il2CppString* msg) {
		return ((T (*)(UDPDiscovery*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x4419FC8))(this, key, msg);
	}
	template <typename T = void> T StopHost() {
		return ((T (*)(UDPDiscovery*))(Il2CppBase() + 0x441A1BC))(this);
	}

};

}
