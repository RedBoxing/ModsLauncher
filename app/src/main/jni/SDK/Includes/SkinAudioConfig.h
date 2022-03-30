#pragma once
#include "Il2Cpp/Il2Cpp.h"

class SkinAudioConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SkinAudioConfig"));
	}

	template <typename T = bool> T& openConfig() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = float> T& volume() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& needTurnDownBGM() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = Il2CppDictionary<uintptr_t, Il2CppDictionary<int32_t, uintptr_t>*>*> T& selectClipDic() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = Il2CppDictionary<uintptr_t, Il2CppDictionary<int32_t, uintptr_t>*>*> T& deadClipDic() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = Il2CppDictionary<uintptr_t, Il2CppDictionary<int32_t, Il2CppArray<uintptr_t>*>*>*> T& skill0ClipDic() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = Il2CppDictionary<uintptr_t, Il2CppDictionary<int32_t, Il2CppArray<uintptr_t>*>*>*> T& skill1ClipDic() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = Il2CppDictionary<uintptr_t, Il2CppDictionary<int32_t, Il2CppArray<uintptr_t>*>*>*> T& skill2ClipDic() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = Il2CppDictionary<uintptr_t, Il2CppDictionary<int32_t, Il2CppArray<uintptr_t>*>*>*> T& customizeClipDic() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& playing() {
		return *(T*)((uintptr_t)this + 0x98);
	}

	template <typename T = uintptr_t> T GetSkinSelectClip(uintptr_t hero, int32_t skinIndex) {
		return ((T (*)(SkinAudioConfig*, uintptr_t, int32_t))(Il2CppBase() + 0x18335D8))(this, hero, skinIndex);
	}
	template <typename T = uintptr_t> T GetDeadClip(uintptr_t hero, int32_t skinIndex) {
		return ((T (*)(SkinAudioConfig*, uintptr_t, int32_t))(Il2CppBase() + 0x1833778))(this, hero, skinIndex);
	}
	template <typename T = uintptr_t> T GetSkillClip(int32_t skillIndex, uintptr_t hero, int32_t skinIndex, int32_t audioIndex) {
		return ((T (*)(SkinAudioConfig*, int32_t, uintptr_t, int32_t, int32_t))(Il2CppBase() + 0x1833800))(this, skillIndex, hero, skinIndex, audioIndex);
	}
	template <typename T = uintptr_t> T GetCustomizeClip(uintptr_t hero, int32_t skinIndex, int32_t audioIndex) {
		return ((T (*)(SkinAudioConfig*, uintptr_t, int32_t, int32_t))(Il2CppBase() + 0x1833D4C))(this, hero, skinIndex, audioIndex);
	}
	template <typename T = uintptr_t> T GetClip(Il2CppDictionary<uintptr_t, Il2CppDictionary<int32_t, uintptr_t>*>* dic, uintptr_t hero, int32_t skinIndex) {
		return ((T (*)(SkinAudioConfig*, Il2CppDictionary<uintptr_t, Il2CppDictionary<int32_t, uintptr_t>*>*, uintptr_t, int32_t))(Il2CppBase() + 0x1833660))(this, dic, hero, skinIndex);
	}
	template <typename T = uintptr_t> T GetClip_1(Il2CppDictionary<uintptr_t, Il2CppDictionary<int32_t, Il2CppArray<uintptr_t>*>*>* dic, uintptr_t hero, int32_t skinIndex, int32_t audioIndex) {
		return ((T (*)(SkinAudioConfig*, Il2CppDictionary<uintptr_t, Il2CppDictionary<int32_t, Il2CppArray<uintptr_t>*>*>*, uintptr_t, int32_t, int32_t))(Il2CppBase() + 0x1833988))(this, dic, hero, skinIndex, audioIndex);
	}
	template <typename T = void> T TurnDownBGMTemporarily(float clipLength) {
		return ((T (*)(SkinAudioConfig*, float))(Il2CppBase() + 0x1833BD8))(this, clipLength);
	}
	template <typename T = uintptr_t> T ChangeBGMVolumeBack(float waitTime) {
		return ((T (*)(SkinAudioConfig*, float))(Il2CppBase() + 0x1833F80))(this, waitTime);
	}
	template <typename T = uintptr_t> T SetPlayingToNull(float waitTime) {
		return ((T (*)(SkinAudioConfig*, float))(Il2CppBase() + 0x1833EA0))(this, waitTime);
	}

};

}
