#pragma once
#include "Il2Cpp/Il2Cpp.h"

class LoadingRoomBundled94
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<LoadingRoomBundle>d__94"));
	}

	template <typename T = int32_t> T& 1__state() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& 2__current() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> T& roomName() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = void> T System_IDisposable_Dispose() {
		return ((T (*)(LoadingRoomBundled94*))(Il2CppBase() + 0x41E3C08))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(LoadingRoomBundled94*))(Il2CppBase() + 0x41E3C0C))(this);
	}
	template <typename T = uintptr_t> T System_Collections_Generic_IEnumeratorSystem_Object_get_Current() {
		return ((T (*)(LoadingRoomBundled94*))(Il2CppBase() + 0x41E3D50))(this);
	}
	template <typename T = void> T System_Collections_IEnumerator_Reset() {
		return ((T (*)(LoadingRoomBundled94*))(Il2CppBase() + 0x41E3D58))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(LoadingRoomBundled94*))(Il2CppBase() + 0x41E3DC0))(this);
	}

};

}
