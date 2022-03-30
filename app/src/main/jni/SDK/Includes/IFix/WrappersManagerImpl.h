#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace IFix {

class WrappersManagerImpl
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "IFix", "WrappersManagerImpl"));
	}

	template <typename T = uintptr_t> T& virtualMachine() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = uintptr_t> static T GetPatch(int32_t id) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x19B4208))(0, id);
	}
	template <typename T = bool> static T IsPatched(int32_t id) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x19B42A8))(0, id);
	}
	template <typename T = uintptr_t> T CreateDelegate(uintptr_t type, int32_t id, uintptr_t anon) {
		return ((T (*)(WrappersManagerImpl*, uintptr_t, int32_t, uintptr_t))(Il2CppBase() + 0x19B439C))(this, type, id, anon);
	}
	template <typename T = uintptr_t> T CreateWrapper(int32_t id) {
		return ((T (*)(WrappersManagerImpl*, int32_t))(Il2CppBase() + 0x19B445C))(this, id);
	}
	template <typename T = uintptr_t> T InitWrapperArray(int32_t len) {
		return ((T (*)(WrappersManagerImpl*, int32_t))(Il2CppBase() + 0x19B44D8))(this, len);
	}
	template <typename T = uintptr_t> T CreateBridge(int32_t fieldNum, Il2CppArray<uintptr_t>* fieldTypes, int32_t typeIndex, Il2CppArray<uintptr_t>* vTable, Il2CppArray<uintptr_t>* slots, uintptr_t virtualMachine) {
		return ((T (*)(WrappersManagerImpl*, int32_t, Il2CppArray<uintptr_t>*, int32_t, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x19B456C))(this, fieldNum, fieldTypes, typeIndex, vTable, slots, virtualMachine);
	}

};

}
