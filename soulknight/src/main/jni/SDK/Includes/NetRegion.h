#pragma once
#include "Il2Cpp/Il2Cpp.h"

class NetRegion
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "NetRegion"));
	}

	template <typename T = uintptr_t> static T& region() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppList<Il2CppString*>*> static T& NorthRegionIds() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = Il2CppList<unsigned char>*> static T& lstBuffer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& buffers() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& onRegionFetched() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}

	template <typename T = void> static T Init(uintptr_t executor, uintptr_t onRegionFetched) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x44569C0))(0, executor, onRegionFetched);
	}
	template <typename T = uintptr_t> static T GetRegion() {
		return ((T (*)(void *))(Il2CppBase() + 0x4457054))(0);
	}
	template <typename T = void> static T UpdateNetRegion(uintptr_t executor) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4456E20))(0, executor);
	}
	template <typename T = void> static T FixOldRegionName() {
		return ((T (*)(void *))(Il2CppBase() + 0x4456C88))(0);
	}
	template <typename T = void> static T RespCallBack(uintptr_t ar) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4457244))(0, ar);
	}
	template <typename T = void> static T ReadCallBack(uintptr_t ar) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4457434))(0, ar);
	}

};

}
