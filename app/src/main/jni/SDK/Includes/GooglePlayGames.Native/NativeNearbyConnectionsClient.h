#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace GooglePlayGames.Native {

class NativeNearbyConnectionsClient
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GooglePlayGames.Native", "NativeNearbyConnectionsClient"));
	}

	template <typename T = uintptr_t> T& mManager() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = int32_t> T MaxUnreliableMessagePayloadLength() {
		return ((T (*)(NativeNearbyConnectionsClient*))(Il2CppBase() + 0x3592B68))(this);
	}
	template <typename T = int32_t> T MaxReliableMessagePayloadLength() {
		return ((T (*)(NativeNearbyConnectionsClient*))(Il2CppBase() + 0x3592BC8))(this);
	}
	template <typename T = void> T SendReliable(Il2CppList<Il2CppString*>* recipientEndpointIds, Il2CppArray<uintptr_t>* payload) {
		return ((T (*)(NativeNearbyConnectionsClient*, Il2CppList<Il2CppString*>*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x3592C28))(this, recipientEndpointIds, payload);
	}
	template <typename T = void> T SendUnreliable(Il2CppList<Il2CppString*>* recipientEndpointIds, Il2CppArray<uintptr_t>* payload) {
		return ((T (*)(NativeNearbyConnectionsClient*, Il2CppList<Il2CppString*>*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x359301C))(this, recipientEndpointIds, payload);
	}
	template <typename T = void> T InternalSend(Il2CppList<Il2CppString*>* recipientEndpointIds, Il2CppArray<uintptr_t>* payload, bool isReliable) {
		return ((T (*)(NativeNearbyConnectionsClient*, Il2CppList<Il2CppString*>*, Il2CppArray<uintptr_t>*, bool))(Il2CppBase() + 0x3592CB0))(this, recipientEndpointIds, payload, isReliable);
	}
	template <typename T = void> T StartAdvertising(Il2CppString* name, Il2CppList<Il2CppString*>* appIdentifiers, void* advertisingDuration, void* resultCallback, void* requestCallback) {
		return ((T (*)(NativeNearbyConnectionsClient*, Il2CppString*, Il2CppList<Il2CppString*>*, void*, void*, void*))(Il2CppBase() + 0x35930A4))(this, name, appIdentifiers, advertisingDuration, resultCallback, requestCallback);
	}
	template <typename T = int64_t> static T ToTimeoutMillis(void* span) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x359343C))(0, span);
	}
	template <typename T = void> T StopAdvertising() {
		return ((T (*)(NativeNearbyConnectionsClient*))(Il2CppBase() + 0x3593548))(this);
	}
	template <typename T = void> T SendConnectionRequest(Il2CppString* name, Il2CppString* remoteEndpointId, Il2CppArray<uintptr_t>* payload, void* responseCallback, uintptr_t listener) {
		return ((T (*)(NativeNearbyConnectionsClient*, Il2CppString*, Il2CppString*, Il2CppArray<uintptr_t>*, void*, uintptr_t))(Il2CppBase() + 0x35935BC))(this, name, remoteEndpointId, payload, responseCallback, listener);
	}
	template <typename T = uintptr_t> static T ToMessageListener(uintptr_t listener) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3593910))(0, listener);
	}
	template <typename T = void> T AcceptConnectionRequest(Il2CppString* remoteEndpointId, Il2CppArray<uintptr_t>* payload, uintptr_t listener) {
		return ((T (*)(NativeNearbyConnectionsClient*, Il2CppString*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x3593ACC))(this, remoteEndpointId, payload, listener);
	}
	template <typename T = void> T StartDiscovery(Il2CppString* serviceId, void* advertisingTimeout, uintptr_t listener) {
		return ((T (*)(NativeNearbyConnectionsClient*, Il2CppString*, void*, uintptr_t))(Il2CppBase() + 0x3593C54))(this, serviceId, advertisingTimeout, listener);
	}
	template <typename T = uintptr_t> static T ToDiscoveryListener(uintptr_t listener) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3593E58))(0, listener);
	}
	template <typename T = void> T StopDiscovery(Il2CppString* serviceId) {
		return ((T (*)(NativeNearbyConnectionsClient*, Il2CppString*))(Il2CppBase() + 0x359401C))(this, serviceId);
	}
	template <typename T = void> T RejectConnectionRequest(Il2CppString* requestingEndpointId) {
		return ((T (*)(NativeNearbyConnectionsClient*, Il2CppString*))(Il2CppBase() + 0x35940EC))(this, requestingEndpointId);
	}
	template <typename T = void> T DisconnectFromEndpoint(Il2CppString* remoteEndpointId) {
		return ((T (*)(NativeNearbyConnectionsClient*, Il2CppString*))(Il2CppBase() + 0x35941BC))(this, remoteEndpointId);
	}
	template <typename T = void> T StopAllConnections() {
		return ((T (*)(NativeNearbyConnectionsClient*))(Il2CppBase() + 0x3594248))(this);
	}
	template <typename T = Il2CppString*> T GetAppBundleId() {
		return ((T (*)(NativeNearbyConnectionsClient*))(Il2CppBase() + 0x35942BC))(this);
	}
	template <typename T = Il2CppString*> T GetServiceId() {
		return ((T (*)(NativeNearbyConnectionsClient*))(Il2CppBase() + 0x3594330))(this);
	}

};

}
