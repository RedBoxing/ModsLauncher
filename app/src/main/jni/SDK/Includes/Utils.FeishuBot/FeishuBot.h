#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace Utils.FeishuBot {

class FeishuBot
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Utils.FeishuBot", "FeishuBot"));
	}

	template <typename T = Il2CppString*> static T& webhook() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = void> static T SendMsg(Il2CppString* msg) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x4355140))(0, msg);
	}
	template <typename T = Il2CppString*> static T NewPatchMsg(Il2CppString* title, Il2CppString* downloadUrl) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x43555B0))(0, title, downloadUrl);
	}

};

}
