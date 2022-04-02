#pragma once
#include "Il2Cpp/Il2Cpp.h"

class RGEController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RGEController"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& detect_list() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& clip_dead() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = bool> T& awake() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = bool> T& temp_enemy() {
		return *(T*)((uintptr_t)this + 0x31);
	}
	template <typename T = bool> T& start_awake() {
		return *(T*)((uintptr_t)this + 0x32);
	}
	template <typename T = uintptr_t> T& levelScene() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& enemyTag() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& immuneEffectType() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& enemyTagRunTime() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = bool> T& has_change_shape() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = bool> T& destory_on_dead() {
		return *(T*)((uintptr_t)this + 0x45);
	}
	template <typename T = bool> T& intensive() {
		return *(T*)((uintptr_t)this + 0x46);
	}
	template <typename T = uintptr_t> T& exEnemy() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = bool> T& weapon_lock_target() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = Il2CppString*> T& enemy_id() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = Il2CppString*> T& enemy_statistic_id() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = int32_t> T& ai_level() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = int32_t> T& consume() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = int32_t> T& e_size() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = int32_t> T& reward_rate() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& reward_value() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = bool> T& dead() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = float> T& shoot_cd() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = bool> T& can_shoot() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = float> T& inertial_vel() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = Il2CppVector2> T& force_direction() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = float> T& friction() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = int32_t> T& facing() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = bool> T& kinematic() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = int32_t> T& findTargetRange() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = bool> T& ignoreObstacleWhenTargeting() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& shadowColor() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = bool> T& lowPriorityForPetTarget() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = bool> T& NotPartOfWave() {
		return *(T*)((uintptr_t)this + 0xBD);
	}
	template <typename T = bool> T& DontSortingLayerWhenDie() {
		return *(T*)((uintptr_t)this + 0xBE);
	}
	template <typename T = bool> T& autoChanageMaterial() {
		return *(T*)((uintptr_t)this + 0xBF);
	}
	template <typename T = bool> T& autoTeleportIntoRoom() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = bool> T& autoStartAI() {
		return *(T*)((uintptr_t)this + 0xC1);
	}
	template <typename T = float> T& dead_destory_delay_time() {
		return *(T*)((uintptr_t)this + 0xC4);
	}
	template <typename T = uintptr_t> T& anim() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = uintptr_t> T& rigibody() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = uintptr_t> T& _bodyCol() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = uintptr_t> T& _body_renderer() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = uintptr_t> T& transform_img() {
		return *(T*)((uintptr_t)this + 0xE8);
	}
	template <typename T = uintptr_t> T& hand_tf() {
		return *(T*)((uintptr_t)this + 0xF0);
	}
	template <typename T = uintptr_t> T& hand() {
		return *(T*)((uintptr_t)this + 0xF8);
	}
	template <typename T = uintptr_t> T& role_attribute() {
		return *(T*)((uintptr_t)this + 0x100);
	}
	template <typename T = Il2CppVector2> T& _move_direction() {
		return *(T*)((uintptr_t)this + 0x108);
	}
	template <typename T = uintptr_t> T& hpBar() {
		return *(T*)((uintptr_t)this + 0x110);
	}
	template <typename T = bool> T& shooting() {
		return *(T*)((uintptr_t)this + 0x118);
	}
	template <typename T = float> T& fixed_angle() {
		return *(T*)((uintptr_t)this + 0x11C);
	}
	template <typename T = float> T& min_distance() {
		return *(T*)((uintptr_t)this + 0x120);
	}
	template <typename T = uintptr_t> T& target_obj() {
		return *(T*)((uintptr_t)this + 0x128);
	}
	template <typename T = Il2CppVector2> T& target_point() {
		return *(T*)((uintptr_t)this + 0x130);
	}
	template <typename T = uintptr_t> T& the_maker() {
		return *(T*)((uintptr_t)this + 0x138);
	}
	template <typename T = float> T& scout_rate() {
		return *(T*)((uintptr_t)this + 0x140);
	}
	template <typename T = uintptr_t> T& shadow_lock() {
		return *(T*)((uintptr_t)this + 0x148);
	}
	template <typename T = bool> T& is_lock() {
		return *(T*)((uintptr_t)this + 0x150);
	}
	template <typename T = bool> T& dizzy() {
		return *(T*)((uintptr_t)this + 0x151);
	}
	template <typename T = float> T& buff_immune() {
		return *(T*)((uintptr_t)this + 0x154);
	}
	template <typename T = bool> T& immune_to_dizzy() {
		return *(T*)((uintptr_t)this + 0x158);
	}
	template <typename T = float> T& seach_time() {
		return *(T*)((uintptr_t)this + 0x15C);
	}
	template <typename T = int32_t> T& netId() {
		return *(T*)((uintptr_t)this + 0x160);
	}
	template <typename T = bool> T& ImmunSting() {
		return *(T*)((uintptr_t)this + 0x164);
	}
	template <typename T = bool> T& invincible_mode() {
		return *(T*)((uintptr_t)this + 0x165);
	}
	template <typename T = bool> T& can_award() {
		return *(T*)((uintptr_t)this + 0x166);
	}
	template <typename T = Il2CppString*> T& dead_sorting_layer_name() {
		return *(T*)((uintptr_t)this + 0x168);
	}
	template <typename T = uintptr_t> T& _defaultTarget() {
		return *(T*)((uintptr_t)this + 0x170);
	}
	template <typename T = int32_t> T& _atkAddition() {
		return *(T*)((uintptr_t)this + 0x178);
	}
	template <typename T = float> T& height() {
		return *(T*)((uintptr_t)this + 0x17C);
	}
	template <typename T = bool> T& isDemonstrationCharacter() {
		return *(T*)((uintptr_t)this + 0x180);
	}
	template <typename T = void*> T& onEnemyHurted() {
		return *(T*)((uintptr_t)this + 0x188);
	}
	template <typename T = uintptr_t> T& afterEnemyGetHurt() {
		return *(T*)((uintptr_t)this + 0x190);
	}
	template <typename T = uintptr_t> T& onEnemyAttack() {
		return *(T*)((uintptr_t)this + 0x198);
	}
	template <typename T = void*> T& onSetupAttribute() {
		return *(T*)((uintptr_t)this + 0x1A0);
	}
	template <typename T = void*> T& onEnemyDead() {
		return *(T*)((uintptr_t)this + 0x1A8);
	}
	template <typename T = void*> T& onEnemyDeadAnim() {
		return *(T*)((uintptr_t)this + 0x1B0);
	}
	template <typename T = Il2CppList<void*>*> T& addHurtCallbacks() {
		return *(T*)((uintptr_t)this + 0x1B8);
	}
	template <typename T = void*> T& onReborn() {
		return *(T*)((uintptr_t)this + 0x1C0);
	}
	template <typename T = uintptr_t> T& DeadEvents() {
		return *(T*)((uintptr_t)this + 0x1C8);
	}
	template <typename T = void*> T& customFlagSet() {
		return *(T*)((uintptr_t)this + 0x1D0);
	}
	template <typename T = void*> T& customUpdateEvent() {
		return *(T*)((uintptr_t)this + 0x1D8);
	}
	template <typename T = uintptr_t> T& speedFactor() {
		return *(T*)((uintptr_t)this + 0x1E0);
	}
	template <typename T = int32_t> T& scoutMask() {
		return *(T*)((uintptr_t)this + 0x1E8);
	}
	template <typename T = uintptr_t> T& onScoutStart() {
		return *(T*)((uintptr_t)this + 0x1F0);
	}
	template <typename T = uintptr_t> T& onScoutEnd() {
		return *(T*)((uintptr_t)this + 0x1F8);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _linecastCache() {
		return *(T*)((uintptr_t)this + 0x200);
	}
	template <typename T = void*> T& onFixedRotation() {
		return *(T*)((uintptr_t)this + 0x208);
	}
	template <typename T = bool> T& justDead() {
		return *(T*)((uintptr_t)this + 0x210);
	}
	template <typename T = bool> T& reborned() {
		return *(T*)((uintptr_t)this + 0x211);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& buff_list() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& _positionProvider() {
		return *(T*)((uintptr_t)this + 0x218);
	}
	template <typename T = uintptr_t> T& enemyRoom() {
		return *(T*)((uintptr_t)this + 0x220);
	}
	template <typename T = bool> T& can_hit() {
		return *(T*)((uintptr_t)this + 0x228);
	}
	template <typename T = void*> T& shadowSet() {
		return *(T*)((uintptr_t)this + 0x230);
	}

	template <typename T = Il2CppString*> T get_statisticID() {
		return ((T (*)(RGEController*))(Il2CppBase() + 0x22281E4))(this);
	}
	template <typename T = bool> T get_ignoreObstacleWhenTargeting() {
		return ((T (*)(RGEController*))(Il2CppBase() + 0x222825C))(this);
	}
	template <typename T = void> T set_ignoreObstacleWhenTargeting(bool value) {
		return ((T (*)(RGEController*, bool))(Il2CppBase() + 0x2228264))(this, value);
	}
	template <typename T = bool> T get_NotPartOfWave() {
		return ((T (*)(RGEController*))(Il2CppBase() + 0x2228270))(this);
	}
	template <typename T = void> T set_NotPartOfWave(bool value) {
		return ((T (*)(RGEController*, bool))(Il2CppBase() + 0x2228278))(this, value);
	}
	template <typename T = bool> T get_DontSortingLayerWhenDie() {
		return ((T (*)(RGEController*))(Il2CppBase() + 0x2228284))(this);
	}
	template <typename T = void> T set_DontSortingLayerWhenDie(bool value) {
		return ((T (*)(RGEController*, bool))(Il2CppBase() + 0x222828C))(this, value);
	}
	template <typename T = int32_t> T get_camp() {
		return ((T (*)(RGEController*))(Il2CppBase() + 0x2228298))(this);
	}
	template <typename T = void> T set_camp(int32_t value) {
		return ((T (*)(RGEController*, int32_t))(Il2CppBase() + 0x222830C))(this, value);
	}
	template <typename T = uintptr_t> T get_Anim() {
		return ((T (*)(RGEController*))(Il2CppBase() + 0x2228394))(this);
	}
	template <typename T = uintptr_t> T get_bodyCol() {
		return ((T (*)(RGEController*))(Il2CppBase() + 0x2221F1C))(this);
	}
	template <typename T = uintptr_t> T get_body_render() {
		return ((T (*)(RGEController*))(Il2CppBase() + 0x22283F4))(this);
	}
	template <typename T = uintptr_t> T get_attribute() {
		return ((T (*)(RGEController*))(Il2CppBase() + 0x2223D68))(this);
	}
	template <typename T = void> T set_attribute(uintptr_t value) {
		return ((T (*)(RGEController*, uintptr_t))(Il2CppBase() + 0x2228504))(this, value);
	}
	template <typename T = Il2CppVector2> T get_move_direction() {
		return ((T (*)(RGEController*))(Il2CppBase() + 0x2222024))(this);
	}
	template <typename T = void> T set_move_direction(Il2CppVector2 value) {
		return ((T (*)(RGEController*, Il2CppVector2))(Il2CppBase() + 0x2226208))(this, value);
	}
	template <typename T = Il2CppVector3> T get_oriantation() {
		return ((T (*)(RGEController*))(Il2CppBase() + 0x2228690))(this);
	}
	template <typename T = float> T get_oriantationAngle() {
		return ((T (*)(RGEController*))(Il2CppBase() + 0x22287EC))(this);
	}
	template <typename T = uintptr_t> T get_defaultTarget() {
		return ((T (*)(RGEController*))(Il2CppBase() + 0x2228864))(this);
	}
	template <typename T = void> T set_defaultTarget(uintptr_t value) {
		return ((T (*)(RGEController*, uintptr_t))(Il2CppBase() + 0x22288C4))(this, value);
	}
	template <typename T = bool> T get_isBoss() {
		return ((T (*)(RGEController*))(Il2CppBase() + 0x2220B80))(this);
	}
	template <typename T = int32_t> T get_atkAddition() {
		return ((T (*)(RGEController*))(Il2CppBase() + 0x2228990))(this);
	}
	template <typename T = void> T set_atkAddition(int32_t value) {
		return ((T (*)(RGEController*, int32_t))(Il2CppBase() + 0x22289F0))(this, value);
	}
	template <typename T = bool> T get_isPlayer() {
		return ((T (*)(RGEController*))(Il2CppBase() + 0x2226A50))(this);
	}
	template <typename T = void> T add_onEnemyHurted(void* value) {
		return ((T (*)(RGEController*, void*))(Il2CppBase() + 0x2228B3C))(this, value);
	}
	template <typename T = void> T remove_onEnemyHurted(void* value) {
		return ((T (*)(RGEController*, void*))(Il2CppBase() + 0x2228C2C))(this, value);
	}
	template <typename T = void> T add_afterEnemyGetHurt(uintptr_t value) {
		return ((T (*)(RGEController*, uintptr_t))(Il2CppBase() + 0x2228D1C))(this, value);
	}
	template <typename T = void> T remove_afterEnemyGetHurt(uintptr_t value) {
		return ((T (*)(RGEController*, uintptr_t))(Il2CppBase() + 0x2228E0C))(this, value);
	}
	template <typename T = void> T add_onEnemyAttack(uintptr_t value) {
		return ((T (*)(RGEController*, uintptr_t))(Il2CppBase() + 0x2228EFC))(this, value);
	}
	template <typename T = void> T remove_onEnemyAttack(uintptr_t value) {
		return ((T (*)(RGEController*, uintptr_t))(Il2CppBase() + 0x2228FEC))(this, value);
	}
	template <typename T = void> T add_onSetupAttribute(void* value) {
		return ((T (*)(RGEController*, void*))(Il2CppBase() + 0x22290DC))(this, value);
	}
	template <typename T = void> T remove_onSetupAttribute(void* value) {
		return ((T (*)(RGEController*, void*))(Il2CppBase() + 0x22291CC))(this, value);
	}
	template <typename T = void> T add_onEnemyDead(void* value) {
		return ((T (*)(RGEController*, void*))(Il2CppBase() + 0x221DE70))(this, value);
	}
	template <typename T = void> T remove_onEnemyDead(void* value) {
		return ((T (*)(RGEController*, void*))(Il2CppBase() + 0x22292BC))(this, value);
	}
	template <typename T = void> T add_onEnemyDeadAnim(void* value) {
		return ((T (*)(RGEController*, void*))(Il2CppBase() + 0x22293AC))(this, value);
	}
	template <typename T = void> T remove_onEnemyDeadAnim(void* value) {
		return ((T (*)(RGEController*, void*))(Il2CppBase() + 0x222949C))(this, value);
	}
	template <typename T = void> T AddExtraHurtCallback(void* callback) {
		return ((T (*)(RGEController*, void*))(Il2CppBase() + 0x222958C))(this, callback);
	}
	template <typename T = void> T RemoveExtraHurtCallback(void* callback) {
		return ((T (*)(RGEController*, void*))(Il2CppBase() + 0x2229670))(this, callback);
	}
	template <typename T = void> T add_onReborn(void* value) {
		return ((T (*)(RGEController*, void*))(Il2CppBase() + 0x2229728))(this, value);
	}
	template <typename T = void> T remove_onReborn(void* value) {
		return ((T (*)(RGEController*, void*))(Il2CppBase() + 0x2229818))(this, value);
	}
	template <typename T = void> T add_customUpdateEvent(void* value) {
		return ((T (*)(RGEController*, void*))(Il2CppBase() + 0x2229908))(this, value);
	}
	template <typename T = void> T remove_customUpdateEvent(void* value) {
		return ((T (*)(RGEController*, void*))(Il2CppBase() + 0x22299F8))(this, value);
	}
	template <typename T = void> T OnSetRGRandomSeed(int32_t seed) {
		return ((T (*)(RGEController*, int32_t))(Il2CppBase() + 0x2229AE8))(this, seed);
	}
	template <typename T = void> T _Init() {
		return ((T (*)(RGEController*))(Il2CppBase() + 0x2221838))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(RGEController*))(Il2CppBase() + 0x2226AC4))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(RGEController*))(Il2CppBase() + 0x2229B64))(this);
	}
	template <typename T = void> T FixedUpdate() {
		return ((T (*)(RGEController*))(Il2CppBase() + 0x2227604))(this);
	}
	template <typename T = void> T SetUpAttribution() {
		return ((T (*)(RGEController*))(Il2CppBase() + 0x2226BA8))(this);
	}
	template <typename T = void> T ProcessEnemyTag() {
		return ((T (*)(RGEController*))(Il2CppBase() + 0x2229C50))(this);
	}
	template <typename T = void> T StartEnemyAI() {
		return ((T (*)(RGEController*))(Il2CppBase() + 0x22273F4))(this);
	}
	template <typename T = void> T StartTempEnemyAI() {
		return ((T (*)(RGEController*))(Il2CppBase() + 0x2229D6C))(this);
	}
	template <typename T = void> T EnemyUpdate() {
		return ((T (*)(RGEController*))(Il2CppBase() + 0x2229F10))(this);
	}
	template <typename T = uintptr_t> T DizzyScout() {
		return ((T (*)(RGEController*))(Il2CppBase() + 0x222A00C))(this);
	}
	template <typename T = void> T add_onScoutStart(uintptr_t value) {
		return ((T (*)(RGEController*, uintptr_t))(Il2CppBase() + 0x222A0EC))(this, value);
	}
	template <typename T = void> T remove_onScoutStart(uintptr_t value) {
		return ((T (*)(RGEController*, uintptr_t))(Il2CppBase() + 0x222A1DC))(this, value);
	}
	template <typename T = void> T add_onScoutEnd(uintptr_t value) {
		return ((T (*)(RGEController*, uintptr_t))(Il2CppBase() + 0x222A2CC))(this, value);
	}
	template <typename T = void> T remove_onScoutEnd(uintptr_t value) {
		return ((T (*)(RGEController*, uintptr_t))(Il2CppBase() + 0x222A3BC))(this, value);
	}
	template <typename T = void> T ResetScoutMask() {
		return ((T (*)(RGEController*))(Il2CppBase() + 0x22230F0))(this);
	}
	template <typename T = void> T Scout() {
		return ((T (*)(RGEController*))(Il2CppBase() + 0x222A4AC))(this);
	}
	template <typename T = uintptr_t> T FindTarget() {
		return ((T (*)(RGEController*))(Il2CppBase() + 0x222AE9C))(this);
	}
	template <typename T = uintptr_t> T FindNearestTarget(float radius, int32_t masks) {
		return ((T (*)(RGEController*, float, int32_t))(Il2CppBase() + 0x222A814))(this, radius, masks);
	}
	template <typename T = void> T SetTargetPosition(Il2CppVector2 p) {
		return ((T (*)(RGEController*, Il2CppVector2))(Il2CppBase() + 0x222AF10))(this, p);
	}
	template <typename T = void> T FollowDefault() {
		return ((T (*)(RGEController*))(Il2CppBase() + 0x222AC88))(this);
	}
	template <typename T = void> T RunReflection() {
		return ((T (*)(RGEController*))(Il2CppBase() + 0x222AF90))(this);
	}
	template <typename T = void> T EndCycle() {
		return ((T (*)(RGEController*))(Il2CppBase() + 0x222AFEC))(this);
	}
	template <typename T = void> T StopMove() {
		return ((T (*)(RGEController*))(Il2CppBase() + 0x222B10C))(this);
	}
	template <typename T = void> T TestAttack() {
		return ((T (*)(RGEController*))(Il2CppBase() + 0x222B234))(this);
	}
	template <typename T = void> T ShootReflection() {
		return ((T (*)(RGEController*))(Il2CppBase() + 0x222B2E0))(this);
	}
	template <typename T = void> T ShootReflectionByDeadBody() {
		return ((T (*)(RGEController*))(Il2CppBase() + 0x222B33C))(this);
	}
	template <typename T = void> T AttackCommand(int32_t index) {
		return ((T (*)(RGEController*, int32_t))(Il2CppBase() + 0x222B3A8))(this, index);
	}
	template <typename T = void> T SyncAttack(int32_t index) {
		return ((T (*)(RGEController*, int32_t))(Il2CppBase() + 0x222B5A8))(this, index);
	}
	template <typename T = void> T StartAttack(int32_t index) {
		return ((T (*)(RGEController*, int32_t))(Il2CppBase() + 0x222B64C))(this, index);
	}
	template <typename T = void> T InAttack(int32_t index) {
		return ((T (*)(RGEController*, int32_t))(Il2CppBase() + 0x222B6BC))(this, index);
	}
	template <typename T = void> T EndAttack(int32_t index) {
		return ((T (*)(RGEController*, int32_t))(Il2CppBase() + 0x222B734))(this, index);
	}
	template <typename T = void> T GetHurtEvent(uintptr_t source_object) {
		return ((T (*)(RGEController*, uintptr_t))(Il2CppBase() + 0x222B7AC))(this, source_object);
	}
	template <typename T = void> T AfterHurtEvent(uintptr_t sourceObject) {
		return ((T (*)(RGEController*, uintptr_t))(Il2CppBase() + 0x222B868))(this, sourceObject);
	}
	template <typename T = void> T OnDeadEvent() {
		return ((T (*)(RGEController*))(Il2CppBase() + 0x222B94C))(this);
	}
	template <typename T = void> T OnDeadBeforeMakerTrigger() {
		return ((T (*)(RGEController*))(Il2CppBase() + 0x222BA8C))(this);
	}
	template <typename T = int32_t> T OnEnemyDamageProcess(uintptr_t source, int32_t damage, bool addDamage) {
		return ((T (*)(RGEController*, uintptr_t, int32_t, bool))(Il2CppBase() + 0x222BB5C))(this, source, damage, addDamage);
	}
	template <typename T = void> T ClearDeadAnimEvent() {
		return ((T (*)(RGEController*))(Il2CppBase() + 0x222BCE4))(this);
	}
	template <typename T = void> T GetHurt(int32_t damage, uintptr_t source_object) {
		return ((T (*)(RGEController*, int32_t, uintptr_t))(Il2CppBase() + 0x222341C))(this, damage, source_object);
	}
	template <typename T = void> T SetBodyHit() {
		return ((T (*)(RGEController*))(Il2CppBase() + 0x222BD44))(this);
	}
	template <typename T = void> T SyncGetHurt(int32_t damage) {
		return ((T (*)(RGEController*, int32_t))(Il2CppBase() + 0x222402C))(this, damage);
	}
	template <typename T = void> T FixedRotation() {
		return ((T (*)(RGEController*))(Il2CppBase() + 0x222BDE4))(this);
	}
	template <typename T = void> T HandLockTarget() {
		return ((T (*)(RGEController*))(Il2CppBase() + 0x222C1E4))(this);
	}
	template <typename T = void> T LoseTarget() {
		return ((T (*)(RGEController*))(Il2CppBase() + 0x222C290))(this);
	}
	template <typename T = void> T HitBack() {
		return ((T (*)(RGEController*))(Il2CppBase() + 0x222C3B4))(this);
	}
	template <typename T = void> T TurnTo(Il2CppVector2 normal) {
		return ((T (*)(RGEController*, Il2CppVector2))(Il2CppBase() + 0x222C454))(this, normal);
	}
	template <typename T = void> T EatenBy(uintptr_t eater) {
		return ((T (*)(RGEController*, uintptr_t))(Il2CppBase() + 0x22279BC))(this, eater);
	}
	template <typename T = void> T Dead(uintptr_t source_object, bool sync) {
		return ((T (*)(RGEController*, uintptr_t, bool))(Il2CppBase() + 0x222C654))(this, source_object, sync);
	}
	template <typename T = void> T DestroySelf(float delay) {
		return ((T (*)(RGEController*, float))(Il2CppBase() + 0x222D440))(this, delay);
	}
	template <typename T = void> T DestroySelf_1() {
		return ((T (*)(RGEController*))(Il2CppBase() + 0x222D540))(this);
	}
	template <typename T = void> T EndJustDead() {
		return ((T (*)(RGEController*))(Il2CppBase() + 0x222D5FC))(this);
	}
	template <typename T = void> T Reborn() {
		return ((T (*)(RGEController*))(Il2CppBase() + 0x222D65C))(this);
	}
	template <typename T = void> T EnemyMakerDeadTrigger() {
		return ((T (*)(RGEController*))(Il2CppBase() + 0x222D304))(this);
	}
	template <typename T = void> T AddExtraEnemy(int32_t extraCount) {
		return ((T (*)(RGEController*, int32_t))(Il2CppBase() + 0x222DB28))(this, extraCount);
	}
	template <typename T = void> T ShowDeadAnimation() {
		return ((T (*)(RGEController*))(Il2CppBase() + 0x222DC28))(this);
	}
	template <typename T = void> T SyncDead(uintptr_t source) {
		return ((T (*)(RGEController*, uintptr_t))(Il2CppBase() + 0x222DD0C))(this, source);
	}
	template <typename T = void> T SyncDeadNoSource() {
		return ((T (*)(RGEController*))(Il2CppBase() + 0x222DDB8))(this);
	}
	template <typename T = void> T ChildDead() {
		return ((T (*)(RGEController*))(Il2CppBase() + 0x2224AB8))(this);
	}
	template <typename T = void> T DeadBoom() {
		return ((T (*)(RGEController*))(Il2CppBase() + 0x222DE50))(this);
	}
	template <typename T = bool> T HasRGBuff(Il2CppString* buffName) {
		return ((T (*)(RGEController*, Il2CppString*))(Il2CppBase() + 0x222E078))(this, buffName);
	}
	template <typename T = void> T GetReward() {
		return ((T (*)(RGEController*))(Il2CppBase() + 0x222E214))(this);
	}
	template <typename T = void> T DropEnergy(int32_t specifiedEnergyAmount) {
		return ((T (*)(RGEController*, int32_t))(Il2CppBase() + 0x222E6C8))(this, specifiedEnergyAmount);
	}
	template <typename T = void> T DropItem(uintptr_t item, float dropDuration) {
		return ((T (*)(RGEController*, uintptr_t, float))(Il2CppBase() + 0x222E970))(this, item, dropDuration);
	}
	template <typename T = void> T BuffDestroy() {
		return ((T (*)(RGEController*))(Il2CppBase() + 0x222EC58))(this);
	}
	template <typename T = void> T AddDelegate() {
		return ((T (*)(RGEController*))(Il2CppBase() + 0x222290C))(this);
	}
	template <typename T = void> T RemoveDelegate() {
		return ((T (*)(RGEController*))(Il2CppBase() + 0x222D104))(this);
	}
	template <typename T = void> T OnGameStateChange(int32_t game_state) {
		return ((T (*)(RGEController*, int32_t))(Il2CppBase() + 0x222EE24))(this, game_state);
	}
	template <typename T = void> T OnGameStateChangePhysics(int32_t game_state) {
		return ((T (*)(RGEController*, int32_t))(Il2CppBase() + 0x222EF60))(this, game_state);
	}
	template <typename T = void> T BeLock() {
		return ((T (*)(RGEController*))(Il2CppBase() + 0x222F0E0))(this);
	}
	template <typename T = void> T OffLock() {
		return ((T (*)(RGEController*))(Il2CppBase() + 0x2229BD0))(this);
	}
	template <typename T = bool> T IsLocked() {
		return ((T (*)(RGEController*))(Il2CppBase() + 0x222F170))(this);
	}
	template <typename T = bool> T CanOffLock(uintptr_t player) {
		return ((T (*)(RGEController*, uintptr_t))(Il2CppBase() + 0x222F1D0))(this, player);
	}
	template <typename T = bool> T GetForce(Il2CppVector2 value1, float value2, float limit, bool ignoreDizzy) {
		return ((T (*)(RGEController*, Il2CppVector2, float, float, bool))(Il2CppBase() + 0x222F244))(this, value1, value2, limit, ignoreDizzy);
	}
	template <typename T = void> T Dizzy(float duration, bool isFreeze) {
		return ((T (*)(RGEController*, float, bool))(Il2CppBase() + 0x222F440))(this, duration, isFreeze);
	}
	template <typename T = void> T EndDizzy() {
		return ((T (*)(RGEController*))(Il2CppBase() + 0x222F620))(this);
	}
	template <typename T = void> T TurnCanShoot() {
		return ((T (*)(RGEController*))(Il2CppBase() + 0x222F688))(this);
	}
	template <typename T = int32_t> T GetFacing() {
		return ((T (*)(RGEController*))(Il2CppBase() + 0x222F6EC))(this);
	}
	template <typename T = void> T CreateSmoke() {
		return ((T (*)(RGEController*))(Il2CppBase() + 0x222629C))(this);
	}
	template <typename T = void> T SetTapAtk() {
		return ((T (*)(RGEController*))(Il2CppBase() + 0x222F74C))(this);
	}
	template <typename T = bool> T get_HasRoomReference() {
		return ((T (*)(RGEController*))(Il2CppBase() + 0x222F7F0))(this);
	}
	template <typename T = uintptr_t> T get_RoomReference() {
		return ((T (*)(RGEController*))(Il2CppBase() + 0x222F9B8))(this);
	}
	template <typename T = void> T InstantMove(bool showPortal) {
		return ((T (*)(RGEController*, bool))(Il2CppBase() + 0x222FAD0))(this, showPortal);
	}
	template <typename T = void> T InstantMove_1(Il2CppVector3 localPosition, bool showPortal) {
		return ((T (*)(RGEController*, Il2CppVector3, bool))(Il2CppBase() + 0x22303AC))(this, localPosition, showPortal);
	}
	template <typename T = void> T ReSetAtk() {
		return ((T (*)(RGEController*))(Il2CppBase() + 0x2230850))(this);
	}
	template <typename T = void> T AwakeTimeOut() {
		return ((T (*)(RGEController*))(Il2CppBase() + 0x22308AC))(this);
	}
	template <typename T = uintptr_t> T CheckPositionValid() {
		return ((T (*)(RGEController*))(Il2CppBase() + 0x2222D30))(this);
	}
	template <typename T = void> T GenNetId() {
		return ((T (*)(RGEController*))(Il2CppBase() + 0x2230A0C))(this);
	}
	template <typename T = uintptr_t> T SendingPosition() {
		return ((T (*)(RGEController*))(Il2CppBase() + 0x2230B28))(this);
	}
	template <typename T = void> T SyncEnemy(Il2CppVector2 position, Il2CppVector2 move_direction) {
		return ((T (*)(RGEController*, Il2CppVector2, Il2CppVector2))(Il2CppBase() + 0x2230C08))(this, position, move_direction);
	}
	template <typename T = void> T SendForce() {
		return ((T (*)(RGEController*))(Il2CppBase() + 0x222CF20))(this);
	}
	template <typename T = void> T SyncForce(Il2CppVector2 force_direction, float inertial_vel) {
		return ((T (*)(RGEController*, Il2CppVector2, float))(Il2CppBase() + 0x2230E5C))(this, force_direction, inertial_vel);
	}
	template <typename T = bool> T IsServerOrSingle() {
		return ((T (*)(RGEController*))(Il2CppBase() + 0x2228578))(this);
	}
	template <typename T = void> T HitUnit(uintptr_t target, int32_t atk, float cd) {
		return ((T (*)(RGEController*, uintptr_t, int32_t, float))(Il2CppBase() + 0x2230EF0))(this, target, atk, cd);
	}
	template <typename T = void> T TurnCanHit() {
		return ((T (*)(RGEController*))(Il2CppBase() + 0x22314B4))(this);
	}
	template <typename T = uintptr_t> T GetTheMaker() {
		return ((T (*)(RGEController*))(Il2CppBase() + 0x2231518))(this);
	}
	template <typename T = bool> T HasTag(uintptr_t tag) {
		return ((T (*)(RGEController*, uintptr_t))(Il2CppBase() + 0x22315EC))(this, tag);
	}
	template <typename T = void> T UpdateHpBar(float value, float maxValue) {
		return ((T (*)(RGEController*, float, float))(Il2CppBase() + 0x2223DC8))(this, value, maxValue);
	}
	template <typename T = void> T CreateHpBar() {
		return ((T (*)(RGEController*))(Il2CppBase() + 0x2231668))(this);
	}
	template <typename T = void> T TurnPlayer() {
		return ((T (*)(RGEController*))(Il2CppBase() + 0x2231A68))(this);
	}
	template <typename T = void> T EnableShadow(Il2CppString* tag, float fadeSpeed) {
		return ((T (*)(RGEController*, Il2CppString*, float))(Il2CppBase() + 0x2231DD0))(this, tag, fadeSpeed);
	}
	template <typename T = void> T DisableShadow(Il2CppString* tag) {
		return ((T (*)(RGEController*, Il2CppString*))(Il2CppBase() + 0x2232020))(this, tag);
	}
	template <typename T = bool> T IsImmuneToEffect(uintptr_t type) {
		return ((T (*)(RGEController*, uintptr_t))(Il2CppBase() + 0x222C56C))(this, type);
	}
	template <typename T = void> T ResetAI() {
		return ((T (*)(RGEController*))(Il2CppBase() + 0x22321A8))(this);
	}
	template <typename T = void> T SetUpAttributionb__147_0(uintptr_t e) {
		return ((T (*)(RGEController*, uintptr_t))(Il2CppBase() + 0x223293C))(this, e);
	}
	template <typename T = void> T iFixBaseProxy_OnSetRGRandomSeed(int32_t P0) {
		return ((T (*)(RGEController*, int32_t))(Il2CppBase() + 0x2232BD0))(this, P0);
	}

};

}
