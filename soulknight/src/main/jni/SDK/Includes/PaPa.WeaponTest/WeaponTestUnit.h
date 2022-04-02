#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace PaPa.WeaponTest {

class WeaponTestUnit
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PaPa.WeaponTest", "WeaponTestUnit"));
	}



};

}
