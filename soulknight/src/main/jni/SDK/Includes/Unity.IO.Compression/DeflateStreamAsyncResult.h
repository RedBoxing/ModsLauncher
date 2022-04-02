#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace Unity.IO.Compression {

class DeflateStreamAsyncResult
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Unity.IO.Compression", "DeflateStreamAsyncResult"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& buffer() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& offset() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& count() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = bool> T& isWrite() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& m_AsyncObject() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& m_AsyncState() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& m_AsyncCallback() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& m_Result() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = bool> T& m_CompletedSynchronously() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = int32_t> T& m_InvokedCallback() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = int32_t> T& m_Completed() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& m_Event() {
		return *(T*)((uintptr_t)this + 0x58);
	}

	template <typename T = uintptr_t> T get_AsyncState() {
		return ((T (*)(DeflateStreamAsyncResult*))(Il2CppBase() + 0x4633114))(this);
	}
	template <typename T = uintptr_t> T get_AsyncWaitHandle() {
		return ((T (*)(DeflateStreamAsyncResult*))(Il2CppBase() + 0x4632620))(this);
	}
	template <typename T = bool> T get_CompletedSynchronously() {
		return ((T (*)(DeflateStreamAsyncResult*))(Il2CppBase() + 0x4633174))(this);
	}
	template <typename T = bool> T get_IsCompleted() {
		return ((T (*)(DeflateStreamAsyncResult*))(Il2CppBase() + 0x46307EC))(this);
	}
	template <typename T = uintptr_t> T get_Result() {
		return ((T (*)(DeflateStreamAsyncResult*))(Il2CppBase() + 0x46311F4))(this);
	}
	template <typename T = void> T Close() {
		return ((T (*)(DeflateStreamAsyncResult*))(Il2CppBase() + 0x463278C))(this);
	}
	template <typename T = void> T InvokeCallback(bool completedSynchronously, uintptr_t result) {
		return ((T (*)(DeflateStreamAsyncResult*, bool, uintptr_t))(Il2CppBase() + 0x4630768))(this, completedSynchronously, result);
	}
	template <typename T = void> T InvokeCallback_1(uintptr_t result) {
		return ((T (*)(DeflateStreamAsyncResult*, uintptr_t))(Il2CppBase() + 0x4630CA4))(this, result);
	}
	template <typename T = void> T Complete(bool completedSynchronously, uintptr_t result) {
		return ((T (*)(DeflateStreamAsyncResult*, bool, uintptr_t))(Il2CppBase() + 0x46331D4))(this, completedSynchronously, result);
	}
	template <typename T = void> T Complete_1(uintptr_t result) {
		return ((T (*)(DeflateStreamAsyncResult*, uintptr_t))(Il2CppBase() + 0x463325C))(this, result);
	}

};

}
