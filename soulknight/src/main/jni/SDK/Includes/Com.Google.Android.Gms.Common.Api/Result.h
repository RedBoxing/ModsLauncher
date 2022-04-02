#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace Com.Google.Android.Gms.Common.Api {

class Result
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Com.Google.Android.Gms.Common.Api", "Result"));
	}


	template <typename T = uintptr_t> T getStatus() {
		return ((T (*)(Result*))(Il2CppBase() + 0x0))(this);
	}

};

}
