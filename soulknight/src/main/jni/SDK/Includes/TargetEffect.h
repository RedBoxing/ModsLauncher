#pragma once
#include "Il2Cpp/Il2Cpp.h"

class TargetEffect
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TargetEffect"));
	}

	template <typename T = Il2CppString*> T& initPlayState() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& target_obj() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& source_obj() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& anim() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppString*> T& obj_name() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = int32_t> T& obj_random_seed() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& bulletInfo() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& damageInfo() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = void*> T& onCreate() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = int32_t> T& camp() {
		return *(T*)((uintptr_t)this + 0xC8);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(TargetEffect*))(Il2CppBase() + 0x43B36B0))(this);
	}
	template <typename T = void> T SetTarget(uintptr_t bulletInfo, uintptr_t damageInfo, Il2CppString* type) {
		return ((T (*)(TargetEffect*, uintptr_t, uintptr_t, Il2CppString*))(Il2CppBase() + 0x43B37A0))(this, bulletInfo, damageInfo, type);
	}
	template <typename T = void> T SetTarget_1(uintptr_t obj, uintptr_t source, int32_t camp, Il2CppString* type) {
		return ((T (*)(TargetEffect*, uintptr_t, uintptr_t, int32_t, Il2CppString*))(Il2CppBase() + 0x43B39D0))(this, obj, source, camp, type);
	}
	template <typename T = void> T SetTarget_2(uintptr_t obj, Il2CppString* value, Il2CppString* type) {
		return ((T (*)(TargetEffect*, uintptr_t, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x43B3AEC))(this, obj, value, type);
	}
	template <typename T = void> T SetTarget_3(uintptr_t obj, Il2CppString* value, int32_t random_seed, Il2CppString* type) {
		return ((T (*)(TargetEffect*, uintptr_t, Il2CppString*, int32_t, Il2CppString*))(Il2CppBase() + 0x43B3C00))(this, obj, value, random_seed, type);
	}
	template <typename T = void> T PlayAnimation(float time, Il2CppString* type) {
		return ((T (*)(TargetEffect*, float, Il2CppString*))(Il2CppBase() + 0x43B3D20))(this, time, type);
	}
	template <typename T = void> T SetTarget_4(Il2CppVector3 position, float duration, uintptr_t onFinish, uintptr_t onDestroy, Il2CppString* type) {
		return ((T (*)(TargetEffect*, Il2CppVector3, float, uintptr_t, uintptr_t, Il2CppString*))(Il2CppBase() + 0x43B3E28))(this, position, duration, onFinish, onDestroy, type);
	}
	template <typename T = void> T PlayAnimation_1(float destroyDuration, float showUpDuration) {
		return ((T (*)(TargetEffect*, float, float))(Il2CppBase() + 0x43B411C))(this, destroyDuration, showUpDuration);
	}
	template <typename T = void> T CreateEffect() {
		return ((T (*)(TargetEffect*))(Il2CppBase() + 0x43B41E8))(this);
	}
	template <typename T = void> T ReleasedAtk() {
		return ((T (*)(TargetEffect*))(Il2CppBase() + 0x43B4430))(this);
	}
	template <typename T = void> T Released() {
		return ((T (*)(TargetEffect*))(Il2CppBase() + 0x43B45D8))(this);
	}

};

}
