#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace CustomFactor {

class FactorEffectModel
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "CustomFactor", "FactorEffectModel"));
	}

	template <typename T = Il2CppString*> T& eventName() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& effect() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& paramList() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, Il2CppString*>*> T& _paramDic() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = Il2CppDictionary<Il2CppString*, Il2CppString*>*> T get_ParamDic() {
		return ((T (*)(FactorEffectModel*))(Il2CppBase() + 0x4281450))(this);
	}
	template <typename T = void*> T get_EventNames() {
		return ((T (*)(FactorEffectModel*))(Il2CppBase() + 0x428163C))(this);
	}
	template <typename T = void*> T get_EffectNames() {
		return ((T (*)(FactorEffectModel*))(Il2CppBase() + 0x4281828))(this);
	}

};

}
