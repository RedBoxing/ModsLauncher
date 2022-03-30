#pragma once
#include "Il2Cpp/Il2Cpp.h"

class RGBaseController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RGBaseController"));
	}

	template <typename T = bool> T& awake() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> T& dead() {
		return *(T*)((uintptr_t)this + 0x19);
	}
	template <typename T = int32_t> T& p_index() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& anim() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& rigibody() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& target_obj() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = float> T& _fixedAngle() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& transform_img() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& bodyRenderer() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = bool> T& isLockBulletAngle() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& _frictionProperty() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& extraSpeedFactor() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = bool> T& isPassive() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = bool> T& movable() {
		return *(T*)((uintptr_t)this + 0x69);
	}
	template <typename T = int32_t> T& facing() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = bool> T& has_target() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = float> T& inertial_vel() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = Il2CppVector2> T& force_direction() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = uintptr_t> T& attribute() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> static T& _sample_material() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _hit_material() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& hitCache() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _linecastCache() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& buff_list() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = bool> T& dizzy() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> T& onColorBack() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = void*> T& _exclusiveChangeColorRenderer() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = Il2CppDictionary<uintptr_t, float>*> T& _customAlphaDic() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = float> T& fadeDurTime() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = void*> T& onBulletCreate() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = void*> T& onDelayBulletRelease() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = uintptr_t> T& _colliderOffsetHandler() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = uintptr_t> T& _touchColliderOffsetHandler() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = void*> T& shadowSet() {
		return *(T*)((uintptr_t)this + 0xE8);
	}

	template <typename T = uintptr_t> T get_body_render() {
		return ((T (*)(RGBaseController*))(Il2CppBase() + 0x1BB4098))(this);
	}
	template <typename T = uintptr_t> T get_BodyRenderer() {
		return ((T (*)(RGBaseController*))(Il2CppBase() + 0x1BB41AC))(this);
	}
	template <typename T = float> T get_FixedAngle() {
		return ((T (*)(RGBaseController*))(Il2CppBase() + 0x1BB42C0))(this);
	}
	template <typename T = void> T set_FixedAngle(float value) {
		return ((T (*)(RGBaseController*, float))(Il2CppBase() + 0x1BB432C))(this, value);
	}
	template <typename T = float> T get_friction() {
		return ((T (*)(RGBaseController*))(Il2CppBase() + 0x1BB43A0))(this);
	}
	template <typename T = int32_t> T get_camp() {
		return ((T (*)(RGBaseController*))(Il2CppBase() + 0x1BAE990))(this);
	}
	template <typename T = int32_t> T get_facing() {
		return ((T (*)(RGBaseController*))(Il2CppBase() + 0x1BB4440))(this);
	}
	template <typename T = void> T set_facing(int32_t value) {
		return ((T (*)(RGBaseController*, int32_t))(Il2CppBase() + 0x1BB4448))(this, value);
	}
	template <typename T = bool> T get_has_target() {
		return ((T (*)(RGBaseController*))(Il2CppBase() + 0x1BB4450))(this);
	}
	template <typename T = void> T set_has_target(bool value) {
		return ((T (*)(RGBaseController*, bool))(Il2CppBase() + 0x1BB4458))(this, value);
	}
	template <typename T = Il2CppVector3> T get_oriantation() {
		return ((T (*)(RGBaseController*))(Il2CppBase() + 0x1BB4464))(this);
	}
	template <typename T = float> T get_oriantationAngle() {
		return ((T (*)(RGBaseController*))(Il2CppBase() + 0x1BB45D4))(this);
	}
	template <typename T = uintptr_t> T get_attribute() {
		return ((T (*)(RGBaseController*))(Il2CppBase() + 0x1BB4658))(this);
	}
	template <typename T = void> T set_attribute(uintptr_t value) {
		return ((T (*)(RGBaseController*, uintptr_t))(Il2CppBase() + 0x1BB4660))(this, value);
	}
	template <typename T = uintptr_t> static T get_sample_material() {
		return ((T (*)(void *))(Il2CppBase() + 0x1BB4668))(0);
	}
	template <typename T = uintptr_t> static T get_hit_material() {
		return ((T (*)(void *))(Il2CppBase() + 0x1BB475C))(0);
	}
	template <typename T = void> T InitBase() {
		return ((T (*)(RGBaseController*))(Il2CppBase() + 0x1BB4854))(this);
	}
	template <typename T = uintptr_t> T FindTarget() {
		return ((T (*)(RGBaseController*))(Il2CppBase() + 0x1BB495C))(this);
	}
	template <typename T = uintptr_t> T FindTarget_1(float range, int32_t wallMask) {
		return ((T (*)(RGBaseController*, float, int32_t))(Il2CppBase() + 0x1BB4A18))(this, range, wallMask);
	}
	template <typename T = Il2CppList<uintptr_t>*> T FindEnemies(float range, bool throughWall) {
		return ((T (*)(RGBaseController*, float, bool))(Il2CppBase() + 0x1BB4FC0))(this, range, throughWall);
	}
	template <typename T = Il2CppList<uintptr_t>*> T FindPlayers(float range, bool includePet) {
		return ((T (*)(RGBaseController*, float, bool))(Il2CppBase() + 0x1BB563C))(this, range, includePet);
	}
	template <typename T = Il2CppList<uintptr_t>*> T FindBullets(int32_t range, bool throughWall) {
		return ((T (*)(RGBaseController*, int32_t, bool))(Il2CppBase() + 0x1BB5A3C))(this, range, throughWall);
	}
	template <typename T = void> T BuffDestroy() {
		return ((T (*)(RGBaseController*))(Il2CppBase() + 0x1BB6024))(this);
	}
	template <typename T = void> T Dizzy(float the_time) {
		return ((T (*)(RGBaseController*, float))(Il2CppBase() + 0x1BB61D4))(this, the_time);
	}
	template <typename T = void> T EndDizzy() {
		return ((T (*)(RGBaseController*))(Il2CppBase() + 0x1BB62C8))(this);
	}
	template <typename T = void> T TurnTransparentLayer(bool isTransparent) {
		return ((T (*)(RGBaseController*, bool))(Il2CppBase() + 0x1BB6384))(this, isTransparent);
	}
	template <typename T = void> T TurnTransparent(bool isTransparent) {
		return ((T (*)(RGBaseController*, bool))(Il2CppBase() + 0x1BB6468))(this, isTransparent);
	}
	template <typename T = void> T AddExclusiveChangeColorRenderer(uintptr_t renderer) {
		return ((T (*)(RGBaseController*, uintptr_t))(Il2CppBase() + 0x1BB6514))(this, renderer);
	}
	template <typename T = void> T AddExclusiveChangeColorRenderers(Il2CppList<uintptr_t>* renderers) {
		return ((T (*)(RGBaseController*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x1BB6608))(this, renderers);
	}
	template <typename T = void> T RemoveExclusiveChangeColorRenderer(uintptr_t renderer) {
		return ((T (*)(RGBaseController*, uintptr_t))(Il2CppBase() + 0x1BB679C))(this, renderer);
	}
	template <typename T = void> T RemoveExclusiveChangeColorRenderers(Il2CppList<uintptr_t>* renderers) {
		return ((T (*)(RGBaseController*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x1BB6890))(this, renderers);
	}
	template <typename T = void> T SetBodyColor(uintptr_t color) {
		return ((T (*)(RGBaseController*, uintptr_t))(Il2CppBase() + 0x1BB6A24))(this, color);
	}
	template <typename T = void> T SetBodyAlpha(float alpha, bool needFade) {
		return ((T (*)(RGBaseController*, float, bool))(Il2CppBase() + 0x1BB6DE8))(this, alpha, needFade);
	}
	template <typename T = void> T SwitchWeapon() {
		return ((T (*)(RGBaseController*))(Il2CppBase() + 0x1BB71FC))(this);
	}
	template <typename T = bool> T SwitchToLastWeapon() {
		return ((T (*)(RGBaseController*))(Il2CppBase() + 0x1BB7258))(this);
	}
	template <typename T = bool> T HoldWeapon(Il2CppString* weaponName) {
		return ((T (*)(RGBaseController*, Il2CppString*))(Il2CppBase() + 0x1BB72B8))(this, weaponName);
	}
	template <typename T = bool> T HasWeapon(Il2CppString* weaponName) {
		return ((T (*)(RGBaseController*, Il2CppString*))(Il2CppBase() + 0x1BB732C))(this, weaponName);
	}
	template <typename T = void> T GetForce(Il2CppVector2 dir, float force) {
		return ((T (*)(RGBaseController*, Il2CppVector2, float))(Il2CppBase() + 0x1BB73A0))(this, dir, force);
	}
	template <typename T = void> T AddForce(Il2CppVector2 dir, float force, int32_t maxForce) {
		return ((T (*)(RGBaseController*, Il2CppVector2, float, int32_t))(Il2CppBase() + 0x1BB74D4))(this, dir, force, maxForce);
	}
	template <typename T = void> T ModifyFriction(uintptr_t additionalType, float value, Il2CppString* key, int32_t order) {
		return ((T (*)(RGBaseController*, uintptr_t, float, Il2CppString*, int32_t))(Il2CppBase() + 0x1BB76C8))(this, additionalType, value, key, order);
	}
	template <typename T = void> T SetFloatable(bool isFloatable) {
		return ((T (*)(RGBaseController*, bool))(Il2CppBase() + 0x1BB77BC))(this, isFloatable);
	}
	template <typename T = float> T GetOriginalFriction() {
		return ((T (*)(RGBaseController*))(Il2CppBase() + 0x1BB7920))(this);
	}
	template <typename T = void> T UnModifyFriction(Il2CppString* key) {
		return ((T (*)(RGBaseController*, Il2CppString*))(Il2CppBase() + 0x1BB79C0))(this, key);
	}
	template <typename T = void> T ModifyExtraSpeedFactor(uintptr_t additionalType, float value, Il2CppString* key, int32_t order) {
		return ((T (*)(RGBaseController*, uintptr_t, float, Il2CppString*, int32_t))(Il2CppBase() + 0x1BB7A78))(this, additionalType, value, key, order);
	}
	template <typename T = void> T UnModifyExtraSpeedFactor(Il2CppString* key) {
		return ((T (*)(RGBaseController*, Il2CppString*))(Il2CppBase() + 0x1BB7B6C))(this, key);
	}
	template <typename T = float> T GetFinalFriction() {
		return ((T (*)(RGBaseController*))(Il2CppBase() + 0x1BB7C24))(this);
	}
	template <typename T = void> T add_onBulletCreate(void* value) {
		return ((T (*)(RGBaseController*, void*))(Il2CppBase() + 0x1BB7CC4))(this, value);
	}
	template <typename T = void> T remove_onBulletCreate(void* value) {
		return ((T (*)(RGBaseController*, void*))(Il2CppBase() + 0x1BB7DB0))(this, value);
	}
	template <typename T = void> T OnBulletCreate(uintptr_t bulletGo) {
		return ((T (*)(RGBaseController*, uintptr_t))(Il2CppBase() + 0x1BB7E9C))(this, bulletGo);
	}
	template <typename T = void> T add_onDelayBulletRelease(void* value) {
		return ((T (*)(RGBaseController*, void*))(Il2CppBase() + 0x1BB7F88))(this, value);
	}
	template <typename T = void> T remove_onDelayBulletRelease(void* value) {
		return ((T (*)(RGBaseController*, void*))(Il2CppBase() + 0x1BB8074))(this, value);
	}
	template <typename T = void> T OnDelayedBulletRelease(uintptr_t bulletGo) {
		return ((T (*)(RGBaseController*, uintptr_t))(Il2CppBase() + 0x1BB8160))(this, bulletGo);
	}
	template <typename T = void> T AddTriggerColliderOffset(Il2CppVector2 offset, Il2CppString* key) {
		return ((T (*)(RGBaseController*, Il2CppVector2, Il2CppString*))(Il2CppBase() + 0x1BB824C))(this, offset, key);
	}
	template <typename T = void> T RemoveTriggerColliderOffset(Il2CppString* key) {
		return ((T (*)(RGBaseController*, Il2CppString*))(Il2CppBase() + 0x1BB8364))(this, key);
	}
	template <typename T = void> T AddTouchColliderOffset(Il2CppVector2 offset, Il2CppString* key) {
		return ((T (*)(RGBaseController*, Il2CppVector2, Il2CppString*))(Il2CppBase() + 0x1BB83F4))(this, offset, key);
	}
	template <typename T = void> T RemoveTouchColliderOffset(Il2CppString* key) {
		return ((T (*)(RGBaseController*, Il2CppString*))(Il2CppBase() + 0x1BB85B4))(this, key);
	}
	template <typename T = void> T LandFromAir() {
		return ((T (*)(RGBaseController*))(Il2CppBase() + 0x1BB8644))(this);
	}
	template <typename T = float> T LandPointDistance(Il2CppVector3 position) {
		return ((T (*)(RGBaseController*, Il2CppVector3))(Il2CppBase() + 0x1BB8D10))(this, position);
	}
	template <typename T = bool> T HitWallEdge(Il2CppVector3 position) {
		return ((T (*)(RGBaseController*, Il2CppVector3))(Il2CppBase() + 0x1BB8B08))(this, position);
	}
	template <typename T = void> T EnableShadow(Il2CppString* tag, float fadeSpeed) {
		return ((T (*)(RGBaseController*, Il2CppString*, float))(Il2CppBase() + 0x1BB908C))(this, tag, fadeSpeed);
	}
	template <typename T = void> T DisableShadow(Il2CppString* tag) {
		return ((T (*)(RGBaseController*, Il2CppString*))(Il2CppBase() + 0x1BB9330))(this, tag);
	}

};

}
