#pragma once
#include "Il2Cpp/Il2Cpp.h"

class BezierPolygonTrigger
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BezierPolygonTrigger"));
	}

	template <typename T = int32_t> T& resolution() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _lineBezierPoints() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& polugonCollider() {
		return *(T*)((uintptr_t)this + 0x88);
	}

	template <typename T = uintptr_t> T get_carrier() {
		return ((T (*)(BezierPolygonTrigger*))(Il2CppBase() + 0x1B28138))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(BezierPolygonTrigger*))(Il2CppBase() + 0x1B2820C))(this);
	}
	template <typename T = void> T UpdateCurveCollider(Il2CppArray<uintptr_t>* result1, Il2CppArray<uintptr_t>* result2) {
		return ((T (*)(BezierPolygonTrigger*, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1B282A4))(this, result1, result2);
	}
	template <typename T = void> T OnTriggerEnter2D(uintptr_t other) {
		return ((T (*)(BezierPolygonTrigger*, uintptr_t))(Il2CppBase() + 0x1B285D4))(this, other);
	}
	template <typename T = void> T SetInfo(int32_t damage, int32_t camp, bool can_through, int32_t repel, int32_t critical) {
		return ((T (*)(BezierPolygonTrigger*, int32_t, int32_t, bool, int32_t, int32_t))(Il2CppBase() + 0x1B28D1C))(this, damage, camp, can_through, repel, critical);
	}
	template <typename T = void> T SetInfo_1(int32_t damage, int32_t camp, int32_t through_count, int32_t repel, int32_t critical) {
		return ((T (*)(BezierPolygonTrigger*, int32_t, int32_t, int32_t, int32_t, int32_t))(Il2CppBase() + 0x1B28E30))(this, damage, camp, through_count, repel, critical);
	}
	template <typename T = void> T SetInfo_2(uintptr_t info) {
		return ((T (*)(BezierPolygonTrigger*, uintptr_t))(Il2CppBase() + 0x1B28EEC))(this, info);
	}
	template <typename T = void> T AddAttribuet(uintptr_t property, float value) {
		return ((T (*)(BezierPolygonTrigger*, uintptr_t, float))(Il2CppBase() + 0x1B291BC))(this, property, value);
	}
	template <typename T = void> T AddDamage(int32_t value) {
		return ((T (*)(BezierPolygonTrigger*, int32_t))(Il2CppBase() + 0x1B29270))(this, value);
	}
	template <typename T = void> T ResetCriticFactor() {
		return ((T (*)(BezierPolygonTrigger*))(Il2CppBase() + 0x1B28FC4))(this);
	}
	template <typename T = int32_t> T GetFinalDamage() {
		return ((T (*)(BezierPolygonTrigger*))(Il2CppBase() + 0x1B28BA0))(this);
	}
	template <typename T = void> T CreateHitEffect(uintptr_t other, bool hasCritic) {
		return ((T (*)(BezierPolygonTrigger*, uintptr_t, bool))(Il2CppBase() + 0x1B292EC))(this, other, hasCritic);
	}
	template <typename T = void> T OnHit(uintptr_t other, bool isCritic) {
		return ((T (*)(BezierPolygonTrigger*, uintptr_t, bool))(Il2CppBase() + 0x1B295B0))(this, other, isCritic);
	}
	template <typename T = uintptr_t> T iFixBaseProxy_get_carrier() {
		return ((T (*)(BezierPolygonTrigger*))(Il2CppBase() + 0x1B29638))(this);
	}
	template <typename T = void> T iFixBaseProxy_SetInfo(uintptr_t P0) {
		return ((T (*)(BezierPolygonTrigger*, uintptr_t))(Il2CppBase() + 0x1B29640))(this, P0);
	}

};

}
