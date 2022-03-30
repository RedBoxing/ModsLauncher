#pragma once
#include "Il2Cpp/Il2Cpp.h"

class cDisplayClass81
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass8_1"));
	}

	template <typename T = uintptr_t> T& resolver() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& original() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& unmerged() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& CS$8__locals1() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = void> T InternalOpenb__2(Il2CppArray<uintptr_t>* originalData, Il2CppArray<uintptr_t>* unmergedData) {
		return ((T (*)(cDisplayClass81*, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x2834394))(this, originalData, unmergedData);
	}

};

}
