#pragma once
#include "Il2Cpp/Il2Cpp.h"

class RGSwordTrigger
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RGSwordTrigger"));
	}

	template <typename T = bool> T& show_zero_dmg() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = bool> T& forceFromSource() {
		return *(T*)((uintptr_t)this + 0x79);
	}
	template <typename T = uintptr_t> T& _the_bullet() {
		return *(T*)((uintptr_t)this + 0x80);
	}

	template <typename T = Il2CppVector3> T get_forceSourcePosition() {
		return ((T (*)(RGSwordTrigger*))(Il2CppBase() + 0x43DE730))(this);
	}
	template <typename T = uintptr_t> T get_the_bullet() {
		return ((T (*)(RGSwordTrigger*))(Il2CppBase() + 0x43DE09C))(this);
	}
	template <typename T = void> T OnTriggerEnter2D(uintptr_t other) {
		return ((T (*)(RGSwordTrigger*, uintptr_t))(Il2CppBase() + 0x43DE930))(this, other);
	}
	template <typename T = void> T UpdateCriticFactor() {
		return ((T (*)(RGSwordTrigger*))(Il2CppBase() + 0x43DD554))(this);
	}
	template <typename T = void> T OnTaken() {
		return ((T (*)(RGSwordTrigger*))(Il2CppBase() + 0x43DD64C))(this);
	}
	template <typename T = void> T OnHit(uintptr_t other, bool isCritic) {
		return ((T (*)(RGSwordTrigger*, uintptr_t, bool))(Il2CppBase() + 0x43DE024))(this, other, isCritic);
	}
	template <typename T = uintptr_t> T GetBulletSourceObject() {
		return ((T (*)(RGSwordTrigger*))(Il2CppBase() + 0x43DE83C))(this);
	}
	template <typename T = void> T SetInfo(int32_t value1, int32_t camp, int32_t repel, int32_t critic) {
		return ((T (*)(RGSwordTrigger*, int32_t, int32_t, int32_t, int32_t))(Il2CppBase() + 0x43DF90C))(this, value1, camp, repel, critic);
	}
	template <typename T = void> T SetInfo_1(uintptr_t info) {
		return ((T (*)(RGSwordTrigger*, uintptr_t))(Il2CppBase() + 0x43DF9B4))(this, info);
	}
	template <typename T = void> T CastModTrigger() {
		return ((T (*)(RGSwordTrigger*))(Il2CppBase() + 0x43DFA80))(this);
	}
	template <typename T = void> T Enlarge(int32_t deltaDmg, int32_t critic, float deltaSize, Il2CppString* mark) {
		return ((T (*)(RGSwordTrigger*, int32_t, int32_t, float, Il2CppString*))(Il2CppBase() + 0x43DFE78))(this, deltaDmg, critic, deltaSize, mark);
	}
	template <typename T = void> T iFixBaseProxy_UpdateCriticFactor() {
		return ((T (*)(RGSwordTrigger*))(Il2CppBase() + 0x43DFF34))(this);
	}
	template <typename T = void> T iFixBaseProxy_OnTaken() {
		return ((T (*)(RGSwordTrigger*))(Il2CppBase() + 0x43DFF3C))(this);
	}
	template <typename T = void> T iFixBaseProxy_SetInfo(uintptr_t P0) {
		return ((T (*)(RGSwordTrigger*, uintptr_t))(Il2CppBase() + 0x43DFF44))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_CastModTrigger() {
		return ((T (*)(RGSwordTrigger*))(Il2CppBase() + 0x43DFF78))(this);
	}
	template <typename T = void> T iFixBaseProxy_Enlarge(int32_t P0, int32_t P1, float P2, Il2CppString* P3) {
		return ((T (*)(RGSwordTrigger*, int32_t, int32_t, float, Il2CppString*))(Il2CppBase() + 0x43DFF80))(this, P0, P1, P2, P3);
	}

};

}
