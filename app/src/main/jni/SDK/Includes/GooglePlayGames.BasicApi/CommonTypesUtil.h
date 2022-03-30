#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace GooglePlayGames.BasicApi {

class CommonTypesUtil
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GooglePlayGames.BasicApi", "CommonTypesUtil"));
	}


	template <typename T = bool> static T StatusIsSuccess(uintptr_t status) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x35BD930))(0, status);
	}

};

}
