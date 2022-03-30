#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace GooglePlayGames.BasicApi.Nearby {

class INearbyConnectionClient
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GooglePlayGames.BasicApi.Nearby", "INearbyConnectionClient"));
	}


	template <typename T = int32_t> T MaxUnreliableMessagePayloadLength() {
		return ((T (*)(INearbyConnectionClient*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = int32_t> T MaxReliableMessagePayloadLength() {
		return ((T (*)(INearbyConnectionClient*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T SendReliable(Il2CppList<Il2CppString*>* recipientEndpointIds, Il2CppArray<uintptr_t>* payload) {
		return ((T (*)(INearbyConnectionClient*, Il2CppList<Il2CppString*>*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x0))(this, recipientEndpointIds, payload);
	}
	template <typename T = void> T SendUnreliable(Il2CppList<Il2CppString*>* recipientEndpointIds, Il2CppArray<uintptr_t>* payload) {
		return ((T (*)(INearbyConnectionClient*, Il2CppList<Il2CppString*>*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x0))(this, recipientEndpointIds, payload);
	}
	template <typename T = void> T StartAdvertising(Il2CppString* name, Il2CppList<Il2CppString*>* appIdentifiers, void* advertisingDuration, void* resultCallback, void* connectionRequestCallback) {
		return ((T (*)(INearbyConnectionClient*, Il2CppString*, Il2CppList<Il2CppString*>*, void*, void*, void*))(Il2CppBase() + 0x0))(this, name, appIdentifiers, advertisingDuration, resultCallback, connectionRequestCallback);
	}
	template <typename T = void> T StopAdvertising() {
		return ((T (*)(INearbyConnectionClient*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T SendConnectionRequest(Il2CppString* name, Il2CppString* remoteEndpointId, Il2CppArray<uintptr_t>* payload, void* responseCallback, uintptr_t listener) {
		return ((T (*)(INearbyConnectionClient*, Il2CppString*, Il2CppString*, Il2CppArray<uintptr_t>*, void*, uintptr_t))(Il2CppBase() + 0x0))(this, name, remoteEndpointId, payload, responseCallback, listener);
	}
	template <typename T = void> T AcceptConnectionRequest(Il2CppString* remoteEndpointId, Il2CppArray<uintptr_t>* payload, uintptr_t listener) {
		return ((T (*)(INearbyConnectionClient*, Il2CppString*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x0))(this, remoteEndpointId, payload, listener);
	}
	template <typename T = void> T StartDiscovery(Il2CppString* serviceId, void* advertisingTimeout, uintptr_t listener) {
		return ((T (*)(INearbyConnectionClient*, Il2CppString*, void*, uintptr_t))(Il2CppBase() + 0x0))(this, serviceId, advertisingTimeout, listener);
	}
	template <typename T = void> T StopDiscovery(Il2CppString* serviceId) {
		return ((T (*)(INearbyConnectionClient*, Il2CppString*))(Il2CppBase() + 0x0))(this, serviceId);
	}
	template <typename T = void> T RejectConnectionRequest(Il2CppString* requestingEndpointId) {
		return ((T (*)(INearbyConnectionClient*, Il2CppString*))(Il2CppBase() + 0x0))(this, requestingEndpointId);
	}
	template <typename T = void> T DisconnectFromEndpoint(Il2CppString* remoteEndpointId) {
		return ((T (*)(INearbyConnectionClient*, Il2CppString*))(Il2CppBase() + 0x0))(this, remoteEndpointId);
	}
	template <typename T = void> T StopAllConnections() {
		return ((T (*)(INearbyConnectionClient*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = Il2CppString*> T GetAppBundleId() {
		return ((T (*)(INearbyConnectionClient*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = Il2CppString*> T GetServiceId() {
		return ((T (*)(INearbyConnectionClient*))(Il2CppBase() + 0x0))(this);
	}

};

}
