#pragma once
#include "Il2Cpp/Il2Cpp.h"

class HttpDownload
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "HttpDownload"));
	}


	template <typename T = void*> static T Download(Il2CppString* url, Il2CppString* localfile, bool checkEtag) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*, bool))(Il2CppBase() + 0x4208BAC))(0, url, localfile, checkEtag);
	}
	template <typename T = void*> static T Download_1(Il2CppString* url) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x4208D18))(0, url);
	}
	template <typename T = void*> static T DownloadJsonFile(Il2CppString* url) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x0))(0, url);
	}

};

}
