#pragma once
#include "Il2Cpp/Il2Cpp.h"

class ZipHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ZipHelper"));
	}


	template <typename T = Il2CppString*> static T GZipCompressString(Il2CppString* rawString) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x4606984))(0, rawString);
	}
	template <typename T = Il2CppString*> static T GZipDecompressString(Il2CppString* zippedString) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x4606C38))(0, zippedString);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T Compress(Il2CppArray<uintptr_t>* buf, int32_t idx, int32_t len) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, int32_t, int32_t))(Il2CppBase() + 0x4606AE4))(0, buf, idx, len);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T Decompress(Il2CppArray<uintptr_t>* buf, int32_t idx, int32_t len) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, int32_t, int32_t))(Il2CppBase() + 0x4606D9C))(0, buf, idx, len);
	}

};

}
