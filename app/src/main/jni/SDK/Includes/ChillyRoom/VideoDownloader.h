#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace ChillyRoom {

class VideoDownloader
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ChillyRoom", "VideoDownloader"));
	}


	template <typename T = void> static T DownVideos(Il2CppString* gameName, Il2CppString* url, uintptr_t downloader) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x1E73DF4))(0, gameName, url, downloader);
	}
	template <typename T = uintptr_t> static T Downloading(Il2CppString* gameName, Il2CppString* url) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x1E73E94))(0, gameName, url);
	}
	template <typename T = Il2CppString*> static T GetVideosPath(Il2CppString* gameName) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x1E699DC))(0, gameName);
	}

};

}
