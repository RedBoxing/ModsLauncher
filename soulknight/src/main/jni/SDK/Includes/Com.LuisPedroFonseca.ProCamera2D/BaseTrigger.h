#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace Com.LuisPedroFonseca.ProCamera2D {

class BaseTrigger
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Com.LuisPedroFonseca.ProCamera2D", "BaseTrigger"));
	}

	template <typename T = uintptr_t> T& OnEnteredTrigger() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& OnExitedTrigger() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = float> T& UpdateInterval() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = uintptr_t> T& TriggerShape() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = bool> T& UseTargetsMidPoint() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = uintptr_t> T& TriggerTarget() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = float> T& _exclusiveInfluencePercentage() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& _testTriggerRoutine() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = bool> T& _insideTrigger() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = Il2CppVector2> T& _vectorFromPointToCenter() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = int32_t> T& _instanceID() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = bool> T& _triggerEnabled() {
		return *(T*)((uintptr_t)this + 0xA0);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(BaseTrigger*))(Il2CppBase() + 0x20798E8))(this);
	}
	template <typename T = void> T OnEnable() {
		return ((T (*)(BaseTrigger*))(Il2CppBase() + 0x2079ABC))(this);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(BaseTrigger*))(Il2CppBase() + 0x2079B3C))(this);
	}
	template <typename T = void> T Toggle(bool value) {
		return ((T (*)(BaseTrigger*, bool))(Il2CppBase() + 0x2079A00))(this, value);
	}
	template <typename T = void> T TestTrigger() {
		return ((T (*)(BaseTrigger*))(Il2CppBase() + 0x2079C58))(this);
	}
	template <typename T = void> T EnteredTrigger() {
		return ((T (*)(BaseTrigger*))(Il2CppBase() + 0x207A3D4))(this);
	}
	template <typename T = void> T ExitedTrigger() {
		return ((T (*)(BaseTrigger*))(Il2CppBase() + 0x207A450))(this);
	}
	template <typename T = uintptr_t> T TestTriggerRoutine() {
		return ((T (*)(BaseTrigger*))(Il2CppBase() + 0x2079BA4))(this);
	}
	template <typename T = float> T GetDistanceToCenterPercentage(Il2CppVector2 point) {
		return ((T (*)(BaseTrigger*, Il2CppVector2))(Il2CppBase() + 0x207A4F4))(this, point);
	}
	template <typename T = bool> T IsInsideRectangle(float x, float y, float width, float height, float pointX, float pointY) {
		return ((T (*)(BaseTrigger*, float, float, float, float, float, float))(Il2CppBase() + 0x207A214))(this, x, y, width, height, pointX, pointY);
	}
	template <typename T = bool> T IsInsideCircle(float x, float y, float radius, float pointX, float pointY) {
		return ((T (*)(BaseTrigger*, float, float, float, float, float))(Il2CppBase() + 0x207A30C))(this, x, y, radius, pointX, pointY);
	}
	template <typename T = void> T iFixBaseProxy_Awake() {
		return ((T (*)(BaseTrigger*))(Il2CppBase() + 0x207A960))(this);
	}
	template <typename T = void> T iFixBaseProxy_OnEnable() {
		return ((T (*)(BaseTrigger*))(Il2CppBase() + 0x207A964))(this);
	}
	template <typename T = void> T iFixBaseProxy_OnDisable() {
		return ((T (*)(BaseTrigger*))(Il2CppBase() + 0x207A968))(this);
	}

};

}
