#pragma once
#include "Il2Cpp/Il2Cpp.h"

class GunRandomBullet
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GunRandomBullet"));
	}

	template <typename T = Il2CppList<int32_t>*> T& weights() {
		return *(T*)((uintptr_t)this + 0x1A0);
	}
	template <typename T = bool> T& allAtOnce() {
		return *(T*)((uintptr_t)this + 0x1A8);
	}
	template <typename T = bool> T& byOrder() {
		return *(T*)((uintptr_t)this + 0x1A9);
	}
	template <typename T = int32_t> T& reflectCount() {
		return *(T*)((uintptr_t)this + 0x1AC);
	}
	template <typename T = int32_t> T& _index() {
		return *(T*)((uintptr_t)this + 0x1B0);
	}
	template <typename T = int32_t> T& _total() {
		return *(T*)((uintptr_t)this + 0x1B4);
	}
	template <typename T = int32_t> T& minAtk() {
		return *(T*)((uintptr_t)this + 0x1B8);
	}
	template <typename T = int32_t> T& maxAtk() {
		return *(T*)((uintptr_t)this + 0x1BC);
	}
	template <typename T = int32_t> T& minCritic() {
		return *(T*)((uintptr_t)this + 0x1C0);
	}
	template <typename T = int32_t> T& maxCritic() {
		return *(T*)((uintptr_t)this + 0x1C4);
	}
	template <typename T = bool> T& init() {
		return *(T*)((uintptr_t)this + 0x1C8);
	}

	template <typename T = void> T Start() {
		return ((T (*)(GunRandomBullet*))(Il2CppBase() + 0x217174C))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(GunRandomBullet*))(Il2CppBase() + 0x21717B8))(this);
	}
	template <typename T = void> T Attack() {
		return ((T (*)(GunRandomBullet*))(Il2CppBase() + 0x2171A48))(this);
	}
	template <typename T = uintptr_t> T CreateAllBullet() {
		return ((T (*)(GunRandomBullet*))(Il2CppBase() + 0x2171C94))(this);
	}
	template <typename T = void> T CreateBullet(int32_t i) {
		return ((T (*)(GunRandomBullet*, int32_t))(Il2CppBase() + 0x2171D74))(this, i);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_texts() {
		return ((T (*)(GunRandomBullet*))(Il2CppBase() + 0x2171E98))(this);
	}
	template <typename T = void> T iFixBaseProxy_Start() {
		return ((T (*)(GunRandomBullet*))(Il2CppBase() + 0x21721D4))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T iFixBaseProxy_get_texts() {
		return ((T (*)(GunRandomBullet*))(Il2CppBase() + 0x21721DC))(this);
	}

};

}
