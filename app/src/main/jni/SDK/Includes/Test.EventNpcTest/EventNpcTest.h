#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace Test.EventNpcTest {

class EventNpcTest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Test.EventNpcTest", "EventNpcTest"));
	}

	template <typename T = Il2CppList<Il2CppString*>*> T& assetBundleNames() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& singletonGroup() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& musicManagerPrefab() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppString*> T& testName() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& paramValueList() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& paramNameList() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = bool> T& canTest() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& testFactory() {
		return *(T*)((uintptr_t)this + 0x50);
	}

	template <typename T = Il2CppArray<uintptr_t>*> T get_paramValueList() {
		return ((T (*)(EventNpcTest*))(Il2CppBase() + 0x43BEFD0))(this);
	}
	template <typename T = void> T set_paramValueList(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(EventNpcTest*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x43BEFD8))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_paramNameList() {
		return ((T (*)(EventNpcTest*))(Il2CppBase() + 0x43BEFE0))(this);
	}
	template <typename T = void> T set_paramNameList(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(EventNpcTest*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x43BEFE8))(this, value);
	}
	template <typename T = Il2CppList<Il2CppString*>*> T get_testerNames() {
		return ((T (*)(EventNpcTest*))(Il2CppBase() + 0x43BEFF0))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(EventNpcTest*))(Il2CppBase() + 0x43BF110))(this);
	}
	template <typename T = uintptr_t> T Init() {
		return ((T (*)(EventNpcTest*))(Il2CppBase() + 0x43BF180))(this);
	}
	template <typename T = void> T ExecuteTest() {
		return ((T (*)(EventNpcTest*))(Il2CppBase() + 0x43BF260))(this);
	}
	template <typename T = void> T OnValidate() {
		return ((T (*)(EventNpcTest*))(Il2CppBase() + 0x43BF5E0))(this);
	}

};

}
