#pragma once
#include "Il2Cpp/Il2Cpp.h"

class PurchaseProductCollection
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PurchaseProductCollection"));
	}

	template <typename T = void*> T& m_ProductSet() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, uintptr_t>*> T& m_IdToProduct() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& m_Products() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = void> T AddProducts(void* products) {
		return ((T (*)(PurchaseProductCollection*, void*))(Il2CppBase() + 0x1BA50D4))(this, products);
	}
	template <typename T = void*> T get_set() {
		return ((T (*)(PurchaseProductCollection*))(Il2CppBase() + 0x1BA5264))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_all() {
		return ((T (*)(PurchaseProductCollection*))(Il2CppBase() + 0x1BA1DA8))(this);
	}
	template <typename T = uintptr_t> T WithID(Il2CppString* id) {
		return ((T (*)(PurchaseProductCollection*, Il2CppString*))(Il2CppBase() + 0x1BA52C4))(this, id);
	}

};

}
