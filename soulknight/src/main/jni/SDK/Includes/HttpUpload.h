#pragma once
#include "Il2Cpp/Il2Cpp.h"

class HttpUpload
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "HttpUpload"));
	}


	template <typename T = Il2CppString*> static T Upload(Il2CppString* url, Il2CppString* path) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x4209DCC))(0, url, path);
	}

};

}
