#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace I2.Loc {

class ILocalizeTargetDescriptor
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "I2.Loc", "ILocalizeTargetDescriptor"));
	}

	template <typename T = Il2CppString*> T& Name() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& Priority() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = bool> T CanLocalize(uintptr_t cmp) {
		return ((T (*)(ILocalizeTargetDescriptor*, uintptr_t))(Il2CppBase() + 0x0))(this, cmp);
	}
	template <typename T = uintptr_t> T CreateTarget(uintptr_t cmp) {
		return ((T (*)(ILocalizeTargetDescriptor*, uintptr_t))(Il2CppBase() + 0x0))(this, cmp);
	}
	template <typename T = uintptr_t> T GetTargetType() {
		return ((T (*)(ILocalizeTargetDescriptor*))(Il2CppBase() + 0x0))(this);
	}

};

}
