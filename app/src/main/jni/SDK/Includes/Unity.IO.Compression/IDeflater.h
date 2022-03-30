#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace Unity.IO.Compression {

class IDeflater
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Unity.IO.Compression", "IDeflater"));
	}


	template <typename T = bool> T NeedsInput() {
		return ((T (*)(IDeflater*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T SetInput(Il2CppArray<uintptr_t>* inputBuffer, int32_t startIndex, int32_t count) {
		return ((T (*)(IDeflater*, Il2CppArray<uintptr_t>*, int32_t, int32_t))(Il2CppBase() + 0x0))(this, inputBuffer, startIndex, count);
	}
	template <typename T = int32_t> T GetDeflateOutput(Il2CppArray<uintptr_t>* outputBuffer) {
		return ((T (*)(IDeflater*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x0))(this, outputBuffer);
	}
	template <typename T = bool> T Finish(Il2CppArray<uintptr_t>* outputBuffer, uintptr_t* bytesRead) {
		return ((T (*)(IDeflater*, Il2CppArray<uintptr_t>*, uintptr_t*))(Il2CppBase() + 0x0))(this, outputBuffer, bytesRead);
	}

};

}
