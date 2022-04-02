#pragma once
#include "Il2Cpp/Il2Cpp.h"

class WModReflection
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "WModReflection"));
	}

	template <typename T = Il2CppString*> static T& fieldName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& buffReflectCount() {
		return *(T*)((uintptr_t)this + 0x1C);
	}

	template <typename T = void> T BuffModify() {
		return ((T (*)(WModReflection*))(Il2CppBase() + 0x4364DB0))(this);
	}
	template <typename T = void> T WeaponReflectionModify(int32_t value) {
		return ((T (*)(WModReflection*, int32_t))(Il2CppBase() + 0x43603D0))(this, value);
	}
	template <typename T = void> T iFixBaseProxy_BuffModify() {
		return ((T (*)(WModReflection*))(Il2CppBase() + 0x4364F24))(this);
	}

};

}
