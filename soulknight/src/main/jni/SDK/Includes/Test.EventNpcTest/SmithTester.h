#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace Test.EventNpcTest {

class SmithTester
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Test.EventNpcTest", "SmithTester"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& _paramNameList() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& _testGO() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = Il2CppString*> T get_name() {
		return ((T (*)(SmithTester*))(Il2CppBase() + 0x43C0458))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_paramNameList() {
		return ((T (*)(SmithTester*))(Il2CppBase() + 0x43C04E4))(this);
	}
	template <typename T = uintptr_t> T get_testGO() {
		return ((T (*)(SmithTester*))(Il2CppBase() + 0x43C05AC))(this);
	}
	template <typename T = void> T ExecuteTest(Il2CppArray<uintptr_t>* parameters) {
		return ((T (*)(SmithTester*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x43C060C))(this, parameters);
	}
	template <typename T = uintptr_t> T Test(int32_t maxTimes, Il2CppString* weaponName, Il2CppString* targetName) {
		return ((T (*)(SmithTester*, int32_t, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x43C08A0))(this, maxTimes, weaponName, targetName);
	}

};

}
