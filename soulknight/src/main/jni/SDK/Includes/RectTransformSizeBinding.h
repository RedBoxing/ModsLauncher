#pragma once
#include "Il2Cpp/Il2Cpp.h"

class RectTransformSizeBinding
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RectTransformSizeBinding"));
	}

	template <typename T = bool> T& horizontal() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> T& vertical() {
		return *(T*)((uintptr_t)this + 0x19);
	}
	template <typename T = uintptr_t> T& target() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppVector2> T& margin() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppVector2> T& minSize() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = bool> T& scaleSize() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = bool> T& refreshInUpdate() {
		return *(T*)((uintptr_t)this + 0x39);
	}

	template <typename T = void> T UpdateSize() {
		return ((T (*)(RectTransformSizeBinding*))(Il2CppBase() + 0x42B1A54))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(RectTransformSizeBinding*))(Il2CppBase() + 0x42B1DC8))(this);
	}

};

}
