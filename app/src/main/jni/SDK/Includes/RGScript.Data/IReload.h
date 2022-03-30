#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace RGScript.Data {

class IReload
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "RGScript.Data", "IReload"));
	}


	template <typename T = void> T Reload() {
		return ((T (*)(IReload*))(Il2CppBase() + 0x0))(this);
	}

};

}
