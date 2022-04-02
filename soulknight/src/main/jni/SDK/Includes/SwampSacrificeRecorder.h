#pragma once
#include "Il2Cpp/Il2Cpp.h"

class SwampSacrificeRecorder
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SwampSacrificeRecorder"));
	}

	template <typename T = int32_t> static T& SacrificeCount() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& AfterAddRecord() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = Il2CppString*> static T get_DataKey() {
		return ((T (*)(void *))(Il2CppBase() + 0x18B9468))(0);
	}
	template <typename T = Il2CppString*> static T get_BossKey() {
		return ((T (*)(void *))(Il2CppBase() + 0x18B9548))(0);
	}
	template <typename T = uintptr_t> T get_AfterAddRecord() {
		return ((T (*)(SwampSacrificeRecorder*))(Il2CppBase() + 0x18B9628))(this);
	}
	template <typename T = void> T set_AfterAddRecord(uintptr_t value) {
		return ((T (*)(SwampSacrificeRecorder*, uintptr_t))(Il2CppBase() + 0x18B9630))(this, value);
	}
	template <typename T = void> T AddRecord(int32_t recordAmount) {
		return ((T (*)(SwampSacrificeRecorder*, int32_t))(Il2CppBase() + 0x18B9638))(this, recordAmount);
	}
	template <typename T = void> T ClearRecord() {
		return ((T (*)(SwampSacrificeRecorder*))(Il2CppBase() + 0x18B96F8))(this);
	}
	template <typename T = bool> T HasEnoughWeapon() {
		return ((T (*)(SwampSacrificeRecorder*))(Il2CppBase() + 0x18B9780))(this);
	}
	template <typename T = int32_t> T ValueOfNeed() {
		return ((T (*)(SwampSacrificeRecorder*))(Il2CppBase() + 0x18B9918))(this);
	}
	template <typename T = int32_t> T Sacrificed() {
		return ((T (*)(SwampSacrificeRecorder*))(Il2CppBase() + 0x18B9838))(this);
	}
	template <typename T = void> T BossCreated() {
		return ((T (*)(SwampSacrificeRecorder*))(Il2CppBase() + 0x18B9978))(this);
	}

};

}
