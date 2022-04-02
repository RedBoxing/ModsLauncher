#pragma once
#include "Il2Cpp/Il2Cpp.h"

class DownloadJsonFiled21
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<DownloadJsonFile>d__2`1"));
	}

	template <typename T = int32_t> T& 1__state() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = void*> T& t__builder() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = Il2CppString*> T& url() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = void*> T& u__1() {
		return *(T*)((uintptr_t)this + 0x0);
	}

	template <typename T = void> T MoveNext() {
		return ((T (*)(DownloadJsonFiled21*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T SetStateMachine(uintptr_t stateMachine) {
		return ((T (*)(DownloadJsonFiled21*, uintptr_t))(Il2CppBase() + 0x0))(this, stateMachine);
	}

};

}
