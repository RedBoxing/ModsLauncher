#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace BossShowUpProcess {

class Boss25ShowUpProcess
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BossShowUpProcess", "Boss25ShowUpProcess"));
	}

	template <typename T = uintptr_t> T& animationObject() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& animator() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& animBoss25ImgTransform() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppString*> T& showAnimKey() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppString*> T& animCompleteCallbackKey() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& uiMask() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = float> T& uiMaskDuration() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = float> T& cameraMoveDuration() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = uintptr_t> T& cameraTargetTransform() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = Il2CppVector2> T& cameraCenterOffset() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = Il2CppString*> T& bossId() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = void*> T& bossHider() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = uintptr_t> T& _showUpMask() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = uintptr_t> T& onShowComplete() {
		return *(T*)((uintptr_t)this + 0x78);
	}

	template <typename T = bool> T get_CanShow() {
		return ((T (*)(Boss25ShowUpProcess*))(Il2CppBase() + 0x1B82204))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(Boss25ShowUpProcess*))(Il2CppBase() + 0x1B82298))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(Boss25ShowUpProcess*))(Il2CppBase() + 0x1B824F8))(this);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(Boss25ShowUpProcess*))(Il2CppBase() + 0x1B825A4))(this);
	}
	template <typename T = void> T ShowUp() {
		return ((T (*)(Boss25ShowUpProcess*))(Il2CppBase() + 0x1B82650))(this);
	}
	template <typename T = void> T OnAnimationComplete(Il2CppString* callbackKey) {
		return ((T (*)(Boss25ShowUpProcess*, Il2CppString*))(Il2CppBase() + 0x1B82B54))(this, callbackKey);
	}
	template <typename T = uintptr_t> T ShowBoss() {
		return ((T (*)(Boss25ShowUpProcess*))(Il2CppBase() + 0x1B82C18))(this);
	}

};

}
