#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace Unity.IO.Compression {

class InputBuffer
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Unity.IO.Compression", "InputBuffer"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& buffer() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& start() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& end() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uint32_t> T& bitBuffer() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& bitsInBuffer() {
		return *(T*)((uintptr_t)this + 0x24);
	}

	template <typename T = int32_t> T get_AvailableBits() {
		return ((T (*)(InputBuffer*))(Il2CppBase() + 0x4639770))(this);
	}
	template <typename T = int32_t> T get_AvailableBytes() {
		return ((T (*)(InputBuffer*))(Il2CppBase() + 0x463B848))(this);
	}
	template <typename T = bool> T EnsureBitsAvailable(int32_t count) {
		return ((T (*)(InputBuffer*, int32_t))(Il2CppBase() + 0x463A04C))(this, count);
	}
	template <typename T = uint32_t> T TryLoad16Bits() {
		return ((T (*)(InputBuffer*))(Il2CppBase() + 0x46395E4))(this);
	}
	template <typename T = uint32_t> T GetBitMask(int32_t count) {
		return ((T (*)(InputBuffer*, int32_t))(Il2CppBase() + 0x463B8C0))(this, count);
	}
	template <typename T = int32_t> T GetBits(int32_t count) {
		return ((T (*)(InputBuffer*, int32_t))(Il2CppBase() + 0x4636E18))(this, count);
	}
	template <typename T = int32_t> T CopyTo(Il2CppArray<uintptr_t>* output, int32_t offset, int32_t length) {
		return ((T (*)(InputBuffer*, Il2CppArray<uintptr_t>*, int32_t, int32_t))(Il2CppBase() + 0x463B940))(this, output, offset, length);
	}
	template <typename T = bool> T NeedsInput() {
		return ((T (*)(InputBuffer*))(Il2CppBase() + 0x4639B08))(this);
	}
	template <typename T = void> T SetInput(Il2CppArray<uintptr_t>* buffer, int32_t offset, int32_t length) {
		return ((T (*)(InputBuffer*, Il2CppArray<uintptr_t>*, int32_t, int32_t))(Il2CppBase() + 0x4639930))(this, buffer, offset, length);
	}
	template <typename T = void> T SkipBits(int32_t n) {
		return ((T (*)(InputBuffer*, int32_t))(Il2CppBase() + 0x46397D0))(this, n);
	}
	template <typename T = void> T SkipToByteBoundary() {
		return ((T (*)(InputBuffer*))(Il2CppBase() + 0x463703C))(this);
	}

};

}
