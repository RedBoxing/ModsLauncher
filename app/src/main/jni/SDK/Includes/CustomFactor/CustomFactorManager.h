#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace CustomFactor {

class CustomFactorManager
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "CustomFactor", "CustomFactorManager"));
	}

	template <typename T = Il2CppDictionary<Il2CppString*, Il2CppDictionary<Il2CppString*, Il2CppList<uintptr_t>*>*>*> T& EventListenerDic() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, uintptr_t>*> T& FactorEffectDic() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, uintptr_t>*> T& FactorModelDic() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppString*> T& CurrentFactorId() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = Il2CppDictionary<Il2CppString*, Il2CppDictionary<Il2CppString*, Il2CppList<uintptr_t>*>*>*> T get_EventListenerDic() {
		return ((T (*)(CustomFactorManager*))(Il2CppBase() + 0x427EDE0))(this);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, uintptr_t>*> T get_FactorEffectDic() {
		return ((T (*)(CustomFactorManager*))(Il2CppBase() + 0x427EDE8))(this);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, uintptr_t>*> T get_FactorModelDic() {
		return ((T (*)(CustomFactorManager*))(Il2CppBase() + 0x427EDF0))(this);
	}
	template <typename T = Il2CppString*> T get_CurrentFactorId() {
		return ((T (*)(CustomFactorManager*))(Il2CppBase() + 0x427EDF8))(this);
	}
	template <typename T = void> T set_CurrentFactorId(Il2CppString* value) {
		return ((T (*)(CustomFactorManager*, Il2CppString*))(Il2CppBase() + 0x427EE00))(this, value);
	}
	template <typename T = void> T EventDispatch(Il2CppString* eventName, uintptr_t target) {
		return ((T (*)(CustomFactorManager*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x0))(this, eventName, target);
	}
	template <typename T = void> T CustomFactorListen(Il2CppString* factorId) {
		return ((T (*)(CustomFactorManager*, Il2CppString*))(Il2CppBase() + 0x427F434))(this, factorId);
	}
	template <typename T = void> T CustomFactorRemove(Il2CppString* factorId) {
		return ((T (*)(CustomFactorManager*, Il2CppString*))(Il2CppBase() + 0x427F86C))(this, factorId);
	}

};

}
