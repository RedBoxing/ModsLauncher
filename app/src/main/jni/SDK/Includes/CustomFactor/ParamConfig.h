#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace CustomFactor {

class ParamConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "CustomFactor", "ParamConfig"));
	}

	template <typename T = Il2CppString*> T& ParamName() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& DefaultValue() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& Type() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = Il2CppString*> T get_ParamName() {
		return ((T (*)(ParamConfig*))(Il2CppBase() + 0x4281E18))(this);
	}
	template <typename T = Il2CppString*> T get_DefaultValue() {
		return ((T (*)(ParamConfig*))(Il2CppBase() + 0x4281E20))(this);
	}
	template <typename T = uintptr_t> T get_Type() {
		return ((T (*)(ParamConfig*))(Il2CppBase() + 0x4281E28))(this);
	}
	template <typename T = int32_t> T GetIntValue(Il2CppDictionary<Il2CppString*, Il2CppString*>* paramDic) {
		return ((T (*)(ParamConfig*, Il2CppDictionary<Il2CppString*, Il2CppString*>*))(Il2CppBase() + 0x427EAC4))(this, paramDic);
	}
	template <typename T = float> T GetFloatValue(Il2CppDictionary<Il2CppString*, Il2CppString*>* paramDic) {
		return ((T (*)(ParamConfig*, Il2CppDictionary<Il2CppString*, Il2CppString*>*))(Il2CppBase() + 0x42808AC))(this, paramDic);
	}
	template <typename T = Il2CppString*> T GetStringValue(Il2CppDictionary<Il2CppString*, Il2CppString*>* paramDic) {
		return ((T (*)(ParamConfig*, Il2CppDictionary<Il2CppString*, Il2CppString*>*))(Il2CppBase() + 0x4281210))(this, paramDic);
	}
	template <typename T = bool> T CanInvoke(uintptr_t invokeType) {
		return ((T (*)(ParamConfig*, uintptr_t))(Il2CppBase() + 0x4281E30))(this, invokeType);
	}
	template <typename T = bool> T CanParseParam(Il2CppString* paramStr) {
		return ((T (*)(ParamConfig*, Il2CppString*))(Il2CppBase() + 0x4281F98))(this, paramStr);
	}

};

}
