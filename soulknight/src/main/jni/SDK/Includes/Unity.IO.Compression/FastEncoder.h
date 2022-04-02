#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace Unity.IO.Compression {

class FastEncoder
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Unity.IO.Compression", "FastEncoder"));
	}

	template <typename T = uintptr_t> T& inputWindow() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& currentMatch() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = double> T& lastCompressionRatio() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = int32_t> T get_BytesInHistory() {
		return ((T (*)(FastEncoder*))(Il2CppBase() + 0x4633614))(this);
	}
	template <typename T = uintptr_t> T get_UnprocessedInput() {
		return ((T (*)(FastEncoder*))(Il2CppBase() + 0x4633F9C))(this);
	}
	template <typename T = void> T FlushInput() {
		return ((T (*)(FastEncoder*))(Il2CppBase() + 0x4634084))(this);
	}
	template <typename T = double> T get_LastCompressionRatio() {
		return ((T (*)(FastEncoder*))(Il2CppBase() + 0x4633DCC))(this);
	}
	template <typename T = void> T GetBlock(uintptr_t input, uintptr_t output, int32_t maxBytesToCopy) {
		return ((T (*)(FastEncoder*, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x46340F4))(this, input, output, maxBytesToCopy);
	}
	template <typename T = void> T GetCompressedData(uintptr_t input, uintptr_t output) {
		return ((T (*)(FastEncoder*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4633D44))(this, input, output);
	}
	template <typename T = void> T GetBlockHeader(uintptr_t output) {
		return ((T (*)(FastEncoder*, uintptr_t))(Il2CppBase() + 0x4633CD0))(this, output);
	}
	template <typename T = void> T GetBlockFooter(uintptr_t output) {
		return ((T (*)(FastEncoder*, uintptr_t))(Il2CppBase() + 0x463400C))(this, output);
	}
	template <typename T = void> T GetCompressedOutput(uintptr_t input, uintptr_t output, int32_t maxBytesToCopy) {
		return ((T (*)(FastEncoder*, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x4634768))(this, input, output, maxBytesToCopy);
	}
	template <typename T = void> T GetCompressedOutput_1(uintptr_t output) {
		return ((T (*)(FastEncoder*, uintptr_t))(Il2CppBase() + 0x4634C64))(this, output);
	}
	template <typename T = bool> T InputAvailable(uintptr_t input) {
		return ((T (*)(FastEncoder*, uintptr_t))(Il2CppBase() + 0x4634E68))(this, input);
	}
	template <typename T = bool> T SafeToWriteTo(uintptr_t output) {
		return ((T (*)(FastEncoder*, uintptr_t))(Il2CppBase() + 0x4634DDC))(this, output);
	}
	template <typename T = void> T WriteEndOfBlock(uintptr_t output) {
		return ((T (*)(FastEncoder*, uintptr_t))(Il2CppBase() + 0x4634A40))(this, output);
	}
	template <typename T = void> static T WriteMatch(int32_t matchLen, int32_t matchPos, uintptr_t output) {
		return ((T (*)(void *, int32_t, int32_t, uintptr_t))(Il2CppBase() + 0x46355B4))(0, matchLen, matchPos, output);
	}
	template <typename T = void> static T WriteChar(unsigned char b, uintptr_t output) {
		return ((T (*)(void *, unsigned char, uintptr_t))(Il2CppBase() + 0x46353E8))(0, b, output);
	}
	template <typename T = void> static T WriteDeflatePreamble(uintptr_t output) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4634660))(0, output);
	}

};

}
