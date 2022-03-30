#pragma once
#include "Il2Cpp/Il2Cpp.h"

class WModAtkStaff
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "WModAtkStaff"));
	}

	template <typename T = int32_t> T& buffAtk() {
		return *(T*)((uintptr_t)this + 0x1C);
	}

	template <typename T = void> T BuffModify() {
		return ((T (*)(WModAtkStaff*))(Il2CppBase() + 0x4363BDC))(this);
	}
	template <typename T = void> T iFixBaseProxy_BuffModify() {
		return ((T (*)(WModAtkStaff*))(Il2CppBase() + 0x4363CEC))(this);
	}

};

}
