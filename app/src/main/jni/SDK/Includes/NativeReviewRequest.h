#pragma once
#include "Il2Cpp/Il2Cpp.h"

class NativeReviewRequest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "NativeReviewRequest"));
	}


	template <typename T = void> static T RequestReview() {
		return ((T (*)(void *))(Il2CppBase() + 0x4383F00))(0);
	}
	template <typename T = int32_t> static T VersionCompare(Il2CppString* a, Il2CppString* b) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x4383F54))(0, a, b);
	}
	template <typename T = bool> static T HasNativeReview() {
		return ((T (*)(void *))(Il2CppBase() + 0x4384038))(0);
	}

};

}
