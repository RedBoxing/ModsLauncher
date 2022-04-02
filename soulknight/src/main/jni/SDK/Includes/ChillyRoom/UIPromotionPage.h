#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace ChillyRoom {

class UIPromotionPage
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ChillyRoom", "UIPromotionPage"));
	}

	template <typename T = Il2CppDictionary<Il2CppString*, uintptr_t>*> static T& path2Sprite() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, uintptr_t>*> T& defaultFrontSpriteCN() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, uintptr_t>*> T& defaultFrontSpriteEN() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, uintptr_t>*> T& defaultBackSpriteCN() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, uintptr_t>*> T& defaultBackSpriteEN() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = uintptr_t> T& imgBack() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = uintptr_t> T& imgFront() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& videoImage() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& txPromo() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& txRewardTitle() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& trPromoMask() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> T& rewardPanel() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& info() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = bool> T& hasVideos() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = uintptr_t> T& videoPlayer() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = uintptr_t> T& onPlayComplete() {
		return *(T*)((uintptr_t)this + 0xC8);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(UIPromotionPage*))(Il2CppBase() + 0x1E70A38))(this);
	}
	template <typename T = void> T Setup(uintptr_t info) {
		return ((T (*)(UIPromotionPage*, uintptr_t))(Il2CppBase() + 0x1E6D788))(this, info);
	}
	template <typename T = void> T JumpToUrl() {
		return ((T (*)(UIPromotionPage*))(Il2CppBase() + 0x1E71240))(this);
	}
	template <typename T = void> T ChangeImage() {
		return ((T (*)(UIPromotionPage*))(Il2CppBase() + 0x1E70CE0))(this);
	}
	template <typename T = void> T InitVideos() {
		return ((T (*)(UIPromotionPage*))(Il2CppBase() + 0x1E711C4))(this);
	}
	template <typename T = void> T OnReward() {
		return ((T (*)(UIPromotionPage*))(Il2CppBase() + 0x1E6E418))(this);
	}
	template <typename T = void> T OnShow() {
		return ((T (*)(UIPromotionPage*))(Il2CppBase() + 0x1E6DBEC))(this);
	}
	template <typename T = void> T OnHide() {
		return ((T (*)(UIPromotionPage*))(Il2CppBase() + 0x1E708A4))(this);
	}
	template <typename T = void> T OnVideoStart(uintptr_t source) {
		return ((T (*)(UIPromotionPage*, uintptr_t))(Il2CppBase() + 0x1E718F8))(this, source);
	}
	template <typename T = void> T OnVideoEnd(uintptr_t source) {
		return ((T (*)(UIPromotionPage*, uintptr_t))(Il2CppBase() + 0x1E71984))(this, source);
	}
	template <typename T = void> T PlayVideos() {
		return ((T (*)(UIPromotionPage*))(Il2CppBase() + 0x1E715D0))(this);
	}
	template <typename T = void> T OnPlayVideoError(uintptr_t player, Il2CppString* msg) {
		return ((T (*)(UIPromotionPage*, uintptr_t, Il2CppString*))(Il2CppBase() + 0x1E71A30))(this, player, msg);
	}
	template <typename T = uintptr_t> T GetSprite(Il2CppString* path) {
		return ((T (*)(UIPromotionPage*, Il2CppString*))(Il2CppBase() + 0x1E712D8))(this, path);
	}

};

}
