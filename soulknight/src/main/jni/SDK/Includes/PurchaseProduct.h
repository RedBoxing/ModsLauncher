#pragma once
#include "Il2Cpp/Il2Cpp.h"

class PurchaseProduct
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PurchaseProduct"));
	}

	template <typename T = Il2CppString*> T& id() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& skuType() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& metadata() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = bool> T& availableToPurchase() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppString*> T& transactionID() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppString*> T& receipt() {
		return *(T*)((uintptr_t)this + 0x38);
	}

	template <typename T = Il2CppString*> T get_id() {
		return ((T (*)(PurchaseProduct*))(Il2CppBase() + 0x1BA4A38))(this);
	}
	template <typename T = void> T set_id(Il2CppString* value) {
		return ((T (*)(PurchaseProduct*, Il2CppString*))(Il2CppBase() + 0x1BA49E0))(this, value);
	}
	template <typename T = Il2CppString*> T get_skuType() {
		return ((T (*)(PurchaseProduct*))(Il2CppBase() + 0x1BA4A40))(this);
	}
	template <typename T = void> T set_skuType(Il2CppString* value) {
		return ((T (*)(PurchaseProduct*, Il2CppString*))(Il2CppBase() + 0x1BA4A48))(this, value);
	}
	template <typename T = uintptr_t> T get_metadata() {
		return ((T (*)(PurchaseProduct*))(Il2CppBase() + 0x1BA4A50))(this);
	}
	template <typename T = void> T set_metadata(uintptr_t value) {
		return ((T (*)(PurchaseProduct*, uintptr_t))(Il2CppBase() + 0x1BA49E8))(this, value);
	}
	template <typename T = bool> T get_availableToPurchase() {
		return ((T (*)(PurchaseProduct*))(Il2CppBase() + 0x1BA4A58))(this);
	}
	template <typename T = void> T set_availableToPurchase(bool value) {
		return ((T (*)(PurchaseProduct*, bool))(Il2CppBase() + 0x1BA4A60))(this, value);
	}
	template <typename T = Il2CppString*> T get_transactionID() {
		return ((T (*)(PurchaseProduct*))(Il2CppBase() + 0x1BA4A6C))(this);
	}
	template <typename T = void> T set_transactionID(Il2CppString* value) {
		return ((T (*)(PurchaseProduct*, Il2CppString*))(Il2CppBase() + 0x1BA4A74))(this, value);
	}
	template <typename T = bool> T get_hasReceipt() {
		return ((T (*)(PurchaseProduct*))(Il2CppBase() + 0x1BA4A7C))(this);
	}
	template <typename T = Il2CppString*> T get_receipt() {
		return ((T (*)(PurchaseProduct*))(Il2CppBase() + 0x1BA4AEC))(this);
	}
	template <typename T = void> T set_receipt(Il2CppString* value) {
		return ((T (*)(PurchaseProduct*, Il2CppString*))(Il2CppBase() + 0x1BA49F0))(this, value);
	}
	template <typename T = bool> T Equals(uintptr_t obj) {
		return ((T (*)(PurchaseProduct*, uintptr_t))(Il2CppBase() + 0x1BA4AF4))(this, obj);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(PurchaseProduct*))(Il2CppBase() + 0x1BA4BF8))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(PurchaseProduct*))(Il2CppBase() + 0x1BA4C70))(this);
	}
	template <typename T = bool> T iFixBaseProxy_Equals(uintptr_t P0) {
		return ((T (*)(PurchaseProduct*, uintptr_t))(Il2CppBase() + 0x1BA50BC))(this, P0);
	}
	template <typename T = int32_t> T iFixBaseProxy_GetHashCode() {
		return ((T (*)(PurchaseProduct*))(Il2CppBase() + 0x1BA50C4))(this);
	}
	template <typename T = Il2CppString*> T iFixBaseProxy_ToString() {
		return ((T (*)(PurchaseProduct*))(Il2CppBase() + 0x1BA50CC))(this);
	}

};

}
