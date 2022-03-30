#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace GooglePlayGames.Native.Cwrapper {

class NearbyConnections
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GooglePlayGames.Native.Cwrapper", "NearbyConnections"));
	}


	template <typename T = void> static T NearbyConnections_StartDiscovery(uintptr_t self, Il2CppString* service_id, int64_t duration, uintptr_t helper) {
		return ((T (*)(void *, uintptr_t, Il2CppString*, int64_t, uintptr_t))(Il2CppBase() + 0x35DB5BC))(0, self, service_id, duration, helper);
	}
	template <typename T = void> static T NearbyConnections_RejectConnectionRequest(uintptr_t self, Il2CppString* remote_endpoint_id) {
		return ((T (*)(void *, uintptr_t, Il2CppString*))(Il2CppBase() + 0x35DB690))(0, self, remote_endpoint_id);
	}
	template <typename T = void> static T NearbyConnections_Disconnect(uintptr_t self, Il2CppString* remote_endpoint_id) {
		return ((T (*)(void *, uintptr_t, Il2CppString*))(Il2CppBase() + 0x35DB750))(0, self, remote_endpoint_id);
	}
	template <typename T = void> static T NearbyConnections_SendUnreliableMessage(uintptr_t self, Il2CppString* remote_endpoint_id, Il2CppArray<uintptr_t>* payload, uintptr_t payload_size) {
		return ((T (*)(void *, uintptr_t, Il2CppString*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x35DB810))(0, self, remote_endpoint_id, payload, payload_size);
	}
	template <typename T = void> static T NearbyConnections_StopAdvertising(uintptr_t self) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x35DB8F0))(0, self);
	}
	template <typename T = void> static T NearbyConnections_Dispose(uintptr_t self) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x35DB98C))(0, self);
	}
	template <typename T = void> static T NearbyConnections_SendReliableMessage(uintptr_t self, Il2CppString* remote_endpoint_id, Il2CppArray<uintptr_t>* payload, uintptr_t payload_size) {
		return ((T (*)(void *, uintptr_t, Il2CppString*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x35DBA28))(0, self, remote_endpoint_id, payload, payload_size);
	}
	template <typename T = void> static T NearbyConnections_StopDiscovery(uintptr_t self, Il2CppString* service_id) {
		return ((T (*)(void *, uintptr_t, Il2CppString*))(Il2CppBase() + 0x35DBB08))(0, self, service_id);
	}
	template <typename T = void> static T NearbyConnections_SendConnectionRequest(uintptr_t self, Il2CppString* name, Il2CppString* remote_endpoint_id, Il2CppArray<uintptr_t>* payload, uintptr_t payload_size, uintptr_t callback, uintptr_t callback_arg, uintptr_t helper) {
		return ((T (*)(void *, uintptr_t, Il2CppString*, Il2CppString*, Il2CppArray<uintptr_t>*, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x35DBBC8))(0, self, name, remote_endpoint_id, payload, payload_size, callback, callback_arg, helper);
	}
	template <typename T = void> static T NearbyConnections_StartAdvertising(uintptr_t self, Il2CppString* name, Il2CppArray<uintptr_t>* app_identifiers, uintptr_t app_identifiers_size, int64_t duration, uintptr_t start_advertising_callback, uintptr_t start_advertising_callback_arg, uintptr_t request_callback, uintptr_t request_callback_arg) {
		return ((T (*)(void *, uintptr_t, Il2CppString*, Il2CppArray<uintptr_t>*, uintptr_t, int64_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x35DBCF8))(0, self, name, app_identifiers, app_identifiers_size, duration, start_advertising_callback, start_advertising_callback_arg, request_callback, request_callback_arg);
	}
	template <typename T = void> static T NearbyConnections_Stop(uintptr_t self) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x35DBE24))(0, self);
	}
	template <typename T = void> static T NearbyConnections_AcceptConnectionRequest(uintptr_t self, Il2CppString* remote_endpoint_id, Il2CppArray<uintptr_t>* payload, uintptr_t payload_size, uintptr_t helper) {
		return ((T (*)(void *, uintptr_t, Il2CppString*, Il2CppArray<uintptr_t>*, uintptr_t, uintptr_t))(Il2CppBase() + 0x35DBEC0))(0, self, remote_endpoint_id, payload, payload_size, helper);
	}

};

}
