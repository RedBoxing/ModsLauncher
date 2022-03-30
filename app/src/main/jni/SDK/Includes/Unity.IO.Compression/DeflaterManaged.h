#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace Unity.IO.Compression {

class DeflaterManaged
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Unity.IO.Compression", "DeflaterManaged"));
	}

	template <typename T = int32_t> static T& MinBlockSize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& MaxHeaderFooterGoo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& CleanCopySize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = double> static T& BadCompressionThreshold() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& deflateEncoder() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& copyEncoder() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& input() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& output() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& processingState() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& inputFromHistory() {
		return *(T*)((uintptr_t)this + 0x38);
	}

	template <typename T = bool> T NeedsInput() {
		return ((T (*)(DeflaterManaged*))(Il2CppBase() + 0x4633490))(this);
	}
	template <typename T = bool> T Unity_IO_Compression_IDeflater_NeedsInput() {
		return ((T (*)(DeflaterManaged*))(Il2CppBase() + 0x4633574))(this);
	}
	template <typename T = void> T Unity_IO_Compression_IDeflater_SetInput(Il2CppArray<uintptr_t>* inputBuffer, int32_t startIndex, int32_t count) {
		return ((T (*)(DeflaterManaged*, Il2CppArray<uintptr_t>*, int32_t, int32_t))(Il2CppBase() + 0x4633684))(this, inputBuffer, startIndex, count);
	}
	template <typename T = int32_t> T Unity_IO_Compression_IDeflater_GetDeflateOutput(Il2CppArray<uintptr_t>* outputBuffer) {
		return ((T (*)(DeflaterManaged*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4633798))(this, outputBuffer);
	}
	template <typename T = bool> T Unity_IO_Compression_IDeflater_Finish(Il2CppArray<uintptr_t>* outputBuffer, uintptr_t* bytesRead) {
		return ((T (*)(DeflaterManaged*, Il2CppArray<uintptr_t>*, uintptr_t*))(Il2CppBase() + 0x4634204))(this, outputBuffer, bytesRead);
	}
	template <typename T = void> T System_IDisposable_Dispose() {
		return ((T (*)(DeflaterManaged*))(Il2CppBase() + 0x4634390))(this);
	}
	template <typename T = void> T Dispose(bool disposing) {
		return ((T (*)(DeflaterManaged*, bool))(Il2CppBase() + 0x46343EC))(this, disposing);
	}
	template <typename T = bool> T UseCompressed(double ratio) {
		return ((T (*)(DeflaterManaged*, double))(Il2CppBase() + 0x4633E2C))(this, ratio);
	}
	template <typename T = void> T FlushInputWindows() {
		return ((T (*)(DeflaterManaged*))(Il2CppBase() + 0x4633F2C))(this);
	}
	template <typename T = void> T WriteFinal() {
		return ((T (*)(DeflaterManaged*))(Il2CppBase() + 0x4634310))(this);
	}

};

}
