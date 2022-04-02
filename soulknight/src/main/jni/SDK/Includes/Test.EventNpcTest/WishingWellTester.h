#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace Test.EventNpcTest {

class WishingWellTester
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Test.EventNpcTest", "WishingWellTester"));
	}

	template <typename T = uintptr_t> T& testGOParent() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& hasFind() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _paramNameList() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = uintptr_t> T get_testGO() {
		return ((T (*)(WishingWellTester*))(Il2CppBase() + 0x43C148C))(this);
	}
	template <typename T = Il2CppString*> T get_name() {
		return ((T (*)(WishingWellTester*))(Il2CppBase() + 0x43C14EC))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_paramNameList() {
		return ((T (*)(WishingWellTester*))(Il2CppBase() + 0x43C1578))(this);
	}
	template <typename T = void> T ExecuteTest(Il2CppArray<uintptr_t>* parameters) {
		return ((T (*)(WishingWellTester*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x43C1640))(this, parameters);
	}
	template <typename T = uintptr_t> T Test(int32_t chestLevel, int32_t maxTimes, Il2CppString* targetName, uintptr_t testGO) {
		return ((T (*)(WishingWellTester*, int32_t, int32_t, Il2CppString*, uintptr_t))(Il2CppBase() + 0x43C1A94))(this, chestLevel, maxTimes, targetName, testGO);
	}

};

}
