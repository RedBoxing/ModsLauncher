#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace RGScript.Util.AndroidDialog {

class MarketUtil
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "RGScript.Util.AndroidDialog", "MarketUtil"));
	}


	template <typename T = void> static T JumpToMarket(Il2CppString* appPkg, Il2CppString* marketPkg) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x454EF84))(0, appPkg, marketPkg);
	}
	template <typename T = Il2CppList<void*>*> static T GetAllApk() {
		return ((T (*)(void *))(Il2CppBase() + 0x454F434))(0);
	}

};

}
