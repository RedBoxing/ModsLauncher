#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace Rewired.UI.ControlMapper {

class UIElementInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Rewired.UI.ControlMapper", "UIElementInfo"));
	}

	template <typename T = Il2CppString*> T& identifier() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& intData() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& text() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = void*> T& OnSelectedEvent() {
		return *(T*)((uintptr_t)this + 0x30);
	}

	template <typename T = void> T add_OnSelectedEvent(void* value) {
		return ((T (*)(UIElementInfo*, void*))(Il2CppBase() + 0x1BE0264))(this, value);
	}
	template <typename T = void> T remove_OnSelectedEvent(void* value) {
		return ((T (*)(UIElementInfo*, void*))(Il2CppBase() + 0x1BE0350))(this, value);
	}
	template <typename T = void> T OnSelect(uintptr_t eventData) {
		return ((T (*)(UIElementInfo*, uintptr_t))(Il2CppBase() + 0x1BE043C))(this, eventData);
	}

};

}
