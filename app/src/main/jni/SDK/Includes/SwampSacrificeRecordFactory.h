#pragma once
#include "Il2Cpp/Il2Cpp.h"

class SwampSacrificeRecordFactory
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SwampSacrificeRecordFactory"));
	}

	template <typename T = uintptr_t> static T& _swampSacrificeRecorder() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = uintptr_t> static T GetRecorder() {
		return ((T (*)(void *))(Il2CppBase() + 0x18B939C))(0);
	}

};

}
