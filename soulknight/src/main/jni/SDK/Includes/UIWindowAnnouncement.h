#pragma once
#include "Il2Cpp/Il2Cpp.h"

class UIWindowAnnouncement
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UIWindowAnnouncement"));
	}

	template <typename T = bool> T& forceOpen() {
		return *(T*)((uintptr_t)this + 0x5A);
	}
	template <typename T = uintptr_t> T& titleAnnouncementButton() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uintptr_t> T& mask() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = uintptr_t> T& close_btn() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = uintptr_t> T& itemProto() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, uintptr_t>*> T& spriteDic() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, Il2CppString*>*> T& linkDic() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& _config() {
		return *(T*)((uintptr_t)this + 0x90);
	}

	template <typename T = uintptr_t> T get_Config() {
		return ((T (*)(UIWindowAnnouncement*))(Il2CppBase() + 0x45868B8))(this);
	}
	template <typename T = int32_t> T get_LocalConfigVersion() {
		return ((T (*)(UIWindowAnnouncement*))(Il2CppBase() + 0x4586974))(this);
	}
	template <typename T = void> T set_LocalConfigVersion(int32_t value) {
		return ((T (*)(UIWindowAnnouncement*, int32_t))(Il2CppBase() + 0x4586A3C))(this, value);
	}
	template <typename T = uintptr_t> static T ShowWindow(uintptr_t parent, bool forceOpen) {
		return ((T (*)(void *, uintptr_t, bool))(Il2CppBase() + 0x4586B20))(0, parent, forceOpen);
	}
	template <typename T = void> T FindReferences() {
		return ((T (*)(UIWindowAnnouncement*))(Il2CppBase() + 0x4586C80))(this);
	}
	template <typename T = void> T ShowView(Il2CppArray<uintptr_t>* objects) {
		return ((T (*)(UIWindowAnnouncement*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4586E6C))(this, objects);
	}
	template <typename T = void> T HideView(Il2CppArray<uintptr_t>* objects) {
		return ((T (*)(UIWindowAnnouncement*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4587B3C))(this, objects);
	}
	template <typename T = void> T InitView() {
		return ((T (*)(UIWindowAnnouncement*))(Il2CppBase() + 0x4587C90))(this);
	}
	template <typename T = uintptr_t> T SetItemSize(uintptr_t item) {
		return ((T (*)(UIWindowAnnouncement*, uintptr_t))(Il2CppBase() + 0x45876BC))(this, item);
	}
	template <typename T = void> T NothingToShow() {
		return ((T (*)(UIWindowAnnouncement*))(Il2CppBase() + 0x4587784))(this);
	}
	template <typename T = void> T InitSpriteDic(uintptr_t config) {
		return ((T (*)(UIWindowAnnouncement*, uintptr_t))(Il2CppBase() + 0x4587E70))(this, config);
	}
	template <typename T = void> T InitLinkDic(uintptr_t config) {
		return ((T (*)(UIWindowAnnouncement*, uintptr_t))(Il2CppBase() + 0x45881DC))(this, config);
	}
	template <typename T = uintptr_t> T LoadSprites(Il2CppString* key) {
		return ((T (*)(UIWindowAnnouncement*, Il2CppString*))(Il2CppBase() + 0x4588418))(this, key);
	}
	template <typename T = void> T OnHrefClick(Il2CppString* key) {
		return ((T (*)(UIWindowAnnouncement*, Il2CppString*))(Il2CppBase() + 0x45884E0))(this, key);
	}
	template <typename T = void> T ShowAnim(uintptr_t t) {
		return ((T (*)(UIWindowAnnouncement*, uintptr_t))(Il2CppBase() + 0x4587864))(this, t);
	}
	template <typename T = void> T HideAnim(uintptr_t t, uintptr_t Callback) {
		return ((T (*)(UIWindowAnnouncement*, uintptr_t, uintptr_t))(Il2CppBase() + 0x45885AC))(this, t, Callback);
	}
	template <typename T = void> T Close() {
		return ((T (*)(UIWindowAnnouncement*))(Il2CppBase() + 0x4587618))(this);
	}
	template <typename T = void> T InitViewb__17_0() {
		return ((T (*)(UIWindowAnnouncement*))(Il2CppBase() + 0x45888EC))(this);
	}
	template <typename T = void> T iFixBaseProxy_ShowView(Il2CppArray<uintptr_t>* P0) {
		return ((T (*)(UIWindowAnnouncement*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x45889C4))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_HideView(Il2CppArray<uintptr_t>* P0) {
		return ((T (*)(UIWindowAnnouncement*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x45889CC))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_InitView() {
		return ((T (*)(UIWindowAnnouncement*))(Il2CppBase() + 0x45889D4))(this);
	}

};

}
