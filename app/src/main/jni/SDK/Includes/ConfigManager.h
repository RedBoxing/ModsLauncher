#pragma once
#include "Il2Cpp/Il2Cpp.h"

class ConfigManager
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ConfigManager"));
	}

	template <typename T = Il2CppString*> static T& root() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& Master() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& BaseConfig() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& ChannelsJsonPath() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& SpareChannelsJsonPath() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& branch() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> static T& isDebugBuild() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = bool> static T& FetcheConfigSuccess() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x9);
	}
	template <typename T = uintptr_t> static T& AfterConfig() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& AfterConfigAndSdkServer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = bool> static T& isUseBase() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = Il2CppString*> static T& LocalFileRoot() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}

	template <typename T = Il2CppString*> static T get_LastConfigBranch() {
		return ((T (*)(void *))(Il2CppBase() + 0x42763E4))(0);
	}
	template <typename T = void> static T set_LastConfigBranch(Il2CppString* value) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x4276480))(0, value);
	}
	template <typename T = Il2CppString*> static T get_LastConfigVersion() {
		return ((T (*)(void *))(Il2CppBase() + 0x4276514))(0);
	}
	template <typename T = void> static T set_LastConfigVersion(Il2CppString* value) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x42765B0))(0, value);
	}
	template <typename T = Il2CppString*> static T get_Root() {
		return ((T (*)(void *))(Il2CppBase() + 0x4276644))(0);
	}
	template <typename T = Il2CppString*> static T get_ServerMasterPath() {
		return ((T (*)(void *))(Il2CppBase() + 0x42769E0))(0);
	}
	template <typename T = Il2CppString*> static T get_LocalMasterPath() {
		return ((T (*)(void *))(Il2CppBase() + 0x4276A8C))(0);
	}
	template <typename T = Il2CppString*> static T get_LocalBranchConfigPath() {
		return ((T (*)(void *))(Il2CppBase() + 0x4276B40))(0);
	}
	template <typename T = Il2CppString*> static T get_LocalChannelConfigPath() {
		return ((T (*)(void *))(Il2CppBase() + 0x4276E50))(0);
	}
	template <typename T = uintptr_t> static T FetchConfig() {
		return ((T (*)(void *))(Il2CppBase() + 0x427712C))(0);
	}
	template <typename T = uintptr_t> static T doFetchConfig() {
		return ((T (*)(void *))(Il2CppBase() + 0x427724C))(0);
	}
	template <typename T = uintptr_t> static T GetCurrectUseConfig() {
		return ((T (*)(void *))(Il2CppBase() + 0x0))(0);
	}
	template <typename T = void> static T UseLocalConfig() {
		return ((T (*)(void *))(Il2CppBase() + 0x4277384))(0);
	}
	template <typename T = void> static T DealChannel(Il2CppString* channelJsonName) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x42775F8))(0, channelJsonName);
	}
	template <typename T = void> static T DoSolveAllConfig() {
		return ((T (*)(void *))(Il2CppBase() + 0x4277D50))(0);
	}
	template <typename T = void> static T AddConfigs(Il2CppString* path, Il2CppString* configPathData) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x427872C))(0, path, configPathData);
	}

};

}
