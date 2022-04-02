#pragma once
#include "Il2Cpp/Il2Cpp.h"

class BattleFactorChanger
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BattleFactorChanger"));
	}

	template <typename T = int32_t> T& originHp() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& originArmor() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = void*> T& AfterFactorChange() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T add_AfterFactorChange(void* value) {
		return ((T (*)(BattleFactorChanger*, void*))(Il2CppBase() + 0x1B208E0))(this, value);
	}
	template <typename T = void> T remove_AfterFactorChange(void* value) {
		return ((T (*)(BattleFactorChanger*, void*))(Il2CppBase() + 0x1B209CC))(this, value);
	}
	template <typename T = void> T OnFactorChanged(uintptr_t factor, bool isSet) {
		return ((T (*)(BattleFactorChanger*, uintptr_t, bool))(Il2CppBase() + 0x1B20AB8))(this, factor, isSet);
	}

};

}
