#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace RGScript.Config.Manager {

class PlayerMadeSkinInfoConfigManager
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "RGScript.Config.Manager", "PlayerMadeSkinInfoConfigManager"));
	}


	template <typename T = Il2CppString*> static T GetSkinAuthorName(int32_t charIdx, int32_t skinIdx) {
		return ((T (*)(void *, int32_t, int32_t))(Il2CppBase() + 0x34B2EF0))(0, charIdx, skinIdx);
	}

};

}
