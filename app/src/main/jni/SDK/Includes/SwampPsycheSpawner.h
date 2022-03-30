#pragma once
#include "Il2Cpp/Il2Cpp.h"

class SwampPsycheSpawner
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SwampPsycheSpawner"));
	}

	template <typename T = uintptr_t> T& config() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& mapManagerLevel() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& _wait() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& _coldDownWait() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = bool> T& _isSpawning() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = Il2CppList<Il2CppVector3>*> T& _positions() {
		return *(T*)((uintptr_t)this + 0x40);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(SwampPsycheSpawner*))(Il2CppBase() + 0x18B6A48))(this);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(SwampPsycheSpawner*))(Il2CppBase() + 0x18B6BF4))(this);
	}
	template <typename T = void> T OnGetHurt(uintptr_t e) {
		return ((T (*)(SwampPsycheSpawner*, uintptr_t))(Il2CppBase() + 0x18B6D20))(this, e);
	}
	template <typename T = void> T OnPsycheSpawnEvent(uintptr_t e) {
		return ((T (*)(SwampPsycheSpawner*, uintptr_t))(Il2CppBase() + 0x18B7078))(this, e);
	}
	template <typename T = uintptr_t> T SpawnTentacle(Il2CppVector3 position) {
		return ((T (*)(SwampPsycheSpawner*, Il2CppVector3))(Il2CppBase() + 0x18B6F78))(this, position);
	}

};

}
