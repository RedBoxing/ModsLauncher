#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace ChillyRoom {

class OtherworldH5Promotion
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ChillyRoom", "OtherworldH5Promotion"));
	}

	template <typename T = Il2CppString*> static T& h5url() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, Il2CppString*>*> static T& channelMappings() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = bool> static T& canCall() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = void> static T Check_OtherworldH5() {
		return ((T (*)(void *))(Il2CppBase() + 0x187E53C))(0);
	}
	template <typename T = uintptr_t> static T Post_OtherworldH5() {
		return ((T (*)(void *))(Il2CppBase() + 0x187E848))(0);
	}
	template <typename T = uintptr_t> static T Post(Il2CppString* url, Il2CppString* json, uintptr_t request, void* Callback) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*, uintptr_t, void*))(Il2CppBase() + 0x187E910))(0, url, json, request, Callback);
	}
	template <typename T = void> static T Email_OtherworldH5(Il2CppString* result) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x187EA5C))(0, result);
	}

};

}
