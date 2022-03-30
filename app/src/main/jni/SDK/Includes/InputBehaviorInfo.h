#pragma once
#include "Il2Cpp/Il2Cpp.h"

class InputBehaviorInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "InputBehaviorInfo"));
	}

	template <typename T = uintptr_t> T& _inputBehavior() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& _controlSet() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppDictionary<int32_t, uintptr_t>*> T& idToProperty() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& copyOfOriginal() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = uintptr_t> T get_inputBehavior() {
		return ((T (*)(InputBehaviorInfo*))(Il2CppBase() + 0x21F29D0))(this);
	}
	template <typename T = uintptr_t> T get_controlSet() {
		return ((T (*)(InputBehaviorInfo*))(Il2CppBase() + 0x21F2B50))(this);
	}
	template <typename T = void> T RestorePreviousData() {
		return ((T (*)(InputBehaviorInfo*))(Il2CppBase() + 0x21F1FB0))(this);
	}
	template <typename T = void> T RestoreDefaultData() {
		return ((T (*)(InputBehaviorInfo*))(Il2CppBase() + 0x21F2304))(this);
	}
	template <typename T = void> T RestoreData(uintptr_t propertyType, int32_t controlId) {
		return ((T (*)(InputBehaviorInfo*, uintptr_t, int32_t))(Il2CppBase() + 0x21F26E4))(this, propertyType, controlId);
	}
	template <typename T = void> T RefreshControls() {
		return ((T (*)(InputBehaviorInfo*))(Il2CppBase() + 0x21F2BB0))(this);
	}

};

}
