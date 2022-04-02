#pragma once
#include "Il2Cpp/Il2Cpp.h"

class UITextLocalization
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UITextLocalization"));
	}

	template <typename T = Il2CppString*> T& key() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> T& debugText() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = void> T OnEnable() {
		return ((T (*)(UITextLocalization*))(Il2CppBase() + 0x41CCCD4))(this);
	}

};

}
