#pragma once
#include "Il2Cpp/Il2Cpp.h"

class BulletInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BulletInfo"));
	}

	template <typename T = uintptr_t> T& bulletProto() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> T& sourceObject() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& sourceWeapon() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppVector2> T& createPosition() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& targetObj() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppVector2> T& initVelocity() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = float> T& speed() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = float> T& size() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = float> T& directionAngle() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = int32_t> T& reflectCount() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = float> T& duration() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = int32_t> T& camp() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uintptr_t> T& customData() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = Il2CppString*> T& customTag() {
		return *(T*)((uintptr_t)this + 0x50);
	}

	template <typename T = uintptr_t> T SetUp(uintptr_t bulletProto, uintptr_t sourceObject, float speed, Il2CppVector2 createPosition, float directionAngle, int32_t camp, Il2CppString* customTag) {
		return ((T (*)(BulletInfo*, uintptr_t, uintptr_t, float, Il2CppVector2, float, int32_t, Il2CppString*))(Il2CppBase() + 0x150CD64))(this, bulletProto, sourceObject, speed, createPosition, directionAngle, camp, customTag);
	}
	template <typename T = uintptr_t> T RotateAngle(float angleDelta) {
		return ((T (*)(BulletInfo*, float))(Il2CppBase() + 0x150CD6C))(this, angleDelta);
	}
	template <typename T = uintptr_t> T SetAngle(float angle) {
		return ((T (*)(BulletInfo*, float))(Il2CppBase() + 0x150CD74))(this, angle);
	}
	template <typename T = uintptr_t> T SetBullet(uintptr_t bullet) {
		return ((T (*)(BulletInfo*, uintptr_t))(Il2CppBase() + 0x150CD7C))(this, bullet);
	}
	template <typename T = uintptr_t> T AdjustAngle() {
		return ((T (*)(BulletInfo*))(Il2CppBase() + 0x150CD84))(this);
	}
	template <typename T = uintptr_t> T SetPosition(Il2CppVector2 position) {
		return ((T (*)(BulletInfo*, Il2CppVector2))(Il2CppBase() + 0x150CD8C))(this, position);
	}
	template <typename T = uintptr_t> T SetSourceObject(uintptr_t sourceObject) {
		return ((T (*)(BulletInfo*, uintptr_t))(Il2CppBase() + 0x150CD94))(this, sourceObject);
	}
	template <typename T = uintptr_t> T SetSpeed(float speed) {
		return ((T (*)(BulletInfo*, float))(Il2CppBase() + 0x150CD9C))(this, speed);
	}
	template <typename T = uintptr_t> T SetBulletSize(float bulletSize) {
		return ((T (*)(BulletInfo*, float))(Il2CppBase() + 0x150CDA4))(this, bulletSize);
	}
	template <typename T = uintptr_t> T SetDuration(float duration) {
		return ((T (*)(BulletInfo*, float))(Il2CppBase() + 0x150CDAC))(this, duration);
	}
	template <typename T = uintptr_t> T SetInitVelocity(Il2CppVector2 velocity) {
		return ((T (*)(BulletInfo*, Il2CppVector2))(Il2CppBase() + 0x150CDB4))(this, velocity);
	}
	template <typename T = uintptr_t> T SetReflectCount(int32_t reflectCount) {
		return ((T (*)(BulletInfo*, int32_t))(Il2CppBase() + 0x150CDBC))(this, reflectCount);
	}
	template <typename T = uintptr_t> T SetCamp(int32_t camp) {
		return ((T (*)(BulletInfo*, int32_t))(Il2CppBase() + 0x150CDC4))(this, camp);
	}
	template <typename T = uintptr_t> T SetSourceWeapon(uintptr_t sourceWeapon) {
		return ((T (*)(BulletInfo*, uintptr_t))(Il2CppBase() + 0x150CDCC))(this, sourceWeapon);
	}

};

}
