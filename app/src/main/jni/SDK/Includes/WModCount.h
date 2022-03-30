#pragma once
#include "Il2Cpp/Il2Cpp.h"

class WModCount
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "WModCount"));
	}

	template <typename T = int32_t> T& buffCount() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppString*> static T& fieldName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = void> T BuffModify() {
		return ((T (*)(WModCount*))(Il2CppBase() + 0x43643C4))(this);
	}
	template <typename T = void> T WeaponCountModify(int32_t value) {
		return ((T (*)(WModCount*, int32_t))(Il2CppBase() + 0x4361830))(this, value);
	}
	template <typename T = void> T iFixBaseProxy_BuffModify() {
		return ((T (*)(WModCount*))(Il2CppBase() + 0x4364538))(this);
	}

};

}
