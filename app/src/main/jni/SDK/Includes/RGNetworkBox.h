#pragma once
#include "Il2Cpp/Il2Cpp.h"

class RGNetworkBox
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RGNetworkBox"));
	}

	template <typename T = bool> T& hasDestroyState() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& explode() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& halfBreakSprite() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& destroyedSprite() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = bool> T& closeEdgeCollider() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& the_source_object() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = int32_t> T& camp() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = int32_t> T& hp() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = int32_t> T& maxHp() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = bool> T& halfBroke() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = uintptr_t> T& renderer() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& boxDestroyEvent() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uintptr_t> T& damageText() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = bool> T& initByServerController() {
		return *(T*)((uintptr_t)this + 0x70);
	}

	template <typename T = uintptr_t> T get_boxDestroyEvent() {
		return ((T (*)(RGNetworkBox*))(Il2CppBase() + 0x1B79F6C))(this);
	}
	template <typename T = void> T set_boxDestroyEvent(uintptr_t value) {
		return ((T (*)(RGNetworkBox*, uintptr_t))(Il2CppBase() + 0x1B79F74))(this, value);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(RGNetworkBox*))(Il2CppBase() + 0x1B79F7C))(this);
	}
	template <typename T = void> T OnEnable() {
		return ((T (*)(RGNetworkBox*))(Il2CppBase() + 0x1B7A248))(this);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(RGNetworkBox*))(Il2CppBase() + 0x1B7A32C))(this);
	}
	template <typename T = void> T InitBox(uintptr_t e) {
		return ((T (*)(RGNetworkBox*, uintptr_t))(Il2CppBase() + 0x1B7A410))(this, e);
	}
	template <typename T = void> T TryInitHpToServer() {
		return ((T (*)(RGNetworkBox*))(Il2CppBase() + 0x1B7A090))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(RGNetworkBox*))(Il2CppBase() + 0x1B7A4E8))(this);
	}
	template <typename T = bool> T Hit(int32_t damage, uintptr_t source_object, int32_t camp) {
		return ((T (*)(RGNetworkBox*, int32_t, uintptr_t, int32_t))(Il2CppBase() + 0x1B7A5A4))(this, damage, source_object, camp);
	}
	template <typename T = void> T ShowHurtText(int32_t damage) {
		return ((T (*)(RGNetworkBox*, int32_t))(Il2CppBase() + 0x1B7AAF0))(this, damage);
	}
	template <typename T = void> T CreateHurtText(int32_t damage) {
		return ((T (*)(RGNetworkBox*, int32_t))(Il2CppBase() + 0x1B7AD98))(this, damage);
	}
	template <typename T = Il2CppVector3> T GetPosition() {
		return ((T (*)(RGNetworkBox*))(Il2CppBase() + 0x1B7AF3C))(this);
	}
	template <typename T = void> T OnHpChanged() {
		return ((T (*)(RGNetworkBox*))(Il2CppBase() + 0x1B7A900))(this);
	}
	template <typename T = void> T HalfBreak() {
		return ((T (*)(RGNetworkBox*))(Il2CppBase() + 0x1B7AFB8))(this);
	}
	template <typename T = void> T BoxDestroy() {
		return ((T (*)(RGNetworkBox*))(Il2CppBase() + 0x1B7B034))(this);
	}
	template <typename T = void> T SetSourceObject(uintptr_t value) {
		return ((T (*)(RGNetworkBox*, uintptr_t))(Il2CppBase() + 0x1B7B458))(this, value);
	}
	template <typename T = void> T SetState(int32_t hpValue) {
		return ((T (*)(RGNetworkBox*, int32_t))(Il2CppBase() + 0x1B7B4CC))(this, hpValue);
	}
	template <typename T = void> T SetBodyHit() {
		return ((T (*)(RGNetworkBox*))(Il2CppBase() + 0x1B7B64C))(this);
	}
	template <typename T = void> T HitBack() {
		return ((T (*)(RGNetworkBox*))(Il2CppBase() + 0x1B7B6D0))(this);
	}
	template <typename T = void> T SyncGetHurt(int32_t damage) {
		return ((T (*)(RGNetworkBox*, int32_t))(Il2CppBase() + 0x1B7B754))(this, damage);
	}

};

}
