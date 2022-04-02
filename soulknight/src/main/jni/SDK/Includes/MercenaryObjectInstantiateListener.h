#pragma once
#include "Il2Cpp/Il2Cpp.h"

class MercenaryObjectInstantiateListener
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MercenaryObjectInstantiateListener"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& listenObjects() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, uintptr_t>*> T& npcNameDecoratorDic() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uintptr_t> T& decoratorParentTransform() {
		return *(T*)((uintptr_t)this + 0x68);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(MercenaryObjectInstantiateListener*))(Il2CppBase() + 0x41E7380))(this);
	}
	template <typename T = void> T OnRandomObjectInstantiate(uintptr_t obj) {
		return ((T (*)(MercenaryObjectInstantiateListener*, uintptr_t))(Il2CppBase() + 0x41E74C0))(this, obj);
	}

};

}
