#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace Com.LuisPedroFonseca.ProCamera2D {

class ProCamera2DShake
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Com.LuisPedroFonseca.ProCamera2D", "ProCamera2DShake"));
	}

	template <typename T = Il2CppString*> static T& ExtensionName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _instance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> T& OnShakeCompleted() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = Il2CppVector2> T& Strength() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = float> T& Duration() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = int32_t> T& Vibrato() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = float> T& Randomness() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = float> T& Smoothness() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = float> T& InitialAngle() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = bool> T& UseRandomInitialAngle() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = Il2CppVector3> T& Rotation() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = bool> T& IgnoreTimeScale() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& ShakePresets() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& _shakeParent() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _applyInfluencesCoroutines() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> T& _shakeCoroutine() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = Il2CppVector3> T& _shakeVelocity() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = Il2CppList<Il2CppVector3>*> T& _shakePositions() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = Il2CppQuaternion> T& _rotationTarget() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = Il2CppQuaternion> T& _originalRotation() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = float> T& _rotationTime() {
		return *(T*)((uintptr_t)this + 0xE8);
	}
	template <typename T = float> T& _rotationVelocity() {
		return *(T*)((uintptr_t)this + 0xEC);
	}
	template <typename T = Il2CppList<Il2CppVector3>*> T& _influences() {
		return *(T*)((uintptr_t)this + 0xF0);
	}
	template <typename T = Il2CppVector3> T& _influencesSum() {
		return *(T*)((uintptr_t)this + 0xF8);
	}

	template <typename T = uintptr_t> static T get_Instance() {
		return ((T (*)(void *))(Il2CppBase() + 0x2C29510))(0);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(ProCamera2DShake*))(Il2CppBase() + 0x2C29710))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(ProCamera2DShake*))(Il2CppBase() + 0x2C29A40))(this);
	}
	template <typename T = void> T Shake() {
		return ((T (*)(ProCamera2DShake*))(Il2CppBase() + 0x2C29DE8))(this);
	}
	template <typename T = void> T Shake_1(float duration, Il2CppVector2 strength, int32_t vibrato, float randomness, float initialAngle, Il2CppVector3 rotation, float smoothness, bool ignoreTimeScale) {
		return ((T (*)(ProCamera2DShake*, float, Il2CppVector2, int32_t, float, float, Il2CppVector3, float, bool))(Il2CppBase() + 0x2C29E90))(this, duration, strength, vibrato, randomness, initialAngle, rotation, smoothness, ignoreTimeScale);
	}
	template <typename T = void> T ShakeUsingPreset(int32_t presetIndex) {
		return ((T (*)(ProCamera2DShake*, int32_t))(Il2CppBase() + 0x2C2A800))(this, presetIndex);
	}
	template <typename T = void> T ShakeUsingPreset_1(Il2CppString* presetName) {
		return ((T (*)(ProCamera2DShake*, Il2CppString*))(Il2CppBase() + 0x2C2AB38))(this, presetName);
	}
	template <typename T = void> T StopShaking() {
		return ((T (*)(ProCamera2DShake*))(Il2CppBase() + 0x2C2AEA0))(this);
	}
	template <typename T = uintptr_t> T ApplyShakesTimed(Il2CppArray<uintptr_t>* shakes, Il2CppArray<uintptr_t>* rotations, Il2CppArray<uintptr_t>* durations, float smoothness, bool ignoreTimeScale) {
		return ((T (*)(ProCamera2DShake*, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*, float, bool))(Il2CppBase() + 0x2C2AFE4))(this, shakes, rotations, durations, smoothness, ignoreTimeScale);
	}
	template <typename T = void> T ApplyInfluenceIgnoringBoundaries(Il2CppVector2 influence) {
		return ((T (*)(ProCamera2DShake*, Il2CppVector2))(Il2CppBase() + 0x2C2B214))(this, influence);
	}
	template <typename T = uintptr_t> T ApplyShakesTimed_1(Il2CppArray<uintptr_t>* shakes, Il2CppArray<uintptr_t>* rotations, Il2CppArray<uintptr_t>* durations, float smoothness, bool ignoreTimeScale) {
		return ((T (*)(ProCamera2DShake*, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*, float, bool))(Il2CppBase() + 0x2C2A6F8))(this, shakes, rotations, durations, smoothness, ignoreTimeScale);
	}
	template <typename T = uintptr_t> T ShakeRoutine(float smoothness, bool ignoreTimeScale) {
		return ((T (*)(ProCamera2DShake*, float, bool))(Il2CppBase() + 0x2C2B4A8))(this, smoothness, ignoreTimeScale);
	}
	template <typename T = uintptr_t> T ApplyShakesTimedRoutine(void* shakes, void* rotations, Il2CppArray<uintptr_t>* durations, bool ignoreTimeScale) {
		return ((T (*)(ProCamera2DShake*, void*, void*, Il2CppArray<uintptr_t>*, bool))(Il2CppBase() + 0x2C2B36C))(this, shakes, rotations, durations, ignoreTimeScale);
	}
	template <typename T = uintptr_t> T ApplyShakeTimedRoutine(Il2CppVector2 shake, Il2CppQuaternion rotation, float duration, bool ignoreTimeScale) {
		return ((T (*)(ProCamera2DShake*, Il2CppVector2, Il2CppQuaternion, float, bool))(Il2CppBase() + 0x2C2B608))(this, shake, rotation, duration, ignoreTimeScale);
	}
	template <typename T = void> T iFixBaseProxy_Awake() {
		return ((T (*)(ProCamera2DShake*))(Il2CppBase() + 0x2C2B954))(this);
	}

};

}
