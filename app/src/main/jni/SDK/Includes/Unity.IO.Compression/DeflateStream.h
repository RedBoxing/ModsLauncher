#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace Unity.IO.Compression {

class DeflateStream
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Unity.IO.Compression", "DeflateStream"));
	}

	template <typename T = int32_t> static T& DefaultBufferSize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& _stream() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& _mode() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = bool> T& _leaveOpen() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& inflater() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& deflater() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& buffer() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = int32_t> T& asyncOperations() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& m_CallBack() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& m_AsyncWriterDelegate() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uintptr_t> T& formatWriter() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = bool> T& wroteHeader() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = bool> T& wroteBytes() {
		return *(T*)((uintptr_t)this + 0x71);
	}

	template <typename T = uintptr_t> static T CreateDeflater() {
		return ((T (*)(void *))(Il2CppBase() + 0x462F064))(0);
	}
	template <typename T = uintptr_t> static T GetDeflaterType() {
		return ((T (*)(void *))(Il2CppBase() + 0x462F158))(0);
	}
	template <typename T = void> T SetFileFormatReader(uintptr_t reader) {
		return ((T (*)(DeflateStream*, uintptr_t))(Il2CppBase() + 0x462F27C))(this, reader);
	}
	template <typename T = void> T SetFileFormatWriter(uintptr_t writer) {
		return ((T (*)(DeflateStream*, uintptr_t))(Il2CppBase() + 0x462F398))(this, writer);
	}
	template <typename T = uintptr_t> T get_BaseStream() {
		return ((T (*)(DeflateStream*))(Il2CppBase() + 0x462F410))(this);
	}
	template <typename T = bool> T get_CanRead() {
		return ((T (*)(DeflateStream*))(Il2CppBase() + 0x462F470))(this);
	}
	template <typename T = bool> T get_CanWrite() {
		return ((T (*)(DeflateStream*))(Il2CppBase() + 0x462F4F4))(this);
	}
	template <typename T = bool> T get_CanSeek() {
		return ((T (*)(DeflateStream*))(Il2CppBase() + 0x462F57C))(this);
	}
	template <typename T = int64_t> T get_Length() {
		return ((T (*)(DeflateStream*))(Il2CppBase() + 0x462F5DC))(this);
	}
	template <typename T = int64_t> T get_Position() {
		return ((T (*)(DeflateStream*))(Il2CppBase() + 0x462F6A4))(this);
	}
	template <typename T = void> T set_Position(int64_t value) {
		return ((T (*)(DeflateStream*, int64_t))(Il2CppBase() + 0x462F76C))(this, value);
	}
	template <typename T = void> T Flush() {
		return ((T (*)(DeflateStream*))(Il2CppBase() + 0x462F844))(this);
	}
	template <typename T = int64_t> T Seek(int64_t offset, uintptr_t origin) {
		return ((T (*)(DeflateStream*, int64_t, uintptr_t))(Il2CppBase() + 0x462F984))(this, offset, origin);
	}
	template <typename T = void> T SetLength(int64_t value) {
		return ((T (*)(DeflateStream*, int64_t))(Il2CppBase() + 0x462FA64))(this, value);
	}
	template <typename T = int32_t> T Read(Il2CppArray<uintptr_t>* array, int32_t offset, int32_t count) {
		return ((T (*)(DeflateStream*, Il2CppArray<uintptr_t>*, int32_t, int32_t))(Il2CppBase() + 0x462FB3C))(this, array, offset, count);
	}
	template <typename T = void> T ValidateParameters(Il2CppArray<uintptr_t>* array, int32_t offset, int32_t count) {
		return ((T (*)(DeflateStream*, Il2CppArray<uintptr_t>*, int32_t, int32_t))(Il2CppBase() + 0x462FDB8))(this, array, offset, count);
	}
	template <typename T = void> T EnsureNotDisposed() {
		return ((T (*)(DeflateStream*))(Il2CppBase() + 0x462F8A4))(this);
	}
	template <typename T = void> T EnsureDecompressionMode() {
		return ((T (*)(DeflateStream*))(Il2CppBase() + 0x462FCDC))(this);
	}
	template <typename T = void> T EnsureCompressionMode() {
		return ((T (*)(DeflateStream*))(Il2CppBase() + 0x46302B8))(this);
	}
	template <typename T = uintptr_t> T BeginRead(Il2CppArray<uintptr_t>* array, int32_t offset, int32_t count, uintptr_t asyncCallback, uintptr_t asyncState) {
		return ((T (*)(DeflateStream*, Il2CppArray<uintptr_t>*, int32_t, int32_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x4630398))(this, array, offset, count, asyncCallback, asyncState);
	}
	template <typename T = void> T ReadCallback(uintptr_t baseStreamResult) {
		return ((T (*)(DeflateStream*, uintptr_t))(Il2CppBase() + 0x4630854))(this, baseStreamResult);
	}
	template <typename T = int32_t> T EndRead(uintptr_t asyncResult) {
		return ((T (*)(DeflateStream*, uintptr_t))(Il2CppBase() + 0x4630D1C))(this, asyncResult);
	}
	template <typename T = void> T Write(Il2CppArray<uintptr_t>* array, int32_t offset, int32_t count) {
		return ((T (*)(DeflateStream*, Il2CppArray<uintptr_t>*, int32_t, int32_t))(Il2CppBase() + 0x4631254))(this, array, offset, count);
	}
	template <typename T = void> T InternalWrite(Il2CppArray<uintptr_t>* array, int32_t offset, int32_t count, bool isAsync) {
		return ((T (*)(DeflateStream*, Il2CppArray<uintptr_t>*, int32_t, int32_t, bool))(Il2CppBase() + 0x4631318))(this, array, offset, count, isAsync);
	}
	template <typename T = void> T WriteDeflaterOutput(bool isAsync) {
		return ((T (*)(DeflateStream*, bool))(Il2CppBase() + 0x463169C))(this, isAsync);
	}
	template <typename T = void> T DoWrite(Il2CppArray<uintptr_t>* array, int32_t offset, int32_t count, bool isAsync) {
		return ((T (*)(DeflateStream*, Il2CppArray<uintptr_t>*, int32_t, int32_t, bool))(Il2CppBase() + 0x4631858))(this, array, offset, count, isAsync);
	}
	template <typename T = void> T DoMaintenance(Il2CppArray<uintptr_t>* array, int32_t offset, int32_t count) {
		return ((T (*)(DeflateStream*, Il2CppArray<uintptr_t>*, int32_t, int32_t))(Il2CppBase() + 0x4631480))(this, array, offset, count);
	}
	template <typename T = void> T PurgeBuffers(bool disposing) {
		return ((T (*)(DeflateStream*, bool))(Il2CppBase() + 0x463197C))(this, disposing);
	}
	template <typename T = void> T Dispose(bool disposing) {
		return ((T (*)(DeflateStream*, bool))(Il2CppBase() + 0x4631BB8))(this, disposing);
	}
	template <typename T = uintptr_t> T BeginWrite(Il2CppArray<uintptr_t>* array, int32_t offset, int32_t count, uintptr_t asyncCallback, uintptr_t asyncState) {
		return ((T (*)(DeflateStream*, Il2CppArray<uintptr_t>*, int32_t, int32_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x4631E4C))(this, array, offset, count, asyncCallback, asyncState);
	}
	template <typename T = void> T WriteCallback(uintptr_t asyncResult) {
		return ((T (*)(DeflateStream*, uintptr_t))(Il2CppBase() + 0x46321B0))(this, asyncResult);
	}
	template <typename T = void> T EndWrite(uintptr_t asyncResult) {
		return ((T (*)(DeflateStream*, uintptr_t))(Il2CppBase() + 0x463247C))(this, asyncResult);
	}
	template <typename T = void> T CheckEndXxxxLegalStateAndParams(uintptr_t asyncResult) {
		return ((T (*)(DeflateStream*, uintptr_t))(Il2CppBase() + 0x4630F54))(this, asyncResult);
	}
	template <typename T = void> T AwaitAsyncResultCompletion(uintptr_t asyncResult) {
		return ((T (*)(DeflateStream*, uintptr_t))(Il2CppBase() + 0x46310C0))(this, asyncResult);
	}
	template <typename T = uintptr_t> T iFixBaseProxy_BeginRead(Il2CppArray<uintptr_t>* P0, int32_t P1, int32_t P2, uintptr_t P3, uintptr_t P4) {
		return ((T (*)(DeflateStream*, Il2CppArray<uintptr_t>*, int32_t, int32_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x46328E0))(this, P0, P1, P2, P3, P4);
	}
	template <typename T = int32_t> T iFixBaseProxy_EndRead(uintptr_t P0) {
		return ((T (*)(DeflateStream*, uintptr_t))(Il2CppBase() + 0x46328E8))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_Dispose(bool P0) {
		return ((T (*)(DeflateStream*, bool))(Il2CppBase() + 0x46328F0))(this, P0);
	}
	template <typename T = uintptr_t> T iFixBaseProxy_BeginWrite(Il2CppArray<uintptr_t>* P0, int32_t P1, int32_t P2, uintptr_t P3, uintptr_t P4) {
		return ((T (*)(DeflateStream*, Il2CppArray<uintptr_t>*, int32_t, int32_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x46328FC))(this, P0, P1, P2, P3, P4);
	}
	template <typename T = void> T iFixBaseProxy_EndWrite(uintptr_t P0) {
		return ((T (*)(DeflateStream*, uintptr_t))(Il2CppBase() + 0x4632904))(this, P0);
	}

};

}
