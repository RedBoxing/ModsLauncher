#pragma once
#include "Il2Cpp/Il2Cpp.h"

class ItemRewardIcon
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ItemRewardIcon"));
	}

	template <typename T = uintptr_t> T& info() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& itemRoot() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& blueprintRoot() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& descPanel() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& descTween() {
		return *(T*)((uintptr_t)this + 0x38);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(ItemRewardIcon*))(Il2CppBase() + 0x1CD8D04))(this);
	}
	template <typename T = void> T SetRewardInfo(uintptr_t info) {
		return ((T (*)(ItemRewardIcon*, uintptr_t))(Il2CppBase() + 0x1CD8F18))(this, info);
	}
	template <typename T = void> T RefreshItem(uintptr_t icon, uintptr_t flag, Il2CppString* text) {
		return ((T (*)(ItemRewardIcon*, uintptr_t, uintptr_t, Il2CppString*))(Il2CppBase() + 0x1CD9290))(this, icon, flag, text);
	}
	template <typename T = void> T RefreshBlueprint(uintptr_t icon, uintptr_t flag, Il2CppString* text) {
		return ((T (*)(ItemRewardIcon*, uintptr_t, uintptr_t, Il2CppString*))(Il2CppBase() + 0x1CD9180))(this, icon, flag, text);
	}
	template <typename T = void> T RefreshGeneral(uintptr_t root, uintptr_t icon, uintptr_t flag, Il2CppString* text) {
		return ((T (*)(ItemRewardIcon*, uintptr_t, uintptr_t, uintptr_t, Il2CppString*))(Il2CppBase() + 0x1CD9698))(this, root, icon, flag, text);
	}
	template <typename T = void> T ChangeColor(bool isGray) {
		return ((T (*)(ItemRewardIcon*, bool))(Il2CppBase() + 0x1CD98F4))(this, isGray);
	}
	template <typename T = void> T ChangeColor_1(uintptr_t root, bool isGray) {
		return ((T (*)(ItemRewardIcon*, uintptr_t, bool))(Il2CppBase() + 0x1CD9A08))(this, root, isGray);
	}
	template <typename T = void> T AddLongTouchListener() {
		return ((T (*)(ItemRewardIcon*))(Il2CppBase() + 0x1CD93A0))(this);
	}
	template <typename T = void> T AddLongTouchListenerb__12_0() {
		return ((T (*)(ItemRewardIcon*))(Il2CppBase() + 0x1CD9C28))(this);
	}
	template <typename T = float> T AddLongTouchListenerb__12_1() {
		return ((T (*)(ItemRewardIcon*))(Il2CppBase() + 0x1CD9C74))(this);
	}
	template <typename T = void> T AddLongTouchListenerb__12_2(float x) {
		return ((T (*)(ItemRewardIcon*, float))(Il2CppBase() + 0x1CD9CA4))(this, x);
	}
	template <typename T = void> T AddLongTouchListenerb__12_3(bool isDown) {
		return ((T (*)(ItemRewardIcon*, bool))(Il2CppBase() + 0x1CD9D70))(this, isDown);
	}

};

}
