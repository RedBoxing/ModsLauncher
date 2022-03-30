#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace Unity.IO.Compression {

class OutputWindow
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Unity.IO.Compression", "OutputWindow"));
	}

	template <typename T = int32_t> static T& WindowSize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& WindowMask() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& window() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& end() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& bytesUsed() {
		return *(T*)((uintptr_t)this + 0x1C);
	}

	template <typename T = void> T Write(unsigned char b) {
		return ((T (*)(OutputWindow*, unsigned char))(Il2CppBase() + 0x463B3DC))(this, b);
	}
	template <typename T = void> T WriteLengthDistance(int32_t length, int32_t distance) {
		return ((T (*)(OutputWindow*, int32_t, int32_t))(Il2CppBase() + 0x463B49C))(this, length, distance);
	}
	template <typename T = int32_t> T CopyFrom(uintptr_t input, int32_t length) {
		return ((T (*)(OutputWindow*, uintptr_t, int32_t))(Il2CppBase() + 0x463B1CC))(this, input, length);
	}
	template <typename T = int32_t> T get_FreeBytes() {
		return ((T (*)(OutputWindow*))(Il2CppBase() + 0x463B374))(this);
	}
	template <typename T = int32_t> T get_AvailableBytes() {
		return ((T (*)(OutputWindow*))(Il2CppBase() + 0x4639A38))(this);
	}
	template <typename T = int32_t> T CopyTo(Il2CppArray<uintptr_t>* output, int32_t offset, int32_t length) {
		return ((T (*)(OutputWindow*, Il2CppArray<uintptr_t>*, int32_t, int32_t))(Il2CppBase() + 0x4639B70))(this, output, offset, length);
	}

};

}
