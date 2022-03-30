#pragma once
#include "Il2Cpp/Il2Cpp.h"

class cDisplayClass710
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass71_0"));
	}

	template <typename T = Il2CppString*> T& extra() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& data() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uint32_t> T& hash() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& 4__this() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& callback() {
		return *(T*)((uintptr_t)this + 0x30);
	}

	template <typename T = void> T UploadSaveb__0(uintptr_t buf) {
		return ((T (*)(cDisplayClass710*, uintptr_t))(Il2CppBase() + 0x42F323C))(this, buf);
	}
	template <typename T = void> T UploadSaveb__1(uintptr_t recvBuf) {
		return ((T (*)(cDisplayClass710*, uintptr_t))(Il2CppBase() + 0x42F347C))(this, recvBuf);
	}

};

}
