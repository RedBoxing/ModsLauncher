#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace I2.Loc {

class ResourceManager
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "I2.Loc", "ResourceManager"));
	}

	template <typename T = uintptr_t> static T& mInstance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& mBundleManagers() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& Assets() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, uintptr_t>*> T& mResourcesCache() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = uintptr_t> static T get_pInstance() {
		return ((T (*)(void *))(Il2CppBase() + 0x45DD80C))(0);
	}
	template <typename T = void> static T MyOnLevelWasLoaded(uintptr_t scene, uintptr_t mode) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x45F0BB0))(0, scene, mode);
	}
	template <typename T = uintptr_t> T GetAsset(Il2CppString* Name) {
		return ((T (*)(ResourceManager*, Il2CppString*))(Il2CppBase() + 0x0))(this, Name);
	}
	template <typename T = uintptr_t> T FindAsset(Il2CppString* Name) {
		return ((T (*)(ResourceManager*, Il2CppString*))(Il2CppBase() + 0x45F0D30))(this, Name);
	}
	template <typename T = bool> T HasAsset(uintptr_t Obj) {
		return ((T (*)(ResourceManager*, uintptr_t))(Il2CppBase() + 0x45E4888))(this, Obj);
	}
	template <typename T = uintptr_t> T LoadFromResources(Il2CppString* Path) {
		return ((T (*)(ResourceManager*, Il2CppString*))(Il2CppBase() + 0x0))(this, Path);
	}
	template <typename T = uintptr_t> T LoadFromBundle(Il2CppString* path) {
		return ((T (*)(ResourceManager*, Il2CppString*))(Il2CppBase() + 0x0))(this, path);
	}
	template <typename T = void> T CleanResourceCache() {
		return ((T (*)(ResourceManager*))(Il2CppBase() + 0x45F0C7C))(this);
	}

};

}
