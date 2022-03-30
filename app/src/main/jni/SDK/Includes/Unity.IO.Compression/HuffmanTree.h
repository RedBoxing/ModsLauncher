#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace Unity.IO.Compression {

class HuffmanTree
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Unity.IO.Compression", "HuffmanTree"));
	}

	template <typename T = int32_t> static T& MaxLiteralTreeElements() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& MaxDistTreeElements() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& EndOfBlockCode() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& NumberOfCodeLengthTreeElements() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& tableBits() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& table() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& left() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& right() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& codeLengthArray() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> T& tableMask() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> static T& staticLiteralLengthTree() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& staticDistanceTree() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = uintptr_t> static T get_StaticLiteralLengthTree() {
		return ((T (*)(void *))(Il2CppBase() + 0x4638B70))(0);
	}
	template <typename T = uintptr_t> static T get_StaticDistanceTree() {
		return ((T (*)(void *))(Il2CppBase() + 0x4638C14))(0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T GetStaticLiteralTreeLength() {
		return ((T (*)(void *))(Il2CppBase() + 0x4638890))(0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T GetStaticDistanceTreeLength() {
		return ((T (*)(void *))(Il2CppBase() + 0x4638A8C))(0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T CalculateHuffmanCode() {
		return ((T (*)(HuffmanTree*))(Il2CppBase() + 0x4639064))(this);
	}
	template <typename T = void> T CreateTable() {
		return ((T (*)(HuffmanTree*))(Il2CppBase() + 0x4638CB8))(this);
	}
	template <typename T = int32_t> T GetNextSymbol(uintptr_t input) {
		return ((T (*)(HuffmanTree*, uintptr_t))(Il2CppBase() + 0x463938C))(this, input);
	}

};

}
