#pragma once
#include "Il2Cpp/Il2Cpp.h"

class HttpToClient
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "HttpToClient"));
	}


	template <typename T = bool> static T RecvHttpSvrData(uintptr_t buf) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4209CB0))(0, buf);
	}

};

}
