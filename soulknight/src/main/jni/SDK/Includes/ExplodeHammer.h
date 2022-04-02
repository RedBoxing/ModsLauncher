#pragma once
#include "Il2Cpp/Il2Cpp.h"

class ExplodeHammer
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ExplodeHammer"));
	}

	template <typename T = uintptr_t> T& targetbuff() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& clip() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = bool> T& hit_player() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = bool> T& hit_enemy() {
		return *(T*)((uintptr_t)this + 0xB9);
	}
	template <typename T = int32_t> T& damage() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = float> T& repel() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = int32_t> T& critic() {
		return *(T*)((uintptr_t)this + 0xC4);
	}
	template <typename T = bool> T& influencedByMasterLaserBuff() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = uintptr_t> T& source_object() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& effectTriggers() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = Il2CppList<Il2CppString*>*> T& marks() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& modHits() {
		return *(T*)((uintptr_t)this + 0xE8);
	}

	template <typename T = void> T SetSourceObject(uintptr_t value) {
		return ((T (*)(ExplodeHammer*, uintptr_t))(Il2CppBase() + 0x4469988))(this, value);
	}
	template <typename T = uintptr_t> T GetSourceObject() {
		return ((T (*)(ExplodeHammer*))(Il2CppBase() + 0x44699FC))(this);
	}
	template <typename T = void> T UpdateInfo(uintptr_t bulletInfo, uintptr_t damageInfo) {
		return ((T (*)(ExplodeHammer*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4469A5C))(this, bulletInfo, damageInfo);
	}
	template <typename T = void> T OnTriggerEnter2D(uintptr_t other) {
		return ((T (*)(ExplodeHammer*, uintptr_t))(Il2CppBase() + 0x4469C24))(this, other);
	}
	template <typename T = void> T OnTaken() {
		return ((T (*)(ExplodeHammer*))(Il2CppBase() + 0x446A9E4))(this);
	}
	template <typename T = void> T ExplodeStart() {
		return ((T (*)(ExplodeHammer*))(Il2CppBase() + 0x446ABFC))(this);
	}
	template <typename T = uintptr_t> T Destroying(float totalTime) {
		return ((T (*)(ExplodeHammer*, float))(Il2CppBase() + 0x446AB1C))(this, totalTime);
	}
	template <typename T = void> T ResetSize() {
		return ((T (*)(ExplodeHammer*))(Il2CppBase() + 0x446AD2C))(this);
	}
	template <typename T = void> T Enlarge(int32_t deltaDmg, int32_t deltaCritic, float deltaSize, Il2CppString* mark) {
		return ((T (*)(ExplodeHammer*, int32_t, int32_t, float, Il2CppString*))(Il2CppBase() + 0x446AE88))(this, deltaDmg, deltaCritic, deltaSize, mark);
	}
	template <typename T = bool> T IsLargable(Il2CppString* mark) {
		return ((T (*)(ExplodeHammer*, Il2CppString*))(Il2CppBase() + 0x446B094))(this, mark);
	}
	template <typename T = void> T CastModTrigger() {
		return ((T (*)(ExplodeHammer*))(Il2CppBase() + 0x446B18C))(this);
	}
	template <typename T = void> T FlushInfo() {
		return ((T (*)(ExplodeHammer*))(Il2CppBase() + 0x446B598))(this);
	}
	template <typename T = void> T iFixBaseProxy_UpdateInfo(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(ExplodeHammer*, uintptr_t, uintptr_t))(Il2CppBase() + 0x446B778))(this, P0, P1);
	}

};

}
