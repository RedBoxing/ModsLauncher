#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace Unity.IO.Compression {

class IFileFormatReader
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Unity.IO.Compression", "IFileFormatReader"));
	}


	template <typename T = bool> T ReadHeader(uintptr_t input) {
		return ((T (*)(IFileFormatReader*, uintptr_t))(Il2CppBase() + 0x0))(this, input);
	}
	template <typename T = bool> T ReadFooter(uintptr_t input) {
		return ((T (*)(IFileFormatReader*, uintptr_t))(Il2CppBase() + 0x0))(this, input);
	}
	template <typename T = void> T UpdateWithBytesRead(Il2CppArray<uintptr_t>* buffer, int32_t offset, int32_t bytesToCopy) {
		return ((T (*)(IFileFormatReader*, Il2CppArray<uintptr_t>*, int32_t, int32_t))(Il2CppBase() + 0x0))(this, buffer, offset, bytesToCopy);
	}
	template <typename T = void> T Validate() {
		return ((T (*)(IFileFormatReader*))(Il2CppBase() + 0x0))(this);
	}

};

}
