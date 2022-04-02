#pragma once
#include "Il2Cpp/Il2Cpp.h"

class IOSUtil
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IOSUtil"));
	}

	template <typename T = bool> static T& uuid_proportion_test() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& yomob() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = int32_t> static T& upltv() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = void> static T GetUUID() {
		return ((T (*)(void *))(Il2CppBase() + 0x19B460C))(0);
	}
	template <typename T = Il2CppString*> static T GetIDFA() {
		return ((T (*)(void *))(Il2CppBase() + 0x19B4658))(0);
	}
	template <typename T = void> static T Vibrate() {
		return ((T (*)(void *))(Il2CppBase() + 0x19B46D4))(0);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(IOSUtil*))(Il2CppBase() + 0x19B4720))(this);
	}
	template <typename T = void> static T UUIDTest() {
		return ((T (*)(void *))(Il2CppBase() + 0x19B4828))(0);
	}
	template <typename T = void> T OnGetUUID(Il2CppString* uuid) {
		return ((T (*)(IOSUtil*, Il2CppString*))(Il2CppBase() + 0x19B49BC))(this, uuid);
	}
	template <typename T = void> T LogResult() {
		return ((T (*)(IOSUtil*))(Il2CppBase() + 0x19B4CB0))(this);
	}

};

}
