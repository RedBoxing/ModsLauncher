#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace GooglePlayGames.OurUtils {

class PlatformUtils
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GooglePlayGames.OurUtils", "PlatformUtils"));
	}


	template <typename T = bool> static T get_Supported() {
		return ((T (*)(void *))(Il2CppBase() + 0x460FB4C))(0);
	}

};

}
