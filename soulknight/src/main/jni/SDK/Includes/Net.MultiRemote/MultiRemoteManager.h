#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace Net.MultiRemote {

class MultiRemoteManager
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Net.MultiRemote", "MultiRemoteManager"));
	}

	template <typename T = int32_t> static T& TIMEOUT() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& client() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> static T& TOKEN_KEY() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& QUICK_MATCH() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& UPDATE_ARENA() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& CONFIRM_REPORT() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& updateArenaCts() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& updateArenaCt() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = Il2CppString*> T get_ArenaSvr() {
		return ((T (*)(MultiRemoteManager*))(Il2CppBase() + 0x4385B6C))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(MultiRemoteManager*))(Il2CppBase() + 0x4385C30))(this);
	}
	template <typename T = void*> T QueryData(Il2CppString* api, uintptr_t args) {
		return ((T (*)(MultiRemoteManager*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x0))(this, api, args);
	}
	template <typename T = void*> T CreateRoom(uintptr_t arenaArgs) {
		return ((T (*)(MultiRemoteManager*, uintptr_t))(Il2CppBase() + 0x4385EB0))(this, arenaArgs);
	}
	template <typename T = void*> T QueryArena(uintptr_t args) {
		return ((T (*)(MultiRemoteManager*, uintptr_t))(Il2CppBase() + 0x4386014))(this, args);
	}
	template <typename T = void*> T QueryQuickMatch(uintptr_t arenaArgs) {
		return ((T (*)(MultiRemoteManager*, uintptr_t))(Il2CppBase() + 0x4386178))(this, arenaArgs);
	}
	template <typename T = void*> T UpdateArena(uintptr_t updateArgs) {
		return ((T (*)(MultiRemoteManager*, uintptr_t))(Il2CppBase() + 0x436F110))(this, updateArgs);
	}
	template <typename T = void*> T Report(uintptr_t reportArgs) {
		return ((T (*)(MultiRemoteManager*, uintptr_t))(Il2CppBase() + 0x43862DC))(this, reportArgs);
	}
	template <typename T = void*> T UpdateArenaTryCount(uintptr_t updateArgs, int32_t count) {
		return ((T (*)(MultiRemoteManager*, uintptr_t, int32_t))(Il2CppBase() + 0x4370498))(this, updateArgs, count);
	}
	template <typename T = uintptr_t> static T GetArenaWhereInput() {
		return ((T (*)(void *))(Il2CppBase() + 0x4386440))(0);
	}
	template <typename T = uintptr_t> static T GetArenaUpdateInput(bool newGame, bool joinable, uintptr_t status) {
		return ((T (*)(void *, bool, bool, uintptr_t))(Il2CppBase() + 0x4386530))(0, newGame, joinable, status);
	}
	template <typename T = uintptr_t> static T GetArenaUpdateArgs(bool newGame, bool joinable, uintptr_t status) {
		return ((T (*)(void *, bool, bool, uintptr_t))(Il2CppBase() + 0x436EFF0))(0, newGame, joinable, status);
	}

};

}
