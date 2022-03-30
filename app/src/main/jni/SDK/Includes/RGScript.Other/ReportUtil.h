#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace RGScript.Other {

class ReportUtil
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "RGScript.Other", "ReportUtil"));
	}


	template <typename T = uintptr_t> static T Report(uintptr_t reportType, uintptr_t targetMemberInfo) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x44E8940))(0, reportType, targetMemberInfo);
	}

};

}
