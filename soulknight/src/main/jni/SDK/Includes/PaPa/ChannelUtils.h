#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace PaPa {

class ChannelUtils
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PaPa", "ChannelUtils"));
	}


	template <typename T = uintptr_t> static T GetProductType(Il2CppString* productName) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x26DC480))(0, productName);
	}

};

}
