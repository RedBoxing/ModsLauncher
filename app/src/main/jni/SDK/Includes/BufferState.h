#pragma once
#include "Il2Cpp/Il2Cpp.h"

class BufferState
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BufferState"));
	}

	template <typename T = int32_t> T& pos() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uint32_t> T& bitBuf() {
		return *(T*)((uintptr_t)this + 0x4);
	}
	template <typename T = int32_t> T& bitCount() {
		return *(T*)((uintptr_t)this + 0x8);
	}


};

}
