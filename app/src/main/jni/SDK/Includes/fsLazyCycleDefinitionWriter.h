#pragma once
#include "Il2Cpp/Il2Cpp.h"

class fsLazyCycleDefinitionWriter
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "fsLazyCycleDefinitionWriter"));
	}

	template <typename T = Il2CppDictionary<int32_t, uintptr_t>*> T& _pendingDefinitions() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = void*> T& _references() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T WriteDefinition(int32_t id, uintptr_t data) {
		return ((T (*)(fsLazyCycleDefinitionWriter*, int32_t, uintptr_t))(Il2CppBase() + 0x44243AC))(this, id, data);
	}
	template <typename T = void> T WriteReference(int32_t id, Il2CppDictionary<Il2CppString*, uintptr_t>* dict) {
		return ((T (*)(fsLazyCycleDefinitionWriter*, int32_t, Il2CppDictionary<Il2CppString*, uintptr_t>*))(Il2CppBase() + 0x4424570))(this, id, dict);
	}
	template <typename T = void> T Clear() {
		return ((T (*)(fsLazyCycleDefinitionWriter*))(Il2CppBase() + 0x4424814))(this);
	}

};

}
