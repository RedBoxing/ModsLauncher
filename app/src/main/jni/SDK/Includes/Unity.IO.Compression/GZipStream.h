#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace Unity.IO.Compression {

class GZipStream
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Unity.IO.Compression", "GZipStream"));
	}

	template <typename T = uintptr_t> T& deflateStream() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = void> T SetDeflateStreamFileFormatter(uintptr_t mode) {
		return ((T (*)(GZipStream*, uintptr_t))(Il2CppBase() + 0x46377F4))(this, mode);
	}
	template <typename T = bool> T get_CanRead() {
		return ((T (*)(GZipStream*))(Il2CppBase() + 0x4637910))(this);
	}
	template <typename T = bool> T get_CanWrite() {
		return ((T (*)(GZipStream*))(Il2CppBase() + 0x4637988))(this);
	}
	template <typename T = bool> T get_CanSeek() {
		return ((T (*)(GZipStream*))(Il2CppBase() + 0x4637A00))(this);
	}
	template <typename T = int64_t> T get_Length() {
		return ((T (*)(GZipStream*))(Il2CppBase() + 0x4637A78))(this);
	}
	template <typename T = int64_t> T get_Position() {
		return ((T (*)(GZipStream*))(Il2CppBase() + 0x4637B40))(this);
	}
	template <typename T = void> T set_Position(int64_t value) {
		return ((T (*)(GZipStream*, int64_t))(Il2CppBase() + 0x4637C08))(this, value);
	}
	template <typename T = void> T Flush() {
		return ((T (*)(GZipStream*))(Il2CppBase() + 0x4637CE0))(this);
	}
	template <typename T = int64_t> T Seek(int64_t offset, uintptr_t origin) {
		return ((T (*)(GZipStream*, int64_t, uintptr_t))(Il2CppBase() + 0x4637DCC))(this, offset, origin);
	}
	template <typename T = void> T SetLength(int64_t value) {
		return ((T (*)(GZipStream*, int64_t))(Il2CppBase() + 0x4637EAC))(this, value);
	}
	template <typename T = uintptr_t> T BeginRead(Il2CppArray<uintptr_t>* array, int32_t offset, int32_t count, uintptr_t asyncCallback, uintptr_t asyncState) {
		return ((T (*)(GZipStream*, Il2CppArray<uintptr_t>*, int32_t, int32_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x4637F84))(this, array, offset, count, asyncCallback, asyncState);
	}
	template <typename T = int32_t> T EndRead(uintptr_t asyncResult) {
		return ((T (*)(GZipStream*, uintptr_t))(Il2CppBase() + 0x46380CC))(this, asyncResult);
	}
	template <typename T = uintptr_t> T BeginWrite(Il2CppArray<uintptr_t>* array, int32_t offset, int32_t count, uintptr_t asyncCallback, uintptr_t asyncState) {
		return ((T (*)(GZipStream*, Il2CppArray<uintptr_t>*, int32_t, int32_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x46381CC))(this, array, offset, count, asyncCallback, asyncState);
	}
	template <typename T = void> T EndWrite(uintptr_t asyncResult) {
		return ((T (*)(GZipStream*, uintptr_t))(Il2CppBase() + 0x4638314))(this, asyncResult);
	}
	template <typename T = int32_t> T Read(Il2CppArray<uintptr_t>* array, int32_t offset, int32_t count) {
		return ((T (*)(GZipStream*, Il2CppArray<uintptr_t>*, int32_t, int32_t))(Il2CppBase() + 0x4638414))(this, array, offset, count);
	}
	template <typename T = void> T Write(Il2CppArray<uintptr_t>* array, int32_t offset, int32_t count) {
		return ((T (*)(GZipStream*, Il2CppArray<uintptr_t>*, int32_t, int32_t))(Il2CppBase() + 0x463853C))(this, array, offset, count);
	}
	template <typename T = void> T Dispose(bool disposing) {
		return ((T (*)(GZipStream*, bool))(Il2CppBase() + 0x4638664))(this, disposing);
	}
	template <typename T = uintptr_t> T get_BaseStream() {
		return ((T (*)(GZipStream*))(Il2CppBase() + 0x4638750))(this);
	}
	template <typename T = uintptr_t> T iFixBaseProxy_BeginRead(Il2CppArray<uintptr_t>* P0, int32_t P1, int32_t P2, uintptr_t P3, uintptr_t P4) {
		return ((T (*)(GZipStream*, Il2CppArray<uintptr_t>*, int32_t, int32_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x46387C0))(this, P0, P1, P2, P3, P4);
	}
	template <typename T = int32_t> T iFixBaseProxy_EndRead(uintptr_t P0) {
		return ((T (*)(GZipStream*, uintptr_t))(Il2CppBase() + 0x46387C8))(this, P0);
	}
	template <typename T = uintptr_t> T iFixBaseProxy_BeginWrite(Il2CppArray<uintptr_t>* P0, int32_t P1, int32_t P2, uintptr_t P3, uintptr_t P4) {
		return ((T (*)(GZipStream*, Il2CppArray<uintptr_t>*, int32_t, int32_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x46387D0))(this, P0, P1, P2, P3, P4);
	}
	template <typename T = void> T iFixBaseProxy_EndWrite(uintptr_t P0) {
		return ((T (*)(GZipStream*, uintptr_t))(Il2CppBase() + 0x46387D8))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_Dispose(bool P0) {
		return ((T (*)(GZipStream*, bool))(Il2CppBase() + 0x46387E0))(this, P0);
	}

};

}
