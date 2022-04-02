#pragma once
#include "Il2Cpp/Il2Cpp.h"

class UIWindowGuideRealName
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UIWindowGuideRealName"));
	}

	template <typename T = Il2CppString*> static T& m_name() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = uintptr_t> static T ShowWindow(uintptr_t parent, uintptr_t ShowType) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x449F448))(0, parent, ShowType);
	}
	template <typename T = Il2CppString*> static T Show(uintptr_t showType) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x449F690))(0, showType);
	}
	template <typename T = void> T OpenUrl() {
		return ((T (*)(UIWindowGuideRealName*))(Il2CppBase() + 0x449F75C))(this);
	}
	template <typename T = void> T OnClick_Close() {
		return ((T (*)(UIWindowGuideRealName*))(Il2CppBase() + 0x449F7EC))(this);
	}
	template <typename T = void> T GoConfirm() {
		return ((T (*)(UIWindowGuideRealName*))(Il2CppBase() + 0x449F8A8))(this);
	}

};

}
