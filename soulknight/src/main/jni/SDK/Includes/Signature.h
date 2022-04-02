#pragma once
#include "Il2Cpp/Il2Cpp.h"

class Signature
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "Signature"));
	}


	template <typename T = Il2CppString*> static T GetSignatureMD5Hash() {
		return ((T (*)(void *))(Il2CppBase() + 0x18308EC))(0);
	}
	template <typename T = Il2CppString*> static T GetSignaturSHA1Hash() {
		return ((T (*)(void *))(Il2CppBase() + 0x1830D60))(0);
	}

};

}
