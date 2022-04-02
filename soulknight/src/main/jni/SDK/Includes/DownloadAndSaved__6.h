#pragma once
#include "Il2Cpp/Il2Cpp.h"

class DownloadAndSaved6
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<DownloadAndSave>d__6"));
	}

	template <typename T = int32_t> T& 1__state() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& 2__current() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> T& filename() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& request() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& handle() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = bool> T& useCachedVersion5__2() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = void*> T& callback5__3() {
		return *(T*)((uintptr_t)this + 0x40);
	}

	template <typename T = void> T System_IDisposable_Dispose() {
		return ((T (*)(DownloadAndSaved6*))(Il2CppBase() + 0x1A27D74))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(DownloadAndSaved6*))(Il2CppBase() + 0x1A27D78))(this);
	}
	template <typename T = uintptr_t> T System_Collections_Generic_IEnumeratorSystem_Object_get_Current() {
		return ((T (*)(DownloadAndSaved6*))(Il2CppBase() + 0x1A28298))(this);
	}
	template <typename T = void> T System_Collections_IEnumerator_Reset() {
		return ((T (*)(DownloadAndSaved6*))(Il2CppBase() + 0x1A282A0))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(DownloadAndSaved6*))(Il2CppBase() + 0x1A28308))(this);
	}

};

}
