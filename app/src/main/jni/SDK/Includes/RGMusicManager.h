#pragma once
#include "Il2Cpp/Il2Cpp.h"

class RGMusicManager
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RGMusicManager"));
	}

	template <typename T = float> static T& MuteVolumeValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> static T& NormalVolumeValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> T& bgm() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& bgmAux() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& effect() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& audioMixer() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = bool> T& _open_effect() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = bool> T& _open_bgm() {
		return *(T*)((uintptr_t)this + 0x39);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& effect_list() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& other_effects() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> static T& instance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> T& _BGMFadeSequence() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = void*> T& _loopPlayers() {
		return *(T*)((uintptr_t)this + 0x58);
	}

	template <typename T = bool> T get_open_effect() {
		return ((T (*)(RGMusicManager*))(Il2CppBase() + 0x1B672D8))(this);
	}
	template <typename T = void> T set_open_effect(bool value) {
		return ((T (*)(RGMusicManager*, bool))(Il2CppBase() + 0x1B74E30))(this, value);
	}
	template <typename T = bool> T get_open_bgm() {
		return ((T (*)(RGMusicManager*))(Il2CppBase() + 0x1B75024))(this);
	}
	template <typename T = void> T set_open_bgm(bool value) {
		return ((T (*)(RGMusicManager*, bool))(Il2CppBase() + 0x1B75084))(this, value);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(RGMusicManager*))(Il2CppBase() + 0x1B75278))(this);
	}
	template <typename T = uintptr_t> static T get_Inst() {
		return ((T (*)(void *))(Il2CppBase() + 0x1B75584))(0);
	}
	template <typename T = uintptr_t> static T GetInstance() {
		return ((T (*)(void *))(Il2CppBase() + 0x1B67054))(0);
	}
	template <typename T = void> T SetMasterVolume(float vol) {
		return ((T (*)(RGMusicManager*, float))(Il2CppBase() + 0x1B7561C))(this, vol);
	}
	template <typename T = void> T SetEffectVolume(float vol) {
		return ((T (*)(RGMusicManager*, float))(Il2CppBase() + 0x1B74F20))(this, vol);
	}
	template <typename T = void> T SetMusicVolume(float vol) {
		return ((T (*)(RGMusicManager*, float))(Il2CppBase() + 0x1B75174))(this, vol);
	}
	template <typename T = void> T SetMusicVolumeWithFade(float vol) {
		return ((T (*)(RGMusicManager*, float))(Il2CppBase() + 0x1B75720))(this, vol);
	}
	template <typename T = void> T PlayCurrentBGM() {
		return ((T (*)(RGMusicManager*))(Il2CppBase() + 0x1B75818))(this);
	}
	template <typename T = void> T StartBGMFadeMode() {
		return ((T (*)(RGMusicManager*))(Il2CppBase() + 0x1B75A14))(this);
	}
	template <typename T = void> T FadeOutBGM(float fadeDuration) {
		return ((T (*)(RGMusicManager*, float))(Il2CppBase() + 0x1B75AC0))(this, fadeDuration);
	}
	template <typename T = void> T FadeInBGM(uintptr_t clip, float fadeDuration) {
		return ((T (*)(RGMusicManager*, uintptr_t, float))(Il2CppBase() + 0x1B75BFC))(this, clip, fadeDuration);
	}
	template <typename T = void> T FadeInBGMImmediate(uintptr_t clip, float fadeDuration) {
		return ((T (*)(RGMusicManager*, uintptr_t, float))(Il2CppBase() + 0x1B75E18))(this, clip, fadeDuration);
	}
	template <typename T = void> T EndBGMFadeMode() {
		return ((T (*)(RGMusicManager*))(Il2CppBase() + 0x1B76058))(this);
	}
	template <typename T = void> T PlayBGM(uintptr_t the_audio) {
		return ((T (*)(RGMusicManager*, uintptr_t))(Il2CppBase() + 0x1B75F94))(this, the_audio);
	}
	template <typename T = void> T PlayBGMWithIntro(uintptr_t intro, uintptr_t loop, float silenceLength) {
		return ((T (*)(RGMusicManager*, uintptr_t, uintptr_t, float))(Il2CppBase() + 0x1B76144))(this, intro, loop, silenceLength);
	}
	template <typename T = void> T StopAllEffects() {
		return ((T (*)(RGMusicManager*))(Il2CppBase() + 0x1B76280))(this);
	}
	template <typename T = void> T PlayEffect(uintptr_t the_audio) {
		return ((T (*)(RGMusicManager*, uintptr_t))(Il2CppBase() + 0x1B72310))(this, the_audio);
	}
	template <typename T = void> T PlayEffect_1(uintptr_t the_audio, float volume) {
		return ((T (*)(RGMusicManager*, uintptr_t, float))(Il2CppBase() + 0x1B762F4))(this, the_audio, volume);
	}
	template <typename T = uintptr_t> T PlayLoopEffect(uintptr_t audio) {
		return ((T (*)(RGMusicManager*, uintptr_t))(Il2CppBase() + 0x1B7640C))(this, audio);
	}
	template <typename T = void> T StopLoopPlayer(uintptr_t lp) {
		return ((T (*)(RGMusicManager*, uintptr_t))(Il2CppBase() + 0x1B76770))(this, lp);
	}
	template <typename T = void> T PlayEffect_2(int32_t index) {
		return ((T (*)(RGMusicManager*, int32_t))(Il2CppBase() + 0x1B71020))(this, index);
	}
	template <typename T = void> T PlayOtherEffect(int32_t index, float volumeScale) {
		return ((T (*)(RGMusicManager*, int32_t, float))(Il2CppBase() + 0x1B76948))(this, index, volumeScale);
	}
	template <typename T = void> T PlayEffect_3(uintptr_t effectType) {
		return ((T (*)(RGMusicManager*, uintptr_t))(Il2CppBase() + 0x1B76A44))(this, effectType);
	}
	template <typename T = void> T SetVolume(int32_t volume_value, bool isbgm) {
		return ((T (*)(RGMusicManager*, int32_t, bool))(Il2CppBase() + 0x1B76AD8))(this, volume_value, isbgm);
	}
	template <typename T = void> T StopBgm() {
		return ((T (*)(RGMusicManager*))(Il2CppBase() + 0x1B76B98))(this);
	}
	template <typename T = void> T PauseBgm() {
		return ((T (*)(RGMusicManager*))(Il2CppBase() + 0x1B76C90))(this);
	}
	template <typename T = void> T ResumeBgm() {
		return ((T (*)(RGMusicManager*))(Il2CppBase() + 0x1B76D88))(this);
	}
	template <typename T = bool> T get_IsBgmPlaying() {
		return ((T (*)(RGMusicManager*))(Il2CppBase() + 0x1B76E70))(this);
	}
	template <typename T = bool> T SwitchBgmOpen() {
		return ((T (*)(RGMusicManager*))(Il2CppBase() + 0x1B76F50))(this);
	}
	template <typename T = bool> T SwitchEffectOpen() {
		return ((T (*)(RGMusicManager*))(Il2CppBase() + 0x1B77094))(this);
	}
	template <typename T = uintptr_t> T GetCurrentBGM() {
		return ((T (*)(RGMusicManager*))(Il2CppBase() + 0x1B77198))(this);
	}
	template <typename T = void> T TestSound(int32_t index) {
		return ((T (*)(RGMusicManager*, int32_t))(Il2CppBase() + 0x1B7720C))(this, index);
	}
	template <typename T = void> T TestOtherSound(int32_t index) {
		return ((T (*)(RGMusicManager*, int32_t))(Il2CppBase() + 0x1B77284))(this, index);
	}
	template <typename T = void> T PlayLoopEffectb__39_0() {
		return ((T (*)(RGMusicManager*))(Il2CppBase() + 0x1B77370))(this);
	}

};

}
