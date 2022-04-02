#pragma once
#include "Il2Cpp/Il2Cpp.h"

class Player
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "Player"));
	}

	template <typename T = uint32_t> T& playerId() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uint32_t> T& m_connId() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = void*> T& JoinIds() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& RecvBuf() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& _lock() {
		return *(T*)((uintptr_t)this + 0x30);
	}

	template <typename T = uintptr_t> static T get_Inst() {
		return ((T (*)(void *))(Il2CppBase() + 0x4399D8C))(0);
	}
	template <typename T = void> T Rpc_svr_accept(uintptr_t recvBuf, uintptr_t backBuf) {
		return ((T (*)(Player*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4399E10))(this, recvBuf, backBuf);
	}
	template <typename T = void> T Rpc_client_on_other_join_team(uintptr_t recvBuf, uintptr_t backBuf) {
		return ((T (*)(Player*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4399FF8))(this, recvBuf, backBuf);
	}
	template <typename T = void> T Rpc_client_on_exit_team(uintptr_t recvBuf, uintptr_t backBuf) {
		return ((T (*)(Player*, uintptr_t, uintptr_t))(Il2CppBase() + 0x439A214))(this, recvBuf, backBuf);
	}
	template <typename T = void> T Rpc_client_handle_spawn_attrs(uintptr_t recvBuf, uintptr_t backBuf) {
		return ((T (*)(Player*, uintptr_t, uintptr_t))(Il2CppBase() + 0x439A28C))(this, recvBuf, backBuf);
	}
	template <typename T = void> T Rpc_svr_acceptb__4_0(uintptr_t buf) {
		return ((T (*)(Player*, uintptr_t))(Il2CppBase() + 0x439A454))(this, buf);
	}

};

}
