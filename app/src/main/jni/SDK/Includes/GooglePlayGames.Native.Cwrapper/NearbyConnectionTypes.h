#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace GooglePlayGames.Native.Cwrapper {

class NearbyConnectionTypes
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GooglePlayGames.Native.Cwrapper", "NearbyConnectionTypes"));
	}


	template <typename T = void> static T AppIdentifier_Dispose(uintptr_t self) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x35D99AC))(0, self);
	}
	template <typename T = uintptr_t> static T AppIdentifier_GetIdentifier(uintptr_t self, Il2CppArray<uintptr_t>** out_arg, uintptr_t out_size) {
		return ((T (*)(void *, uintptr_t, Il2CppArray<uintptr_t>**, uintptr_t))(Il2CppBase() + 0x35D9A48))(0, self, out_arg, out_size);
	}
	template <typename T = void> static T StartAdvertisingResult_Dispose(uintptr_t self) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x35D9B04))(0, self);
	}
	template <typename T = int32_t> static T StartAdvertisingResult_GetStatus(uintptr_t self) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x35D9BA0))(0, self);
	}
	template <typename T = uintptr_t> static T StartAdvertisingResult_GetLocalEndpointName(uintptr_t self, Il2CppArray<uintptr_t>** out_arg, uintptr_t out_size) {
		return ((T (*)(void *, uintptr_t, Il2CppArray<uintptr_t>**, uintptr_t))(Il2CppBase() + 0x35D9C3C))(0, self, out_arg, out_size);
	}
	template <typename T = void> static T EndpointDetails_Dispose(uintptr_t self) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x35D9CF8))(0, self);
	}
	template <typename T = uintptr_t> static T EndpointDetails_GetEndpointId(uintptr_t self, Il2CppArray<uintptr_t>** out_arg, uintptr_t out_size) {
		return ((T (*)(void *, uintptr_t, Il2CppArray<uintptr_t>**, uintptr_t))(Il2CppBase() + 0x35D9D94))(0, self, out_arg, out_size);
	}
	template <typename T = uintptr_t> static T EndpointDetails_GetName(uintptr_t self, Il2CppArray<uintptr_t>** out_arg, uintptr_t out_size) {
		return ((T (*)(void *, uintptr_t, Il2CppArray<uintptr_t>**, uintptr_t))(Il2CppBase() + 0x35D9E50))(0, self, out_arg, out_size);
	}
	template <typename T = uintptr_t> static T EndpointDetails_GetServiceId(uintptr_t self, Il2CppArray<uintptr_t>** out_arg, uintptr_t out_size) {
		return ((T (*)(void *, uintptr_t, Il2CppArray<uintptr_t>**, uintptr_t))(Il2CppBase() + 0x35D9F0C))(0, self, out_arg, out_size);
	}
	template <typename T = void> static T ConnectionRequest_Dispose(uintptr_t self) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x35D9FC8))(0, self);
	}
	template <typename T = uintptr_t> static T ConnectionRequest_GetRemoteEndpointId(uintptr_t self, Il2CppArray<uintptr_t>** out_arg, uintptr_t out_size) {
		return ((T (*)(void *, uintptr_t, Il2CppArray<uintptr_t>**, uintptr_t))(Il2CppBase() + 0x35DA064))(0, self, out_arg, out_size);
	}
	template <typename T = uintptr_t> static T ConnectionRequest_GetRemoteEndpointName(uintptr_t self, Il2CppArray<uintptr_t>** out_arg, uintptr_t out_size) {
		return ((T (*)(void *, uintptr_t, Il2CppArray<uintptr_t>**, uintptr_t))(Il2CppBase() + 0x35DA120))(0, self, out_arg, out_size);
	}
	template <typename T = uintptr_t> static T ConnectionRequest_GetPayload(uintptr_t self, Il2CppArray<uintptr_t>** out_arg, uintptr_t out_size) {
		return ((T (*)(void *, uintptr_t, Il2CppArray<uintptr_t>**, uintptr_t))(Il2CppBase() + 0x35DA1DC))(0, self, out_arg, out_size);
	}
	template <typename T = void> static T ConnectionResponse_Dispose(uintptr_t self) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x35DA298))(0, self);
	}
	template <typename T = uintptr_t> static T ConnectionResponse_GetRemoteEndpointId(uintptr_t self, Il2CppArray<uintptr_t>** out_arg, uintptr_t out_size) {
		return ((T (*)(void *, uintptr_t, Il2CppArray<uintptr_t>**, uintptr_t))(Il2CppBase() + 0x35DA334))(0, self, out_arg, out_size);
	}
	template <typename T = uintptr_t> static T ConnectionResponse_GetStatus(uintptr_t self) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x35DA3F0))(0, self);
	}
	template <typename T = uintptr_t> static T ConnectionResponse_GetPayload(uintptr_t self, Il2CppArray<uintptr_t>** out_arg, uintptr_t out_size) {
		return ((T (*)(void *, uintptr_t, Il2CppArray<uintptr_t>**, uintptr_t))(Il2CppBase() + 0x35DA48C))(0, self, out_arg, out_size);
	}

};

}
