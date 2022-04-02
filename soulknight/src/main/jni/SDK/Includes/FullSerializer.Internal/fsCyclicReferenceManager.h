#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace FullSerializer.Internal {

class fsCyclicReferenceManager
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "FullSerializer.Internal", "fsCyclicReferenceManager"));
	}

	template <typename T = Il2CppDictionary<uintptr_t, int32_t>*> T& _objectIds() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& _nextId() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppDictionary<int32_t, uintptr_t>*> T& _marked() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& _depth() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = void> T Enter() {
		return ((T (*)(fsCyclicReferenceManager*))(Il2CppBase() + 0x4518CB4))(this);
	}
	template <typename T = bool> T Exit() {
		return ((T (*)(fsCyclicReferenceManager*))(Il2CppBase() + 0x4518D1C))(this);
	}
	template <typename T = uintptr_t> T GetReferenceObject(int32_t id) {
		return ((T (*)(fsCyclicReferenceManager*, int32_t))(Il2CppBase() + 0x4518E94))(this, id);
	}
	template <typename T = void> T AddReferenceWithId(int32_t id, uintptr_t reference) {
		return ((T (*)(fsCyclicReferenceManager*, int32_t, uintptr_t))(Il2CppBase() + 0x4518FFC))(this, id, reference);
	}
	template <typename T = int32_t> T GetReferenceId(uintptr_t item) {
		return ((T (*)(fsCyclicReferenceManager*, uintptr_t))(Il2CppBase() + 0x45190C0))(this, item);
	}
	template <typename T = bool> T IsReference(uintptr_t item) {
		return ((T (*)(fsCyclicReferenceManager*, uintptr_t))(Il2CppBase() + 0x45191C0))(this, item);
	}
	template <typename T = void> T MarkSerialized(uintptr_t item) {
		return ((T (*)(fsCyclicReferenceManager*, uintptr_t))(Il2CppBase() + 0x4519288))(this, item);
	}

};

}
