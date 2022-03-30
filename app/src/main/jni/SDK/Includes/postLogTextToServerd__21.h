#pragma once
#include "Il2Cpp/Il2Cpp.h"

class postLogTextToServerd21
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<postLogTextToServer>d__21"));
	}

	template <typename T = int32_t> T& 1__state() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> T& t__builder() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppString*> T& text() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& 4__this() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppString*> T& encoding5__2() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& body5__3() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = int32_t> T& attempts5__4() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = Il2CppString*> T& local_logId5__5() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = Il2CppString*> T& local_sessionID5__6() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = Il2CppString*> T& local_serverURL5__7() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uintptr_t> T& req5__8() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = uintptr_t> T& s5__9() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = void*> T& u__1() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = uintptr_t> T& u__2() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& response5__10() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = void*> T& u__3() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& streamReader5__11() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = void*> T& u__4() {
		return *(T*)((uintptr_t)this + 0xA0);
	}

	template <typename T = void> T MoveNext() {
		return ((T (*)(postLogTextToServerd21*))(Il2CppBase() + 0x16F2DB0))(this);
	}
	template <typename T = void> T SetStateMachine(uintptr_t stateMachine) {
		return ((T (*)(postLogTextToServerd21*, uintptr_t))(Il2CppBase() + 0x16F2DB8))(this, stateMachine);
	}

};

}
