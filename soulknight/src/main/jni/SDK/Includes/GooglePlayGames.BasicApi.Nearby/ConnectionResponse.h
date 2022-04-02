#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace GooglePlayGames.BasicApi.Nearby {

class ConnectionResponse
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GooglePlayGames.BasicApi.Nearby", "ConnectionResponse"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> static T& EmptyPayload() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& mLocalClientId() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = Il2CppString*> T& mRemoteEndpointId() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& mResponseStatus() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& mPayload() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = int64_t> T get_LocalClientId() {
		return ((T (*)(ConnectionResponse*))(Il2CppBase() + 0x153B05C))(this);
	}
	template <typename T = Il2CppString*> T get_RemoteEndpointId() {
		return ((T (*)(ConnectionResponse*))(Il2CppBase() + 0x153B064))(this);
	}
	template <typename T = uintptr_t> T get_ResponseStatus() {
		return ((T (*)(ConnectionResponse*))(Il2CppBase() + 0x153B06C))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_Payload() {
		return ((T (*)(ConnectionResponse*))(Il2CppBase() + 0x153B074))(this);
	}
	template <typename T = uintptr_t> static T Rejected(int64_t localClientId, Il2CppString* remoteEndpointId) {
		return ((T (*)(void *, int64_t, Il2CppString*))(Il2CppBase() + 0x35C3990))(0, localClientId, remoteEndpointId);
	}
	template <typename T = uintptr_t> static T NetworkNotConnected(int64_t localClientId, Il2CppString* remoteEndpointId) {
		return ((T (*)(void *, int64_t, Il2CppString*))(Il2CppBase() + 0x35C3A70))(0, localClientId, remoteEndpointId);
	}
	template <typename T = uintptr_t> static T InternalError(int64_t localClientId, Il2CppString* remoteEndpointId) {
		return ((T (*)(void *, int64_t, Il2CppString*))(Il2CppBase() + 0x35C3B50))(0, localClientId, remoteEndpointId);
	}
	template <typename T = uintptr_t> static T EndpointNotConnected(int64_t localClientId, Il2CppString* remoteEndpointId) {
		return ((T (*)(void *, int64_t, Il2CppString*))(Il2CppBase() + 0x35C3C30))(0, localClientId, remoteEndpointId);
	}
	template <typename T = uintptr_t> static T Accepted(int64_t localClientId, Il2CppString* remoteEndpointId, Il2CppArray<uintptr_t>* payload) {
		return ((T (*)(void *, int64_t, Il2CppString*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x35C3D10))(0, localClientId, remoteEndpointId, payload);
	}
	template <typename T = uintptr_t> static T AlreadyConnected(int64_t localClientId, Il2CppString* remoteEndpointId) {
		return ((T (*)(void *, int64_t, Il2CppString*))(Il2CppBase() + 0x35C3DB8))(0, localClientId, remoteEndpointId);
	}

};

}
