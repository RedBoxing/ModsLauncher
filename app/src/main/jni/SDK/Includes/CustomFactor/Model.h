#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace CustomFactor {

class Model
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "CustomFactor", "Model"));
	}

	template <typename T = Il2CppString*> T& id() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& sprite() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& factorEffects() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, Il2CppDictionary<Il2CppString*, uintptr_t>*>*> T& _eventEffectDic() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = Il2CppDictionary<Il2CppString*, Il2CppDictionary<Il2CppString*, uintptr_t>*>*> T get_EventEffectDic() {
		return ((T (*)(Model*))(Il2CppBase() + 0x4281AEC))(this);
	}

};

}
