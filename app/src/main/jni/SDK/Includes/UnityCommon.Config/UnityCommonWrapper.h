#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace UnityCommon.Config {

class UnityCommonWrapper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "UnityCommon.Config", "UnityCommonWrapper"));
	}

	template <typename T = Il2CppString*> static T& DEFAULTUUID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& _deviceId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = Il2CppString*> T get_DeviceId() {
		return ((T (*)(UnityCommonWrapper*))(Il2CppBase() + 0x43E8524))(this);
	}
	template <typename T = Il2CppString*> T get_ChannelName_DeviceId() {
		return ((T (*)(UnityCommonWrapper*))(Il2CppBase() + 0x43E8628))(this);
	}
	template <typename T = Il2CppString*> T get_LanguageCode() {
		return ((T (*)(UnityCommonWrapper*))(Il2CppBase() + 0x43E86F8))(this);
	}
	template <typename T = bool> T get_IsNetworkReachability() {
		return ((T (*)(UnityCommonWrapper*))(Il2CppBase() + 0x43E879C))(this);
	}
	template <typename T = Il2CppString*> static T GetDeviceUniqueIdentifier() {
		return ((T (*)(void *))(Il2CppBase() + 0x43E8808))(0);
	}
	template <typename T = Il2CppString*> static T GetUUID() {
		return ((T (*)(void *))(Il2CppBase() + 0x43E88D0))(0);
	}
	template <typename T = Il2CppString*> static T GetAndroidID() {
		return ((T (*)(void *))(Il2CppBase() + 0x43E8924))(0);
	}
	template <typename T = Il2CppString*> static T GetIOS_UUID() {
		return ((T (*)(void *))(Il2CppBase() + 0x43E9008))(0);
	}
	template <typename T = Il2CppString*> static T GetDeviceId() {
		return ((T (*)(void *))(Il2CppBase() + 0x43E8580))(0);
	}
	template <typename T = Il2CppString*> T iFixBaseProxy_get_DeviceId() {
		return ((T (*)(UnityCommonWrapper*))(Il2CppBase() + 0x43E9094))(this);
	}
	template <typename T = Il2CppString*> T iFixBaseProxy_get_ChannelName_DeviceId() {
		return ((T (*)(UnityCommonWrapper*))(Il2CppBase() + 0x43E909C))(this);
	}
	template <typename T = Il2CppString*> T iFixBaseProxy_get_LanguageCode() {
		return ((T (*)(UnityCommonWrapper*))(Il2CppBase() + 0x43E90A4))(this);
	}
	template <typename T = bool> T iFixBaseProxy_get_IsNetworkReachability() {
		return ((T (*)(UnityCommonWrapper*))(Il2CppBase() + 0x43E90AC))(this);
	}

};

}
