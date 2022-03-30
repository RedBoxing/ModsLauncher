#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace GooglePlayGames.Native.Cwrapper {

class SymbolLocation
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GooglePlayGames.Native.Cwrapper", "SymbolLocation"));
	}

	template <typename T = Il2CppString*> static T& NativeSymbolLocation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
