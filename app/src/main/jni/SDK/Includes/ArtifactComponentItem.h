#pragma once
#include "Il2Cpp/Il2Cpp.h"

class ArtifactComponentItem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ArtifactComponentItem"));
	}

	template <typename T = bool> T& inShop() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& part() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& _collider() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> static T& displayedComparePanel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& displayedComparePanel2() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> T& _img() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& _displayImg() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& fxOnFloor() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = bool> T& _needHideImgAfterDisplayInUI() {
		return *(T*)((uintptr_t)this + 0x48);
	}

	template <typename T = bool> T get_inShop() {
		return ((T (*)(ArtifactComponentItem*))(Il2CppBase() + 0x1C9C398))(this);
	}
	template <typename T = void> T set_inShop(bool value) {
		return ((T (*)(ArtifactComponentItem*, bool))(Il2CppBase() + 0x1C9C3A0))(this, value);
	}
	template <typename T = void> T Start() {
		return ((T (*)(ArtifactComponentItem*))(Il2CppBase() + 0x1C9C3AC))(this);
	}
	template <typename T = void> T _OnAttach() {
		return ((T (*)(ArtifactComponentItem*))(Il2CppBase() + 0x1C9C788))(this);
	}
	template <typename T = void> T OnAttach() {
		return ((T (*)(ArtifactComponentItem*))(Il2CppBase() + 0x1C9CE44))(this);
	}
	template <typename T = void> T _OnDetach() {
		return ((T (*)(ArtifactComponentItem*))(Il2CppBase() + 0x1C9C960))(this);
	}
	template <typename T = void> T OnDetach() {
		return ((T (*)(ArtifactComponentItem*))(Il2CppBase() + 0x1C9CF28))(this);
	}
	template <typename T = uintptr_t> T GetDisplayObject() {
		return ((T (*)(ArtifactComponentItem*))(Il2CppBase() + 0x1C9D004))(this);
	}
	template <typename T = void> T ItemTrigger(uintptr_t controller) {
		return ((T (*)(ArtifactComponentItem*, uintptr_t))(Il2CppBase() + 0x1C9D144))(this, controller);
	}
	template <typename T = void> T SyncItemTrigger(uintptr_t controller, Il2CppString* ext_info) {
		return ((T (*)(ArtifactComponentItem*, uintptr_t, Il2CppString*))(Il2CppBase() + 0x1C9D514))(this, controller, ext_info);
	}
	template <typename T = bool> T CanUse() {
		return ((T (*)(ArtifactComponentItem*))(Il2CppBase() + 0x1C9D58C))(this);
	}
	template <typename T = int32_t> T GetItemValue() {
		return ((T (*)(ArtifactComponentItem*))(Il2CppBase() + 0x1C9D5EC))(this);
	}
	template <typename T = int32_t> T GetItemLevel() {
		return ((T (*)(ArtifactComponentItem*))(Il2CppBase() + 0x1C9D65C))(this);
	}
	template <typename T = Il2CppString*> T GetItemName() {
		return ((T (*)(ArtifactComponentItem*))(Il2CppBase() + 0x1C9D6CC))(this);
	}
	template <typename T = void> T OnTriggerEnter2D(uintptr_t other) {
		return ((T (*)(ArtifactComponentItem*, uintptr_t))(Il2CppBase() + 0x1C9D824))(this, other);
	}
	template <typename T = void> T DisplayInfoUI() {
		return ((T (*)(ArtifactComponentItem*))(Il2CppBase() + 0x1C9DBA0))(this);
	}
	template <typename T = void> T HideInfoUI() {
		return ((T (*)(ArtifactComponentItem*))(Il2CppBase() + 0x1C9D46C))(this);
	}
	template <typename T = void> T OnTriggerExit2D(uintptr_t other) {
		return ((T (*)(ArtifactComponentItem*, uintptr_t))(Il2CppBase() + 0x1C9E394))(this, other);
	}
	template <typename T = void> T ShowName(float height) {
		return ((T (*)(ArtifactComponentItem*, float))(Il2CppBase() + 0x1C9DA9C))(this, height);
	}
	template <typename T = uintptr_t> T CreateUIDisplayObj(uintptr_t parent, float scale) {
		return ((T (*)(ArtifactComponentItem*, uintptr_t, float))(Il2CppBase() + 0x1C9E50C))(this, parent, scale);
	}
	template <typename T = void> T BeforeDisplayInUI() {
		return ((T (*)(ArtifactComponentItem*))(Il2CppBase() + 0x1C9ED1C))(this);
	}
	template <typename T = void> T AfterDisplayInUI() {
		return ((T (*)(ArtifactComponentItem*))(Il2CppBase() + 0x1C9EE54))(this);
	}
	template <typename T = bool> T DisplayInfoUIb__24_1(uintptr_t p) {
		return ((T (*)(ArtifactComponentItem*, uintptr_t))(Il2CppBase() + 0x1C9EF08))(this, p);
	}

};

}
