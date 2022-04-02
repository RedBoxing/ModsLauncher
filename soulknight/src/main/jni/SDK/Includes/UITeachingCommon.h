#pragma once
#include "Il2Cpp/Il2Cpp.h"

class UITeachingCommon
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UITeachingCommon"));
	}

	template <typename T = uintptr_t> T& targetInfo() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& the_button() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = int32_t> T& frame_count() {
		return *(T*)((uintptr_t)this + 0x40);
	}

	template <typename T = void> T Start() {
		return ((T (*)(UITeachingCommon*))(Il2CppBase() + 0x41C8C6C))(this);
	}
	template <typename T = void> T OnEnable() {
		return ((T (*)(UITeachingCommon*))(Il2CppBase() + 0x41C8D40))(this);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(UITeachingCommon*))(Il2CppBase() + 0x41C8D9C))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(UITeachingCommon*))(Il2CppBase() + 0x41C8DF8))(this);
	}
	template <typename T = void> T OnBtnClick() {
		return ((T (*)(UITeachingCommon*))(Il2CppBase() + 0x41C92E4))(this);
	}
	template <typename T = void> T ClickSpecialBtn() {
		return ((T (*)(UITeachingCommon*))(Il2CppBase() + 0x41C956C))(this);
	}
	template <typename T = void> T ClickFusionBtn() {
		return ((T (*)(UITeachingCommon*))(Il2CppBase() + 0x41C9648))(this);
	}
	template <typename T = uintptr_t> T GetMethodByName(Il2CppString* method_name) {
		return ((T (*)(UITeachingCommon*, Il2CppString*))(Il2CppBase() + 0x41C94D8))(this, method_name);
	}
	template <typename T = void> T MoveToPos() {
		return ((T (*)(UITeachingCommon*))(Il2CppBase() + 0x41C8E88))(this);
	}
	template <typename T = uintptr_t> T GetRectTransform() {
		return ((T (*)(UITeachingCommon*))(Il2CppBase() + 0x41C9724))(this);
	}

};

}
