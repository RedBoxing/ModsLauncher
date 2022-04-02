#pragma once
#include "Il2Cpp/Il2Cpp.h"

class UIWindowCloudSaveInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UIWindowCloudSaveInfo"));
	}

	template <typename T = bool> T& needReadTime() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& _checkTime() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& AgreeBtn() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& agreePrivacyToggle() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& AgreeSprite() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& DisAgreeSprite() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& LinkImageText() {
		return *(T*)((uintptr_t)this + 0x40);
	}

	template <typename T = void> T OnEnable() {
		return ((T (*)(UIWindowCloudSaveInfo*))(Il2CppBase() + 0x458FA5C))(this);
	}
	template <typename T = void> T ClickLinkImageText(Il2CppString* data) {
		return ((T (*)(UIWindowCloudSaveInfo*, Il2CppString*))(Il2CppBase() + 0x458FBA8))(this, data);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(UIWindowCloudSaveInfo*))(Il2CppBase() + 0x458FC18))(this);
	}
	template <typename T = void> T OnShown() {
		return ((T (*)(UIWindowCloudSaveInfo*))(Il2CppBase() + 0x457CD88))(this);
	}
	template <typename T = uintptr_t> T ReadTimeReducing() {
		return ((T (*)(UIWindowCloudSaveInfo*))(Il2CppBase() + 0x458FD64))(this);
	}
	template <typename T = void> T UpdateTimeText() {
		return ((T (*)(UIWindowCloudSaveInfo*))(Il2CppBase() + 0x458FF14))(this);
	}
	template <typename T = void> T OnClickClose() {
		return ((T (*)(UIWindowCloudSaveInfo*))(Il2CppBase() + 0x4590098))(this);
	}
	template <typename T = void> T OnClickDetailInfo() {
		return ((T (*)(UIWindowCloudSaveInfo*))(Il2CppBase() + 0x4590118))(this);
	}
	template <typename T = void> T OnClickAgree() {
		return ((T (*)(UIWindowCloudSaveInfo*))(Il2CppBase() + 0x45901A8))(this);
	}
	template <typename T = void> T OnClickDisagree() {
		return ((T (*)(UIWindowCloudSaveInfo*))(Il2CppBase() + 0x4590320))(this);
	}
	template <typename T = void> T RefreshAgreeBtnSprite() {
		return ((T (*)(UIWindowCloudSaveInfo*))(Il2CppBase() + 0x458FE18))(this);
	}
	template <typename T = void> T OnShownb__10_0(bool _) {
		return ((T (*)(UIWindowCloudSaveInfo*, bool))(Il2CppBase() + 0x45903CC))(this, _);
	}

};

}
