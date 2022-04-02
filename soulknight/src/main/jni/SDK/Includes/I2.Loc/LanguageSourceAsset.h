#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace I2.Loc {

class LanguageSourceAsset
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "I2.Loc", "LanguageSourceAsset"));
	}

	template <typename T = uintptr_t> T& mSource() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = uintptr_t> T get_SourceData() {
		return ((T (*)(LanguageSourceAsset*))(Il2CppBase() + 0x42237D8))(this);
	}
	template <typename T = void> T set_SourceData(uintptr_t value) {
		return ((T (*)(LanguageSourceAsset*, uintptr_t))(Il2CppBase() + 0x4223838))(this, value);
	}

};

}
