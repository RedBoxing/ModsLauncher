#pragma once
#include "Il2Cpp/Il2Cpp.h"

class CloudComparePanel
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CloudComparePanel"));
	}

	template <typename T = uintptr_t> T& content() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& roleProto() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& petProto() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& materialProto() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& seedProto() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& blueprintProto() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& plantPotProto() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& forge() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& dynamicIcons() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& undetectText() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uintptr_t> T& dataPanel() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = uintptr_t> T& _specialTicketProto() {
		return *(T*)((uintptr_t)this + 0x70);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(CloudComparePanel*))(Il2CppBase() + 0x1E77270))(this);
	}
	template <typename T = void> T Refresh(uintptr_t cloudData) {
		return ((T (*)(CloudComparePanel*, uintptr_t))(Il2CppBase() + 0x1E776E0))(this, cloudData);
	}
	template <typename T = uintptr_t> T AdjustingContentSize() {
		return ((T (*)(CloudComparePanel*))(Il2CppBase() + 0x1E77884))(this);
	}
	template <typename T = void> T RefreshRole(uintptr_t cloudData) {
		return ((T (*)(CloudComparePanel*, uintptr_t))(Il2CppBase() + 0x1E77ADC))(this, cloudData);
	}
	template <typename T = void> T RefreshPet(uintptr_t cloudData) {
		return ((T (*)(CloudComparePanel*, uintptr_t))(Il2CppBase() + 0x1E78504))(this, cloudData);
	}
	template <typename T = void> T RefreshPickable(uintptr_t cloudData) {
		return ((T (*)(CloudComparePanel*, uintptr_t))(Il2CppBase() + 0x1E788D0))(this, cloudData);
	}
	template <typename T = void> T RefreshPlantPot(uintptr_t cloudData) {
		return ((T (*)(CloudComparePanel*, uintptr_t))(Il2CppBase() + 0x1E794EC))(this, cloudData);
	}
	template <typename T = void> T RefreshForge(uintptr_t cloudData) {
		return ((T (*)(CloudComparePanel*, uintptr_t))(Il2CppBase() + 0x1E79A38))(this, cloudData);
	}
	template <typename T = void> T RefreshFurniture(uintptr_t cloudData) {
		return ((T (*)(CloudComparePanel*, uintptr_t))(Il2CppBase() + 0x1E7809C))(this, cloudData);
	}
	template <typename T = void> T RefreshStatistic(uintptr_t cloudData) {
		return ((T (*)(CloudComparePanel*, uintptr_t))(Il2CppBase() + 0x1E782D0))(this, cloudData);
	}
	template <typename T = uintptr_t> T Instantiate(uintptr_t proto) {
		return ((T (*)(CloudComparePanel*, uintptr_t))(Il2CppBase() + 0x1E798EC))(this, proto);
	}
	template <typename T = void> T ClearDynamic() {
		return ((T (*)(CloudComparePanel*))(Il2CppBase() + 0x1E77938))(this);
	}

};

}
