#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace ChillyRoom {

class PromotionConst
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ChillyRoom", "PromotionConst"));
	}

	template <typename T = bool> static T& isDebugBuild() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& ThisGameName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = Il2CppString*> static T& ServerPath() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = Il2CppString*> static T& path() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = Il2CppString*> static T& LocalFileRoot() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, Il2CppString*>*> static T& localizationCn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, Il2CppString*>*> static T& localizationEn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}

	template <typename T = Il2CppString*> static T get_Path() {
		return ((T (*)(void *))(Il2CppBase() + 0x187FAB4))(0);
	}
	template <typename T = void> static T set_Path(Il2CppString* value) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x187FBF0))(0, value);
	}
	template <typename T = Il2CppString*> static T get_FileUrl() {
		return ((T (*)(void *))(Il2CppBase() + 0x187FC9C))(0);
	}
	template <typename T = Il2CppString*> T GetLocalization(Il2CppString* key) {
		return ((T (*)(PromotionConst*, Il2CppString*))(Il2CppBase() + 0x187FD5C))(this, key);
	}

};

}
