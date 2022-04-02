#pragma once
#include "Il2Cpp/Il2Cpp.h"

class ShowNPCSkinRandomlyFromPlayerIgnoreFestivalDecorate
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ShowNPCSkinRandomlyFromPlayerIgnoreFestivalDecorate"));
	}

	template <typename T = int32_t> T& ShowSkinFromPlayerRate() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> static T& Key() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& Roots() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = bool> T& showSkinFromPlayer() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = bool> T& AutoFlush() {
		return *(T*)((uintptr_t)this + 0x29);
	}

	template <typename T = void> T Start() {
		return ((T (*)(ShowNPCSkinRandomlyFromPlayerIgnoreFestivalDecorate*))(Il2CppBase() + 0x182E778))(this);
	}
	template <typename T = void> T Flush() {
		return ((T (*)(ShowNPCSkinRandomlyFromPlayerIgnoreFestivalDecorate*))(Il2CppBase() + 0x182E7EC))(this);
	}

};

}
