#pragma once
#include "Il2Cpp/Il2Cpp.h"

class UITextInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UITextInfo"));
	}

	template <typename T = int32_t> T& text_value() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& textShader() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& the_text() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& the_img() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& anim() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& target() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = float> T& offset() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& color_list() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& textMaterial() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = float> T& textDuration() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = bool> T& customText() {
		return *(T*)((uintptr_t)this + 0x64);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(UITextInfo*))(Il2CppBase() + 0x41CA90C))(this);
	}
	template <typename T = void> T LateUpdate() {
		return ((T (*)(UITextInfo*))(Il2CppBase() + 0x41CAB7C))(this);
	}
	template <typename T = void> T ShowTextHurt(uintptr_t value1, int32_t value2, float value3) {
		return ((T (*)(UITextInfo*, uintptr_t, int32_t, float))(Il2CppBase() + 0x41CACDC))(this, value1, value2, value3);
	}
	template <typename T = void> T ShowTextEnergy(int32_t value) {
		return ((T (*)(UITextInfo*, int32_t))(Il2CppBase() + 0x41CAF78))(this, value);
	}
	template <typename T = void> T ShowTextCoin(int32_t value) {
		return ((T (*)(UITextInfo*, int32_t))(Il2CppBase() + 0x41CB200))(this, value);
	}
	template <typename T = void> T ShowTextTokenCoin(int32_t value, uintptr_t color) {
		return ((T (*)(UITextInfo*, int32_t, uintptr_t))(Il2CppBase() + 0x41CB300))(this, value, color);
	}
	template <typename T = void> T ShowTextHp(int32_t value) {
		return ((T (*)(UITextInfo*, int32_t))(Il2CppBase() + 0x41CB3EC))(this, value);
	}
	template <typename T = void> T ShowTextArmor(int32_t value) {
		return ((T (*)(UITextInfo*, int32_t))(Il2CppBase() + 0x41CB4EC))(this, value);
	}
	template <typename T = void> T ShowTextInfo(Il2CppString* value, float value2) {
		return ((T (*)(UITextInfo*, Il2CppString*, float))(Il2CppBase() + 0x41CB610))(this, value, value2);
	}
	template <typename T = void> T ShowTextItem(uintptr_t sprite, uintptr_t flag, Il2CppString* value, float value2) {
		return ((T (*)(UITextInfo*, uintptr_t, uintptr_t, Il2CppString*, float))(Il2CppBase() + 0x41CB774))(this, sprite, flag, value, value2);
	}
	template <typename T = void> T ShowBuff(uintptr_t value1, uintptr_t sprite, float offset, float duration) {
		return ((T (*)(UITextInfo*, uintptr_t, uintptr_t, float, float))(Il2CppBase() + 0x41CBAA4))(this, value1, sprite, offset, duration);
	}
	template <typename T = void> T ShowPickable(uintptr_t parent, uintptr_t info, uintptr_t icon, uintptr_t flag, Il2CppVector3 flagAngle, float offset, float duration) {
		return ((T (*)(UITextInfo*, uintptr_t, uintptr_t, uintptr_t, uintptr_t, Il2CppVector3, float, float))(Il2CppBase() + 0x41CBC10))(this, parent, info, icon, flag, flagAngle, offset, duration);
	}
	template <typename T = void> T ShowTalk(uintptr_t value1, Il2CppString* value2, float value3, float value4) {
		return ((T (*)(UITextInfo*, uintptr_t, Il2CppString*, float, float))(Il2CppBase() + 0x41CC080))(this, value1, value2, value3, value4);
	}
	template <typename T = void> T ShowTalk_1(uintptr_t value1, Il2CppString* value2, float value3, float value4, uintptr_t value5) {
		return ((T (*)(UITextInfo*, uintptr_t, Il2CppString*, float, float, uintptr_t))(Il2CppBase() + 0x41CC1FC))(this, value1, value2, value3, value4, value5);
	}
	template <typename T = void> T AddHurtValue(int32_t value) {
		return ((T (*)(UITextInfo*, int32_t))(Il2CppBase() + 0x41CADFC))(this, value);
	}
	template <typename T = void> T AddValue(int32_t value1, float value3) {
		return ((T (*)(UITextInfo*, int32_t, float))(Il2CppBase() + 0x41CB078))(this, value1, value3);
	}
	template <typename T = void> T ChangeTalk(Il2CppString* value1, float value2) {
		return ((T (*)(UITextInfo*, Il2CppString*, float))(Il2CppBase() + 0x41CC368))(this, value1, value2);
	}
	template <typename T = void> T ChangeTalk_1(Il2CppString* value1, float value2, uintptr_t value3) {
		return ((T (*)(UITextInfo*, Il2CppString*, float, uintptr_t))(Il2CppBase() + 0x41CC4DC))(this, value1, value2, value3);
	}
	template <typename T = void> T EndShowTime() {
		return ((T (*)(UITextInfo*))(Il2CppBase() + 0x41CC640))(this);
	}
	template <typename T = void> T DestroySelf() {
		return ((T (*)(UITextInfo*))(Il2CppBase() + 0x41CC71C))(this);
	}
	template <typename T = void> T FadeOut(float fadeTime) {
		return ((T (*)(UITextInfo*, float))(Il2CppBase() + 0x41CC830))(this, fadeTime);
	}
	template <typename T = uintptr_t> T FadeOutAnime(float fadeTime) {
		return ((T (*)(UITextInfo*, float))(Il2CppBase() + 0x41CC8B8))(this, fadeTime);
	}
	template <typename T = void> T OnTaken() {
		return ((T (*)(UITextInfo*))(Il2CppBase() + 0x41CC9C4))(this);
	}
	template <typename T = void> T FadeOutAnimeb__32_0(float percentage) {
		return ((T (*)(UITextInfo*, float))(Il2CppBase() + 0x41CCB24))(this, percentage);
	}

};

}
