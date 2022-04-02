#pragma once
#include "Il2Cpp/Il2Cpp.h"

class DownloadAllPatchesd20
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<DownloadAllPatches>d__20"));
	}

	template <typename T = int32_t> T& 1__state() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = void*> T& t__builder() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& patchList() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& 4__this() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppList<Il2CppString*>*> T& patchFileList5__2() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = void*> T& 7__wrap2() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = void*> T& u__1() {
		return *(T*)((uintptr_t)this + 0x50);
	}

	template <typename T = void> T MoveNext() {
		return ((T (*)(DownloadAllPatchesd20*))(Il2CppBase() + 0x14F6F38))(this);
	}
	template <typename T = void> T SetStateMachine(uintptr_t stateMachine) {
		return ((T (*)(DownloadAllPatchesd20*, uintptr_t))(Il2CppBase() + 0x14F6F40))(this, stateMachine);
	}

};

}
