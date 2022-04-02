#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace Test.EventNpcTest {

class EventNpcTestFactory
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Test.EventNpcTest", "EventNpcTestFactory"));
	}

	template <typename T = Il2CppDictionary<Il2CppString*, uintptr_t>*> T& testerDic() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = Il2CppList<Il2CppString*>*> T get_testerNames() {
		return ((T (*)(EventNpcTestFactory*))(Il2CppBase() + 0x43BF060))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T getParamNameList(Il2CppString* testName) {
		return ((T (*)(EventNpcTestFactory*, Il2CppString*))(Il2CppBase() + 0x43BF7E0))(this, testName);
	}
	template <typename T = void> T ExecuteTest(Il2CppString* testName, Il2CppArray<uintptr_t>* parameters) {
		return ((T (*)(EventNpcTestFactory*, Il2CppString*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x43BF358))(this, testName, parameters);
	}
	template <typename T = bool> T HasTester(Il2CppString* testName) {
		return ((T (*)(EventNpcTestFactory*, Il2CppString*))(Il2CppBase() + 0x43BF728))(this, testName);
	}
	template <typename T = void> T TesterDicCheck(Il2CppString* testName) {
		return ((T (*)(EventNpcTestFactory*, Il2CppString*))(Il2CppBase() + 0x43C013C))(this, testName);
	}

};

}
