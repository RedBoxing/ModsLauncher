#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace GooglePlayGames.Native.PInvoke {

class NearbyConnectionsManager
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GooglePlayGames.Native.PInvoke", "NearbyConnectionsManager"));
	}

	template <typename T = Il2CppString*> static T& sServiceId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = void> T CallDispose(uintptr_t selfPointer) {
		return ((T (*)(NearbyConnectionsManager*, uintptr_t))(Il2CppBase() + 0x2AF85FC))(this, selfPointer);
	}
	template <typename T = void> T SendUnreliable(Il2CppString* remoteEndpointId, Il2CppArray<uintptr_t>* payload) {
		return ((T (*)(NearbyConnectionsManager*, Il2CppString*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x2AF8680))(this, remoteEndpointId, payload);
	}
	template <typename T = void> T SendReliable(Il2CppString* remoteEndpointId, Il2CppArray<uintptr_t>* payload) {
		return ((T (*)(NearbyConnectionsManager*, Il2CppString*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x2AF8754))(this, remoteEndpointId, payload);
	}
	template <typename T = void> T StartAdvertising(Il2CppString* name, Il2CppList<uintptr_t>* appIds, int64_t advertisingDuration, void* advertisingCallback, void* connectionRequestCallback) {
		return ((T (*)(NearbyConnectionsManager*, Il2CppString*, Il2CppList<uintptr_t>*, int64_t, void*, void*))(Il2CppBase() + 0x2AF8828))(this, name, appIds, advertisingDuration, advertisingCallback, connectionRequestCallback);
	}
	template <typename T = void> static T InternalStartAdvertisingCallback(int64_t id, uintptr_t result, uintptr_t userData) {
		return ((T (*)(void *, int64_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x2AF82D8))(0, id, result, userData);
	}
	template <typename T = void> static T InternalConnectionRequestCallback(int64_t id, uintptr_t result, uintptr_t userData) {
		return ((T (*)(void *, int64_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x2AF83BC))(0, id, result, userData);
	}
	template <typename T = void> T StopAdvertising() {
		return ((T (*)(NearbyConnectionsManager*))(Il2CppBase() + 0x2AF8B54))(this);
	}
	template <typename T = void> T SendConnectionRequest(Il2CppString* name, Il2CppString* remoteEndpointId, Il2CppArray<uintptr_t>* payload, void* callback, uintptr_t listener) {
		return ((T (*)(NearbyConnectionsManager*, Il2CppString*, Il2CppString*, Il2CppArray<uintptr_t>*, void*, uintptr_t))(Il2CppBase() + 0x2AF8BC0))(this, name, remoteEndpointId, payload, callback, listener);
	}
	template <typename T = void> static T InternalConnectResponseCallback(int64_t localClientId, uintptr_t response, uintptr_t userData) {
		return ((T (*)(void *, int64_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x2AF84A0))(0, localClientId, response, userData);
	}
	template <typename T = void> T AcceptConnectionRequest(Il2CppString* remoteEndpointId, Il2CppArray<uintptr_t>* payload, uintptr_t listener) {
		return ((T (*)(NearbyConnectionsManager*, Il2CppString*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x2AF8DB4))(this, remoteEndpointId, payload, listener);
	}
	template <typename T = void> T DisconnectFromEndpoint(Il2CppString* remoteEndpointId) {
		return ((T (*)(NearbyConnectionsManager*, Il2CppString*))(Il2CppBase() + 0x2AF8EAC))(this, remoteEndpointId);
	}
	template <typename T = void> T StopAllConnections() {
		return ((T (*)(NearbyConnectionsManager*))(Il2CppBase() + 0x2AF8F30))(this);
	}
	template <typename T = void> T StartDiscovery(Il2CppString* serviceId, int64_t duration, uintptr_t listener) {
		return ((T (*)(NearbyConnectionsManager*, Il2CppString*, int64_t, uintptr_t))(Il2CppBase() + 0x2AF8F9C))(this, serviceId, duration, listener);
	}
	template <typename T = void> T StopDiscovery(Il2CppString* serviceId) {
		return ((T (*)(NearbyConnectionsManager*, Il2CppString*))(Il2CppBase() + 0x2AF906C))(this, serviceId);
	}
	template <typename T = void> T RejectConnectionRequest(Il2CppString* remoteEndpointId) {
		return ((T (*)(NearbyConnectionsManager*, Il2CppString*))(Il2CppBase() + 0x2AF90F0))(this, remoteEndpointId);
	}
	template <typename T = void> T Shutdown() {
		return ((T (*)(NearbyConnectionsManager*))(Il2CppBase() + 0x2AF9174))(this);
	}
	template <typename T = Il2CppString*> T get_AppBundleId() {
		return ((T (*)(NearbyConnectionsManager*))(Il2CppBase() + 0x2AF91E0))(this);
	}
	template <typename T = Il2CppString*> static T ReadServiceId() {
		return ((T (*)(void *))(Il2CppBase() + 0x2AF93D0))(0);
	}
	template <typename T = Il2CppString*> static T get_ServiceId() {
		return ((T (*)(void *))(Il2CppBase() + 0x2AF007C))(0);
	}

};

}
