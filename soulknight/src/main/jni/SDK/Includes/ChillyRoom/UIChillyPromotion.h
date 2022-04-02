#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace ChillyRoom {

class UIChillyPromotion
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ChillyRoom", "UIChillyPromotion"));
	}

	template <typename T = int32_t> T& selectedIndex() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& lastIndex() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& trItemRoot() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& trItem() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& trFullContent() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& trWaiting() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& trDialog() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& txDownload() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& fullExpand() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& fullImage() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& videoImage() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uintptr_t> T& trLoading() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = uintptr_t> T& anim() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = float> T& downloadButtonShowTime() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& itemList() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& videoPlayer() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& onShown() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& onHidden() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& onPlay() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> T& onZoomOut() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& onReward() {
		return *(T*)((uintptr_t)this + 0xB0);
	}

	template <typename T = Il2CppArray<uintptr_t>*> T get_infos() {
		return ((T (*)(UIChillyPromotion*))(Il2CppBase() + 0x1E67DF4))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(UIChillyPromotion*))(Il2CppBase() + 0x1E67E50))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(UIChillyPromotion*))(Il2CppBase() + 0x1E683EC))(this);
	}
	template <typename T = void> T Setup(uintptr_t onShown, uintptr_t onHidden, uintptr_t onReward, uintptr_t onPlay, uintptr_t onZoomOut, float audioVolumn) {
		return ((T (*)(UIChillyPromotion*, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, float))(Il2CppBase() + 0x1E68C70))(this, onShown, onHidden, onReward, onPlay, onZoomOut, audioVolumn);
	}
	template <typename T = void> T SetAudioVolumn() {
		return ((T (*)(UIChillyPromotion*))(Il2CppBase() + 0x1E68E24))(this);
	}
	template <typename T = void> static T ShowWindow() {
		return ((T (*)(void *))(Il2CppBase() + 0x1E68E80))(0);
	}
	template <typename T = void> T RequestData() {
		return ((T (*)(UIChillyPromotion*))(Il2CppBase() + 0x1E68ED4))(this);
	}
	template <typename T = void> T Refresh() {
		return ((T (*)(UIChillyPromotion*))(Il2CppBase() + 0x1E68874))(this);
	}
	template <typename T = uintptr_t> T GetSprite(Il2CppString* path) {
		return ((T (*)(UIChillyPromotion*, Il2CppString*))(Il2CppBase() + 0x1E68F38))(this, path);
	}
	template <typename T = void> T ShowSelectedFullContent() {
		return ((T (*)(UIChillyPromotion*))(Il2CppBase() + 0x1E690AC))(this);
	}
	template <typename T = void> T ShowFullContent(int32_t index) {
		return ((T (*)(UIChillyPromotion*, int32_t))(Il2CppBase() + 0x1E69164))(this, index);
	}
	template <typename T = void> T PlayVideos() {
		return ((T (*)(UIChillyPromotion*))(Il2CppBase() + 0x1E69AC0))(this);
	}
	template <typename T = void> T OnPlayCompleted() {
		return ((T (*)(UIChillyPromotion*))(Il2CppBase() + 0x1E69DE8))(this);
	}
	template <typename T = uintptr_t> T downloadButtonShow() {
		return ((T (*)(UIChillyPromotion*))(Il2CppBase() + 0x1E69F04))(this);
	}
	template <typename T = void> T PlayCompletedInvoke() {
		return ((T (*)(UIChillyPromotion*))(Il2CppBase() + 0x1E69FE4))(this);
	}
	template <typename T = void> T GetReward() {
		return ((T (*)(UIChillyPromotion*))(Il2CppBase() + 0x1E6A23C))(this);
	}
	template <typename T = void> T OnClickZoomOut() {
		return ((T (*)(UIChillyPromotion*))(Il2CppBase() + 0x1E6A3E8))(this);
	}
	template <typename T = void> T OnClickDownload() {
		return ((T (*)(UIChillyPromotion*))(Il2CppBase() + 0x1E6A0C0))(this);
	}
	template <typename T = void> T OnClickClose() {
		return ((T (*)(UIChillyPromotion*))(Il2CppBase() + 0x1E6A5A0))(this);
	}
	template <typename T = void> T ShowDialog() {
		return ((T (*)(UIChillyPromotion*))(Il2CppBase() + 0x1E69CA8))(this);
	}
	template <typename T = void> T OnClickContinuePlay() {
		return ((T (*)(UIChillyPromotion*))(Il2CppBase() + 0x1E6A6B4))(this);
	}
	template <typename T = void> T OnClickCancelPlay() {
		return ((T (*)(UIChillyPromotion*))(Il2CppBase() + 0x1E6A7BC))(this);
	}
	template <typename T = void> T ItemsRotateIn(float duration) {
		return ((T (*)(UIChillyPromotion*, float))(Il2CppBase() + 0x1E6A8BC))(this, duration);
	}
	template <typename T = void> T ItemsRotateOut(float duration) {
		return ((T (*)(UIChillyPromotion*, float))(Il2CppBase() + 0x1E6A9F4))(this, duration);
	}
	template <typename T = void> T ItemsRotate(float from, float to, float duration) {
		return ((T (*)(UIChillyPromotion*, float, float, float))(Il2CppBase() + 0x1E6A940))(this, from, to, duration);
	}
	template <typename T = uintptr_t> T ItemsRotateAnim(float from, float to, float duration) {
		return ((T (*)(UIChillyPromotion*, float, float, float))(Il2CppBase() + 0x1E6AA78))(this, from, to, duration);
	}
	template <typename T = void> T DestroySelf() {
		return ((T (*)(UIChillyPromotion*))(Il2CppBase() + 0x1E6ABC0))(this);
	}
	template <typename T = void> T Awakeb__18_0(uintptr_t source) {
		return ((T (*)(UIChillyPromotion*, uintptr_t))(Il2CppBase() + 0x1E6AC94))(this, source);
	}
	template <typename T = void> T Awakeb__18_1(uintptr_t source) {
		return ((T (*)(UIChillyPromotion*, uintptr_t))(Il2CppBase() + 0x1E6ADA4))(this, source);
	}
	template <typename T = void> T Awakeb__18_2(uintptr_t source, int64_t frameIndex) {
		return ((T (*)(UIChillyPromotion*, uintptr_t, int64_t))(Il2CppBase() + 0x1E6ADF0))(this, source, frameIndex);
	}
	template <typename T = void> T Awakeb__18_3(uintptr_t source) {
		return ((T (*)(UIChillyPromotion*, uintptr_t))(Il2CppBase() + 0x1E6AE3C))(this, source);
	}
	template <typename T = void> T OnClickZoomOutb__38_0() {
		return ((T (*)(UIChillyPromotion*))(Il2CppBase() + 0x1E6AE40))(this);
	}

};

}
