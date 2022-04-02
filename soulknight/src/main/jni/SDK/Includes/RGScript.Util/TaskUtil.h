#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace RGScript.Util {

class TaskUtil
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "RGScript.Util", "TaskUtil"));
	}


	template <typename T = void*> static T ReCall(void* dataTask, void* dealReceiveData, void* exp, int32_t trySendCount, int32_t maxCostMillSecondsPerSend) {
		return ((T (*)(void *, void*, void*, void*, int32_t, int32_t))(Il2CppBase() + 0x0))(0, dataTask, dealReceiveData, exp, trySendCount, maxCostMillSecondsPerSend);
	}

};

}
