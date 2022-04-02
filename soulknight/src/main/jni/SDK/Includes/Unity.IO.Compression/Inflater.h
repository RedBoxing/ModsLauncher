#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace Unity.IO.Compression {

class Inflater
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Unity.IO.Compression", "Inflater"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> static T& extraLengthBits() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& lengthBase() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& distanceBasePosition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& codeOrder() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& staticDistanceTreeTable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> T& output() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& input() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& literalLengthTree() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& distanceTree() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& state() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = bool> T& hasFormatReader() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = int32_t> T& bfinal() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& blockType() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& blockLengthBuffer() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = int32_t> T& blockLength() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = int32_t> T& length() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = int32_t> T& distanceCode() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = int32_t> T& extraBits() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = int32_t> T& loopCounter() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = int32_t> T& literalLengthCodeCount() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = int32_t> T& distanceCodeCount() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = int32_t> T& codeLengthCodeCount() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = int32_t> T& codeArraySize() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = int32_t> T& lengthCode() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& codeList() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& codeLengthTreeCodeLength() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = uintptr_t> T& codeLengthTree() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& formatReader() {
		return *(T*)((uintptr_t)this + 0x88);
	}

	template <typename T = void> T SetFileFormatReader(uintptr_t reader) {
		return ((T (*)(Inflater*, uintptr_t))(Il2CppBase() + 0x462F318))(this, reader);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(Inflater*))(Il2CppBase() + 0x46398BC))(this);
	}
	template <typename T = void> T SetInput(Il2CppArray<uintptr_t>* inputBytes, int32_t offset, int32_t length) {
		return ((T (*)(Inflater*, Il2CppArray<uintptr_t>*, int32_t, int32_t))(Il2CppBase() + 0x463020C))(this, inputBytes, offset, length);
	}
	template <typename T = bool> T Finished() {
		return ((T (*)(Inflater*))(Il2CppBase() + 0x46301A0))(this);
	}
	template <typename T = int32_t> T get_AvailableOutput() {
		return ((T (*)(Inflater*))(Il2CppBase() + 0x46399C8))(this);
	}
	template <typename T = bool> T NeedsInput() {
		return ((T (*)(Inflater*))(Il2CppBase() + 0x4639A98))(this);
	}
	template <typename T = int32_t> T Inflate(Il2CppArray<uintptr_t>* bytes, int32_t offset, int32_t length) {
		return ((T (*)(Inflater*, Il2CppArray<uintptr_t>*, int32_t, int32_t))(Il2CppBase() + 0x462FF58))(this, bytes, offset, length);
	}
	template <typename T = bool> T Decode() {
		return ((T (*)(Inflater*))(Il2CppBase() + 0x4639C80))(this);
	}
	template <typename T = bool> T DecodeUncompressedBlock(uintptr_t* end_of_block) {
		return ((T (*)(Inflater*, uintptr_t*))(Il2CppBase() + 0x463AEC0))(this, end_of_block);
	}
	template <typename T = bool> T DecodeBlock(uintptr_t* end_of_block_code_seen) {
		return ((T (*)(Inflater*, uintptr_t*))(Il2CppBase() + 0x463A984))(this, end_of_block_code_seen);
	}
	template <typename T = bool> T DecodeDynamicBlockHeader() {
		return ((T (*)(Inflater*))(Il2CppBase() + 0x463A1B8))(this);
	}

};

}
