#pragma once
#include "Il2Cpp/Il2Cpp.h"

class Prefetcher
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "Prefetcher"));
	}

	template <typename T = uintptr_t> T& mLock() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& mOriginalDataFetched() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& mOriginalData() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = bool> T& mUnmergedDataFetched() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& mUnmergedData() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = void*> T& completedCallback() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = void*> T& mDataFetchedCallback() {
		return *(T*)((uintptr_t)this + 0x40);
	}

	template <typename T = void> T OnOriginalDataRead(uintptr_t readResponse) {
		return ((T (*)(Prefetcher*, uintptr_t))(Il2CppBase() + 0x2834BCC))(this, readResponse);
	}
	template <typename T = void> T OnUnmergedDataRead(uintptr_t readResponse) {
		return ((T (*)(Prefetcher*, uintptr_t))(Il2CppBase() + 0x283506C))(this, readResponse);
	}
	template <typename T = void> T MaybeProceed() {
		return ((T (*)(Prefetcher*))(Il2CppBase() + 0x2834EE0))(this);
	}

};

}
