#pragma once
#include "Il2Cpp/Il2Cpp.h"

class UILabelInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UILabelInfo"));
	}

	template <typename T = int32_t> T& text_value() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& title() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& icon() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& anim() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& target() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = float> T& offset() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& color_list() {
		return *(T*)((uintptr_t)this + 0x48);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(UILabelInfo*))(Il2CppBase() + 0x433A298))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(UILabelInfo*))(Il2CppBase() + 0x433A3F0))(this);
	}
	template <typename T = void> T ShowItemInfo(uintptr_t sprite, int32_t value) {
		return ((T (*)(UILabelInfo*, uintptr_t, int32_t))(Il2CppBase() + 0x433A550))(this, sprite, value);
	}
	template <typename T = void> T ShowTextHurt(uintptr_t value1, int32_t value2, float value3) {
		return ((T (*)(UILabelInfo*, uintptr_t, int32_t, float))(Il2CppBase() + 0x433A7E4))(this, value1, value2, value3);
	}
	template <typename T = void> T ShowTextEnergy(int32_t value) {
		return ((T (*)(UILabelInfo*, int32_t))(Il2CppBase() + 0x433AA48))(this, value);
	}
	template <typename T = void> T ShowTextCoin(int32_t value) {
		return ((T (*)(UILabelInfo*, int32_t))(Il2CppBase() + 0x433AB48))(this, value);
	}
	template <typename T = void> T ShowTextHp(int32_t value) {
		return ((T (*)(UILabelInfo*, int32_t))(Il2CppBase() + 0x433AC48))(this, value);
	}
	template <typename T = void> T ShowTextArmor(int32_t value) {
		return ((T (*)(UILabelInfo*, int32_t))(Il2CppBase() + 0x433AD48))(this, value);
	}
	template <typename T = void> T ShowTextInfo(Il2CppString* value, float value2) {
		return ((T (*)(UILabelInfo*, Il2CppString*, float))(Il2CppBase() + 0x433AE6C))(this, value, value2);
	}
	template <typename T = void> T ShowTalk(uintptr_t value1, Il2CppString* value2, float value3, float value4) {
		return ((T (*)(UILabelInfo*, uintptr_t, Il2CppString*, float, float))(Il2CppBase() + 0x433AFD0))(this, value1, value2, value3, value4);
	}
	template <typename T = void> T ShowTalk_1(uintptr_t value1, Il2CppString* value2, float value3, float value4, uintptr_t value5) {
		return ((T (*)(UILabelInfo*, uintptr_t, Il2CppString*, float, float, uintptr_t))(Il2CppBase() + 0x433B14C))(this, value1, value2, value3, value4, value5);
	}
	template <typename T = void> T AddHurtValue(int32_t value) {
		return ((T (*)(UILabelInfo*, int32_t))(Il2CppBase() + 0x433A904))(this, value);
	}
	template <typename T = void> T AddValue(int32_t value1, float value3) {
		return ((T (*)(UILabelInfo*, int32_t, float))(Il2CppBase() + 0x433A670))(this, value1, value3);
	}
	template <typename T = void> T ChangeTalk(Il2CppString* value1, float value2) {
		return ((T (*)(UILabelInfo*, Il2CppString*, float))(Il2CppBase() + 0x433B2B8))(this, value1, value2);
	}
	template <typename T = void> T ChangeTalk_1(Il2CppString* value1, float value2, uintptr_t value3) {
		return ((T (*)(UILabelInfo*, Il2CppString*, float, uintptr_t))(Il2CppBase() + 0x433B42C))(this, value1, value2, value3);
	}
	template <typename T = void> T EndShowTime() {
		return ((T (*)(UILabelInfo*))(Il2CppBase() + 0x433B590))(this);
	}

};

}
