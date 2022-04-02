#pragma once
#include "Il2Cpp/Il2Cpp.h"

class GooglePlayObbDownloader
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GooglePlayObbDownloader"));
	}

	template <typename T = uintptr_t> static T& EnvironmentClass() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& Environment_MediaMounted() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> T& PublicKey() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& m_ExpansionFilePath() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> static T& m_ObbPackage() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = int32_t> static T& m_ObbVersion() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = Il2CppString*> T get_PublicKey() {
		return ((T (*)(GooglePlayObbDownloader*))(Il2CppBase() + 0x461C8FC))(this);
	}
	template <typename T = void> T set_PublicKey(Il2CppString* value) {
		return ((T (*)(GooglePlayObbDownloader*, Il2CppString*))(Il2CppBase() + 0x461C904))(this, value);
	}
	template <typename T = void> T ApplyPublicKey() {
		return ((T (*)(GooglePlayObbDownloader*))(Il2CppBase() + 0x461C90C))(this);
	}
	template <typename T = void> T FetchOBB() {
		return ((T (*)(GooglePlayObbDownloader*))(Il2CppBase() + 0x461CB60))(this);
	}
	template <typename T = Il2CppString*> T GetExpansionFilePath() {
		return ((T (*)(GooglePlayObbDownloader*))(Il2CppBase() + 0x461D21C))(this);
	}
	template <typename T = Il2CppString*> T GetMainOBBPath() {
		return ((T (*)(GooglePlayObbDownloader*))(Il2CppBase() + 0x461D5F0))(this);
	}
	template <typename T = Il2CppString*> T GetPatchOBBPath() {
		return ((T (*)(GooglePlayObbDownloader*))(Il2CppBase() + 0x461D910))(this);
	}
	template <typename T = Il2CppString*> static T GetOBBPackagePath(Il2CppString* expansionFilePath, Il2CppString* prefix) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x461D6B0))(0, expansionFilePath, prefix);
	}
	template <typename T = Il2CppString*> static T get_ObbPackage() {
		return ((T (*)(void *))(Il2CppBase() + 0x461D50C))(0);
	}
	template <typename T = int32_t> static T get_ObbVersion() {
		return ((T (*)(void *))(Il2CppBase() + 0x461D9D0))(0);
	}
	template <typename T = void> static T PopulateOBBProperties() {
		return ((T (*)(void *))(Il2CppBase() + 0x461DAB4))(0);
	}

};

}
