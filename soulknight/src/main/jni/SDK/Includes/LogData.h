#pragma once
#include "Il2Cpp/Il2Cpp.h"

class LogData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "LogData"));
	}

	template <typename T = Il2CppString*> T& logString() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = Il2CppString*> T& stackTrace() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& logType() {
		return *(T*)((uintptr_t)this + 0x10);
	}


};

}
