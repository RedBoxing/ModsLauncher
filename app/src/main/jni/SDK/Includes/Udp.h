#pragma once
#include "Il2Cpp/Il2Cpp.h"

class Udp
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "Udp"));
	}

	template <typename T = int32_t> static T& kPort() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& _msgHandle() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& _iep() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = Il2CppString*> T& _m_ip() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = void*> T& m_queue() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& m_Lock() {
		return *(T*)((uintptr_t)this + 0x50);
	}

	template <typename T = void> T StartRecv(uintptr_t func) {
		return ((T (*)(Udp*, uintptr_t))(Il2CppBase() + 0x46273A4))(this, func);
	}
	template <typename T = void> T SendMsg(Il2CppString* ip, Il2CppArray<uintptr_t>* msg, uint32_t len) {
		return ((T (*)(Udp*, Il2CppString*, Il2CppArray<uintptr_t>*, uint32_t))(Il2CppBase() + 0x46275F0))(this, ip, msg, len);
	}
	template <typename T = void> T Broadcast(uintptr_t msg, Il2CppString* ip) {
		return ((T (*)(Udp*, uintptr_t, Il2CppString*))(Il2CppBase() + 0x46277B4))(this, msg, ip);
	}
	template <typename T = void> T Broadcast_1(uintptr_t msg) {
		return ((T (*)(Udp*, uintptr_t))(Il2CppBase() + 0x4627E3C))(this, msg);
	}
	template <typename T = void> T Broadcast_2(Il2CppArray<uintptr_t>* msg, uint32_t len, Il2CppString* ip) {
		return ((T (*)(Udp*, Il2CppArray<uintptr_t>*, uint32_t, Il2CppString*))(Il2CppBase() + 0x4627880))(this, msg, len, ip);
	}
	template <typename T = uintptr_t> T Broadcast_3(Il2CppArray<uintptr_t>* subIp, Il2CppArray<uintptr_t>* msg, uint32_t len) {
		return ((T (*)(Udp*, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*, uint32_t))(Il2CppBase() + 0x4627F2C))(this, subIp, msg, len);
	}
	template <typename T = void> T BeginRecv() {
		return ((T (*)(Udp*))(Il2CppBase() + 0x4627518))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(Udp*))(Il2CppBase() + 0x4628078))(this);
	}
	template <typename T = void> T InsertMsg(Il2CppString* ip, uintptr_t msg) {
		return ((T (*)(Udp*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x46289DC))(this, ip, msg);
	}
	template <typename T = void> T BeginRecvb__12_0(uintptr_t req) {
		return ((T (*)(Udp*, uintptr_t))(Il2CppBase() + 0x4628B94))(this, req);
	}

};

}
