#pragma once
#include "Il2Cpp/Il2Cpp.h"

class EmoticonTips
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "EmoticonTips"));
	}

	template <typename T = Il2CppDictionary<uintptr_t, uintptr_t>*> static T& emoticonTipsDic() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> T& delayDestroy() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppVector3> T& offset() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppVector3> T& _offset() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& masterCtrl() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& masterTf() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& spRenderer() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& bg() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = bool> T& needEmotionSyncDir() {
		return *(T*)((uintptr_t)this + 0x58);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(EmoticonTips*))(Il2CppBase() + 0x22AEC10))(this);
	}
	template <typename T = void> static T ShowEmoticonTips(uintptr_t masterCtrl, int32_t emoticonId, Il2CppVector3 offset, int32_t seed, float delay) {
		return ((T (*)(void *, uintptr_t, int32_t, Il2CppVector3, int32_t, float))(Il2CppBase() + 0x22AED3C))(0, masterCtrl, emoticonId, offset, seed, delay);
	}
	template <typename T = void> static T ShowEmoticonTips_1(uintptr_t transform, int32_t emoticonId, int32_t facing, Il2CppVector3 offset, float delay) {
		return ((T (*)(void *, uintptr_t, int32_t, int32_t, Il2CppVector3, float))(Il2CppBase() + 0x22AF424))(0, transform, emoticonId, facing, offset, delay);
	}
	template <typename T = uintptr_t> static T ShowEmoticonTips_2(uintptr_t masterCtrl, int32_t emoticonId, int32_t seed, float delay) {
		return ((T (*)(void *, uintptr_t, int32_t, int32_t, float))(Il2CppBase() + 0x22AEE94))(0, masterCtrl, emoticonId, seed, delay);
	}
	template <typename T = void> T ShowAnimation(uintptr_t master, int32_t faceDir, uintptr_t sp, bool needFrameBg, bool needEmotionSyncDir) {
		return ((T (*)(EmoticonTips*, uintptr_t, int32_t, uintptr_t, bool, bool))(Il2CppBase() + 0x22AF824))(this, master, faceDir, sp, needFrameBg, needEmotionSyncDir);
	}
	template <typename T = void> T ShowAnimation_1(uintptr_t tf, int32_t faceDir, uintptr_t sp) {
		return ((T (*)(EmoticonTips*, uintptr_t, int32_t, uintptr_t))(Il2CppBase() + 0x22AF638))(this, tf, faceDir, sp);
	}
	template <typename T = void> T UpdatePosDir(int32_t dir) {
		return ((T (*)(EmoticonTips*, int32_t))(Il2CppBase() + 0x22AFCC8))(this, dir);
	}
	template <typename T = void> T OnTaken() {
		return ((T (*)(EmoticonTips*))(Il2CppBase() + 0x22AFA80))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(EmoticonTips*))(Il2CppBase() + 0x22AFF8C))(this);
	}
	template <typename T = uintptr_t> T Destroying(float delayTime) {
		return ((T (*)(EmoticonTips*, float))(Il2CppBase() + 0x22AFBE8))(this, delayTime);
	}

};

}
