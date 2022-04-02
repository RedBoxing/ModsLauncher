#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace RGScript.UI.MVC {

class Model1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "RGScript.UI.MVC", "Model`1"));
	}

	template <typename T = uintptr_t> T& _controller() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> T& data() {
		return *(T*)((uintptr_t)this + 0x0);
	}

	template <typename T = void> T OnShow(uintptr_t extraParams) {
		return ((T (*)(Model1*, uintptr_t))(Il2CppBase() + 0x0))(this, extraParams);
	}
	template <typename T = void> T OnHide(uintptr_t extraParams) {
		return ((T (*)(Model1*, uintptr_t))(Il2CppBase() + 0x0))(this, extraParams);
	}
	template <typename T = void> T ProcessMessage(uintptr_t message) {
		return ((T (*)(Model1*, uintptr_t))(Il2CppBase() + 0x0))(this, message);
	}
	template <typename T = void> T Start() {
		return ((T (*)(Model1*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = uintptr_t> T HandleMessage(uintptr_t message) {
		return ((T (*)(Model1*, uintptr_t))(Il2CppBase() + 0x0))(this, message);
	}
	template <typename T = void> T RefreshData() {
		return ((T (*)(Model1*))(Il2CppBase() + 0x0))(this);
	}

};

}
