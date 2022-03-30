#pragma once
#include "Il2Cpp/Il2Cpp.h"

class PurchaseProductMetadata
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PurchaseProductMetadata"));
	}

	template <typename T = Il2CppString*> T& localizedPriceString() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& localizedTitle() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> T& localizedDescription() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppString*> T& isoCurrencyCode() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& localizedPrice() {
		return *(T*)((uintptr_t)this + 0x30);
	}

	template <typename T = Il2CppString*> T get_localizedPriceString() {
		return ((T (*)(PurchaseProductMetadata*))(Il2CppBase() + 0x1BA5090))(this);
	}
	template <typename T = void> T set_localizedPriceString(Il2CppString* value) {
		return ((T (*)(PurchaseProductMetadata*, Il2CppString*))(Il2CppBase() + 0x1BA5480))(this, value);
	}
	template <typename T = Il2CppString*> T get_localizedTitle() {
		return ((T (*)(PurchaseProductMetadata*))(Il2CppBase() + 0x1BA5098))(this);
	}
	template <typename T = void> T set_localizedTitle(Il2CppString* value) {
		return ((T (*)(PurchaseProductMetadata*, Il2CppString*))(Il2CppBase() + 0x1BA5488))(this, value);
	}
	template <typename T = Il2CppString*> T get_localizedDescription() {
		return ((T (*)(PurchaseProductMetadata*))(Il2CppBase() + 0x1BA50A0))(this);
	}
	template <typename T = void> T set_localizedDescription(Il2CppString* value) {
		return ((T (*)(PurchaseProductMetadata*, Il2CppString*))(Il2CppBase() + 0x1BA5490))(this, value);
	}
	template <typename T = Il2CppString*> T get_isoCurrencyCode() {
		return ((T (*)(PurchaseProductMetadata*))(Il2CppBase() + 0x1BA50A8))(this);
	}
	template <typename T = void> T set_isoCurrencyCode(Il2CppString* value) {
		return ((T (*)(PurchaseProductMetadata*, Il2CppString*))(Il2CppBase() + 0x1BA5498))(this, value);
	}
	template <typename T = uintptr_t> T get_localizedPrice() {
		return ((T (*)(PurchaseProductMetadata*))(Il2CppBase() + 0x1BA50B0))(this);
	}
	template <typename T = void> T set_localizedPrice(uintptr_t value) {
		return ((T (*)(PurchaseProductMetadata*, uintptr_t))(Il2CppBase() + 0x1BA54A0))(this, value);
	}

};

}
