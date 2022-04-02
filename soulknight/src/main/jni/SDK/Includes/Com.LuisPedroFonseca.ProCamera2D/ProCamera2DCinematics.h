#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace Com.LuisPedroFonseca.ProCamera2D {

class ProCamera2DCinematics
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Com.LuisPedroFonseca.ProCamera2D", "ProCamera2DCinematics"));
	}

	template <typename T = Il2CppString*> static T& ExtensionName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& CinematicStarted() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = void*> T& CinematicReachedTarget() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uintptr_t> T& CinematicEnded() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = bool> T& _isPlaying() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& CinematicTargets() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = float> T& EndDuration() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& EndEaseType() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = bool> T& UseNumericBoundaries() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = bool> T& UseLetterbox() {
		return *(T*)((uintptr_t)this + 0x89);
	}
	template <typename T = float> T& LetterboxAmount() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = float> T& LetterboxAnimDuration() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& LetterboxColor() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = float> T& _initialCameraSize() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = uintptr_t> T& _numericBoundaries() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& _letterbox() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = uintptr_t> T& _startCinematicRoutine() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = uintptr_t> T& _goToCinematicRoutine() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = uintptr_t> T& _endCinematicRoutine() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = bool> T& _skipTarget() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = Il2CppVector3> T& _newPos() {
		return *(T*)((uintptr_t)this + 0xD4);
	}
	template <typename T = Il2CppVector3> T& _originalPos() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = float> T& _newSize() {
		return *(T*)((uintptr_t)this + 0xEC);
	}
	template <typename T = bool> T& _paused() {
		return *(T*)((uintptr_t)this + 0xF0);
	}
	template <typename T = int32_t> T& _poOrder() {
		return *(T*)((uintptr_t)this + 0xF4);
	}
	template <typename T = int32_t> T& _soOrder() {
		return *(T*)((uintptr_t)this + 0xF8);
	}

	template <typename T = bool> T get_IsPlaying() {
		return ((T (*)(ProCamera2DCinematics*))(Il2CppBase() + 0x2C1B208))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(ProCamera2DCinematics*))(Il2CppBase() + 0x2C1B268))(this);
	}
	template <typename T = Il2CppVector3> T OverridePosition(float deltaTime, Il2CppVector3 originalPosition) {
		return ((T (*)(ProCamera2DCinematics*, float, Il2CppVector3))(Il2CppBase() + 0x2C1B5B8))(this, deltaTime, originalPosition);
	}
	template <typename T = int32_t> T get_POOrder() {
		return ((T (*)(ProCamera2DCinematics*))(Il2CppBase() + 0x2C1B680))(this);
	}
	template <typename T = void> T set_POOrder(int32_t value) {
		return ((T (*)(ProCamera2DCinematics*, int32_t))(Il2CppBase() + 0x2C1B6E0))(this, value);
	}
	template <typename T = float> T OverrideSize(float deltaTime, float originalSize) {
		return ((T (*)(ProCamera2DCinematics*, float, float))(Il2CppBase() + 0x2C1B754))(this, deltaTime, originalSize);
	}
	template <typename T = int32_t> T get_SOOrder() {
		return ((T (*)(ProCamera2DCinematics*))(Il2CppBase() + 0x2C1B7EC))(this);
	}
	template <typename T = void> T set_SOOrder(int32_t value) {
		return ((T (*)(ProCamera2DCinematics*, int32_t))(Il2CppBase() + 0x2C1B84C))(this, value);
	}
	template <typename T = void> T Play() {
		return ((T (*)(ProCamera2DCinematics*))(Il2CppBase() + 0x2C1B8C0))(this);
	}
	template <typename T = void> T Stop() {
		return ((T (*)(ProCamera2DCinematics*))(Il2CppBase() + 0x2C1BB50))(this);
	}
	template <typename T = void> T Toggle() {
		return ((T (*)(ProCamera2DCinematics*))(Il2CppBase() + 0x2C1BCBC))(this);
	}
	template <typename T = void> T GoToNextTarget() {
		return ((T (*)(ProCamera2DCinematics*))(Il2CppBase() + 0x2C1BD34))(this);
	}
	template <typename T = void> T Pause() {
		return ((T (*)(ProCamera2DCinematics*))(Il2CppBase() + 0x2C1BD98))(this);
	}
	template <typename T = void> T Unpause() {
		return ((T (*)(ProCamera2DCinematics*))(Il2CppBase() + 0x2C1BDFC))(this);
	}
	template <typename T = void> T AddCinematicTarget(uintptr_t targetTransform, float easeInDuration, float holdDuration, float zoom, uintptr_t easeType, Il2CppString* sendMessageName, Il2CppString* sendMessageParam, int32_t index) {
		return ((T (*)(ProCamera2DCinematics*, uintptr_t, float, float, float, uintptr_t, Il2CppString*, Il2CppString*, int32_t))(Il2CppBase() + 0x2C1BE5C))(this, targetTransform, easeInDuration, holdDuration, zoom, easeType, sendMessageName, sendMessageParam, index);
	}
	template <typename T = void> T RemoveCinematicTarget(uintptr_t targetTransform) {
		return ((T (*)(ProCamera2DCinematics*, uintptr_t))(Il2CppBase() + 0x2C1C094))(this, targetTransform);
	}
	template <typename T = uintptr_t> T StartCinematicRoutine() {
		return ((T (*)(ProCamera2DCinematics*))(Il2CppBase() + 0x2C1BA9C))(this);
	}
	template <typename T = uintptr_t> T GoToCinematicTargetRoutine(uintptr_t cinematicTarget, int32_t targetIndex) {
		return ((T (*)(ProCamera2DCinematics*, uintptr_t, int32_t))(Il2CppBase() + 0x2C1C274))(this, cinematicTarget, targetIndex);
	}
	template <typename T = uintptr_t> T EndCinematicRoutine() {
		return ((T (*)(ProCamera2DCinematics*))(Il2CppBase() + 0x2C1BC08))(this);
	}
	template <typename T = void> T SetupLetterbox() {
		return ((T (*)(ProCamera2DCinematics*))(Il2CppBase() + 0x2C1B344))(this);
	}
	template <typename T = void> T LimitToNumericBoundaries(uintptr_t horizontalPos, uintptr_t verticalPos) {
		return ((T (*)(ProCamera2DCinematics*, uintptr_t, uintptr_t))(Il2CppBase() + 0x2C1C3C4))(this, horizontalPos, verticalPos);
	}
	template <typename T = void> T iFixBaseProxy_Awake() {
		return ((T (*)(ProCamera2DCinematics*))(Il2CppBase() + 0x2C1C7D8))(this);
	}

};

}
