#pragma once
#include "Il2Cpp/Il2Cpp.h"

class Boss27Dead
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "Boss27Dead"));
	}

	template <typename T = uintptr_t> T& enemyController() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppVector3> T& deadTargetPosition() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& moveSpeed() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& animator() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppString*> T& animKeyRun() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = Il2CppString*> T& animKeyDead() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = Il2CppString*> T& animKeyDeadTalk() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = float> T& animSpeed() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = float> T& showGateDelay() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = uintptr_t> T& _timeCounter() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = Il2CppVector3> T& _initPosition() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = int32_t> T& _animIdRun() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = int32_t> T& _animIdDead() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = Il2CppQuaternion> T& _rotation() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = bool> T& _isClear() {
		return *(T*)((uintptr_t)this + 0x84);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(Boss27Dead*))(Il2CppBase() + 0x1B2D6DC))(this);
	}
	template <typename T = void> T OnBossRoomClear() {
		return ((T (*)(Boss27Dead*))(Il2CppBase() + 0x1B2D7F0))(this);
	}
	template <typename T = void> T OnEnemyDead(uintptr_t obj) {
		return ((T (*)(Boss27Dead*, uintptr_t))(Il2CppBase() + 0x1B2D854))(this, obj);
	}
	template <typename T = void> T Update() {
		return ((T (*)(Boss27Dead*))(Il2CppBase() + 0x1B2DB2C))(this);
	}

};

}
