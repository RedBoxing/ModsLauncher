#pragma once
#include "Il2Cpp/Il2Cpp.h"

class TextMeshAnim
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TextMeshAnim"));
	}

	template <typename T = uintptr_t> T& text() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(TextMeshAnim*))(Il2CppBase() + 0x43C36E4))(this);
	}
	template <typename T = void> T OnChangeText(Il2CppString* str) {
		return ((T (*)(TextMeshAnim*, Il2CppString*))(Il2CppBase() + 0x43C377C))(this, str);
	}

};

}
