#pragma once
#include "Il2Cpp/Il2Cpp.h"

class DownloadPromoteVideosd20
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<DownloadPromoteVideos>d__20"));
	}

	template <typename T = int32_t> T& 1__state() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& 2__current() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& 4__this() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& wait5__2() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = float> T& totalTime5__3() {
		return *(T*)((uintptr_t)this + 0x30);
	}

	template <typename T = void> T System_IDisposable_Dispose() {
		return ((T (*)(DownloadPromoteVideosd20*))(Il2CppBase() + 0x4183C20))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(DownloadPromoteVideosd20*))(Il2CppBase() + 0x4183C24))(this);
	}
	template <typename T = uintptr_t> T System_Collections_Generic_IEnumeratorSystem_Object_get_Current() {
		return ((T (*)(DownloadPromoteVideosd20*))(Il2CppBase() + 0x4183E34))(this);
	}
	template <typename T = void> T System_Collections_IEnumerator_Reset() {
		return ((T (*)(DownloadPromoteVideosd20*))(Il2CppBase() + 0x4183E3C))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(DownloadPromoteVideosd20*))(Il2CppBase() + 0x4183EA4))(this);
	}

};

}
