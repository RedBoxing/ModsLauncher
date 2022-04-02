#pragma once
#include "Il2Cpp/Il2Cpp.h"

class cDisplayClass321
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass32_1"));
	}

	template <typename T = uintptr_t> T& alertDialog() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& CS$8__locals1() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T OnClick_ExportSceneb__3(uintptr_t view) {
		return ((T (*)(cDisplayClass321*, uintptr_t))(Il2CppBase() + 0x4326084))(this, view);
	}
	template <typename T = void> T OnClick_ExportSceneb__4(uintptr_t view) {
		return ((T (*)(cDisplayClass321*, uintptr_t))(Il2CppBase() + 0x43260E4))(this, view);
	}

};

}
