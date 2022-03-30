#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace RGScript.Util {

class WebUtil
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "RGScript.Util", "WebUtil"));
	}


	template <typename T = uintptr_t> static T CreateWebReq(Il2CppString* url, bool useSysProxy) {
		return ((T (*)(void *, Il2CppString*, bool))(Il2CppBase() + 0x43CA770))(0, url, useSysProxy);
	}

};

}
