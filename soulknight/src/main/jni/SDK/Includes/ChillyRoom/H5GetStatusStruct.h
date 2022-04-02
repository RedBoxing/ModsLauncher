#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace ChillyRoom {

class H5GetStatusStruct
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ChillyRoom", "H5GetStatusStruct"));
	}

	template <typename T = int32_t> T& error_code() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = Il2CppString*> T& error_msg() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& is_finish() {
		return *(T*)((uintptr_t)this + 0x10);
	}


};

}
