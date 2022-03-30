#pragma once
#include "Il2Cpp/Il2Cpp.h"

class UIWinodwShowObjects
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UIWinodwShowObjects"));
	}

	template <typename T = uintptr_t> T& text_name() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& img_icon() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& img_flag() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& textShader() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& audio_clip() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uintptr_t> T& textMaterial() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = uintptr_t> T& item_icon_root_tf() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = uintptr_t> T& item_icon_proto() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = bool> T& needSort() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& clickCallback() {
		return *(T*)((uintptr_t)this + 0x88);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(UIWinodwShowObjects*))(Il2CppBase() + 0x45D282C))(this);
	}
	template <typename T = void> static T ShowUIWinowObject(Il2CppArray<uintptr_t>* infos, bool needSort) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, bool))(Il2CppBase() + 0x45D29B0))(0, infos, needSort);
	}
	template <typename T = void> T SetUpWindow(Il2CppArray<uintptr_t>* infos, uintptr_t callback, bool needSort) {
		return ((T (*)(UIWinodwShowObjects*, Il2CppArray<uintptr_t>*, uintptr_t, bool))(Il2CppBase() + 0x45D2B9C))(this, infos, callback, needSort);
	}
	template <typename T = void> T AddSeedItem(uintptr_t icon, uintptr_t flag, Il2CppVector3 angles, Il2CppString* title) {
		return ((T (*)(UIWinodwShowObjects*, uintptr_t, uintptr_t, Il2CppVector3, Il2CppString*))(Il2CppBase() + 0x45D37E4))(this, icon, flag, angles, title);
	}
	template <typename T = void> T AddBlueprint(uintptr_t icon, uintptr_t flag, Il2CppString* title) {
		return ((T (*)(UIWinodwShowObjects*, uintptr_t, uintptr_t, Il2CppString*))(Il2CppBase() + 0x45D42D8))(this, icon, flag, title);
	}
	template <typename T = void> T AddItem(uintptr_t icon, Il2CppString* title, Il2CppString* parentRoot) {
		return ((T (*)(UIWinodwShowObjects*, uintptr_t, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x45D4768))(this, icon, title, parentRoot);
	}
	template <typename T = void> T AddSkill_Material_Or_Bluemap_Or_TokenTicket(uintptr_t icon, uintptr_t flag, Il2CppString* title, uintptr_t pickableTransform, int32_t flagSize) {
		return ((T (*)(UIWinodwShowObjects*, uintptr_t, uintptr_t, Il2CppString*, uintptr_t, int32_t))(Il2CppBase() + 0x45D3CB0))(this, icon, flag, title, pickableTransform, flagSize);
	}
	template <typename T = void> T OnEnable() {
		return ((T (*)(UIWinodwShowObjects*))(Il2CppBase() + 0x45D4C80))(this);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(UIWinodwShowObjects*))(Il2CppBase() + 0x45D4CDC))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(UIWinodwShowObjects*))(Il2CppBase() + 0x45D4D38))(this);
	}
	template <typename T = void> T BtnClick() {
		return ((T (*)(UIWinodwShowObjects*))(Il2CppBase() + 0x45D4EC8))(this);
	}
	template <typename T = uintptr_t> T DestorySelf(float delay) {
		return ((T (*)(UIWinodwShowObjects*, float))(Il2CppBase() + 0x45D50C4))(this, delay);
	}

};

}
