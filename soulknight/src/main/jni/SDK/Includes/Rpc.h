#pragma once
#include "Il2Cpp/Il2Cpp.h"

class Rpc
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "Rpc"));
	}

	template <typename T = uintptr_t> T& m_NetLink() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = void*> T& m_queue() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& m_Lock() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& m_rpcObj() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& m_rpcLst() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppDictionary<uint64_t, uintptr_t>*> T& m_responses() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = Il2CppDictionary<uint64_t, int64_t>*> T& m_rpcBeginTime() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = int32_t> T& m_netDelay() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uint32_t> T& m_upTraffic() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = uint32_t> T& m_dnTraffic() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = float> T& m_netStatsTime() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = uint32_t> T& _auto_req_idx() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& m_SendBuffer() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uintptr_t> T& m_BackBuffer() {
		return *(T*)((uintptr_t)this + 0x68);
	}

	template <typename T = void> T SetNetLink(uintptr_t netLink) {
		return ((T (*)(Rpc*, uintptr_t))(Il2CppBase() + 0x1806E00))(this, netLink);
	}
	template <typename T = void> T RegistRpc(uintptr_t obj) {
		return ((T (*)(Rpc*, uintptr_t))(Il2CppBase() + 0x1806FAC))(this, obj);
	}
	template <typename T = uint64_t> T CallRpc(uintptr_t rid, uintptr_t func) {
		return ((T (*)(Rpc*, uintptr_t, uintptr_t))(Il2CppBase() + 0x180729C))(this, rid, func);
	}
	template <typename T = void> T CallRpc_1(uintptr_t rid, uintptr_t func, uintptr_t callback) {
		return ((T (*)(Rpc*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x1807E78))(this, rid, func, callback);
	}
	template <typename T = void> T Update() {
		return ((T (*)(Rpc*))(Il2CppBase() + 0x1807FCC))(this);
	}
	template <typename T = void> T _InsertMsg(Il2CppArray<uintptr_t>* src, uint32_t srcIdx, uint32_t len) {
		return ((T (*)(Rpc*, Il2CppArray<uintptr_t>*, uint32_t, uint32_t))(Il2CppBase() + 0x18085E4))(this, src, srcIdx, len);
	}

};

}
