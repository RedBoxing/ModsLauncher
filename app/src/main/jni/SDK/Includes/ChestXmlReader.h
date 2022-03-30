#pragma once
#include "Il2Cpp/Il2Cpp.h"

class ChestXmlReader
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ChestXmlReader"));
	}

	template <typename T = uintptr_t> static T& _xml_document() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = uintptr_t> static T get_xml_document() {
		return ((T (*)(void *))(Il2CppBase() + 0x187A220))(0);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(ChestXmlReader*))(Il2CppBase() + 0x187A3F4))(this);
	}
	template <typename T = uintptr_t> T GetChestInfo(int32_t chest_level) {
		return ((T (*)(ChestXmlReader*, int32_t))(Il2CppBase() + 0x187A5AC))(this, chest_level);
	}

};

}
