#pragma once
#include "Il2Cpp/Il2Cpp.h"

class GeneralBuffModifier
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GeneralBuffModifier"));
	}

	template <typename T = uintptr_t> T& buff() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> T& scriptTypeName() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppString*> T& fieldName() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& modifyType() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& _fieldType() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = int32_t> T& intModifyValue() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = float> T& floatModifyValue() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& _scriptInstance() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& _scriptField() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = bool> T& _hasModified() {
		return *(T*)((uintptr_t)this + 0x50);
	}

	template <typename T = bool> T get_IsIntValue() {
		return ((T (*)(GeneralBuffModifier*))(Il2CppBase() + 0x4434448))(this);
	}
	template <typename T = bool> T get_IsFloatValue() {
		return ((T (*)(GeneralBuffModifier*))(Il2CppBase() + 0x443466C))(this);
	}
	template <typename T = uintptr_t> T get_ScriptFieldType() {
		return ((T (*)(GeneralBuffModifier*))(Il2CppBase() + 0x443451C))(this);
	}
	template <typename T = void*> T get_scriptTypeValueDropDown() {
		return ((T (*)(GeneralBuffModifier*))(Il2CppBase() + 0x4434740))(this);
	}
	template <typename T = void*> T get_memberNameValueDropDown() {
		return ((T (*)(GeneralBuffModifier*))(Il2CppBase() + 0x44348A8))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(GeneralBuffModifier*))(Il2CppBase() + 0x4434B28))(this);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(GeneralBuffModifier*))(Il2CppBase() + 0x4434FD0))(this);
	}
	template <typename T = void> T OnBuffChange(uintptr_t buff, bool isGet) {
		return ((T (*)(GeneralBuffModifier*, uintptr_t, bool))(Il2CppBase() + 0x44350B8))(this, buff, isGet);
	}
	template <typename T = void> T CheckBuffEffect() {
		return ((T (*)(GeneralBuffModifier*))(Il2CppBase() + 0x4434EE4))(this);
	}
	template <typename T = void> T AddEffect() {
		return ((T (*)(GeneralBuffModifier*))(Il2CppBase() + 0x443516C))(this);
	}
	template <typename T = void> T RemoveEffect() {
		return ((T (*)(GeneralBuffModifier*))(Il2CppBase() + 0x44351EC))(this);
	}
	template <typename T = void> T FindInstance() {
		return ((T (*)(GeneralBuffModifier*))(Il2CppBase() + 0x4434C20))(this);
	}
	template <typename T = void> T FieldModifyAddictive(bool isReversed) {
		return ((T (*)(GeneralBuffModifier*, bool))(Il2CppBase() + 0x443526C))(this, isReversed);
	}
	template <typename T = void> T FieldModifyMultiple(bool isReversed) {
		return ((T (*)(GeneralBuffModifier*, bool))(Il2CppBase() + 0x44353D4))(this, isReversed);
	}

};

}
