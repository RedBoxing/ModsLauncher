#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace Unity.IO.Compression {

class OutputBuffer
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Unity.IO.Compression", "OutputBuffer"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& byteBuffer() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& pos() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uint32_t> T& bitBuf() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& bitCount() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = void> T UpdateBuffer(Il2CppArray<uintptr_t>* output) {
		return ((T (*)(OutputBuffer*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4633BF4))(this, output);
	}
	template <typename T = int32_t> T get_BytesWritten() {
		return ((T (*)(OutputBuffer*))(Il2CppBase() + 0x46341A4))(this);
	}
	template <typename T = int32_t> T get_FreeBytes() {
		return ((T (*)(OutputBuffer*))(Il2CppBase() + 0x462E168))(this);
	}
	template <typename T = void> T WriteUInt16(uint16_t value) {
		return ((T (*)(OutputBuffer*, uint16_t))(Il2CppBase() + 0x462E774))(this, value);
	}
	template <typename T = void> T WriteBits(int32_t n, uint32_t bits) {
		return ((T (*)(OutputBuffer*, int32_t, uint32_t))(Il2CppBase() + 0x462E254))(this, n, bits);
	}
	template <typename T = void> T FlushBits() {
		return ((T (*)(OutputBuffer*))(Il2CppBase() + 0x462E384))(this);
	}
	template <typename T = void> T WriteBytes(Il2CppArray<uintptr_t>* byteArray, int32_t offset, int32_t count) {
		return ((T (*)(OutputBuffer*, Il2CppArray<uintptr_t>*, int32_t, int32_t))(Il2CppBase() + 0x462E614))(this, byteArray, offset, count);
	}
	template <typename T = void> T WriteBytesUnaligned(Il2CppArray<uintptr_t>* byteArray, int32_t offset, int32_t count) {
		return ((T (*)(OutputBuffer*, Il2CppArray<uintptr_t>*, int32_t, int32_t))(Il2CppBase() + 0x463BAC0))(this, byteArray, offset, count);
	}
	template <typename T = void> T WriteByteUnaligned(unsigned char b) {
		return ((T (*)(OutputBuffer*, unsigned char))(Il2CppBase() + 0x463BBA0))(this, b);
	}
	template <typename T = int32_t> T get_BitsInBuffer() {
		return ((T (*)(OutputBuffer*))(Il2CppBase() + 0x462E1E0))(this);
	}
	template <typename T = uintptr_t> T DumpState() {
		return ((T (*)(OutputBuffer*))(Il2CppBase() + 0x4633C6C))(this);
	}
	template <typename T = void> T RestoreState(uintptr_t state) {
		return ((T (*)(OutputBuffer*, uintptr_t))(Il2CppBase() + 0x4633EA8))(this, state);
	}

};

}
