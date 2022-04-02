#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace Net.MultiRemote {

class ArenaWhereInput
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Net.MultiRemote", "ArenaWhereInput"));
	}

	template <typename T = Il2CppString*> T& roomId() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& token() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = Il2CppString*> T get_roomId() {
		return ((T (*)(ArenaWhereInput*))(Il2CppBase() + 0x4385508))(this);
	}
	template <typename T = void> T set_roomId(Il2CppString* value) {
		return ((T (*)(ArenaWhereInput*, Il2CppString*))(Il2CppBase() + 0x4385510))(this, value);
	}
	template <typename T = Il2CppString*> T get_token() {
		return ((T (*)(ArenaWhereInput*))(Il2CppBase() + 0x4385518))(this);
	}
	template <typename T = void> T set_token(Il2CppString* value) {
		return ((T (*)(ArenaWhereInput*, Il2CppString*))(Il2CppBase() + 0x4385520))(this, value);
	}

};

}
