#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace GooglePlayGames.Native {

class CallbackUtils
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GooglePlayGames.Native", "CallbackUtils"));
	}


	template <typename T = void*> static T ToOnGameThread(void* toConvert) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x0))(0, toConvert);
	}
	template <typename T = void*> static T ToOnGameThread_1(void* toConvert) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x0))(0, toConvert);
	}
	template <typename T = void*> static T ToOnGameThread_2(void* toConvert) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x0))(0, toConvert);
	}

};

}
