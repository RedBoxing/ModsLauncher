#pragma once
#include "Il2Cpp/Il2Cpp.h"

class cDisplayClass330
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass33_0"));
	}

	template <typename T = void*> T& callback() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& 4__this() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& 9__3() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& 9__4() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = void> T LoadFriendsb__0() {
		return ((T (*)(cDisplayClass330*))(Il2CppBase() + 0x3590F54))(this);
	}
	template <typename T = void> T LoadFriendsb__1() {
		return ((T (*)(cDisplayClass330*))(Il2CppBase() + 0x3590FB8))(this);
	}
	template <typename T = void> T LoadFriendsb__2(uintptr_t status, Il2CppList<uintptr_t>* players) {
		return ((T (*)(cDisplayClass330*, uintptr_t, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x359101C))(this, status, players);
	}
	template <typename T = void> T LoadFriendsb__3() {
		return ((T (*)(cDisplayClass330*))(Il2CppBase() + 0x359121C))(this);
	}
	template <typename T = void> T LoadFriendsb__4() {
		return ((T (*)(cDisplayClass330*))(Il2CppBase() + 0x3591280))(this);
	}

};

}
