#pragma once
#include "Il2Cpp/Il2Cpp.h"

class ConfigEmailUtil
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ConfigEmailUtil"));
	}


	template <typename T = Il2CppString*> static T GenerateEmailSaveConfig(uintptr_t baseEmail, Il2CppString* path, bool useStaticImageEmailConfig, int64_t unix) {
		return ((T (*)(void *, uintptr_t, Il2CppString*, bool, int64_t))(Il2CppBase() + 0x4275A14))(0, baseEmail, path, useStaticImageEmailConfig, unix);
	}
	template <typename T = Il2CppString*> static T GenerateEmail(uintptr_t baseEmail, bool useStaticImageEmailConfig, int32_t uid, int64_t unix) {
		return ((T (*)(void *, uintptr_t, bool, int32_t, int64_t))(Il2CppBase() + 0x4275B34))(0, baseEmail, useStaticImageEmailConfig, uid, unix);
	}

};

}
