#pragma once
#include "Il2Cpp/Il2Cpp.h"

class UIWindowReborn
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UIWindowReborn"));
	}

	template <typename T = uintptr_t> T& text_gem() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = int32_t> T& reborn_gem() {
		return *(T*)((uintptr_t)this + 0x48);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(UIWindowReborn*))(Il2CppBase() + 0x4319A38))(this);
	}
	template <typename T = void> T OnEnable() {
		return ((T (*)(UIWindowReborn*))(Il2CppBase() + 0x4319B3C))(this);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(UIWindowReborn*))(Il2CppBase() + 0x4319B98))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(UIWindowReborn*))(Il2CppBase() + 0x4319BF4))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(UIWindowReborn*))(Il2CppBase() + 0x431A278))(this);
	}
	template <typename T = void> T ShowWindow() {
		return ((T (*)(UIWindowReborn*))(Il2CppBase() + 0x431AC40))(this);
	}
	template <typename T = void> T BtnYesClick() {
		return ((T (*)(UIWindowReborn*))(Il2CppBase() + 0x431AD60))(this);
	}
	template <typename T = void> T BtnGemClick() {
		return ((T (*)(UIWindowReborn*))(Il2CppBase() + 0x431A820))(this);
	}
	template <typename T = void> T BtnCardClick() {
		return ((T (*)(UIWindowReborn*))(Il2CppBase() + 0x431A60C))(this);
	}
	template <typename T = void> T CloseBtnClick() {
		return ((T (*)(UIWindowReborn*))(Il2CppBase() + 0x431A414))(this);
	}
	template <typename T = void> T HideWindow() {
		return ((T (*)(UIWindowReborn*))(Il2CppBase() + 0x431AFB0))(this);
	}
	template <typename T = void> T BtnGemClickb__9_0() {
		return ((T (*)(UIWindowReborn*))(Il2CppBase() + 0x431B0E4))(this);
	}

};

}
