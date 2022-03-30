#pragma once
#include "Il2Cpp/Il2Cpp.h"

class FlyMountController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "FlyMountController"));
	}

	template <typename T = Il2CppVector3> T& landOffset() {
		return *(T*)((uintptr_t)this + 0x108);
	}
	template <typename T = bool> T& rotate() {
		return *(T*)((uintptr_t)this + 0x114);
	}
	template <typename T = uintptr_t> T& bodyImage() {
		return *(T*)((uintptr_t)this + 0x118);
	}
	template <typename T = Il2CppVector2> T& prevPosition() {
		return *(T*)((uintptr_t)this + 0x120);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(FlyMountController*))(Il2CppBase() + 0x4510B70))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(FlyMountController*))(Il2CppBase() + 0x4510C30))(this);
	}
	template <typename T = void> T LateUpdate() {
		return ((T (*)(FlyMountController*))(Il2CppBase() + 0x4510D40))(this);
	}
	template <typename T = void> T SetUp(uintptr_t driver) {
		return ((T (*)(FlyMountController*, uintptr_t))(Il2CppBase() + 0x4511000))(this, driver);
	}
	template <typename T = void> T Mount(uintptr_t driver) {
		return ((T (*)(FlyMountController*, uintptr_t))(Il2CppBase() + 0x4511094))(this, driver);
	}
	template <typename T = void> T Land() {
		return ((T (*)(FlyMountController*))(Il2CppBase() + 0x4511130))(this);
	}
	template <typename T = void> T iFixBaseProxy_Awake() {
		return ((T (*)(FlyMountController*))(Il2CppBase() + 0x4511268))(this);
	}
	template <typename T = void> T iFixBaseProxy_Start() {
		return ((T (*)(FlyMountController*))(Il2CppBase() + 0x4511270))(this);
	}
	template <typename T = void> T iFixBaseProxy_LateUpdate() {
		return ((T (*)(FlyMountController*))(Il2CppBase() + 0x4511278))(this);
	}
	template <typename T = void> T iFixBaseProxy_SetUp(uintptr_t P0) {
		return ((T (*)(FlyMountController*, uintptr_t))(Il2CppBase() + 0x4511280))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_Mount(uintptr_t P0) {
		return ((T (*)(FlyMountController*, uintptr_t))(Il2CppBase() + 0x4511288))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_Land() {
		return ((T (*)(FlyMountController*))(Il2CppBase() + 0x4511290))(this);
	}

};

}
