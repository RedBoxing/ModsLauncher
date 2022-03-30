#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace Unity.IO.Compression {

class Crc32Helper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Unity.IO.Compression", "Crc32Helper"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> static T& crcTable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = uint32_t> static T UpdateCrc32(uint32_t crc32, Il2CppArray<uintptr_t>* buffer, int32_t offset, int32_t length) {
		return ((T (*)(void *, uint32_t, Il2CppArray<uintptr_t>*, int32_t, int32_t))(Il2CppBase() + 0x462E870))(0, crc32, buffer, offset, length);
	}

};

}
