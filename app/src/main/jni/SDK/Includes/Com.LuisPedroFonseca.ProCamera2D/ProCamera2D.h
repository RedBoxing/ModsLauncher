#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace Com.LuisPedroFonseca.ProCamera2D {

class ProCamera2D
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Com.LuisPedroFonseca.ProCamera2D", "ProCamera2D"));
	}

	template <typename T = Il2CppString*> static T& VERSION() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& CameraTargets() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> T& CenterTargetOnStart() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& Axis() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& UpdateType() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = bool> T& FollowHorizontal() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = float> T& HorizontalFollowSmoothness() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = bool> T& FollowVertical() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = float> T& VerticalFollowSmoothness() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = Il2CppVector2> T& OverallOffset() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = bool> T& ZoomWithFOV() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uintptr_t> static T& _instance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> T& _cameraTargetHorizontalPositionSmoothed() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = float> T& _cameraTargetVerticalPositionSmoothed() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = Il2CppVector2> T& _screenSizeInWorldCoordinates() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = Il2CppVector3> T& _previousTargetsMidPoint() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = Il2CppVector3> T& _targetsMidPoint() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = Il2CppVector3> T& _cameraTargetPosition() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = float> T& _cameraDepthPos() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = float> T& _deltaTime() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = Il2CppVector3> T& _parentPosition() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = void*> T& PreMoveUpdate() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = void*> T& PostMoveUpdate() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& OnReset() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = void*> T& ExclusiveTargetPosition() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = int32_t> T& CurrentZoomTriggerID() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = bool> T& IsCameraPositionLeftBounded() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = bool> T& IsCameraPositionRightBounded() {
		return *(T*)((uintptr_t)this + 0xBD);
	}
	template <typename T = bool> T& IsCameraPositionTopBounded() {
		return *(T*)((uintptr_t)this + 0xBE);
	}
	template <typename T = bool> T& IsCameraPositionBottomBounded() {
		return *(T*)((uintptr_t)this + 0xBF);
	}
	template <typename T = uintptr_t> T& GameCamera() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = void*> T& Vector3H() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = void*> T& Vector3V() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = void*> T& Vector3D() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = void*> T& VectorHV() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = void*> T& VectorHVD() {
		return *(T*)((uintptr_t)this + 0xE8);
	}
	template <typename T = Il2CppVector2> T& _startScreenSizeInWorldCoordinates() {
		return *(T*)((uintptr_t)this + 0xF0);
	}
	template <typename T = uintptr_t> T& _updateScreenSizeCoroutine() {
		return *(T*)((uintptr_t)this + 0xF8);
	}
	template <typename T = Il2CppList<Il2CppVector3>*> T& _influences() {
		return *(T*)((uintptr_t)this + 0x100);
	}
	template <typename T = Il2CppVector3> T& _influencesSum() {
		return *(T*)((uintptr_t)this + 0x108);
	}
	template <typename T = float> T& _originalCameraDepthSign() {
		return *(T*)((uintptr_t)this + 0x114);
	}
	template <typename T = float> T& _previousCameraTargetHorizontalPositionSmoothed() {
		return *(T*)((uintptr_t)this + 0x118);
	}
	template <typename T = float> T& _previousCameraTargetVerticalPositionSmoothed() {
		return *(T*)((uintptr_t)this + 0x11C);
	}
	template <typename T = uintptr_t> T& _waitForFixedUpdate() {
		return *(T*)((uintptr_t)this + 0x120);
	}
	template <typename T = uintptr_t> T& _transform() {
		return *(T*)((uintptr_t)this + 0x128);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _preMovers() {
		return *(T*)((uintptr_t)this + 0x130);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _positionDeltaChangers() {
		return *(T*)((uintptr_t)this + 0x138);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _positionOverriders() {
		return *(T*)((uintptr_t)this + 0x140);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _sizeDeltaChangers() {
		return *(T*)((uintptr_t)this + 0x148);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _sizeOverriders() {
		return *(T*)((uintptr_t)this + 0x150);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _postMovers() {
		return *(T*)((uintptr_t)this + 0x158);
	}
	template <typename T = int32_t> T& _drawGizmosCounter() {
		return *(T*)((uintptr_t)this + 0x160);
	}

	template <typename T = uintptr_t> static T get_Instance() {
		return ((T (*)(void *))(Il2CppBase() + 0x2084664))(0);
	}
	template <typename T = Il2CppRect> T get_Rect() {
		return ((T (*)(ProCamera2D*))(Il2CppBase() + 0x2084818))(this);
	}
	template <typename T = void> T set_Rect(Il2CppRect value) {
		return ((T (*)(ProCamera2D*, Il2CppRect))(Il2CppBase() + 0x208488C))(this, value);
	}
	template <typename T = Il2CppVector2> T get_CameraTargetPositionSmoothed() {
		return ((T (*)(ProCamera2D*))(Il2CppBase() + 0x2084A7C))(this);
	}
	template <typename T = void> T set_CameraTargetPositionSmoothed(Il2CppVector2 value) {
		return ((T (*)(ProCamera2D*, Il2CppVector2))(Il2CppBase() + 0x2084AF8))(this, value);
	}
	template <typename T = Il2CppVector3> T get_LocalPosition() {
		return ((T (*)(ProCamera2D*))(Il2CppBase() + 0x207C10C))(this);
	}
	template <typename T = void> T set_LocalPosition(Il2CppVector3 value) {
		return ((T (*)(ProCamera2D*, Il2CppVector3))(Il2CppBase() + 0x2084B74))(this, value);
	}
	template <typename T = Il2CppVector2> T get_ScreenSizeInWorldCoordinates() {
		return ((T (*)(ProCamera2D*))(Il2CppBase() + 0x207B920))(this);
	}
	template <typename T = Il2CppVector3> T get_PreviousTargetsMidPoint() {
		return ((T (*)(ProCamera2D*))(Il2CppBase() + 0x2084C24))(this);
	}
	template <typename T = Il2CppVector3> T get_TargetsMidPoint() {
		return ((T (*)(ProCamera2D*))(Il2CppBase() + 0x207A1B0))(this);
	}
	template <typename T = Il2CppVector3> T get_CameraTargetPosition() {
		return ((T (*)(ProCamera2D*))(Il2CppBase() + 0x2084C88))(this);
	}
	template <typename T = float> T get_CameraDepthPos() {
		return ((T (*)(ProCamera2D*))(Il2CppBase() + 0x2084CEC))(this);
	}
	template <typename T = float> T get_DeltaTime() {
		return ((T (*)(ProCamera2D*))(Il2CppBase() + 0x207C180))(this);
	}
	template <typename T = Il2CppVector3> T get_ParentPosition() {
		return ((T (*)(ProCamera2D*))(Il2CppBase() + 0x2084D4C))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(ProCamera2D*))(Il2CppBase() + 0x2084DB0))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(ProCamera2D*))(Il2CppBase() + 0x2085A98))(this);
	}
	template <typename T = void> T LateUpdate() {
		return ((T (*)(ProCamera2D*))(Il2CppBase() + 0x20870E8))(this);
	}
	template <typename T = void> T FixedUpdate() {
		return ((T (*)(ProCamera2D*))(Il2CppBase() + 0x2087E84))(this);
	}
	template <typename T = void> T OnApplicationQuit() {
		return ((T (*)(ProCamera2D*))(Il2CppBase() + 0x2087F04))(this);
	}
	template <typename T = void> T ApplyInfluence(Il2CppVector2 influence) {
		return ((T (*)(ProCamera2D*, Il2CppVector2))(Il2CppBase() + 0x2087F98))(this, influence);
	}
	template <typename T = uintptr_t> T ApplyInfluencesTimed(Il2CppArray<uintptr_t>* influences, Il2CppArray<uintptr_t>* durations) {
		return ((T (*)(ProCamera2D*, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x20880F0))(this, influences, durations);
	}
	template <typename T = uintptr_t> T AddCameraTarget(uintptr_t targetTransform, float targetInfluenceH, float targetInfluenceV, float duration, Il2CppVector2 targetOffset) {
		return ((T (*)(ProCamera2D*, uintptr_t, float, float, float, Il2CppVector2))(Il2CppBase() + 0x208827C))(this, targetTransform, targetInfluenceH, targetInfluenceV, duration, targetOffset);
	}
	template <typename T = void> T AddCameraTargets(void* targetsTransforms, float targetsInfluenceH, float targetsInfluenceV, float duration, Il2CppVector2 targetOffset) {
		return ((T (*)(ProCamera2D*, void*, float, float, float, Il2CppVector2))(Il2CppBase() + 0x2088590))(this, targetsTransforms, targetsInfluenceH, targetsInfluenceV, duration, targetOffset);
	}
	template <typename T = uintptr_t> T GetCameraTarget(uintptr_t targetTransform) {
		return ((T (*)(ProCamera2D*, uintptr_t))(Il2CppBase() + 0x208879C))(this, targetTransform);
	}
	template <typename T = void> T RemoveCameraTarget(uintptr_t targetTransform, float duration) {
		return ((T (*)(ProCamera2D*, uintptr_t, float))(Il2CppBase() + 0x2088910))(this, targetTransform, duration);
	}
	template <typename T = void> T RemoveAllCameraTargets(float duration) {
		return ((T (*)(ProCamera2D*, float))(Il2CppBase() + 0x2088B2C))(this, duration);
	}
	template <typename T = uintptr_t> T AdjustCameraTargetInfluence(uintptr_t cameraTarget, float targetInfluenceH, float targetInfluenceV, float duration) {
		return ((T (*)(ProCamera2D*, uintptr_t, float, float, float))(Il2CppBase() + 0x2088CA4))(this, cameraTarget, targetInfluenceH, targetInfluenceV, duration);
	}
	template <typename T = uintptr_t> T AdjustCameraTargetInfluence_1(uintptr_t cameraTargetTransf, float targetInfluenceH, float targetInfluenceV, float duration) {
		return ((T (*)(ProCamera2D*, uintptr_t, float, float, float))(Il2CppBase() + 0x2088DB8))(this, cameraTargetTransf, targetInfluenceH, targetInfluenceV, duration);
	}
	template <typename T = void> T MoveCameraInstantlyToPosition(Il2CppVector2 cameraPos) {
		return ((T (*)(ProCamera2D*, Il2CppVector2))(Il2CppBase() + 0x2086F68))(this, cameraPos);
	}
	template <typename T = void> T Reset(bool centerOnTargets) {
		return ((T (*)(ProCamera2D*, bool))(Il2CppBase() + 0x2088FE0))(this, centerOnTargets);
	}
	template <typename T = void> T UpdateScreenSize(float newSize, float duration, uintptr_t easeType) {
		return ((T (*)(ProCamera2D*, float, float, uintptr_t))(Il2CppBase() + 0x20891FC))(this, newSize, duration, easeType);
	}
	template <typename T = void> T Zoom(float zoomAmount, float duration, uintptr_t easeType) {
		return ((T (*)(ProCamera2D*, float, float, uintptr_t))(Il2CppBase() + 0x2089848))(this, zoomAmount, duration, easeType);
	}
	template <typename T = void> T Move(float deltaTime) {
		return ((T (*)(ProCamera2D*, float))(Il2CppBase() + 0x2087164))(this, deltaTime);
	}
	template <typename T = uintptr_t> T GetYield() {
		return ((T (*)(ProCamera2D*))(Il2CppBase() + 0x207C1E0))(this);
	}
	template <typename T = void> T ResetAxisFunctions() {
		return ((T (*)(ProCamera2D*))(Il2CppBase() + 0x20851D8))(this);
	}
	template <typename T = Il2CppVector3> T GetTargetsWeightedMidPoint(void* targets) {
		return ((T (*)(ProCamera2D*, void*))(Il2CppBase() + 0x2086698))(this, targets);
	}
	template <typename T = uintptr_t> T ApplyInfluencesTimedRoutine(void* influences, Il2CppArray<uintptr_t>* durations) {
		return ((T (*)(ProCamera2D*, void*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x2088184))(this, influences, durations);
	}
	template <typename T = uintptr_t> T ApplyInfluenceTimedRoutine(Il2CppVector2 influence, float duration) {
		return ((T (*)(ProCamera2D*, Il2CppVector2, float))(Il2CppBase() + 0x20898F0))(this, influence, duration);
	}
	template <typename T = uintptr_t> T AdjustTargetInfluenceRoutine(uintptr_t cameraTarget, float influenceH, float influenceV, float duration, bool removeIfZeroInfluence) {
		return ((T (*)(ProCamera2D*, uintptr_t, float, float, float, bool))(Il2CppBase() + 0x2088430))(this, cameraTarget, influenceH, influenceV, duration, removeIfZeroInfluence);
	}
	template <typename T = uintptr_t> T UpdateScreenSizeRoutine(float finalSize, float duration, uintptr_t easeType) {
		return ((T (*)(ProCamera2D*, float, float, uintptr_t))(Il2CppBase() + 0x20892F8))(this, finalSize, duration, easeType);
	}
	template <typename T = void> T SetScreenSize(float newSize) {
		return ((T (*)(ProCamera2D*, float))(Il2CppBase() + 0x2089414))(this, newSize);
	}
	template <typename T = void> T ResetMovement() {
		return ((T (*)(ProCamera2D*))(Il2CppBase() + 0x2088E98))(this);
	}
	template <typename T = void> T ResetSize() {
		return ((T (*)(ProCamera2D*))(Il2CppBase() + 0x2089190))(this);
	}
	template <typename T = void> T AddPreMover(uintptr_t mover) {
		return ((T (*)(ProCamera2D*, uintptr_t))(Il2CppBase() + 0x2089A04))(this, mover);
	}
	template <typename T = void> T RemovePreMover(uintptr_t mover) {
		return ((T (*)(ProCamera2D*, uintptr_t))(Il2CppBase() + 0x2089ABC))(this, mover);
	}
	template <typename T = void> T SortPreMovers() {
		return ((T (*)(ProCamera2D*))(Il2CppBase() + 0x2085E88))(this);
	}
	template <typename T = void> T AddPositionDeltaChanger(uintptr_t changer) {
		return ((T (*)(ProCamera2D*, uintptr_t))(Il2CppBase() + 0x2089B74))(this, changer);
	}
	template <typename T = void> T RemovePositionDeltaChanger(uintptr_t changer) {
		return ((T (*)(ProCamera2D*, uintptr_t))(Il2CppBase() + 0x2089C2C))(this, changer);
	}
	template <typename T = void> T SortPositionDeltaChangers() {
		return ((T (*)(ProCamera2D*))(Il2CppBase() + 0x2085FE0))(this);
	}
	template <typename T = void> T AddPositionOverrider(uintptr_t overrider) {
		return ((T (*)(ProCamera2D*, uintptr_t))(Il2CppBase() + 0x2089CE4))(this, overrider);
	}
	template <typename T = void> T RemovePositionOverrider(uintptr_t overrider) {
		return ((T (*)(ProCamera2D*, uintptr_t))(Il2CppBase() + 0x2089D9C))(this, overrider);
	}
	template <typename T = void> T SortPositionOverriders() {
		return ((T (*)(ProCamera2D*))(Il2CppBase() + 0x2086138))(this);
	}
	template <typename T = void> T AddSizeDeltaChanger(uintptr_t changer) {
		return ((T (*)(ProCamera2D*, uintptr_t))(Il2CppBase() + 0x2089E54))(this, changer);
	}
	template <typename T = void> T RemoveSizeDeltaChanger(uintptr_t changer) {
		return ((T (*)(ProCamera2D*, uintptr_t))(Il2CppBase() + 0x2089F0C))(this, changer);
	}
	template <typename T = void> T SortSizeDeltaChangers() {
		return ((T (*)(ProCamera2D*))(Il2CppBase() + 0x2086290))(this);
	}
	template <typename T = void> T AddSizeOverrider(uintptr_t overrider) {
		return ((T (*)(ProCamera2D*, uintptr_t))(Il2CppBase() + 0x2089FC4))(this, overrider);
	}
	template <typename T = void> T RemoveSizeOverrider(uintptr_t overrider) {
		return ((T (*)(ProCamera2D*, uintptr_t))(Il2CppBase() + 0x208A07C))(this, overrider);
	}
	template <typename T = void> T SortSizeOverriders() {
		return ((T (*)(ProCamera2D*))(Il2CppBase() + 0x20863E8))(this);
	}
	template <typename T = void> T AddPostMover(uintptr_t mover) {
		return ((T (*)(ProCamera2D*, uintptr_t))(Il2CppBase() + 0x208A134))(this, mover);
	}
	template <typename T = void> T RemovePostMover(uintptr_t mover) {
		return ((T (*)(ProCamera2D*, uintptr_t))(Il2CppBase() + 0x208A1EC))(this, mover);
	}
	template <typename T = void> T SortPostMovers() {
		return ((T (*)(ProCamera2D*))(Il2CppBase() + 0x2086540))(this);
	}
	template <typename T = void> T OnBeforeSerialize() {
		return ((T (*)(ProCamera2D*))(Il2CppBase() + 0x208A2A4))(this);
	}
	template <typename T = void> T OnAfterDeserialize() {
		return ((T (*)(ProCamera2D*))(Il2CppBase() + 0x208A300))(this);
	}

};

}
