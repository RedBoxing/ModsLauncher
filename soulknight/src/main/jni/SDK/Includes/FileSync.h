#pragma once
#include "Il2Cpp/Il2Cpp.h"

class FileSync
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "FileSync"));
	}

	template <typename T = Il2CppString*> static T& kManifestFile() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& kClientRootDir() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = void*> static T RefreshUseSvrFolder(Il2CppString* remoteUrl, Il2CppString* syncLocalRoot) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x4477ABC))(0, remoteUrl, syncLocalRoot);
	}
	template <typename T = void*> static T downloadFileIfMD5NotMatch(Il2CppString* fileUrl, Il2CppString* localName, Il2CppString* md5) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x4477C0C))(0, fileUrl, localName, md5);
	}
	template <typename T = Il2CppString*> static T Combine(Il2CppString* uri1, Il2CppString* uri2) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x4477D68))(0, uri1, uri2);
	}
	template <typename T = Il2CppString*> static T Combine_1(Il2CppString* uri1, Il2CppString* uri2, Il2CppString* uri3) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x4477EF4))(0, uri1, uri2, uri3);
	}

};

}
