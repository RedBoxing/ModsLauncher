#pragma once
#include "Il2Cpp/Il2Cpp.h"

class cDisplayClass30
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass3_0"));
	}

	template <typename T = uintptr_t> T& resolutionStrategy() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = void*> T& completedCallback() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T OpenWithAutomaticConflictResolutionb__0(uintptr_t resolver, uintptr_t original, Il2CppArray<uintptr_t>* originalData, uintptr_t unmerged, Il2CppArray<uintptr_t>* unmergedData) {
		return ((T (*)(cDisplayClass30*, uintptr_t, uintptr_t, Il2CppArray<uintptr_t>*, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x283373C))(this, resolver, original, originalData, unmerged, unmergedData);
	}

};

}
