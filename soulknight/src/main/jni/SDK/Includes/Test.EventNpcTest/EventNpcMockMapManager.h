#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace Test.EventNpcTest {

class EventNpcMockMapManager
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Test.EventNpcTest", "EventNpcMockMapManager"));
	}

	template <typename T = int32_t> T& mapChestLevel() {
		return *(T*)((uintptr_t)this + 0x228);
	}

	template <typename T = int32_t> T get_chestLevel() {
		return ((T (*)(EventNpcMockMapManager*))(Il2CppBase() + 0x43BEA58))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(EventNpcMockMapManager*))(Il2CppBase() + 0x43BEAB8))(this);
	}
	template <typename T = int32_t> T iFixBaseProxy_get_chestLevel() {
		return ((T (*)(EventNpcMockMapManager*))(Il2CppBase() + 0x43BEB1C))(this);
	}

};

}
