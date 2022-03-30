#pragma once
#include "Il2Cpp/Il2Cpp.h"

class SteleController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SteleController"));
	}

	template <typename T = uintptr_t> T& clip_dead() {
		return *(T*)((uintptr_t)this + 0x178);
	}
	template <typename T = uintptr_t> T& dead_object() {
		return *(T*)((uintptr_t)this + 0x180);
	}
	template <typename T = bool> T& destory_on_dead() {
		return *(T*)((uintptr_t)this + 0x188);
	}
	template <typename T = Il2CppString*> T& dead_sorting_layer_name() {
		return *(T*)((uintptr_t)this + 0x190);
	}
	template <typename T = uintptr_t> T& hand() {
		return *(T*)((uintptr_t)this + 0x198);
	}
	template <typename T = bool> T& strength() {
		return *(T*)((uintptr_t)this + 0x1A0);
	}
	template <typename T = bool> T& lock_facing() {
		return *(T*)((uintptr_t)this + 0x1A1);
	}
	template <typename T = uintptr_t> T& onStartAction() {
		return *(T*)((uintptr_t)this + 0x1A8);
	}
	template <typename T = uintptr_t> T& onDestoryAction() {
		return *(T*)((uintptr_t)this + 0x1B0);
	}
	template <typename T = float> T& findRange() {
		return *(T*)((uintptr_t)this + 0x1B8);
	}
	template <typename T = float> T& deadTime() {
		return *(T*)((uintptr_t)this + 0x1BC);
	}
	template <typename T = uintptr_t> T& stoneSpriteRender() {
		return *(T*)((uintptr_t)this + 0x1C0);
	}
	template <typename T = uintptr_t> T& _elementType() {
		return *(T*)((uintptr_t)this + 0x1C8);
	}
	template <typename T = uintptr_t> T& AtkElementType() {
		return *(T*)((uintptr_t)this + 0x1CC);
	}

	template <typename T = uintptr_t> T get_ElementType() {
		return ((T (*)(SteleController*))(Il2CppBase() + 0x42A228C))(this);
	}
	template <typename T = void> T set_ElementType(uintptr_t value) {
		return ((T (*)(SteleController*, uintptr_t))(Il2CppBase() + 0x42A22EC))(this, value);
	}
	template <typename T = uintptr_t> T get_AtkElementType() {
		return ((T (*)(SteleController*))(Il2CppBase() + 0x42A2418))(this);
	}
	template <typename T = void> T set_AtkElementType(uintptr_t value) {
		return ((T (*)(SteleController*, uintptr_t))(Il2CppBase() + 0x42A2410))(this, value);
	}
	template <typename T = void> T ResetAtkElementType() {
		return ((T (*)(SteleController*))(Il2CppBase() + 0x42A2420))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(SteleController*))(Il2CppBase() + 0x42A2488))(this);
	}
	template <typename T = void> T AwakeController() {
		return ((T (*)(SteleController*))(Il2CppBase() + 0x42A262C))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(SteleController*))(Il2CppBase() + 0x42A2768))(this);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(SteleController*))(Il2CppBase() + 0x42A292C))(this);
	}
	template <typename T = void> T SetAdditionLevel(int32_t level) {
		return ((T (*)(SteleController*, int32_t))(Il2CppBase() + 0x42A29A0))(this, level);
	}
	template <typename T = void> T Passaway() {
		return ((T (*)(SteleController*))(Il2CppBase() + 0x42A2B70))(this);
	}
	template <typename T = void> T FixedUpdate() {
		return ((T (*)(SteleController*))(Il2CppBase() + 0x42A2BE4))(this);
	}
	template <typename T = void> T Scout() {
		return ((T (*)(SteleController*))(Il2CppBase() + 0x42A2C40))(this);
	}
	template <typename T = void> T FindTargetTransform() {
		return ((T (*)(SteleController*))(Il2CppBase() + 0x42A2CC0))(this);
	}
	template <typename T = void> T RunReflection() {
		return ((T (*)(SteleController*))(Il2CppBase() + 0x42A2E04))(this);
	}
	template <typename T = void> T EndCycle() {
		return ((T (*)(SteleController*))(Il2CppBase() + 0x42A2E9C))(this);
	}
	template <typename T = void> T FixedRotation() {
		return ((T (*)(SteleController*))(Il2CppBase() + 0x42A2FA0))(this);
	}
	template <typename T = void> T OnDrawGizmos() {
		return ((T (*)(SteleController*))(Il2CppBase() + 0x42A31F4))(this);
	}
	template <typename T = void> T GetHurt(int32_t damage) {
		return ((T (*)(SteleController*, int32_t))(Il2CppBase() + 0x42A3594))(this, damage);
	}
	template <typename T = void> T HitBack() {
		return ((T (*)(SteleController*))(Il2CppBase() + 0x42A3804))(this);
	}
	template <typename T = void> T ShowDeadAnimation() {
		return ((T (*)(SteleController*))(Il2CppBase() + 0x42A3894))(this);
	}
	template <typename T = void> T Dead(uintptr_t source_object, bool sync) {
		return ((T (*)(SteleController*, uintptr_t, bool))(Il2CppBase() + 0x42A3978))(this, source_object, sync);
	}
	template <typename T = void> T ChildDead() {
		return ((T (*)(SteleController*))(Il2CppBase() + 0x42A3CE4))(this);
	}
	template <typename T = void> T CreateDeadObject() {
		return ((T (*)(SteleController*))(Il2CppBase() + 0x42A3DC4))(this);
	}
	template <typename T = void> T ReSetAtk() {
		return ((T (*)(SteleController*))(Il2CppBase() + 0x42A3FF8))(this);
	}
	template <typename T = void> T AtkWithTarget(uintptr_t target, int32_t atkCount) {
		return ((T (*)(SteleController*, uintptr_t, int32_t))(Il2CppBase() + 0x42A4054))(this, target, atkCount);
	}
	template <typename T = void> T Atk() {
		return ((T (*)(SteleController*))(Il2CppBase() + 0x42A4224))(this);
	}
	template <typename T = void> T OnGameStateChange(int32_t game_state) {
		return ((T (*)(SteleController*, int32_t))(Il2CppBase() + 0x42A4298))(this, game_state);
	}
	template <typename T = void> T SetMaster(uintptr_t master) {
		return ((T (*)(SteleController*, uintptr_t))(Il2CppBase() + 0x42A4308))(this, master);
	}
	template <typename T = void> T OnSkinChanged(int32_t index) {
		return ((T (*)(SteleController*, int32_t))(Il2CppBase() + 0x42A4398))(this, index);
	}
	template <typename T = void> T AwakeControllerb__22_0() {
		return ((T (*)(SteleController*))(Il2CppBase() + 0x42A4474))(this);
	}
	template <typename T = void> T iFixBaseProxy_Awake() {
		return ((T (*)(SteleController*))(Il2CppBase() + 0x42A44A8))(this);
	}
	template <typename T = void> T iFixBaseProxy_Start() {
		return ((T (*)(SteleController*))(Il2CppBase() + 0x42A44B0))(this);
	}
	template <typename T = void> T iFixBaseProxy_OnDestroy() {
		return ((T (*)(SteleController*))(Il2CppBase() + 0x42A44B8))(this);
	}
	template <typename T = void> T iFixBaseProxy_FixedUpdate() {
		return ((T (*)(SteleController*))(Il2CppBase() + 0x42A44C0))(this);
	}
	template <typename T = void> T iFixBaseProxy_Scout() {
		return ((T (*)(SteleController*))(Il2CppBase() + 0x42A44C8))(this);
	}
	template <typename T = void> T iFixBaseProxy_RunReflection() {
		return ((T (*)(SteleController*))(Il2CppBase() + 0x42A44D0))(this);
	}
	template <typename T = void> T iFixBaseProxy_EndCycle() {
		return ((T (*)(SteleController*))(Il2CppBase() + 0x42A44D8))(this);
	}
	template <typename T = void> T iFixBaseProxy_FixedRotation() {
		return ((T (*)(SteleController*))(Il2CppBase() + 0x42A44E0))(this);
	}
	template <typename T = void> T iFixBaseProxy_GetHurt(int32_t P0) {
		return ((T (*)(SteleController*, int32_t))(Il2CppBase() + 0x42A44E8))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_OnGameStateChange(int32_t P0) {
		return ((T (*)(SteleController*, int32_t))(Il2CppBase() + 0x42A44F0))(this, P0);
	}

};

}
