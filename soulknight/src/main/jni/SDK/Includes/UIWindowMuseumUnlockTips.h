#pragma once
#include "Il2Cpp/Il2Cpp.h"

class UIWindowMuseumUnlockTips
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UIWindowMuseumUnlockTips"));
	}

	template <typename T = uintptr_t> T& title() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = int32_t> static T& count() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = void> T ShowTips() {
		return ((T (*)(UIWindowMuseumUnlockTips*))(Il2CppBase() + 0x44B8B38))(this);
	}
	template <typename T = void> T ShowWait() {
		return ((T (*)(UIWindowMuseumUnlockTips*))(Il2CppBase() + 0x44B8C64))(this);
	}
	template <typename T = void> static T ShowWindow(Il2CppString* content) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x44B8D30))(0, content);
	}
	template <typename T = void> T DoDestory() {
		return ((T (*)(UIWindowMuseumUnlockTips*))(Il2CppBase() + 0x44B8F9C))(this);
	}

};

}
