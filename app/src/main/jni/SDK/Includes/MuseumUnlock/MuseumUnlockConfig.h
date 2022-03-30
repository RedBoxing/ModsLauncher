#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace MuseumUnlock {

class MuseumUnlockConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "MuseumUnlock", "MuseumUnlockConfig"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& unlockItems() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = Il2CppString*> T& unlockTextKey() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _unlockModels() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = uintptr_t> static T& _unlockConfig() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = void> T UnlockProcess(uintptr_t data, void* onUnlockItem) {
		return ((T (*)(MuseumUnlockConfig*, uintptr_t, void*))(Il2CppBase() + 0x437BDB8))(this, data, onUnlockItem);
	}
	template <typename T = void> T Init() {
		return ((T (*)(MuseumUnlockConfig*))(Il2CppBase() + 0x437C174))(this);
	}
	template <typename T = Il2CppString*> T GetSkinUnlockText(uintptr_t charIndex, int32_t skinIndex) {
		return ((T (*)(MuseumUnlockConfig*, uintptr_t, int32_t))(Il2CppBase() + 0x437C4E4))(this, charIndex, skinIndex);
	}
	template <typename T = uintptr_t> static T get_config() {
		return ((T (*)(void *))(Il2CppBase() + 0x437C77C))(0);
	}

};

}
