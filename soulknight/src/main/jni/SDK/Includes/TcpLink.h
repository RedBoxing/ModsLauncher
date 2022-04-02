#pragma once
#include "Il2Cpp/Il2Cpp.h"

class TcpLink
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TcpLink"));
	}

	template <typename T = int32_t> static T& kNetBufferSize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> T& m_ip() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uint16_t> T& m_port() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& m_socket() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& m_recvBuf() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& m_sendBuf() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = bool> T& m_bCanSend() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = bool> T& m_bEnableReconnect() {
		return *(T*)((uintptr_t)this + 0x39);
	}
	template <typename T = bool> T& m_isConnected() {
		return *(T*)((uintptr_t)this + 0x3A);
	}
	template <typename T = uintptr_t> T& m_disconnectCallback() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& m_connectCallback() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& m_recvMsgCallback() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& _sendLock() {
		return *(T*)((uintptr_t)this + 0x58);
	}

	template <typename T = bool> T get_IsConnected() {
		return ((T (*)(TcpLink*))(Il2CppBase() + 0x43B9DC0))(this);
	}
	template <typename T = void> T Connect(Il2CppString* ip, uint16_t port, uintptr_t resultCallback) {
		return ((T (*)(TcpLink*, Il2CppString*, uint16_t, uintptr_t))(Il2CppBase() + 0x43B9E20))(this, ip, port, resultCallback);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(TcpLink*))(Il2CppBase() + 0x43BA0B0))(this);
	}
	template <typename T = void> T BeginRecvSocket() {
		return ((T (*)(TcpLink*))(Il2CppBase() + 0x43BA160))(this);
	}
	template <typename T = void> T OnRecvDoneIO(int32_t bytes) {
		return ((T (*)(TcpLink*, int32_t))(Il2CppBase() + 0x43BA530))(this, bytes);
	}
	template <typename T = void> T SendMsg(Il2CppArray<uintptr_t>* msg, uint16_t size) {
		return ((T (*)(TcpLink*, Il2CppArray<uintptr_t>*, uint16_t))(Il2CppBase() + 0x43BA6C4))(this, msg, size);
	}
	template <typename T = void> T SendBuf(Il2CppArray<uintptr_t>* buf) {
		return ((T (*)(TcpLink*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x43BA9B8))(this, buf);
	}
	template <typename T = void> T OnSendDoneIO(int32_t bytesSend) {
		return ((T (*)(TcpLink*, int32_t))(Il2CppBase() + 0x43BAB08))(this, bytesSend);
	}
	template <typename T = void> T SendUdpMsg(Il2CppArray<uintptr_t>* src, uint16_t size) {
		return ((T (*)(TcpLink*, Il2CppArray<uintptr_t>*, uint16_t))(Il2CppBase() + 0x43BAC48))(this, src, size);
	}
	template <typename T = void> T SendReliablyMsg(Il2CppArray<uintptr_t>* src, uint16_t size) {
		return ((T (*)(TcpLink*, Il2CppArray<uintptr_t>*, uint16_t))(Il2CppBase() + 0x43BACCC))(this, src, size);
	}
	template <typename T = void> T BeginSendSocket() {
		return ((T (*)(TcpLink*))(Il2CppBase() + 0x43BA834))(this);
	}
	template <typename T = void> T OnException(uintptr_t e) {
		return ((T (*)(TcpLink*, uintptr_t))(Il2CppBase() + 0x43BA374))(this, e);
	}
	template <typename T = void> T OnNetLost() {
		return ((T (*)(TcpLink*))(Il2CppBase() + 0x43BAD50))(this);
	}
	template <typename T = void> T Close() {
		return ((T (*)(TcpLink*))(Il2CppBase() + 0x43BAF08))(this);
	}
	template <typename T = void> T SetAutoReconnect(bool b) {
		return ((T (*)(TcpLink*, bool))(Il2CppBase() + 0x43BAFC4))(this, b);
	}
	template <typename T = void> T SetDisconnectCallback(uintptr_t callback) {
		return ((T (*)(TcpLink*, uintptr_t))(Il2CppBase() + 0x43BB03C))(this, callback);
	}
	template <typename T = void> T SetRecvMsgCallback(uintptr_t callback) {
		return ((T (*)(TcpLink*, uintptr_t))(Il2CppBase() + 0x43BB0B0))(this, callback);
	}
	template <typename T = void> T BeginRecvSocketb__16_0(uintptr_t asyncResult) {
		return ((T (*)(TcpLink*, uintptr_t))(Il2CppBase() + 0x43BB1DC))(this, asyncResult);
	}
	template <typename T = void> T BeginSendSocketb__24_0(uintptr_t asyncResult) {
		return ((T (*)(TcpLink*, uintptr_t))(Il2CppBase() + 0x43BB2FC))(this, asyncResult);
	}

};

}
