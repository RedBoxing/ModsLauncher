#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace Com.Google.Android.Gms.Common.Api {

class ResultCallback1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Com.Google.Android.Gms.Common.Api", "ResultCallback`1"));
	}


	template <typename T = void> T onResult(uintptr_t arg_Result_1) {
		return ((T (*)(ResultCallback1*, uintptr_t))(Il2CppBase() + 0x0))(this, arg_Result_1);
	}

};

}
