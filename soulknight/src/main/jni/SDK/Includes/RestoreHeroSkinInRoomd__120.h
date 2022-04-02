#pragma once
#include "Il2Cpp/Il2Cpp.h"

class RestoreHeroSkinInRoomd120
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<RestoreHeroSkinInRoom>d__120"));
	}

	template <typename T = int32_t> T& 1__state() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& 2__current() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& data() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& hero5__2() {
		return *(T*)((uintptr_t)this + 0x88);
	}

	template <typename T = void> T System_IDisposable_Dispose() {
		return ((T (*)(RestoreHeroSkinInRoomd120*))(Il2CppBase() + 0x44FAE34))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(RestoreHeroSkinInRoomd120*))(Il2CppBase() + 0x44FAE38))(this);
	}
	template <typename T = uintptr_t> T System_Collections_Generic_IEnumeratorSystem_Object_get_Current() {
		return ((T (*)(RestoreHeroSkinInRoomd120*))(Il2CppBase() + 0x44FB09C))(this);
	}
	template <typename T = void> T System_Collections_IEnumerator_Reset() {
		return ((T (*)(RestoreHeroSkinInRoomd120*))(Il2CppBase() + 0x44FB0A4))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(RestoreHeroSkinInRoomd120*))(Il2CppBase() + 0x44FB10C))(this);
	}

};

}
