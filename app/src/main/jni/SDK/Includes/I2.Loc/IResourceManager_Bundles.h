#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace I2.Loc {

class IResourceManagerBundles
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "I2.Loc", "IResourceManager_Bundles"));
	}


	template <typename T = uintptr_t> T LoadFromBundle(Il2CppString* path, uintptr_t assetType) {
		return ((T (*)(IResourceManagerBundles*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x0))(this, path, assetType);
	}

};

}
