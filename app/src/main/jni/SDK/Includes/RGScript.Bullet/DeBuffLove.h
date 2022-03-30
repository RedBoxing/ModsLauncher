#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace RGScript.Bullet {

class DeBuffLove
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "RGScript.Bullet", "DeBuffLove"));
	}


	template <typename T = void> T Start() {
		return ((T (*)(DeBuffLove*))(Il2CppBase() + 0x1C2DA2C))(this);
	}
	template <typename T = void> T iFixBaseProxy_Start() {
		return ((T (*)(DeBuffLove*))(Il2CppBase() + 0x1C2DC54))(this);
	}

};

}
