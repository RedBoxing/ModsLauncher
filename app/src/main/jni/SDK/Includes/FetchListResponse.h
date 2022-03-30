#pragma once
#include "Il2Cpp/Il2Cpp.h"

class FetchListResponse
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "FetchListResponse"));
	}


	template <typename T = void> T CallDispose(uintptr_t selfPointer) {
		return ((T (*)(FetchListResponse*, uintptr_t))(Il2CppBase() + 0x2AFBF50))(this, selfPointer);
	}
	template <typename T = uintptr_t> T Status() {
		return ((T (*)(FetchListResponse*))(Il2CppBase() + 0x2AFBC7C))(this);
	}
	template <typename T = void*> T GetEnumerator() {
		return ((T (*)(FetchListResponse*))(Il2CppBase() + 0x2AFBD54))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerable_GetEnumerator() {
		return ((T (*)(FetchListResponse*))(Il2CppBase() + 0x2AFBFD8))(this);
	}
	template <typename T = uintptr_t> T Length() {
		return ((T (*)(FetchListResponse*))(Il2CppBase() + 0x2AFBCE8))(this);
	}
	template <typename T = uintptr_t> T GetElement(uintptr_t index) {
		return ((T (*)(FetchListResponse*, uintptr_t))(Il2CppBase() + 0x2AFC038))(this, index);
	}
	template <typename T = uintptr_t> static T FromPointer(uintptr_t selfPointer) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2AFC180))(0, selfPointer);
	}
	template <typename T = uintptr_t> T GetEnumeratorb__3_0(uintptr_t index) {
		return ((T (*)(FetchListResponse*, uintptr_t))(Il2CppBase() + 0x2AFC254))(this, index);
	}

};

}
