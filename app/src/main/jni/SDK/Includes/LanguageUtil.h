#pragma once
#include "Il2Cpp/Il2Cpp.h"

class LanguageUtil
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "LanguageUtil"));
	}

	template <typename T = Il2CppDictionary<Il2CppString*, Il2CppString*>*> static T& i2ServerKey() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = Il2CppString*> static T GetServerLanguageCode() {
		return ((T (*)(void *))(Il2CppBase() + 0x425730C))(0);
	}
	template <typename T = bool> static T IsChineseStrong() {
		return ((T (*)(void *))(Il2CppBase() + 0x4257494))(0);
	}
	template <typename T = bool> static T IsChineseI2() {
		return ((T (*)(void *))(Il2CppBase() + 0x425761C))(0);
	}
	template <typename T = bool> static T IsChineseSystem(bool includeTradition) {
		return ((T (*)(void *, bool))(Il2CppBase() + 0x4257580))(0, includeTradition);
	}
	template <typename T = bool> static T IsChineseSensitive() {
		return ((T (*)(void *))(Il2CppBase() + 0x4257714))(0);
	}
	template <typename T = Il2CppString*> static T FilterChineseCNY(Il2CppString* target, bool use_bmf) {
		return ((T (*)(void *, Il2CppString*, bool))(Il2CppBase() + 0x4257838))(0, target, use_bmf);
	}
	template <typename T = bool> static T IsChinaMainland() {
		return ((T (*)(void *))(Il2CppBase() + 0x4257920))(0);
	}
	template <typename T = void> static T InitRTL() {
		return ((T (*)(void *))(Il2CppBase() + 0x42579B8))(0);
	}
	template <typename T = void> static T ResetRTL() {
		return ((T (*)(void *))(Il2CppBase() + 0x4257DC0))(0);
	}
	template <typename T = uintptr_t> static T RebuildTextDelay() {
		return ((T (*)(void *))(Il2CppBase() + 0x42582E4))(0);
	}
	template <typename T = void> static T SetRTL(bool isRTL) {
		return ((T (*)(void *, bool))(Il2CppBase() + 0x4258160))(0, isRTL);
	}
	template <typename T = bool> static T GetRTL() {
		return ((T (*)(void *))(Il2CppBase() + 0x4257EF0))(0);
	}
	template <typename T = bool> static T get_PriceRTL() {
		return ((T (*)(void *))(Il2CppBase() + 0x42583AC))(0);
	}
	template <typename T = void> static T SetRTLFont() {
		return ((T (*)(void *))(Il2CppBase() + 0x4257C8C))(0);
	}
	template <typename T = bool> static T IsPersian() {
		return ((T (*)(void *))(Il2CppBase() + 0x4258068))(0);
	}

};

}
