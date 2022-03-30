#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace Unity.IO.Compression {

class FastEncoderWindow
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Unity.IO.Compression", "FastEncoderWindow"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& window() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& bufPos() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& bufEnd() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> static T& FastEncoderHashShift() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& FastEncoderHashtableSize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& FastEncoderHashMask() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& FastEncoderWindowSize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& FastEncoderWindowMask() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& FastEncoderMatch3DistThreshold() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& MaxMatch() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& MinMatch() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& SearchDepth() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& GoodLength() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& NiceLength() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& LazyMatchThreshold() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& prev() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& lookup() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = int32_t> T get_BytesAvailable() {
		return ((T (*)(FastEncoderWindow*))(Il2CppBase() + 0x463448C))(this);
	}
	template <typename T = uintptr_t> T get_UnprocessedInput() {
		return ((T (*)(FastEncoderWindow*))(Il2CppBase() + 0x46344F0))(this);
	}
	template <typename T = void> T FlushWindow() {
		return ((T (*)(FastEncoderWindow*))(Il2CppBase() + 0x4634600))(this);
	}
	template <typename T = void> T ResetWindow() {
		return ((T (*)(FastEncoderWindow*))(Il2CppBase() + 0x4635CE8))(this);
	}
	template <typename T = int32_t> T get_FreeWindowSpace() {
		return ((T (*)(FastEncoderWindow*))(Il2CppBase() + 0x4634B48))(this);
	}
	template <typename T = void> T CopyBytes(Il2CppArray<uintptr_t>* inputBuffer, int32_t startIndex, int32_t count) {
		return ((T (*)(FastEncoderWindow*, Il2CppArray<uintptr_t>*, int32_t, int32_t))(Il2CppBase() + 0x4634BB0))(this, inputBuffer, startIndex, count);
	}
	template <typename T = void> T MoveWindows() {
		return ((T (*)(FastEncoderWindow*))(Il2CppBase() + 0x4635DB0))(this);
	}
	template <typename T = uint32_t> T HashValue(uint32_t hash, unsigned char b) {
		return ((T (*)(FastEncoderWindow*, uint32_t, unsigned char))(Il2CppBase() + 0x4635F98))(this, hash, b);
	}
	template <typename T = uint32_t> T InsertString(uintptr_t hash) {
		return ((T (*)(FastEncoderWindow*, uintptr_t))(Il2CppBase() + 0x4636018))(this, hash);
	}
	template <typename T = void> T InsertStrings(uintptr_t hash, int32_t matchLen) {
		return ((T (*)(FastEncoderWindow*, uintptr_t, int32_t))(Il2CppBase() + 0x46361A4))(this, hash, matchLen);
	}
	template <typename T = bool> T GetNextSymbolOrMatch(uintptr_t match) {
		return ((T (*)(FastEncoderWindow*, uintptr_t))(Il2CppBase() + 0x4634F0C))(this, match);
	}
	template <typename T = int32_t> T FindMatch(int32_t search, uintptr_t* matchPos, int32_t searchDepth, int32_t niceLength) {
		return ((T (*)(FastEncoderWindow*, int32_t, uintptr_t*, int32_t, int32_t))(Il2CppBase() + 0x4636268))(this, search, matchPos, searchDepth, niceLength);
	}
	template <typename T = void> T VerifyHashes() {
		return ((T (*)(FastEncoderWindow*))(Il2CppBase() + 0x4636734))(this);
	}
	template <typename T = uint32_t> T RecalculateHash(int32_t position) {
		return ((T (*)(FastEncoderWindow*, int32_t))(Il2CppBase() + 0x4636840))(this, position);
	}

};

}
