#pragma once
#include "Il2Cpp/Il2Cpp.h"

class RpcInterface
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RpcInterface"));
	}


	template <typename T = void> T Close() {
		return ((T (*)(RpcInterface*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T SetRecvMsgCallback(uintptr_t callback) {
		return ((T (*)(RpcInterface*, uintptr_t))(Il2CppBase() + 0x0))(this, callback);
	}
	template <typename T = void> T Connect(Il2CppString* ip, uint16_t port, uintptr_t resultCallback) {
		return ((T (*)(RpcInterface*, Il2CppString*, uint16_t, uintptr_t))(Il2CppBase() + 0x0))(this, ip, port, resultCallback);
	}
	template <typename T = void> T SendMsg(Il2CppArray<uintptr_t>* src, uint16_t size) {
		return ((T (*)(RpcInterface*, Il2CppArray<uintptr_t>*, uint16_t))(Il2CppBase() + 0x0))(this, src, size);
	}
	template <typename T = void> T SendUdpMsg(Il2CppArray<uintptr_t>* src, uint16_t size) {
		return ((T (*)(RpcInterface*, Il2CppArray<uintptr_t>*, uint16_t))(Il2CppBase() + 0x0))(this, src, size);
	}
	template <typename T = void> T SendReliablyMsg(Il2CppArray<uintptr_t>* src, uint16_t size) {
		return ((T (*)(RpcInterface*, Il2CppArray<uintptr_t>*, uint16_t))(Il2CppBase() + 0x0))(this, src, size);
	}

};

}
