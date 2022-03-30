#pragma once
#include "Il2Cpp/Il2Cpp.h"

class MappingSet
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MappingSet"));
	}

	template <typename T = int32_t> T& _mapCategoryId() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& _actionListMode() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _actionCategoryIds() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _actionIds() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = void*> T& _actionCategoryIdsReadOnly() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = void*> T& _actionIdsReadOnly() {
		return *(T*)((uintptr_t)this + 0x30);
	}

	template <typename T = int32_t> T get_mapCategoryId() {
		return ((T (*)(MappingSet*))(Il2CppBase() + 0x21E8240))(this);
	}
	template <typename T = uintptr_t> T get_actionListMode() {
		return ((T (*)(MappingSet*))(Il2CppBase() + 0x21E82A0))(this);
	}
	template <typename T = void*> T get_actionCategoryIds() {
		return ((T (*)(MappingSet*))(Il2CppBase() + 0x21E8300))(this);
	}
	template <typename T = void*> T get_actionIds() {
		return ((T (*)(MappingSet*))(Il2CppBase() + 0x21E83D4))(this);
	}
	template <typename T = bool> T get_isValid() {
		return ((T (*)(MappingSet*))(Il2CppBase() + 0x21E84A4))(this);
	}
	template <typename T = uintptr_t> static T get_Default() {
		return ((T (*)(void *))(Il2CppBase() + 0x21E8650))(0);
	}

};

}
