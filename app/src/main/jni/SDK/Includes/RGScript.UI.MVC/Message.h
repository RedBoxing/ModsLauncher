#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace RGScript.UI.MVC {

class Message
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "RGScript.UI.MVC", "Message"));
	}

	template <typename T = uintptr_t> T& Command() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> T& ExtraParams() {
		return *(T*)((uintptr_t)this + 0x8);
	}


};

}
