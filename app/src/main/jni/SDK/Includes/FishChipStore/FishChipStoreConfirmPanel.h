#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace FishChipStore {

class FishChipStoreConfirmPanel
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "FishChipStore", "FishChipStoreConfirmPanel"));
	}

	template <typename T = uintptr_t> T& _confirmWindowView() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& _config() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& _counter() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& _fishChipItemConfig() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& _state() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _descItemViews() {
		return *(T*)((uintptr_t)this + 0x38);
	}

	template <typename T = void> T Update() {
		return ((T (*)(FishChipStoreConfirmPanel*))(Il2CppBase() + 0x4500EE4))(this);
	}
	template <typename T = void> T FadeOutUpdate() {
		return ((T (*)(FishChipStoreConfirmPanel*))(Il2CppBase() + 0x45010C8))(this);
	}
	template <typename T = void> T FadeInUpdate() {
		return ((T (*)(FishChipStoreConfirmPanel*))(Il2CppBase() + 0x4500F74))(this);
	}
	template <typename T = void> T ShowConfirmWindow(uintptr_t storeItem) {
		return ((T (*)(FishChipStoreConfirmPanel*, uintptr_t))(Il2CppBase() + 0x450121C))(this, storeItem);
	}
	template <typename T = void> T FlushWindowBundleType(uintptr_t storeItem, uintptr_t configItem) {
		return ((T (*)(FishChipStoreConfirmPanel*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4502214))(this, storeItem, configItem);
	}
	template <typename T = void> T FlushWindowMaterialType(uintptr_t storeItem, uintptr_t configItem) {
		return ((T (*)(FishChipStoreConfirmPanel*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4501E5C))(this, storeItem, configItem);
	}
	template <typename T = void> T FlushWindowSpecificMaterial(uintptr_t storeItem) {
		return ((T (*)(FishChipStoreConfirmPanel*, uintptr_t))(Il2CppBase() + 0x4501558))(this, storeItem);
	}
	template <typename T = void> T FlushWindowSkinType(uintptr_t configItem) {
		return ((T (*)(FishChipStoreConfirmPanel*, uintptr_t))(Il2CppBase() + 0x4501908))(this, configItem);
	}
	template <typename T = void> T ConfirmClick() {
		return ((T (*)(FishChipStoreConfirmPanel*))(Il2CppBase() + 0x4502B40))(this);
	}
	template <typename T = void> T CancelClick() {
		return ((T (*)(FishChipStoreConfirmPanel*))(Il2CppBase() + 0x4502BCC))(this);
	}

};

}
