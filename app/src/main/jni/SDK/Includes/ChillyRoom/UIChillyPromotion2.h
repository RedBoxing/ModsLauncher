#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace ChillyRoom {

class UIChillyPromotion2
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ChillyRoom", "UIChillyPromotion2"));
	}

	template <typename T = bool> T& specificGame() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> T& specificGameId() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppString*> T& source() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& mask() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& flipper() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& pageProto() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& videoPlayer() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = int32_t> T& pageOffset() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = Il2CppString*> T& jumpoutID() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& onShown() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uintptr_t> T& onHidden() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = uintptr_t> T& onReward() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = Il2CppString*> T& shownGameId() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = bool> T& isClosing() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = bool> T& fromEmail() {
		return *(T*)((uintptr_t)this + 0x81);
	}

	template <typename T = uintptr_t> T get_info() {
		return ((T (*)(UIChillyPromotion2*))(Il2CppBase() + 0x1E6B678))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(UIChillyPromotion2*))(Il2CppBase() + 0x1E6B6D4))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(UIChillyPromotion2*))(Il2CppBase() + 0x1E6C37C))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(UIChillyPromotion2*))(Il2CppBase() + 0x1E6CB4C))(this);
	}
	template <typename T = void> T Setup(uintptr_t onShown, uintptr_t onHidden, uintptr_t onReward) {
		return ((T (*)(UIChillyPromotion2*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x1E6CDA4))(this, onShown, onHidden, onReward);
	}
	template <typename T = void> T SetAudioVolumn() {
		return ((T (*)(UIChillyPromotion2*))(Il2CppBase() + 0x1E6CE38))(this);
	}
	template <typename T = uintptr_t> static T ShowWindow(uintptr_t parent, Il2CppString* gameId, Il2CppString* source, bool specificGame) {
		return ((T (*)(void *, uintptr_t, Il2CppString*, Il2CppString*, bool))(Il2CppBase() + 0x1E6CE94))(0, parent, gameId, source, specificGame);
	}
	template <typename T = void> T ShowAnim() {
		return ((T (*)(UIChillyPromotion2*))(Il2CppBase() + 0x1E6B9A0))(this);
	}
	template <typename T = void> T CloseAnim() {
		return ((T (*)(UIChillyPromotion2*))(Il2CppBase() + 0x1E6D2A4))(this);
	}
	template <typename T = void> T Refresh() {
		return ((T (*)(UIChillyPromotion2*))(Il2CppBase() + 0x1E6C44C))(this);
	}
	template <typename T = void> T OnPageShow(int32_t index) {
		return ((T (*)(UIChillyPromotion2*, int32_t))(Il2CppBase() + 0x1E6DF58))(this, index);
	}
	template <typename T = void> T GetReward(Il2CppString* id) {
		return ((T (*)(UIChillyPromotion2*, Il2CppString*))(Il2CppBase() + 0x1E6DFC8))(this, id);
	}
	template <typename T = void> T OnApplicationFocus(bool focus) {
		return ((T (*)(UIChillyPromotion2*, bool))(Il2CppBase() + 0x1E6E380))(this, focus);
	}
	template <typename T = void> T ShowQuquestDialog() {
		return ((T (*)(UIChillyPromotion2*))(Il2CppBase() + 0x1E6BB70))(this);
	}
	template <typename T = uintptr_t> T ShowingDialog(Il2CppString* id) {
		return ((T (*)(UIChillyPromotion2*, Il2CppString*))(Il2CppBase() + 0x1E6E528))(this, id);
	}
	template <typename T = void> T OnClickDownload(Il2CppString* id, uintptr_t page) {
		return ((T (*)(UIChillyPromotion2*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x1E6E634))(this, id, page);
	}
	template <typename T = uintptr_t> T OpenURLDelay(Il2CppString* url) {
		return ((T (*)(UIChillyPromotion2*, Il2CppString*))(Il2CppBase() + 0x1E6F340))(this, url);
	}
	template <typename T = void> T OpenOtherWorldH5URL(Il2CppString* url, Il2CppString* uid, Il2CppString* channelName) {
		return ((T (*)(UIChillyPromotion2*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x1E6EBC8))(this, url, uid, channelName);
	}
	template <typename T = void> T OnClickClose() {
		return ((T (*)(UIChillyPromotion2*))(Il2CppBase() + 0x1E6CC28))(this);
	}
	template <typename T = void> T DestroySelf() {
		return ((T (*)(UIChillyPromotion2*))(Il2CppBase() + 0x1E6F434))(this);
	}
	template <typename T = void> T CheckJumpFromEmail() {
		return ((T (*)(UIChillyPromotion2*))(Il2CppBase() + 0x1E6DDC8))(this);
	}

};

}
