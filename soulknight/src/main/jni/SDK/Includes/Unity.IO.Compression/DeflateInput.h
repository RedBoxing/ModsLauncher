#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace Unity.IO.Compression {

class DeflateInput
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Unity.IO.Compression", "DeflateInput"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& buffer() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& count() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& startIndex() {
		return *(T*)((uintptr_t)this + 0x1C);
	}

	template <typename T = Il2CppArray<uintptr_t>*> T get_Buffer() {
		return ((T (*)(DeflateInput*))(Il2CppBase() + 0x462E554))(this);
	}
	template <typename T = void> T set_Buffer(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(DeflateInput*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x462EA60))(this, value);
	}
	template <typename T = int32_t> T get_Count() {
		return ((T (*)(DeflateInput*))(Il2CppBase() + 0x462E108))(this);
	}
	template <typename T = void> T set_Count(int32_t value) {
		return ((T (*)(DeflateInput*, int32_t))(Il2CppBase() + 0x462EAD4))(this, value);
	}
	template <typename T = int32_t> T get_StartIndex() {
		return ((T (*)(DeflateInput*))(Il2CppBase() + 0x462E5B4))(this);
	}
	template <typename T = void> T set_StartIndex(int32_t value) {
		return ((T (*)(DeflateInput*, int32_t))(Il2CppBase() + 0x462EB48))(this, value);
	}
	template <typename T = void> T ConsumeBytes(int32_t n) {
		return ((T (*)(DeflateInput*, int32_t))(Il2CppBase() + 0x462E6F4))(this, n);
	}
	template <typename T = uintptr_t> T DumpState() {
		return ((T (*)(DeflateInput*))(Il2CppBase() + 0x462EBBC))(this);
	}
	template <typename T = void> T RestoreState(uintptr_t state) {
		return ((T (*)(DeflateInput*, uintptr_t))(Il2CppBase() + 0x462EC1C))(this, state);
	}

};

}
