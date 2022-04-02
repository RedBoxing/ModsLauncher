#pragma once
#include "Il2Cpp/Il2Cpp.h"

class CloudSaveGameData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CloudSaveGameData"));
	}

	template <typename T = int32_t> T& serialzedVersion() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& cloudSaveId() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& gameData() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& itemData() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& statisticData() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& settingData() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& taskData() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& maps() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& sandboxConfig() {
		return *(T*)((uintptr_t)this + 0x50);
	}

	template <typename T = uintptr_t> static T CreateFromPlayerPref() {
		return ((T (*)(void *))(Il2CppBase() + 0x1E7F8D4))(0);
	}
	template <typename T = int32_t> T GetProgressScope() {
		return ((T (*)(CloudSaveGameData*))(Il2CppBase() + 0x1E8263C))(this);
	}
	template <typename T = void> T CoverPlayerPref() {
		return ((T (*)(CloudSaveGameData*))(Il2CppBase() + 0x1E7F274))(this);
	}
	template <typename T = uintptr_t> static T CreateNew() {
		return ((T (*)(void *))(Il2CppBase() + 0x1E7C674))(0);
	}
	template <typename T = int32_t> T GetPassCount(uintptr_t cloudData) {
		return ((T (*)(CloudSaveGameData*, uintptr_t))(Il2CppBase() + 0x1E82708))(this, cloudData);
	}

};

}
