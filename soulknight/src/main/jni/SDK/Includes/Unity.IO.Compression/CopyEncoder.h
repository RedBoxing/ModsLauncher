#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace Unity.IO.Compression {

class CopyEncoder
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Unity.IO.Compression", "CopyEncoder"));
	}

	template <typename T = int32_t> static T& PaddingSize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& MaxUncompressedBlockSize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = void> T GetBlock(uintptr_t input, uintptr_t output, bool isFinal) {
		return ((T (*)(CopyEncoder*, uintptr_t, uintptr_t, bool))(Il2CppBase() + 0x462DEF4))(this, input, output, isFinal);
	}
	template <typename T = void> T WriteLenNLen(uint16_t len, uintptr_t output) {
		return ((T (*)(CopyEncoder*, uint16_t, uintptr_t))(Il2CppBase() + 0x462E4A4))(this, len, output);
	}

};

}
