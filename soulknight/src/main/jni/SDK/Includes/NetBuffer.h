#pragma once
#include "Il2Cpp/Il2Cpp.h"

class NetBuffer
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "NetBuffer"));
	}

	template <typename T = int32_t> static T& DEFAULT_BUFF_SIZE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uint32_t> T& m_rpos() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uint32_t> T& m_wpos() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& m_buff() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = Il2CppArray<uintptr_t>*> T get_Buffer() {
		return ((T (*)(NetBuffer*))(Il2CppBase() + 0x438821C))(this);
	}
	template <typename T = uint32_t> T get_ReadPos() {
		return ((T (*)(NetBuffer*))(Il2CppBase() + 0x438827C))(this);
	}
	template <typename T = uint32_t> T get_WritePos() {
		return ((T (*)(NetBuffer*))(Il2CppBase() + 0x43882DC))(this);
	}
	template <typename T = void> T Clear() {
		return ((T (*)(NetBuffer*))(Il2CppBase() + 0x438833C))(this);
	}
	template <typename T = uint32_t> T readableBytes() {
		return ((T (*)(NetBuffer*))(Il2CppBase() + 0x438839C))(this);
	}
	template <typename T = uint32_t> T writableBytes() {
		return ((T (*)(NetBuffer*))(Il2CppBase() + 0x4388400))(this);
	}
	template <typename T = uint32_t> T prependBytes() {
		return ((T (*)(NetBuffer*))(Il2CppBase() + 0x4388478))(this);
	}
	template <typename T = void> T readerMove(uint32_t len) {
		return ((T (*)(NetBuffer*, uint32_t))(Il2CppBase() + 0x43884D8))(this, len);
	}
	template <typename T = void> T writerMove(uint32_t len) {
		return ((T (*)(NetBuffer*, uint32_t))(Il2CppBase() + 0x438856C))(this, len);
	}
	template <typename T = void> T ensureWritableBytes(uint32_t len) {
		return ((T (*)(NetBuffer*, uint32_t))(Il2CppBase() + 0x43885F4))(this, len);
	}
	template <typename T = void> T makeSpace(uint32_t len) {
		return ((T (*)(NetBuffer*, uint32_t))(Il2CppBase() + 0x438868C))(this, len);
	}
	template <typename T = void> T Write(Il2CppArray<uintptr_t>* src, uint32_t size) {
		return ((T (*)(NetBuffer*, Il2CppArray<uintptr_t>*, uint32_t))(Il2CppBase() + 0x4388804))(this, src, size);
	}
	template <typename T = void> T Read(Il2CppArray<uintptr_t>* dest, uint32_t size) {
		return ((T (*)(NetBuffer*, Il2CppArray<uintptr_t>*, uint32_t))(Il2CppBase() + 0x43888B0))(this, dest, size);
	}
	template <typename T = void> T WriteLength(uint16_t len) {
		return ((T (*)(NetBuffer*, uint16_t))(Il2CppBase() + 0x438896C))(this, len);
	}
	template <typename T = uint16_t> T ReadLength() {
		return ((T (*)(NetBuffer*))(Il2CppBase() + 0x4388A54))(this);
	}
	template <typename T = uint16_t> T ShowLength() {
		return ((T (*)(NetBuffer*))(Il2CppBase() + 0x4388B44))(this);
	}
	template <typename T = void> T _Resize(uint32_t newsize) {
		return ((T (*)(NetBuffer*, uint32_t))(Il2CppBase() + 0x4388768))(this, newsize);
	}
	template <typename T = void> T _Reserve(uint32_t newsize) {
		return ((T (*)(NetBuffer*, uint32_t))(Il2CppBase() + 0x4388114))(this, newsize);
	}

};

}
