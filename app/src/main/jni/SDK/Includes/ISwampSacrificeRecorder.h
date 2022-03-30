#pragma once
#include "Il2Cpp/Il2Cpp.h"

class ISwampSacrificeRecorder
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ISwampSacrificeRecorder"));
	}


	template <typename T = void> T AddRecord(int32_t recordAmount) {
		return ((T (*)(ISwampSacrificeRecorder*, int32_t))(Il2CppBase() + 0x0))(this, recordAmount);
	}
	template <typename T = uintptr_t> T get_AfterAddRecord() {
		return ((T (*)(ISwampSacrificeRecorder*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T set_AfterAddRecord(uintptr_t value) {
		return ((T (*)(ISwampSacrificeRecorder*, uintptr_t))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T ClearRecord() {
		return ((T (*)(ISwampSacrificeRecorder*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T HasEnoughWeapon() {
		return ((T (*)(ISwampSacrificeRecorder*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = int32_t> T ValueOfNeed() {
		return ((T (*)(ISwampSacrificeRecorder*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = int32_t> T Sacrificed() {
		return ((T (*)(ISwampSacrificeRecorder*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T BossCreated() {
		return ((T (*)(ISwampSacrificeRecorder*))(Il2CppBase() + 0x0))(this);
	}

};

}
