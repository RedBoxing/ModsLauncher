#pragma once
#include "Il2Cpp/Il2Cpp.h"

class IceFloorReflection
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IceFloorReflection"));
	}

	template <typename T = Il2CppList<Il2CppString*>*> T& reflectionTags() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = void*> T& targetSet() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& shadowPool() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& shadowTriggerCollider() {
		return *(T*)((uintptr_t)this + 0x30);
	}

	template <typename T = void> T OnTriggerEnter2D(uintptr_t other) {
		return ((T (*)(IceFloorReflection*, uintptr_t))(Il2CppBase() + 0x19C0074))(this, other);
	}
	template <typename T = void> T OnTriggerExit2D(uintptr_t other) {
		return ((T (*)(IceFloorReflection*, uintptr_t))(Il2CppBase() + 0x19C0320))(this, other);
	}
	template <typename T = void> T TargetEnter(uintptr_t targetCollider) {
		return ((T (*)(IceFloorReflection*, uintptr_t))(Il2CppBase() + 0x19C01F8))(this, targetCollider);
	}
	template <typename T = void> T UpdateColliderSize(uintptr_t positionInfo) {
		return ((T (*)(IceFloorReflection*, uintptr_t))(Il2CppBase() + 0x19C0448))(this, positionInfo);
	}

};

}
