#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace RGScript.UI.InfiniteList {

class UISkinData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "RGScript.UI.InfiniteList", "UISkinData"));
	}

	template <typename T = int32_t> T& SkinIndex() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& IsLocked() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& UnlockWay() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& Sprite() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = bool> T& IsNewSkin() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& PassGameLevel() {
		return *(T*)((uintptr_t)this + 0x2C);
	}

	template <typename T = int32_t> T get_SkinIndex() {
		return ((T (*)(UISkinData*))(Il2CppBase() + 0x44EA564))(this);
	}
	template <typename T = bool> T get_IsLocked() {
		return ((T (*)(UISkinData*))(Il2CppBase() + 0x44F506C))(this);
	}
	template <typename T = void> T set_IsLocked(bool value) {
		return ((T (*)(UISkinData*, bool))(Il2CppBase() + 0x44EAB64))(this, value);
	}
	template <typename T = int32_t> T get_UnlockWay() {
		return ((T (*)(UISkinData*))(Il2CppBase() + 0x44EAE94))(this);
	}
	template <typename T = uintptr_t> T get_Sprite() {
		return ((T (*)(UISkinData*))(Il2CppBase() + 0x44FB728))(this);
	}
	template <typename T = bool> T get_IsNewSkin() {
		return ((T (*)(UISkinData*))(Il2CppBase() + 0x44EA56C))(this);
	}
	template <typename T = void> T set_IsNewSkin(bool value) {
		return ((T (*)(UISkinData*, bool))(Il2CppBase() + 0x44EA574))(this, value);
	}
	template <typename T = uintptr_t> T get_PassGameLevel() {
		return ((T (*)(UISkinData*))(Il2CppBase() + 0x44FB730))(this);
	}
	template <typename T = void> T set_PassGameLevel(uintptr_t value) {
		return ((T (*)(UISkinData*, uintptr_t))(Il2CppBase() + 0x44FC1AC))(this, value);
	}

};

}
