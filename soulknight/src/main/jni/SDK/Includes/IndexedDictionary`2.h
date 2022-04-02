#pragma once
#include "Il2Cpp/Il2Cpp.h"

class IndexedDictionary2
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IndexedDictionary`2"));
	}

	template <typename T = Il2CppList<void*>*> T& list() {
		return *(T*)((uintptr_t)this + 0x0);
	}

	template <typename T = int32_t> T get_Count() {
		return ((T (*)(IndexedDictionary2*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = uintptr_t> T get_Item(int32_t index) {
		return ((T (*)(IndexedDictionary2*, int32_t))(Il2CppBase() + 0x0))(this, index);
	}
	template <typename T = uintptr_t> T Get(uintptr_t key) {
		return ((T (*)(IndexedDictionary2*, uintptr_t))(Il2CppBase() + 0x0))(this, key);
	}
	template <typename T = bool> T TryGet(uintptr_t key, uintptr_t* value) {
		return ((T (*)(IndexedDictionary2*, uintptr_t, uintptr_t*))(Il2CppBase() + 0x0))(this, key, value);
	}
	template <typename T = void> T Add(uintptr_t key, uintptr_t value) {
		return ((T (*)(IndexedDictionary2*, uintptr_t, uintptr_t))(Il2CppBase() + 0x0))(this, key, value);
	}
	template <typename T = int32_t> T IndexOfKey(uintptr_t key) {
		return ((T (*)(IndexedDictionary2*, uintptr_t))(Il2CppBase() + 0x0))(this, key);
	}
	template <typename T = bool> T ContainsKey(uintptr_t key) {
		return ((T (*)(IndexedDictionary2*, uintptr_t))(Il2CppBase() + 0x0))(this, key);
	}
	template <typename T = void> T Clear() {
		return ((T (*)(IndexedDictionary2*))(Il2CppBase() + 0x0))(this);
	}

};

}
