#pragma once
#include "Il2Cpp/Il2Cpp.h"

class GenericPayProcesser
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GenericPayProcesser"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& ProductInfos() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, uintptr_t>*> T& order2Time() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, int32_t>*> static T& fish2Count() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = uintptr_t> static T get_Inst() {
		return ((T (*)(void *))(Il2CppBase() + 0x44362E0))(0);
	}
	template <typename T = void> T Start() {
		return ((T (*)(GenericPayProcesser*))(Il2CppBase() + 0x44363A4))(this);
	}
	template <typename T = bool> T ProcessPurchase(Il2CppString* productId, bool showWindow, uintptr_t buyWay) {
		return ((T (*)(GenericPayProcesser*, Il2CppString*, bool, uintptr_t))(Il2CppBase() + 0x4436460))(this, productId, showWindow, buyWay);
	}
	template <typename T = uintptr_t> T GetProductInfo(Il2CppString* productId) {
		return ((T (*)(GenericPayProcesser*, Il2CppString*))(Il2CppBase() + 0x44373D0))(this, productId);
	}
	template <typename T = uintptr_t> T GetProductInfoByName(Il2CppString* productName) {
		return ((T (*)(GenericPayProcesser*, Il2CppString*))(Il2CppBase() + 0x4437C38))(this, productName);
	}
	template <typename T = Il2CppString*> T GetName(uintptr_t info) {
		return ((T (*)(GenericPayProcesser*, uintptr_t))(Il2CppBase() + 0x44379F4))(this, info);
	}
	template <typename T = bool> T IsFish(Il2CppString* productName) {
		return ((T (*)(GenericPayProcesser*, Il2CppString*))(Il2CppBase() + 0x4437558))(this, productName);
	}
	template <typename T = bool> T IsFishChip(Il2CppString* productName) {
		return ((T (*)(GenericPayProcesser*, Il2CppString*))(Il2CppBase() + 0x4437630))(this, productName);
	}
	template <typename T = bool> T IsGem(Il2CppString* productName) {
		return ((T (*)(GenericPayProcesser*, Il2CppString*))(Il2CppBase() + 0x4437710))(this, productName);
	}
	template <typename T = bool> static T IsNewPkg(Il2CppString* productName) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x44378D8))(0, productName);
	}
	template <typename T = void> T AdjustProductInfo() {
		return ((T (*)(GenericPayProcesser*))(Il2CppBase() + 0x4436404))(this);
	}
	template <typename T = void> T CheckPayInfo() {
		return ((T (*)(GenericPayProcesser*))(Il2CppBase() + 0x4437DCC))(this);
	}

};

}
