#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace RGScript.UI.MVC {

class ViewExtension
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "RGScript.UI.MVC", "ViewExtension"));
	}

	template <typename T = bool> T& Active() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& OnBackButtonClicked() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = bool> T get_Active() {
		return ((T (*)(ViewExtension*))(Il2CppBase() + 0x44FC760))(this);
	}
	template <typename T = void> T set_Active(bool value) {
		return ((T (*)(ViewExtension*, bool))(Il2CppBase() + 0x44FC768))(this, value);
	}
	template <typename T = uintptr_t> T get_OnBackButtonClicked() {
		return ((T (*)(ViewExtension*))(Il2CppBase() + 0x44FC774))(this);
	}
	template <typename T = void> T set_OnBackButtonClicked(uintptr_t value) {
		return ((T (*)(ViewExtension*, uintptr_t))(Il2CppBase() + 0x44FC77C))(this, value);
	}
	template <typename T = void> T ShowView(Il2CppArray<uintptr_t>* objects) {
		return ((T (*)(ViewExtension*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x44FC784))(this, objects);
	}
	template <typename T = void> T HideView(Il2CppArray<uintptr_t>* objects) {
		return ((T (*)(ViewExtension*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x44FC7F4))(this, objects);
	}
	template <typename T = bool> T OnEvent(uintptr_t navigationEvent) {
		return ((T (*)(ViewExtension*, uintptr_t))(Il2CppBase() + 0x44FC864))(this, navigationEvent);
	}

};

}
