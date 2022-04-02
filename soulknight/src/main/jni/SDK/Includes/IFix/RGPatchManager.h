#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace IFix {

class RGPatchManager
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "IFix", "RGPatchManager"));
	}

	template <typename T = bool> static T& Test() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& PatchListApi() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = double> static T& DownloadSpeedRefreshTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> static T& Byte2KB() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> static T& Byte2MB() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = Il2CppString*> static T get_BranchName() {
		return ((T (*)(void *))(Il2CppBase() + 0x19B17A4))(0);
	}
	template <typename T = Il2CppString*> static T get_PatchVersion() {
		return ((T (*)(void *))(Il2CppBase() + 0x19B17EC))(0);
	}
	template <typename T = Il2CppString*> static T GetPatchVersion() {
		return ((T (*)(void *))(Il2CppBase() + 0x19B1878))(0);
	}
	template <typename T = Il2CppString*> static T get_PatchListUrl() {
		return ((T (*)(void *))(Il2CppBase() + 0x19B18C0))(0);
	}
	template <typename T = Il2CppString*> static T get_FileSavePath() {
		return ((T (*)(void *))(Il2CppBase() + 0x19B1B04))(0);
	}
	template <typename T = Il2CppString*> static T get_PatchVer() {
		return ((T (*)(void *))(Il2CppBase() + 0x19B1B58))(0);
	}
	template <typename T = Il2CppString*> static T GetPatchVer() {
		return ((T (*)(void *))(Il2CppBase() + 0x19B1BE4))(0);
	}
	template <typename T = void> static T FetchPatchList() {
		return ((T (*)(void *))(Il2CppBase() + 0x19B1C2C))(0);
	}
	template <typename T = uintptr_t> static T FetchPatchList_1(Il2CppString* appVersion, Il2CppString* channel) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x19B1D74))(0, appVersion, channel);
	}
	template <typename T = void*> T DownloadPatchList(Il2CppString* appVer, Il2CppString* channelName) {
		return ((T (*)(RGPatchManager*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x19B1E88))(this, appVer, channelName);
	}
	template <typename T = void*> T DownloadAllPatches(Il2CppList<uintptr_t>* patchList) {
		return ((T (*)(RGPatchManager*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x19B1FA8))(this, patchList);
	}
	template <typename T = void*> T DownloadSinglePatch(Il2CppString* fileDownloadUrl, Il2CppString* fileMd5) {
		return ((T (*)(RGPatchManager*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x19B20B8))(this, fileDownloadUrl, fileMd5);
	}
	template <typename T = bool> T DoPatch(Il2CppList<Il2CppString*>* filePaths) {
		return ((T (*)(RGPatchManager*, Il2CppList<Il2CppString*>*))(Il2CppBase() + 0x19B21C8))(this, filePaths);
	}
	template <typename T = void> T DoPatchEnd() {
		return ((T (*)(RGPatchManager*))(Il2CppBase() + 0x19B2658))(this);
	}
	template <typename T = void> T TrackPatch(uintptr_t error) {
		return ((T (*)(RGPatchManager*, uintptr_t))(Il2CppBase() + 0x19B2568))(this, error);
	}

};

}
