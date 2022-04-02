#pragma once
#include "Il2Cpp/Il2Cpp.h"

class ByteBuffer
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ByteBuffer"));
	}

	template <typename T = uint32_t> static T& DEFAULT_BUFF_SIZE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& __InOut_buf() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uint32_t> T& m_rpos() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uint32_t> T& m_wpos() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& m_buff() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = void> T SetPosRead(uint32_t pos) {
		return ((T (*)(ByteBuffer*, uint32_t))(Il2CppBase() + 0x1DF5760))(this, pos);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_Buffer() {
		return ((T (*)(ByteBuffer*))(Il2CppBase() + 0x1DF5474))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_LeftBuf() {
		return ((T (*)(ByteBuffer*))(Il2CppBase() + 0x1DF57D4))(this);
	}
	template <typename T = uint32_t> T get_Size() {
		return ((T (*)(ByteBuffer*))(Il2CppBase() + 0x1DF58AC))(this);
	}
	template <typename T = void> T Clear(uint32_t pos) {
		return ((T (*)(ByteBuffer*, uint32_t))(Il2CppBase() + 0x1DF590C))(this, pos);
	}
	template <typename T = void> T _Resize(uint32_t newsize) {
		return ((T (*)(ByteBuffer*, uint32_t))(Il2CppBase() + 0x1DF5980))(this, newsize);
	}
	template <typename T = void> T _Reserve(uint32_t newsize) {
		return ((T (*)(ByteBuffer*, uint32_t))(Il2CppBase() + 0x1DF52C0))(this, newsize);
	}
	template <typename T = void> T _Write(Il2CppArray<uintptr_t>* src, uint32_t size) {
		return ((T (*)(ByteBuffer*, Il2CppArray<uintptr_t>*, uint32_t))(Il2CppBase() + 0x1DF54D4))(this, src, size);
	}
	template <typename T = void> T _Write_1(Il2CppArray<uintptr_t>* src, uint32_t offset, uint32_t size) {
		return ((T (*)(ByteBuffer*, Il2CppArray<uintptr_t>*, uint32_t, uint32_t))(Il2CppBase() + 0x1DF569C))(this, src, offset, size);
	}
	template <typename T = void> T _Read(Il2CppArray<uintptr_t>* dest, uint32_t size) {
		return ((T (*)(ByteBuffer*, Il2CppArray<uintptr_t>*, uint32_t))(Il2CppBase() + 0x1DF5A1C))(this, dest, size);
	}
	template <typename T = void> T WriteBool(bool value) {
		return ((T (*)(ByteBuffer*, bool))(Il2CppBase() + 0x1DF5AE8))(this, value);
	}
	template <typename T = void> T WriteInt8(signed char value) {
		return ((T (*)(ByteBuffer*, signed char))(Il2CppBase() + 0x1DF5B94))(this, value);
	}
	template <typename T = void> T WriteUInt8(unsigned char value) {
		return ((T (*)(ByteBuffer*, unsigned char))(Il2CppBase() + 0x1DF5C3C))(this, value);
	}
	template <typename T = void> T WriteByte(unsigned char value) {
		return ((T (*)(ByteBuffer*, unsigned char))(Il2CppBase() + 0x1DF5CB4))(this, value);
	}
	template <typename T = void> T WriteInt16(int16_t value) {
		return ((T (*)(ByteBuffer*, int16_t))(Il2CppBase() + 0x1DF5D5C))(this, value);
	}
	template <typename T = void> T WriteUInt16(uint16_t value) {
		return ((T (*)(ByteBuffer*, uint16_t))(Il2CppBase() + 0x1DF5E34))(this, value);
	}
	template <typename T = void> T WriteInt32(int32_t value) {
		return ((T (*)(ByteBuffer*, int32_t))(Il2CppBase() + 0x1DF5F0C))(this, value);
	}
	template <typename T = void> T WriteUInt32(uint32_t value) {
		return ((T (*)(ByteBuffer*, uint32_t))(Il2CppBase() + 0x1DF5FE4))(this, value);
	}
	template <typename T = void> T WriteInt64(int64_t value) {
		return ((T (*)(ByteBuffer*, int64_t))(Il2CppBase() + 0x1DF60BC))(this, value);
	}
	template <typename T = void> T WriteUInt64(uint64_t value) {
		return ((T (*)(ByteBuffer*, uint64_t))(Il2CppBase() + 0x1DF6194))(this, value);
	}
	template <typename T = void> T WriteFloat(float value) {
		return ((T (*)(ByteBuffer*, float))(Il2CppBase() + 0x1DF626C))(this, value);
	}
	template <typename T = void> T WriteDouble(double value) {
		return ((T (*)(ByteBuffer*, double))(Il2CppBase() + 0x1DF6338))(this, value);
	}
	template <typename T = void> T WriteString(Il2CppString* value) {
		return ((T (*)(ByteBuffer*, Il2CppString*))(Il2CppBase() + 0x1DF4F6C))(this, value);
	}
	template <typename T = void> T WriteBuf(Il2CppArray<uintptr_t>* uid) {
		return ((T (*)(ByteBuffer*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1DF6404))(this, uid);
	}
	template <typename T = signed char> T ReadInt8() {
		return ((T (*)(ByteBuffer*))(Il2CppBase() + 0x1DF648C))(this);
	}
	template <typename T = bool> T ReadBool() {
		return ((T (*)(ByteBuffer*))(Il2CppBase() + 0x1DF6524))(this);
	}
	template <typename T = unsigned char> T ReadUInt8() {
		return ((T (*)(ByteBuffer*))(Il2CppBase() + 0x1DF65E4))(this);
	}
	template <typename T = unsigned char> T ReadByte() {
		return ((T (*)(ByteBuffer*))(Il2CppBase() + 0x1DF667C))(this);
	}
	template <typename T = int16_t> T ReadInt16() {
		return ((T (*)(ByteBuffer*))(Il2CppBase() + 0x1DF6714))(this);
	}
	template <typename T = uint16_t> T ReadUInt16() {
		return ((T (*)(ByteBuffer*))(Il2CppBase() + 0x1DF67D4))(this);
	}
	template <typename T = int32_t> T ReadInt32() {
		return ((T (*)(ByteBuffer*))(Il2CppBase() + 0x1DF6894))(this);
	}
	template <typename T = uint32_t> T ReadUInt32() {
		return ((T (*)(ByteBuffer*))(Il2CppBase() + 0x1DF6954))(this);
	}
	template <typename T = int64_t> T ReadInt64() {
		return ((T (*)(ByteBuffer*))(Il2CppBase() + 0x1DF6A14))(this);
	}
	template <typename T = uint64_t> T ReadUInt64() {
		return ((T (*)(ByteBuffer*))(Il2CppBase() + 0x1DF6AD4))(this);
	}
	template <typename T = float> T ReadFloat() {
		return ((T (*)(ByteBuffer*))(Il2CppBase() + 0x1DF6B94))(this);
	}
	template <typename T = double> T ReadDouble() {
		return ((T (*)(ByteBuffer*))(Il2CppBase() + 0x1DF6C54))(this);
	}
	template <typename T = Il2CppString*> T ReadString() {
		return ((T (*)(ByteBuffer*))(Il2CppBase() + 0x1DF5138))(this);
	}
	template <typename T = Il2CppString*> T ReadStringZipped() {
		return ((T (*)(ByteBuffer*))(Il2CppBase() + 0x1DF6D14))(this);
	}
	template <typename T = uintptr_t> T ReadByTypeId(unsigned char typeByte) {
		return ((T (*)(ByteBuffer*, unsigned char))(Il2CppBase() + 0x1DF6E24))(this, typeByte);
	}
	template <typename T = void> T SetPos(int32_t pos, uint32_t v) {
		return ((T (*)(ByteBuffer*, int32_t, uint32_t))(Il2CppBase() + 0x1DF70AC))(this, pos, v);
	}
	template <typename T = uint32_t> T GetPos(int32_t pos) {
		return ((T (*)(ByteBuffer*, int32_t))(Il2CppBase() + 0x1DF719C))(this, pos);
	}

};

}
