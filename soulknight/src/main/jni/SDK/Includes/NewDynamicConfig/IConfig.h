#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace NewDynamicConfig {

class IConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "NewDynamicConfig", "IConfig"));
	}

	template <typename T = uint32_t> T& CompareValue() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& configClassName() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> T& IsForceOrAdd() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = bool> T& CanMerge() {
		return *(T*)((uintptr_t)this + 0x21);
	}
	template <typename T = Il2CppString*> T& MyLocalConfigPath() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& myType() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppDictionary<uintptr_t, uintptr_t>*> static T& currectUseConfig() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppDictionary<uintptr_t, uintptr_t>*> static T& oldConfigs() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = Il2CppDictionary<uintptr_t, int32_t>*> static T& configVersion() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = Il2CppDictionary<uintptr_t, bool>*> static T& configForceOrAdd() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = Il2CppDictionary<uintptr_t, Il2CppList<uintptr_t>*>*> static T& allLoadConfigs() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> T& doApplyCallback() {
		return *(T*)((uintptr_t)this + 0x38);
	}

	template <typename T = void> T ForceConfig() {
		return ((T (*)(IConfig*))(Il2CppBase() + 0x451D8C0))(this);
	}
	template <typename T = void> T AddConfig() {
		return ((T (*)(IConfig*))(Il2CppBase() + 0x451D91C))(this);
	}
	template <typename T = void> T MergeConfig() {
		return ((T (*)(IConfig*))(Il2CppBase() + 0x451D978))(this);
	}
	template <typename T = void> static T ClearConfigState() {
		return ((T (*)(void *))(Il2CppBase() + 0x451DBB0))(0);
	}
	template <typename T = bool> T TryUseConfig() {
		return ((T (*)(IConfig*))(Il2CppBase() + 0x451E018))(this);
	}
	template <typename T = void> T SaveConfig(Il2CppString* path) {
		return ((T (*)(IConfig*, Il2CppString*))(Il2CppBase() + 0x451E570))(this, path);
	}
	template <typename T = void> static T ApplyAllConfig() {
		return ((T (*)(void *))(Il2CppBase() + 0x451E5FC))(0);
	}
	template <typename T = void> static T AddConfig_1(Il2CppString* path, Il2CppString* MyLocalConfigPath) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x451F104))(0, path, MyLocalConfigPath);
	}

};

}
