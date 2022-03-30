#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace RGScript.Util.AndroidDialog {

class ProgressDialog
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "RGScript.Util.AndroidDialog", "ProgressDialog"));
	}

	template <typename T = uintptr_t> T& AndroidProgressDialog() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = uintptr_t> static T show(Il2CppString* title, Il2CppString* msg) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x455016C))(0, title, msg);
	}
	template <typename T = void> T dismiss() {
		return ((T (*)(ProgressDialog*))(Il2CppBase() + 0x45504A0))(this);
	}

};

}
