#pragma once
#include "Il2Cpp/Il2Cpp.h"

class TextMultipleLineBestFit
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TextMultipleLineBestFit"));
	}

	template <typename T = uintptr_t> T& text() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& lineCount() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& maxSize() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = int32_t> T& minSize() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = void> T Flush() {
		return ((T (*)(TextMultipleLineBestFit*))(Il2CppBase() + 0x43C3810))(this);
	}

};

}
