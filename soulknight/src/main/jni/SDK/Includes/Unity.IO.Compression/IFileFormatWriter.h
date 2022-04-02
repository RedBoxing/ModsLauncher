#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace Unity.IO.Compression {

class IFileFormatWriter
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Unity.IO.Compression", "IFileFormatWriter"));
	}


	template <typename T = Il2CppArray<uintptr_t>*> T GetHeader() {
		return ((T (*)(IFileFormatWriter*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T UpdateWithBytesRead(Il2CppArray<uintptr_t>* buffer, int32_t offset, int32_t bytesToCopy) {
		return ((T (*)(IFileFormatWriter*, Il2CppArray<uintptr_t>*, int32_t, int32_t))(Il2CppBase() + 0x0))(this, buffer, offset, bytesToCopy);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetFooter() {
		return ((T (*)(IFileFormatWriter*))(Il2CppBase() + 0x0))(this);
	}

};

}
