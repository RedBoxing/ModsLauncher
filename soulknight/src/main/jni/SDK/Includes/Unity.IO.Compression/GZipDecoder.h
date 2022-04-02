#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace Unity.IO.Compression {

class GZipDecoder
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Unity.IO.Compression", "GZipDecoder"));
	}

	template <typename T = uintptr_t> T& gzipHeaderSubstate() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& gzipFooterSubstate() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& gzip_header_flag() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& gzip_header_xlen() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uint32_t> T& expectedCrc32() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uint32_t> T& expectedOutputStreamSizeModulo() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = int32_t> T& loopCounter() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uint32_t> T& actualCrc32() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = int64_t> T& actualStreamSizeModulo() {
		return *(T*)((uintptr_t)this + 0x30);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(GZipDecoder*))(Il2CppBase() + 0x46369A4))(this);
	}
	template <typename T = bool> T ReadHeader(uintptr_t input) {
		return ((T (*)(GZipDecoder*, uintptr_t))(Il2CppBase() + 0x4636A0C))(this, input);
	}
	template <typename T = bool> T ReadFooter(uintptr_t input) {
		return ((T (*)(GZipDecoder*, uintptr_t))(Il2CppBase() + 0x4636ED0))(this, input);
	}
	template <typename T = void> T UpdateWithBytesRead(Il2CppArray<uintptr_t>* buffer, int32_t offset, int32_t copied) {
		return ((T (*)(GZipDecoder*, Il2CppArray<uintptr_t>*, int32_t, int32_t))(Il2CppBase() + 0x46370BC))(this, buffer, offset, copied);
	}
	template <typename T = void> T Validate() {
		return ((T (*)(GZipDecoder*))(Il2CppBase() + 0x46371D8))(this);
	}

};

}
