#pragma once
#include "Il2Cpp/Il2Cpp.h"

class GameModeInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GameModeInfo"));
	}

	template <typename T = uintptr_t> T& badassIcon() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& modeinfos() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = Il2CppDictionary<uintptr_t, uintptr_t>*> T& modeinfoDic() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = uintptr_t> static T& _info() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = Il2CppString*> T get_badassName() {
		return ((T (*)(GameModeInfo*))(Il2CppBase() + 0x442CA6C))(this);
	}
	template <typename T = uintptr_t> static T get_info() {
		return ((T (*)(void *))(Il2CppBase() + 0x442CAFC))(0);
	}
	template <typename T = void> T OnAfterDeserialize() {
		return ((T (*)(GameModeInfo*))(Il2CppBase() + 0x442CBF0))(this);
	}
	template <typename T = void> T OnLoad() {
		return ((T (*)(GameModeInfo*))(Il2CppBase() + 0x442CC5C))(this);
	}
	template <typename T = uintptr_t> T GetModeInfo(uintptr_t mode) {
		return ((T (*)(GameModeInfo*, uintptr_t))(Il2CppBase() + 0x442CE28))(this, mode);
	}
	template <typename T = uintptr_t> T GetModeIcon(uintptr_t mode) {
		return ((T (*)(GameModeInfo*, uintptr_t))(Il2CppBase() + 0x442CFC4))(this, mode);
	}
	template <typename T = uintptr_t> T GetBadassIcon() {
		return ((T (*)(GameModeInfo*))(Il2CppBase() + 0x442D048))(this);
	}
	template <typename T = void> T iFixBaseProxy_OnAfterDeserialize() {
		return ((T (*)(GameModeInfo*))(Il2CppBase() + 0x442D0B0))(this);
	}

};

}
