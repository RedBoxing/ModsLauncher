#pragma once
#include "Il2Cpp/Il2Cpp.h"

class IGooglePlayObbDownloader
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IGooglePlayObbDownloader"));
	}


	template <typename T = Il2CppString*> T get_PublicKey() {
		return ((T (*)(IGooglePlayObbDownloader*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T set_PublicKey(Il2CppString* value) {
		return ((T (*)(IGooglePlayObbDownloader*, Il2CppString*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = Il2CppString*> T GetExpansionFilePath() {
		return ((T (*)(IGooglePlayObbDownloader*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = Il2CppString*> T GetMainOBBPath() {
		return ((T (*)(IGooglePlayObbDownloader*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = Il2CppString*> T GetPatchOBBPath() {
		return ((T (*)(IGooglePlayObbDownloader*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T FetchOBB() {
		return ((T (*)(IGooglePlayObbDownloader*))(Il2CppBase() + 0x0))(this);
	}

};

}
