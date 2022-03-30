#pragma once
#include "Il2Cpp/Il2Cpp.h"

class cDisplayClass820
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass82_0"));
	}

	template <typename T = Il2CppString*> T& uid() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& gift_Code() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> T& pfId() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppString*> T& version() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& 4__this() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = void*> T& callback() {
		return *(T*)((uintptr_t)this + 0x38);
	}

	template <typename T = void> T GetGiftb__0(uintptr_t buf) {
		return ((T (*)(cDisplayClass820*, uintptr_t))(Il2CppBase() + 0x42F470C))(this, buf);
	}
	template <typename T = void> T GetGiftb__1(uintptr_t recvBuf) {
		return ((T (*)(cDisplayClass820*, uintptr_t))(Il2CppBase() + 0x42F4890))(this, recvBuf);
	}

};

}
