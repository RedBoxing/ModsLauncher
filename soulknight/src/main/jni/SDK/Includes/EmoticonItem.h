#pragma once
#include "Il2Cpp/Il2Cpp.h"

class EmoticonItem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "EmoticonItem"));
	}

	template <typename T = int32_t> T& emoticonId() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> T& activeSend() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& enterFingerId() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = void> T OnPointerEnter(uintptr_t eventData) {
		return ((T (*)(EmoticonItem*, uintptr_t))(Il2CppBase() + 0x22AE30C))(this, eventData);
	}
	template <typename T = void> T OnPointerExit(uintptr_t eventData) {
		return ((T (*)(EmoticonItem*, uintptr_t))(Il2CppBase() + 0x22AE5BC))(this, eventData);
	}
	template <typename T = void> T OnSelect() {
		return ((T (*)(EmoticonItem*))(Il2CppBase() + 0x22AE6C8))(this);
	}
	template <typename T = void> T OnMouseUp() {
		return ((T (*)(EmoticonItem*))(Il2CppBase() + 0x22AE7A8))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(EmoticonItem*))(Il2CppBase() + 0x22AE808))(this);
	}

};

}
