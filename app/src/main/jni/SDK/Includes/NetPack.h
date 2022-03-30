#pragma once
#include "Il2Cpp/Il2Cpp.h"

class NetPack
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "NetPack"));
	}

	template <typename T = uint32_t> static T& HEADER_SIZE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uint32_t> static T& TYPE_INDEX() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uint32_t> static T& OPCODE_INDEX() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uint32_t> static T& REQ_IDX_INDEX() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = unsigned char> static T& TYPE_TCP() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = unsigned char> static T& TYPE_UDP() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = unsigned char> static T& TYPE_UNRELIABLE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = Il2CppArray<uintptr_t>*> T get_Body() {
		return ((T (*)(NetPack*))(Il2CppBase() + 0x44435AC))(this);
	}
	template <typename T = uint32_t> T get_BodySize() {
		return ((T (*)(NetPack*))(Il2CppBase() + 0x4443688))(this);
	}
	template <typename T = void> T Clear() {
		return ((T (*)(NetPack*))(Il2CppBase() + 0x44436F4))(this);
	}
	template <typename T = void> T ResetHead(uintptr_t other) {
		return ((T (*)(NetPack*, uintptr_t))(Il2CppBase() + 0x444384C))(this, other);
	}
	template <typename T = uint64_t> T GetReqKey() {
		return ((T (*)(NetPack*))(Il2CppBase() + 0x4443904))(this);
	}
	template <typename T = uint16_t> T get_MsgId() {
		return ((T (*)(NetPack*))(Il2CppBase() + 0x4443980))(this);
	}
	template <typename T = void> T set_MsgId(uint16_t value) {
		return ((T (*)(NetPack*, uint16_t))(Il2CppBase() + 0x4443774))(this, value);
	}
	template <typename T = unsigned char> T get_Type() {
		return ((T (*)(NetPack*))(Il2CppBase() + 0x4443B00))(this);
	}
	template <typename T = void> T set_Type(unsigned char value) {
		return ((T (*)(NetPack*, unsigned char))(Il2CppBase() + 0x44434A8))(this, value);
	}
	template <typename T = uint32_t> T get_ReqIdx() {
		return ((T (*)(NetPack*))(Il2CppBase() + 0x4443A40))(this);
	}
	template <typename T = void> T set_ReqIdx(uint32_t value) {
		return ((T (*)(NetPack*, uint32_t))(Il2CppBase() + 0x4443B90))(this, value);
	}

};

}
