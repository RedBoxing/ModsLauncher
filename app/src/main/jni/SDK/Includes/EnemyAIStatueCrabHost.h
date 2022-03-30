#pragma once
#include "Il2Cpp/Il2Cpp.h"

class EnemyAIStatueCrabHost
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "EnemyAIStatueCrabHost"));
	}

	template <typename T = Il2CppVector3> T& checkCenter() {
		return *(T*)((uintptr_t)this + 0x238);
	}
	template <typename T = float> T& checkRadius() {
		return *(T*)((uintptr_t)this + 0x244);
	}
	template <typename T = float> T& dropTime() {
		return *(T*)((uintptr_t)this + 0x248);
	}
	template <typename T = float> T& initYSpeed() {
		return *(T*)((uintptr_t)this + 0x24C);
	}
	template <typename T = int32_t> T& rotateCircleCount() {
		return *(T*)((uintptr_t)this + 0x250);
	}
	template <typename T = uintptr_t> T& statueCrab() {
		return *(T*)((uintptr_t)this + 0x258);
	}
	template <typename T = float> T& crabSize() {
		return *(T*)((uintptr_t)this + 0x260);
	}
	template <typename T = float> T& crabPositionRadius() {
		return *(T*)((uintptr_t)this + 0x264);
	}
	template <typename T = uintptr_t> T& thisCollider() {
		return *(T*)((uintptr_t)this + 0x268);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& checkBuffer() {
		return *(T*)((uintptr_t)this + 0x270);
	}
	template <typename T = int32_t> static T& Release() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& _crabTransform() {
		return *(T*)((uintptr_t)this + 0x278);
	}
	template <typename T = int32_t> static T& animFadeId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = Il2CppVector3> T& crabPosition() {
		return *(T*)((uintptr_t)this + 0x280);
	}
	template <typename T = bool> T& hasCrab() {
		return *(T*)((uintptr_t)this + 0x28C);
	}

	template <typename T = Il2CppVector3> T get_CheckPosition() {
		return ((T (*)(EnemyAIStatueCrabHost*))(Il2CppBase() + 0x1FD9670))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(EnemyAIStatueCrabHost*))(Il2CppBase() + 0x1FD978C))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(EnemyAIStatueCrabHost*))(Il2CppBase() + 0x1FD98F4))(this);
	}
	template <typename T = void> T FixedUpdate() {
		return ((T (*)(EnemyAIStatueCrabHost*))(Il2CppBase() + 0x1FD99CC))(this);
	}
	template <typename T = void> T ReleaseStatueCrab() {
		return ((T (*)(EnemyAIStatueCrabHost*))(Il2CppBase() + 0x1FD9CB0))(this);
	}
	template <typename T = void> T OnReleaseAnimEnd() {
		return ((T (*)(EnemyAIStatueCrabHost*))(Il2CppBase() + 0x1FD9D78))(this);
	}
	template <typename T = uintptr_t> T StatueCrabDrop() {
		return ((T (*)(EnemyAIStatueCrabHost*))(Il2CppBase() + 0x1FD9DE8))(this);
	}
	template <typename T = void> T OnDrawGizmosSelected() {
		return ((T (*)(EnemyAIStatueCrabHost*))(Il2CppBase() + 0x1FD9EC8))(this);
	}
	template <typename T = void> T iFixBaseProxy_Start() {
		return ((T (*)(EnemyAIStatueCrabHost*))(Il2CppBase() + 0x1FDA0D0))(this);
	}
	template <typename T = void> T iFixBaseProxy_FixedUpdate() {
		return ((T (*)(EnemyAIStatueCrabHost*))(Il2CppBase() + 0x1FDA0D8))(this);
	}

};

}
