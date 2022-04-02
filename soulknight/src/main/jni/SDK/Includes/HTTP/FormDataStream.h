#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace HTTP {

class FormDataStream
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HTTP", "FormDataStream"));
	}

	template <typename T = int64_t> T& position() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& parts() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = bool> T& dirty() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& footer() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = Il2CppString*> T& boundary() {
		return *(T*)((uintptr_t)this + 0x48);
	}

	template <typename T = bool> T get_CanRead() {
		return ((T (*)(FormDataStream*))(Il2CppBase() + 0x1A28414))(this);
	}
	template <typename T = bool> T get_CanSeek() {
		return ((T (*)(FormDataStream*))(Il2CppBase() + 0x1A28474))(this);
	}
	template <typename T = bool> T get_CanTimeout() {
		return ((T (*)(FormDataStream*))(Il2CppBase() + 0x1A284D4))(this);
	}
	template <typename T = bool> T get_CanWrite() {
		return ((T (*)(FormDataStream*))(Il2CppBase() + 0x1A28534))(this);
	}
	template <typename T = int32_t> T get_ReadTimeout() {
		return ((T (*)(FormDataStream*))(Il2CppBase() + 0x1A28594))(this);
	}
	template <typename T = void> T set_ReadTimeout(int32_t value) {
		return ((T (*)(FormDataStream*, int32_t))(Il2CppBase() + 0x1A285F4))(this, value);
	}
	template <typename T = int32_t> T get_WriteTimeout() {
		return ((T (*)(FormDataStream*))(Il2CppBase() + 0x1A28664))(this);
	}
	template <typename T = void> T set_WriteTimeout(int32_t value) {
		return ((T (*)(FormDataStream*, int32_t))(Il2CppBase() + 0x1A286C4))(this, value);
	}
	template <typename T = int64_t> T get_Position() {
		return ((T (*)(FormDataStream*))(Il2CppBase() + 0x1A28734))(this);
	}
	template <typename T = void> T set_Position(int64_t value) {
		return ((T (*)(FormDataStream*, int64_t))(Il2CppBase() + 0x1A28794))(this, value);
	}
	template <typename T = int64_t> T get_Length() {
		return ((T (*)(FormDataStream*))(Il2CppBase() + 0x1A2885C))(this);
	}
	template <typename T = void> T Flush() {
		return ((T (*)(FormDataStream*))(Il2CppBase() + 0x1A28AB0))(this);
	}
	template <typename T = int32_t> T Read(Il2CppArray<uintptr_t>* buffer, int32_t offset, int32_t count) {
		return ((T (*)(FormDataStream*, Il2CppArray<uintptr_t>*, int32_t, int32_t))(Il2CppBase() + 0x1A28B68))(this, buffer, offset, count);
	}
	template <typename T = int64_t> T Seek(int64_t amount, uintptr_t origin) {
		return ((T (*)(FormDataStream*, int64_t, uintptr_t))(Il2CppBase() + 0x1A28F3C))(this, amount, origin);
	}
	template <typename T = void> T SetLength(int64_t len) {
		return ((T (*)(FormDataStream*, int64_t))(Il2CppBase() + 0x1A2900C))(this, len);
	}
	template <typename T = void> T Write(Il2CppArray<uintptr_t>* source, int32_t offset, int32_t count) {
		return ((T (*)(FormDataStream*, Il2CppArray<uintptr_t>*, int32_t, int32_t))(Il2CppBase() + 0x1A290D4))(this, source, offset, count);
	}
	template <typename T = void> T AddPart(Il2CppString* fieldName, Il2CppString* mimeType, uintptr_t contents, Il2CppString* fileName) {
		return ((T (*)(FormDataStream*, Il2CppString*, Il2CppString*, uintptr_t, Il2CppString*))(Il2CppBase() + 0x1A291B4))(this, fieldName, mimeType, contents, fileName);
	}
	template <typename T = void> T AddPart_1(uintptr_t part) {
		return ((T (*)(FormDataStream*, uintptr_t))(Il2CppBase() + 0x1A296FC))(this, part);
	}
	template <typename T = void> T Close() {
		return ((T (*)(FormDataStream*))(Il2CppBase() + 0x1A29800))(this);
	}
	template <typename T = bool> T iFixBaseProxy_get_CanTimeout() {
		return ((T (*)(FormDataStream*))(Il2CppBase() + 0x1A299EC))(this);
	}
	template <typename T = int32_t> T iFixBaseProxy_get_ReadTimeout() {
		return ((T (*)(FormDataStream*))(Il2CppBase() + 0x1A299F4))(this);
	}
	template <typename T = void> T iFixBaseProxy_set_ReadTimeout(int32_t P0) {
		return ((T (*)(FormDataStream*, int32_t))(Il2CppBase() + 0x1A299FC))(this, P0);
	}
	template <typename T = int32_t> T iFixBaseProxy_get_WriteTimeout() {
		return ((T (*)(FormDataStream*))(Il2CppBase() + 0x1A29A04))(this);
	}
	template <typename T = void> T iFixBaseProxy_set_WriteTimeout(int32_t P0) {
		return ((T (*)(FormDataStream*, int32_t))(Il2CppBase() + 0x1A29A0C))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_Close() {
		return ((T (*)(FormDataStream*))(Il2CppBase() + 0x1A29A14))(this);
	}

};

}
