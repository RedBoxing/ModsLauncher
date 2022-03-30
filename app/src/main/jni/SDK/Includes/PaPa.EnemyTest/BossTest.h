#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace PaPa.EnemyTest {

class BossTest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PaPa.EnemyTest", "BossTest"));
	}


	template <typename T = Il2CppArray<uintptr_t>*> T get_assetbundle_list() {
		return ((T (*)(BossTest*))(Il2CppBase() + 0x26F4874))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_related_data_path_list() {
		return ((T (*)(BossTest*))(Il2CppBase() + 0x26F4AB8))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_destroyed_gameobject_list() {
		return ((T (*)(BossTest*))(Il2CppBase() + 0x26F4B48))(this);
	}
	template <typename T = uintptr_t> T R1Boss1Test() {
		return ((T (*)(BossTest*))(Il2CppBase() + 0x26F4DE0))(this);
	}
	template <typename T = uintptr_t> T R1Boss2Test() {
		return ((T (*)(BossTest*))(Il2CppBase() + 0x26F4EC0))(this);
	}
	template <typename T = uintptr_t> T R1Boss3Test() {
		return ((T (*)(BossTest*))(Il2CppBase() + 0x26F4FA0))(this);
	}
	template <typename T = uintptr_t> T R1Boss4Test() {
		return ((T (*)(BossTest*))(Il2CppBase() + 0x26F5080))(this);
	}
	template <typename T = uintptr_t> T R1Boss5Test() {
		return ((T (*)(BossTest*))(Il2CppBase() + 0x26F5160))(this);
	}
	template <typename T = uintptr_t> T R1Boss6Test() {
		return ((T (*)(BossTest*))(Il2CppBase() + 0x26F5240))(this);
	}
	template <typename T = uintptr_t> T R2Boss1Test() {
		return ((T (*)(BossTest*))(Il2CppBase() + 0x26F5320))(this);
	}
	template <typename T = uintptr_t> T R2Boss2Test() {
		return ((T (*)(BossTest*))(Il2CppBase() + 0x26F5400))(this);
	}
	template <typename T = uintptr_t> T R2Boss3Test() {
		return ((T (*)(BossTest*))(Il2CppBase() + 0x26F54E0))(this);
	}
	template <typename T = uintptr_t> T R2Boss4Test() {
		return ((T (*)(BossTest*))(Il2CppBase() + 0x26F55C0))(this);
	}
	template <typename T = uintptr_t> T R2Boss5Test() {
		return ((T (*)(BossTest*))(Il2CppBase() + 0x26F56A0))(this);
	}
	template <typename T = uintptr_t> T R2Boss6Test() {
		return ((T (*)(BossTest*))(Il2CppBase() + 0x26F5780))(this);
	}
	template <typename T = uintptr_t> T R3Boss1Test() {
		return ((T (*)(BossTest*))(Il2CppBase() + 0x26F5860))(this);
	}
	template <typename T = uintptr_t> T R3Boss2Test() {
		return ((T (*)(BossTest*))(Il2CppBase() + 0x26F5940))(this);
	}
	template <typename T = uintptr_t> T R3Boss3Test() {
		return ((T (*)(BossTest*))(Il2CppBase() + 0x26F5A20))(this);
	}
	template <typename T = uintptr_t> T R3Boss4Test() {
		return ((T (*)(BossTest*))(Il2CppBase() + 0x26F5AD4))(this);
	}
	template <typename T = void> static T UnLoadLevelAssetBundle(Il2CppList<uintptr_t>* loaded_bundle) {
		return ((T (*)(void *, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x26F5B88))(0, loaded_bundle);
	}
	template <typename T = uintptr_t> T BossBasicTest(uintptr_t boss_checker) {
		return ((T (*)(BossTest*, uintptr_t))(Il2CppBase() + 0x26F5CEC))(this, boss_checker);
	}

};

}
