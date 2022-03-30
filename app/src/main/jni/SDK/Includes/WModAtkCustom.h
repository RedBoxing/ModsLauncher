#pragma once
#include "Il2Cpp/Il2Cpp.h"

class WModAtkCustom
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "WModAtkCustom"));
	}

	template <typename T = uintptr_t> T& buff() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& bulletIndex() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& buffAtk() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& damageType() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = void> T BuffModify() {
		return ((T (*)(WModAtkCustom*))(Il2CppBase() + 0x436377C))(this);
	}
	template <typename T = void> T iFixBaseProxy_BuffModify() {
		return ((T (*)(WModAtkCustom*))(Il2CppBase() + 0x4363904))(this);
	}

};

}
