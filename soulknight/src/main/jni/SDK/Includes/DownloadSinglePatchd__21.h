#pragma once
#include "Il2Cpp/Il2Cpp.h"

class DownloadSinglePatchd21
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<DownloadSinglePatch>d__21"));
	}

	template <typename T = int32_t> T& 1__state() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = void*> T& t__builder() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppString*> T& fileDownloadUrl() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppString*> T& fileMd5() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppString*> T& filePath5__2() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& webClient5__3() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& u__1() {
		return *(T*)((uintptr_t)this + 0x40);
	}

	template <typename T = void> T MoveNext() {
		return ((T (*)(DownloadSinglePatchd21*))(Il2CppBase() + 0x14F6F58))(this);
	}
	template <typename T = void> T SetStateMachine(uintptr_t stateMachine) {
		return ((T (*)(DownloadSinglePatchd21*, uintptr_t))(Il2CppBase() + 0x14F6F60))(this, stateMachine);
	}

};

}
