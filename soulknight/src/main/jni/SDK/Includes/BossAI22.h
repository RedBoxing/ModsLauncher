#pragma once
#include "Il2Cpp/Il2Cpp.h"

class BossAI22
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BossAI22"));
	}

	template <typename T = uintptr_t> T& stone1() {
		return *(T*)((uintptr_t)this + 0x2C0);
	}
	template <typename T = uintptr_t> T& stone2() {
		return *(T*)((uintptr_t)this + 0x2C8);
	}
	template <typename T = uintptr_t> T& safe_area() {
		return *(T*)((uintptr_t)this + 0x2D0);
	}
	template <typename T = uintptr_t> T& vine_obj() {
		return *(T*)((uintptr_t)this + 0x2D8);
	}
	template <typename T = uintptr_t> T& enemy_obj01() {
		return *(T*)((uintptr_t)this + 0x2E0);
	}
	template <typename T = uintptr_t> T& enemy_obj02() {
		return *(T*)((uintptr_t)this + 0x2E8);
	}
	template <typename T = uintptr_t> T& invers_buff() {
		return *(T*)((uintptr_t)this + 0x2F0);
	}
	template <typename T = uintptr_t> T& shake_obj() {
		return *(T*)((uintptr_t)this + 0x2F8);
	}
	template <typename T = uintptr_t> T& move_shake_obj() {
		return *(T*)((uintptr_t)this + 0x300);
	}
	template <typename T = uintptr_t> T& the_safe_area() {
		return *(T*)((uintptr_t)this + 0x308);
	}
	template <typename T = uintptr_t> T& danger_sr() {
		return *(T*)((uintptr_t)this + 0x310);
	}
	template <typename T = uintptr_t> T& light_sr() {
		return *(T*)((uintptr_t)this + 0x318);
	}
	template <typename T = uintptr_t> T& hand_l_tf() {
		return *(T*)((uintptr_t)this + 0x320);
	}
	template <typename T = uintptr_t> T& hand_r_tf() {
		return *(T*)((uintptr_t)this + 0x328);
	}
	template <typename T = uintptr_t> T& child_ctrl01() {
		return *(T*)((uintptr_t)this + 0x330);
	}
	template <typename T = uintptr_t> T& child_ctrl02() {
		return *(T*)((uintptr_t)this + 0x338);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& face_points() {
		return *(T*)((uintptr_t)this + 0x340);
	}
	template <typename T = uintptr_t> T& dead_face_point() {
		return *(T*)((uintptr_t)this + 0x348);
	}
	template <typename T = uintptr_t> T& follow_face() {
		return *(T*)((uintptr_t)this + 0x350);
	}
	template <typename T = int32_t> T& stone1_rate() {
		return *(T*)((uintptr_t)this + 0x358);
	}
	template <typename T = bool> T& is_god() {
		return *(T*)((uintptr_t)this + 0x35C);
	}
	template <typename T = int32_t> T& enemy_obj01_rate() {
		return *(T*)((uintptr_t)this + 0x360);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(BossAI22*))(Il2CppBase() + 0x1DD1D84))(this);
	}
	template <typename T = void> T SetUpAttribution() {
		return ((T (*)(BossAI22*))(Il2CppBase() + 0x1DD2048))(this);
	}
	template <typename T = void> T OnGameStateChange(int32_t game_state) {
		return ((T (*)(BossAI22*, int32_t))(Il2CppBase() + 0x1DD227C))(this, game_state);
	}
	template <typename T = void> T ChildDead() {
		return ((T (*)(BossAI22*))(Il2CppBase() + 0x1DD24A8))(this);
	}
	template <typename T = void> T ShootReflection() {
		return ((T (*)(BossAI22*))(Il2CppBase() + 0x1DD2674))(this);
	}
	template <typename T = void> T AttackCommand(int32_t index) {
		return ((T (*)(BossAI22*, int32_t))(Il2CppBase() + 0x1DD2810))(this, index);
	}
	template <typename T = void> T MoveFaceToTarget(int32_t index) {
		return ((T (*)(BossAI22*, int32_t))(Il2CppBase() + 0x1DD2898))(this, index);
	}
	template <typename T = void> T StartAttack(int32_t index) {
		return ((T (*)(BossAI22*, int32_t))(Il2CppBase() + 0x1DD29BC))(this, index);
	}
	template <typename T = uintptr_t> T GetRandomStone() {
		return ((T (*)(BossAI22*))(Il2CppBase() + 0x1DD2B40))(this);
	}
	template <typename T = void> T HandDoShock(bool left, bool right, bool move_shock) {
		return ((T (*)(BossAI22*, bool, bool, bool))(Il2CppBase() + 0x1DD2BE4))(this, left, right, move_shock);
	}
	template <typename T = void> T InAtk01() {
		return ((T (*)(BossAI22*))(Il2CppBase() + 0x1DD36DC))(this);
	}
	template <typename T = void> T EndAtk01() {
		return ((T (*)(BossAI22*))(Il2CppBase() + 0x1DD3CB4))(this);
	}
	template <typename T = void> T BeginAtk02() {
		return ((T (*)(BossAI22*))(Il2CppBase() + 0x1DD3D28))(this);
	}
	template <typename T = void> T InAtk02_1() {
		return ((T (*)(BossAI22*))(Il2CppBase() + 0x1DD3E5C))(this);
	}
	template <typename T = void> T InAtk02() {
		return ((T (*)(BossAI22*))(Il2CppBase() + 0x1DD3F60))(this);
	}
	template <typename T = void> T OnSafeAreaEndCB(uintptr_t rgctrl) {
		return ((T (*)(BossAI22*, uintptr_t))(Il2CppBase() + 0x1DD43E8))(this, rgctrl);
	}
	template <typename T = void> T EndAtk02() {
		return ((T (*)(BossAI22*))(Il2CppBase() + 0x1DD471C))(this);
	}
	template <typename T = void> T GodMode() {
		return ((T (*)(BossAI22*))(Il2CppBase() + 0x1DD3D88))(this);
	}
	template <typename T = void> T NormalMode() {
		return ((T (*)(BossAI22*))(Il2CppBase() + 0x1DD4798))(this);
	}
	template <typename T = void> T GetHurt(int32_t damage, uintptr_t source_object) {
		return ((T (*)(BossAI22*, int32_t, uintptr_t))(Il2CppBase() + 0x1DD4864))(this, damage, source_object);
	}
	template <typename T = uintptr_t> T GetRandomTempEnemy() {
		return ((T (*)(BossAI22*))(Il2CppBase() + 0x1DD3A9C))(this);
	}
	template <typename T = void> T InAtk03() {
		return ((T (*)(BossAI22*))(Il2CppBase() + 0x1DD4904))(this);
	}
	template <typename T = void> T InAtk03_1() {
		return ((T (*)(BossAI22*))(Il2CppBase() + 0x1DD4D10))(this);
	}
	template <typename T = void> T InAtk03_2() {
		return ((T (*)(BossAI22*))(Il2CppBase() + 0x1DD4E20))(this);
	}
	template <typename T = void> T EndAtk03() {
		return ((T (*)(BossAI22*))(Il2CppBase() + 0x1DD4F30))(this);
	}
	template <typename T = Il2CppVector2> T GetRoomRandomPos() {
		return ((T (*)(BossAI22*))(Il2CppBase() + 0x1DD3B40))(this);
	}
	template <typename T = void> T RunReflection() {
		return ((T (*)(BossAI22*))(Il2CppBase() + 0x1DD4FA4))(this);
	}
	template <typename T = void> T FixedRotation() {
		return ((T (*)(BossAI22*))(Il2CppBase() + 0x1DD50C4))(this);
	}
	template <typename T = void> T iFixBaseProxy_SetUpAttribution() {
		return ((T (*)(BossAI22*))(Il2CppBase() + 0x1DD53C0))(this);
	}
	template <typename T = void> T iFixBaseProxy_OnGameStateChange(int32_t P0) {
		return ((T (*)(BossAI22*, int32_t))(Il2CppBase() + 0x1DD53C8))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_ChildDead() {
		return ((T (*)(BossAI22*))(Il2CppBase() + 0x1DD53D0))(this);
	}
	template <typename T = void> T iFixBaseProxy_ShootReflection() {
		return ((T (*)(BossAI22*))(Il2CppBase() + 0x1DD53D8))(this);
	}
	template <typename T = void> T iFixBaseProxy_AttackCommand(int32_t P0) {
		return ((T (*)(BossAI22*, int32_t))(Il2CppBase() + 0x1DD53E0))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_StartAttack(int32_t P0) {
		return ((T (*)(BossAI22*, int32_t))(Il2CppBase() + 0x1DD53E8))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_GetHurt(int32_t P0, uintptr_t P1) {
		return ((T (*)(BossAI22*, int32_t, uintptr_t))(Il2CppBase() + 0x1DD53F0))(this, P0, P1);
	}
	template <typename T = void> T iFixBaseProxy_RunReflection() {
		return ((T (*)(BossAI22*))(Il2CppBase() + 0x1DD53F8))(this);
	}
	template <typename T = void> T iFixBaseProxy_FixedRotation() {
		return ((T (*)(BossAI22*))(Il2CppBase() + 0x1DD5400))(this);
	}

};

}
