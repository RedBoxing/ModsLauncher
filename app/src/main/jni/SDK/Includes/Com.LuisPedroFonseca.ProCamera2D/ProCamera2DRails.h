#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace Com.LuisPedroFonseca.ProCamera2D {

class ProCamera2DRails
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Com.LuisPedroFonseca.ProCamera2D", "ProCamera2DRails"));
	}

	template <typename T = Il2CppString*> static T& ExtensionName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppList<Il2CppVector3>*> T& RailNodes() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& FollowMode() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& CameraTargets() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = Il2CppDictionary<uintptr_t, uintptr_t>*> T& _cameraTargetsOnRails() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _tempCameraTargets() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = uintptr_t> T& _kdTree() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = int32_t> T& _prmOrder() {
		return *(T*)((uintptr_t)this + 0x88);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(ProCamera2DRails*))(Il2CppBase() + 0x2C26528))(this);
	}
	template <typename T = void> T PreMove(float deltaTime) {
		return ((T (*)(ProCamera2DRails*, float))(Il2CppBase() + 0x2C26DBC))(this, deltaTime);
	}
	template <typename T = int32_t> T get_PrMOrder() {
		return ((T (*)(ProCamera2DRails*))(Il2CppBase() + 0x2C26E50))(this);
	}
	template <typename T = void> T set_PrMOrder(int32_t value) {
		return ((T (*)(ProCamera2DRails*, int32_t))(Il2CppBase() + 0x2C26EB0))(this, value);
	}
	template <typename T = void> T Step() {
		return ((T (*)(ProCamera2DRails*))(Il2CppBase() + 0x2C26814))(this);
	}
	template <typename T = void> T AddRailsTarget(uintptr_t targetTransform, float targetInfluenceH, float targetInfluenceV, Il2CppVector2 targetOffset) {
		return ((T (*)(ProCamera2DRails*, uintptr_t, float, float, Il2CppVector2))(Il2CppBase() + 0x2C27328))(this, targetTransform, targetInfluenceH, targetInfluenceV, targetOffset);
	}
	template <typename T = uintptr_t> T GetRailsTarget(uintptr_t targetTransform) {
		return ((T (*)(ProCamera2DRails*, uintptr_t))(Il2CppBase() + 0x2C2755C))(this, targetTransform);
	}
	template <typename T = void> T DisableTargets(float transitionDuration) {
		return ((T (*)(ProCamera2DRails*, float))(Il2CppBase() + 0x2C276D0))(this, transitionDuration);
	}
	template <typename T = void> T EnableTargets(float transitionDuration) {
		return ((T (*)(ProCamera2DRails*, float))(Il2CppBase() + 0x2C279A4))(this, transitionDuration);
	}
	template <typename T = Il2CppVector3> T GetPositionOnRail(Il2CppVector3 pos) {
		return ((T (*)(ProCamera2DRails*, Il2CppVector3))(Il2CppBase() + 0x2C26F24))(this, pos);
	}
	template <typename T = Il2CppVector3> T GetPositionOnRailSegment(Il2CppVector3 node1, Il2CppVector3 node2, Il2CppVector3 pos) {
		return ((T (*)(ProCamera2DRails*, Il2CppVector3, Il2CppVector3, Il2CppVector3))(Il2CppBase() + 0x2C27B94))(this, node1, node2, pos);
	}
	template <typename T = void> T iFixBaseProxy_Awake() {
		return ((T (*)(ProCamera2DRails*))(Il2CppBase() + 0x2C27F3C))(this);
	}

};

}
