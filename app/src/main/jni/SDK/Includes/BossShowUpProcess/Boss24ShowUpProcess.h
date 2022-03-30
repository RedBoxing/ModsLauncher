#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace BossShowUpProcess {

class Boss24ShowUpProcess
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BossShowUpProcess", "Boss24ShowUpProcess"));
	}

	template <typename T = Il2CppString*> T& bossShowEventName() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& toAlarmDuration() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& afterAlarmDuration() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppString*> T& animNameAlarm() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppString*> T& animNameFadeOut() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = float> T& cameraMoveDuration() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = Il2CppVector2> T& cameraCenterOffset() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& uiMask() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = float> T& animDuration() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& mineAnimator() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& mineTransform() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = Il2CppVector2> T& nailReleaseRange() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& iceNail() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = Il2CppString*> T& bossId() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = uintptr_t> T& animObject() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = void*> T& bossHider() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& _showUpMask() {
		return *(T*)((uintptr_t)this + 0x90);
	}

	template <typename T = bool> T get_CanShow() {
		return ((T (*)(Boss24ShowUpProcess*))(Il2CppBase() + 0x1DEEE8C))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(Boss24ShowUpProcess*))(Il2CppBase() + 0x1DEEF20))(this);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(Boss24ShowUpProcess*))(Il2CppBase() + 0x1DEF328))(this);
	}
	template <typename T = void> T MineAnimationCallback(Il2CppString* eventName) {
		return ((T (*)(Boss24ShowUpProcess*, Il2CppString*))(Il2CppBase() + 0x1DEF3E0))(this, eventName);
	}
	template <typename T = void> T OnBossShowEvent() {
		return ((T (*)(Boss24ShowUpProcess*))(Il2CppBase() + 0x1DEF478))(this);
	}
	template <typename T = void> T ShowUp() {
		return ((T (*)(Boss24ShowUpProcess*))(Il2CppBase() + 0x1DEF5BC))(this);
	}
	template <typename T = uintptr_t> T ShowUpSequence() {
		return ((T (*)(Boss24ShowUpProcess*))(Il2CppBase() + 0x1DEF644))(this);
	}
	template <typename T = uintptr_t> T ReleaseNail() {
		return ((T (*)(Boss24ShowUpProcess*))(Il2CppBase() + 0x1DEF6F8))(this);
	}

};

}
