#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace DG.Tweening {

class DOTweenAnimation
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "DG.Tweening", "DOTweenAnimation"));
	}

	template <typename T = float> T& delay() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = float> T& duration() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = uintptr_t> T& easeType() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = uintptr_t> T& easeCurve() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = uintptr_t> T& loopType() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = int32_t> T& loops() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = Il2CppString*> T& id() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = bool> T& isRelative() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = bool> T& isFrom() {
		return *(T*)((uintptr_t)this + 0x91);
	}
	template <typename T = bool> T& isIndependentUpdate() {
		return *(T*)((uintptr_t)this + 0x92);
	}
	template <typename T = bool> T& autoKill() {
		return *(T*)((uintptr_t)this + 0x93);
	}
	template <typename T = bool> T& isActive() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = bool> T& isValid() {
		return *(T*)((uintptr_t)this + 0x95);
	}
	template <typename T = uintptr_t> T& target() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& animationType() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> T& targetType() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = uintptr_t> T& forcedTargetType() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = bool> T& autoPlay() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = bool> T& useTargetAsV3() {
		return *(T*)((uintptr_t)this + 0xAD);
	}
	template <typename T = float> T& endValueFloat() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = Il2CppVector3> T& endValueV3() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = Il2CppVector2> T& endValueV2() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = uintptr_t> T& endValueColor() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = Il2CppString*> T& endValueString() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = Il2CppRect> T& endValueRect() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = uintptr_t> T& endValueTransform() {
		return *(T*)((uintptr_t)this + 0xF0);
	}
	template <typename T = bool> T& optionalBool0() {
		return *(T*)((uintptr_t)this + 0xF8);
	}
	template <typename T = float> T& optionalFloat0() {
		return *(T*)((uintptr_t)this + 0xFC);
	}
	template <typename T = int32_t> T& optionalInt0() {
		return *(T*)((uintptr_t)this + 0x100);
	}
	template <typename T = uintptr_t> T& optionalRotationMode() {
		return *(T*)((uintptr_t)this + 0x104);
	}
	template <typename T = uintptr_t> T& optionalScrambleMode() {
		return *(T*)((uintptr_t)this + 0x108);
	}
	template <typename T = Il2CppString*> T& optionalString() {
		return *(T*)((uintptr_t)this + 0x110);
	}
	template <typename T = bool> T& _tweenCreated() {
		return *(T*)((uintptr_t)this + 0x118);
	}
	template <typename T = int32_t> T& _playCount() {
		return *(T*)((uintptr_t)this + 0x11C);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(DOTweenAnimation*))(Il2CppBase() + 0x428A3AC))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(DOTweenAnimation*))(Il2CppBase() + 0x428C3F8))(this);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(DOTweenAnimation*))(Il2CppBase() + 0x428C47C))(this);
	}
	template <typename T = void> T CreateTween() {
		return ((T (*)(DOTweenAnimation*))(Il2CppBase() + 0x428A43C))(this);
	}
	template <typename T = void> T DOPlay() {
		return ((T (*)(DOTweenAnimation*))(Il2CppBase() + 0x428C734))(this);
	}
	template <typename T = void> T DOPlayBackwards() {
		return ((T (*)(DOTweenAnimation*))(Il2CppBase() + 0x428C7F0))(this);
	}
	template <typename T = void> T DOPlayForward() {
		return ((T (*)(DOTweenAnimation*))(Il2CppBase() + 0x428C8AC))(this);
	}
	template <typename T = void> T DOPause() {
		return ((T (*)(DOTweenAnimation*))(Il2CppBase() + 0x428C968))(this);
	}
	template <typename T = void> T DOTogglePause() {
		return ((T (*)(DOTweenAnimation*))(Il2CppBase() + 0x428CA24))(this);
	}
	template <typename T = void> T DORewind() {
		return ((T (*)(DOTweenAnimation*))(Il2CppBase() + 0x428CAE0))(this);
	}
	template <typename T = void> T DORestart(bool fromHere) {
		return ((T (*)(DOTweenAnimation*, bool))(Il2CppBase() + 0x428CC60))(this, fromHere);
	}
	template <typename T = void> T DOComplete() {
		return ((T (*)(DOTweenAnimation*))(Il2CppBase() + 0x428D19C))(this);
	}
	template <typename T = void> T DOKill() {
		return ((T (*)(DOTweenAnimation*))(Il2CppBase() + 0x428D25C))(this);
	}
	template <typename T = void> T DOPlayById(Il2CppString* id) {
		return ((T (*)(DOTweenAnimation*, Il2CppString*))(Il2CppBase() + 0x428D324))(this, id);
	}
	template <typename T = void> T DOPlayAllById(Il2CppString* id) {
		return ((T (*)(DOTweenAnimation*, Il2CppString*))(Il2CppBase() + 0x428D3F8))(this, id);
	}
	template <typename T = void> T DOPauseAllById(Il2CppString* id) {
		return ((T (*)(DOTweenAnimation*, Il2CppString*))(Il2CppBase() + 0x428D4B4))(this, id);
	}
	template <typename T = void> T DOPlayBackwardsById(Il2CppString* id) {
		return ((T (*)(DOTweenAnimation*, Il2CppString*))(Il2CppBase() + 0x428D570))(this, id);
	}
	template <typename T = void> T DOPlayBackwardsAllById(Il2CppString* id) {
		return ((T (*)(DOTweenAnimation*, Il2CppString*))(Il2CppBase() + 0x428D644))(this, id);
	}
	template <typename T = void> T DOPlayForwardById(Il2CppString* id) {
		return ((T (*)(DOTweenAnimation*, Il2CppString*))(Il2CppBase() + 0x428D700))(this, id);
	}
	template <typename T = void> T DOPlayForwardAllById(Il2CppString* id) {
		return ((T (*)(DOTweenAnimation*, Il2CppString*))(Il2CppBase() + 0x428D7D4))(this, id);
	}
	template <typename T = void> T DOPlayNext() {
		return ((T (*)(DOTweenAnimation*))(Il2CppBase() + 0x428D890))(this);
	}
	template <typename T = void> T DORewindAndPlayNext() {
		return ((T (*)(DOTweenAnimation*))(Il2CppBase() + 0x428DA0C))(this);
	}
	template <typename T = void> T DORestartById(Il2CppString* id) {
		return ((T (*)(DOTweenAnimation*, Il2CppString*))(Il2CppBase() + 0x428DADC))(this, id);
	}
	template <typename T = void> T DORestartAllById(Il2CppString* id) {
		return ((T (*)(DOTweenAnimation*, Il2CppString*))(Il2CppBase() + 0x428DBC0))(this, id);
	}
	template <typename T = Il2CppList<uintptr_t>*> T GetTweens() {
		return ((T (*)(DOTweenAnimation*))(Il2CppBase() + 0x428DC8C))(this);
	}
	template <typename T = uintptr_t> static T TypeToDOTargetType(uintptr_t t) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x428C500))(0, t);
	}
	template <typename T = void> T ReEvaluateRelativeTween() {
		return ((T (*)(DOTweenAnimation*))(Il2CppBase() + 0x428CDA0))(this);
	}
	template <typename T = void> T CreateTweenb__37_0() {
		return ((T (*)(DOTweenAnimation*))(Il2CppBase() + 0x428DFE8))(this);
	}

};

}
