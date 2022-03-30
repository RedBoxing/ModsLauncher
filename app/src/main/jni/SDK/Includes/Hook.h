#pragma once
#include "Il2Cpp/Il2Cpp.h"

class Hook
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "Hook"));
	}

	template <typename T = Il2CppDictionary<uintptr_t, uint32_t>*> static T& Players() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = uintptr_t> static T CreateListener(int32_t port) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x420515C))(0, port);
	}
	template <typename T = uintptr_t> static T Accept2(uintptr_t v) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x42052C4))(0, v);
	}
	template <typename T = void> static T Connect2(uintptr_t v, Il2CppString* ip, int32_t port) {
		return ((T (*)(void *, uintptr_t, Il2CppString*, int32_t))(Il2CppBase() + 0x4205524))(0, v, ip, port);
	}
	template <typename T = void> static T Write2(uintptr_t v, Il2CppArray<uintptr_t>* buffer, int32_t offset, int32_t size) {
		return ((T (*)(void *, uintptr_t, Il2CppArray<uintptr_t>*, int32_t, int32_t))(Il2CppBase() + 0x420578C))(0, v, buffer, offset, size);
	}
	template <typename T = int32_t> static T Read2(uintptr_t v, Il2CppArray<uintptr_t>* buffer, int32_t offset, int32_t size) {
		return ((T (*)(void *, uintptr_t, Il2CppArray<uintptr_t>*, int32_t, int32_t))(Il2CppBase() + 0x420590C))(0, v, buffer, offset, size);
	}

};

}
