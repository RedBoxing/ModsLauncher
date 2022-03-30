#pragma once
#include "Il2Cpp/Il2Cpp.h"

class cDisplayClass760
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass76_0"));
	}

	template <typename T = Il2CppString*> T& bindInfo() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& bindType() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> T& json() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& 4__this() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = void*> T& callback() {
		return *(T*)((uintptr_t)this + 0x30);
	}

	template <typename T = void> T SetGameDataJsonb__0(uintptr_t buf) {
		return ((T (*)(cDisplayClass760*, uintptr_t))(Il2CppBase() + 0x42F3DDC))(this, buf);
	}
	template <typename T = void> T SetGameDataJsonb__1(uintptr_t recvBuf) {
		return ((T (*)(cDisplayClass760*, uintptr_t))(Il2CppBase() + 0x42F4208))(this, recvBuf);
	}

};

}
