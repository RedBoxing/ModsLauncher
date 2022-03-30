#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace HTTP {

class FormPart
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HTTP", "FormPart"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& header() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& contents() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& position() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = int64_t> T get_Length() {
		return ((T (*)(FormPart*))(Il2CppBase() + 0x1A28A1C))(this);
	}
	template <typename T = int32_t> T Read(Il2CppArray<uintptr_t>* buffer, int32_t offset, int32_t size) {
		return ((T (*)(FormPart*, Il2CppArray<uintptr_t>*, int32_t, int32_t))(Il2CppBase() + 0x1A28DD0))(this, buffer, offset, size);
	}
	template <typename T = void> T Dispose() {
		return ((T (*)(FormPart*))(Il2CppBase() + 0x1A2996C))(this);
	}

};

}
