#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace Test.EventNpcTest {

class AbstractEventNpcTester
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Test.EventNpcTest", "AbstractEventNpcTester"));
	}


	template <typename T = Il2CppString*> T get_name() {
		return ((T (*)(AbstractEventNpcTester*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_paramNameList() {
		return ((T (*)(AbstractEventNpcTester*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T ExecuteTest(Il2CppArray<uintptr_t>* parameters) {
		return ((T (*)(AbstractEventNpcTester*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x0))(this, parameters);
	}
	template <typename T = uintptr_t> T get_testGO() {
		return ((T (*)(AbstractEventNpcTester*))(Il2CppBase() + 0x0))(this);
	}

};

}
