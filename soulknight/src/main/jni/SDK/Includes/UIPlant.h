#pragma once
#include "Il2Cpp/Il2Cpp.h"

class UIPlant
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UIPlant"));
	}

	template <typename T = uintptr_t> T& seedList() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& trEmpty() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& seedProto() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& pot() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& scrollRect() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uintptr_t> T& btnConfirm() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = uintptr_t> T& btnBack() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& items() {
		return *(T*)((uintptr_t)this + 0x78);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(UIPlant*))(Il2CppBase() + 0x4235748))(this);
	}
	template <typename T = void> T OnEnable() {
		return ((T (*)(UIPlant*))(Il2CppBase() + 0x4235938))(this);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(UIPlant*))(Il2CppBase() + 0x4235994))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(UIPlant*))(Il2CppBase() + 0x42359F0))(this);
	}
	template <typename T = void> T ShowWindow(uintptr_t pot) {
		return ((T (*)(UIPlant*, uintptr_t))(Il2CppBase() + 0x4235E34))(this, pot);
	}
	template <typename T = void> T ShowWindow_1() {
		return ((T (*)(UIPlant*))(Il2CppBase() + 0x423619C))(this);
	}
	template <typename T = void> T HideWindow() {
		return ((T (*)(UIPlant*))(Il2CppBase() + 0x4236394))(this);
	}
	template <typename T = void> T CloseBtnClick() {
		return ((T (*)(UIPlant*))(Il2CppBase() + 0x4235B08))(this);
	}
	template <typename T = void> T FlushSeeds() {
		return ((T (*)(UIPlant*))(Il2CppBase() + 0x4235EB4))(this);
	}
	template <typename T = void> T CreateSeedItem(Il2CppString* seedName, int32_t seedCount) {
		return ((T (*)(UIPlant*, Il2CppString*, int32_t))(Il2CppBase() + 0x423652C))(this, seedName, seedCount);
	}
	template <typename T = uintptr_t> T ScrollRectDontFadeAtTopOrBottom() {
		return ((T (*)(UIPlant*))(Il2CppBase() + 0x4236AAC))(this);
	}
	template <typename T = void> T OnClick_Plant() {
		return ((T (*)(UIPlant*))(Il2CppBase() + 0x4236B8C))(this);
	}
	template <typename T = void> T SetupNavigation() {
		return ((T (*)(UIPlant*))(Il2CppBase() + 0x42371DC))(this);
	}
	template <typename T = uintptr_t> T NavigationCoroutine() {
		return ((T (*)(UIPlant*))(Il2CppBase() + 0x423724C))(this);
	}
	template <typename T = void> T Refresh() {
		return ((T (*)(UIPlant*))(Il2CppBase() + 0x4235D58))(this);
	}

};

}
