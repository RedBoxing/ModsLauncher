#pragma once
#include "Il2Cpp/Il2Cpp.h"

class RGEBossController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RGEBossController"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& bullets() {
		return *(T*)((uintptr_t)this + 0x238);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& boss_clip() {
		return *(T*)((uintptr_t)this + 0x240);
	}
	template <typename T = uintptr_t> T& angry_clip() {
		return *(T*)((uintptr_t)this + 0x248);
	}
	template <typename T = uintptr_t> T& boss_weapon() {
		return *(T*)((uintptr_t)this + 0x250);
	}
	template <typename T = bool> T& levelModeDropWeapon() {
		return *(T*)((uintptr_t)this + 0x258);
	}
	template <typename T = Il2CppVector2> T& doubleboss_offset() {
		return *(T*)((uintptr_t)this + 0x25C);
	}
	template <typename T = bool> T& angry() {
		return *(T*)((uintptr_t)this + 0x264);
	}
	template <typename T = uintptr_t> T& boss_info() {
		return *(T*)((uintptr_t)this + 0x268);
	}
	template <typename T = int32_t> T& boss_index() {
		return *(T*)((uintptr_t)this + 0x270);
	}
	template <typename T = uintptr_t> T& gate() {
		return *(T*)((uintptr_t)this + 0x278);
	}
	template <typename T = uintptr_t> T& chest() {
		return *(T*)((uintptr_t)this + 0x280);
	}
	template <typename T = Il2CppString*> T& gate_path_str() {
		return *(T*)((uintptr_t)this + 0x288);
	}
	template <typename T = int32_t> T& releaseEnergy() {
		return *(T*)((uintptr_t)this + 0x290);
	}
	template <typename T = void*> T& onInstantiateGate() {
		return *(T*)((uintptr_t)this + 0x298);
	}
	template <typename T = uintptr_t> T& onShowGate() {
		return *(T*)((uintptr_t)this + 0x2A0);
	}
	template <typename T = uintptr_t> T& onAngry() {
		return *(T*)((uintptr_t)this + 0x2A8);
	}
	template <typename T = void*> T& angryHook() {
		return *(T*)((uintptr_t)this + 0x2B0);
	}
	template <typename T = bool> T& alreadyIntensive() {
		return *(T*)((uintptr_t)this + 0x2B8);
	}

	template <typename T = uintptr_t> T get_gateObject() {
		return ((T (*)(RGEBossController*))(Il2CppBase() + 0x22210E0))(this);
	}
	template <typename T = int32_t> T get_releaseEnergyTotal() {
		return ((T (*)(RGEBossController*))(Il2CppBase() + 0x2221140))(this);
	}
	template <typename T = void> T add_onInstantiateGate(void* value) {
		return ((T (*)(RGEBossController*, void*))(Il2CppBase() + 0x22211A0))(this, value);
	}
	template <typename T = void> T remove_onInstantiateGate(void* value) {
		return ((T (*)(RGEBossController*, void*))(Il2CppBase() + 0x2221290))(this, value);
	}
	template <typename T = void> T add_onShowGate(uintptr_t value) {
		return ((T (*)(RGEBossController*, uintptr_t))(Il2CppBase() + 0x2221380))(this, value);
	}
	template <typename T = void> T remove_onShowGate(uintptr_t value) {
		return ((T (*)(RGEBossController*, uintptr_t))(Il2CppBase() + 0x2221470))(this, value);
	}
	template <typename T = void> T add_onAngry(uintptr_t value) {
		return ((T (*)(RGEBossController*, uintptr_t))(Il2CppBase() + 0x2221560))(this, value);
	}
	template <typename T = void> T remove_onAngry(uintptr_t value) {
		return ((T (*)(RGEBossController*, uintptr_t))(Il2CppBase() + 0x2221650))(this, value);
	}
	template <typename T = bool> T get_needGate() {
		return ((T (*)(RGEBossController*))(Il2CppBase() + 0x2221740))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(RGEBossController*))(Il2CppBase() + 0x22217A8))(this);
	}
	template <typename T = void> T FixedUpdate() {
		return ((T (*)(RGEBossController*))(Il2CppBase() + 0x2221C74))(this);
	}
	template <typename T = void> T SetUpAttribution() {
		return ((T (*)(RGEBossController*))(Il2CppBase() + 0x2222088))(this);
	}
	template <typename T = void> T GrowIntensive(bool resetScale) {
		return ((T (*)(RGEBossController*, bool))(Il2CppBase() + 0x2222A64))(this, resetScale);
	}
	template <typename T = void> T ShowBossInfo() {
		return ((T (*)(RGEBossController*))(Il2CppBase() + 0x22218EC))(this);
	}
	template <typename T = uintptr_t> T DetectingBossInfo() {
		return ((T (*)(RGEBossController*))(Il2CppBase() + 0x2222DE4))(this);
	}
	template <typename T = void> T StartEnemyAI() {
		return ((T (*)(RGEBossController*))(Il2CppBase() + 0x2222EC4))(this);
	}
	template <typename T = void> T GetHurt(int32_t damage, uintptr_t source_object) {
		return ((T (*)(RGEBossController*, int32_t, uintptr_t))(Il2CppBase() + 0x2223230))(this, damage, source_object);
	}
	template <typename T = void> T SyncGetHurt(int32_t damage) {
		return ((T (*)(RGEBossController*, int32_t))(Il2CppBase() + 0x2223ED0))(this, damage);
	}
	template <typename T = void> T BossAngry() {
		return ((T (*)(RGEBossController*))(Il2CppBase() + 0x22241FC))(this);
	}
	template <typename T = void> T DropEnergy(int32_t count) {
		return ((T (*)(RGEBossController*, int32_t))(Il2CppBase() + 0x22243E8))(this, count);
	}
	template <typename T = void> T EatenBy(uintptr_t eater) {
		return ((T (*)(RGEBossController*, uintptr_t))(Il2CppBase() + 0x2224724))(this, eater);
	}
	template <typename T = void> T ChildDead() {
		return ((T (*)(RGEBossController*))(Il2CppBase() + 0x22247C4))(this);
	}
	template <typename T = int32_t> T GetDropCoinNum() {
		return ((T (*)(RGEBossController*))(Il2CppBase() + 0x2224B14))(this);
	}
	template <typename T = void> T OnBossRoomClear() {
		return ((T (*)(RGEBossController*))(Il2CppBase() + 0x2224BE8))(this);
	}
	template <typename T = void> T CreateTransferGate() {
		return ((T (*)(RGEBossController*))(Il2CppBase() + 0x2224DFC))(this);
	}
	template <typename T = void> T ShowTransferGate() {
		return ((T (*)(RGEBossController*))(Il2CppBase() + 0x22257C0))(this);
	}
	template <typename T = void> T PowerUp() {
		return ((T (*)(RGEBossController*))(Il2CppBase() + 0x2225B98))(this);
	}
	template <typename T = void> T RunReflection(int32_t diagonalPossibility, int32_t inverseDiagonalPossibility, bool canCreateSmoke) {
		return ((T (*)(RGEBossController*, int32_t, int32_t, bool))(Il2CppBase() + 0x2225DCC))(this, diagonalPossibility, inverseDiagonalPossibility, canCreateSmoke);
	}
	template <typename T = void> T SetUpAttributionb__31_0(uintptr_t self) {
		return ((T (*)(RGEBossController*, uintptr_t))(Il2CppBase() + 0x2226774))(this, self);
	}
	template <typename T = void> T BossAngryb__39_0() {
		return ((T (*)(RGEBossController*))(Il2CppBase() + 0x2226900))(this);
	}
	template <typename T = void> T iFixBaseProxy_GetHurt(int32_t P0, uintptr_t P1) {
		return ((T (*)(RGEBossController*, int32_t, uintptr_t))(Il2CppBase() + 0x2226ABC))(this, P0, P1);
	}
	template <typename T = void> T iFixBaseProxy_Start() {
		return ((T (*)(RGEBossController*))(Il2CppBase() + 0x2226AC0))(this);
	}
	template <typename T = void> T iFixBaseProxy_ChildDead() {
		return ((T (*)(RGEBossController*))(Il2CppBase() + 0x2226BA0))(this);
	}
	template <typename T = void> T iFixBaseProxy_SetUpAttribution() {
		return ((T (*)(RGEBossController*))(Il2CppBase() + 0x2226BA4))(this);
	}
	template <typename T = void> T iFixBaseProxy_StartEnemyAI() {
		return ((T (*)(RGEBossController*))(Il2CppBase() + 0x22273F0))(this);
	}
	template <typename T = void> T iFixBaseProxy_FixedUpdate() {
		return ((T (*)(RGEBossController*))(Il2CppBase() + 0x2227600))(this);
	}
	template <typename T = void> T iFixBaseProxy_SyncGetHurt(int32_t P0) {
		return ((T (*)(RGEBossController*, int32_t))(Il2CppBase() + 0x22279B4))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_EatenBy(uintptr_t P0) {
		return ((T (*)(RGEBossController*, uintptr_t))(Il2CppBase() + 0x22279B8))(this, P0);
	}

};

}
