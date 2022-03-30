#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace Unity.IO.Compression {

class GZipFormatter
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Unity.IO.Compression", "GZipFormatter"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& headerBytes() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uint32_t> T& _crc32() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int64_t> T& _inputStreamSizeModulo() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = Il2CppArray<uintptr_t>*> T GetHeader() {
		return ((T (*)(GZipFormatter*))(Il2CppBase() + 0x46373A4))(this);
	}
	template <typename T = void> T UpdateWithBytesRead(Il2CppArray<uintptr_t>* buffer, int32_t offset, int32_t bytesToCopy) {
		return ((T (*)(GZipFormatter*, Il2CppArray<uintptr_t>*, int32_t, int32_t))(Il2CppBase() + 0x4637404))(this, buffer, offset, bytesToCopy);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetFooter() {
		return ((T (*)(GZipFormatter*))(Il2CppBase() + 0x4637520))(this);
	}
	template <typename T = void> T WriteUInt32(Il2CppArray<uintptr_t>* b, uint32_t value, int32_t startIndex) {
		return ((T (*)(GZipFormatter*, Il2CppArray<uintptr_t>*, uint32_t, int32_t))(Il2CppBase() + 0x46375E4))(this, b, value, startIndex);
	}

};

}
