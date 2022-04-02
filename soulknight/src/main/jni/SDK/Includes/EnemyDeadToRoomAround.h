#pragma once
#include "Il2Cpp/Il2Cpp.h"

class EnemyDeadToRoomAround
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "EnemyDeadToRoomAround"));
	}


	template <typename T = void> T Start() {
		return ((T (*)(EnemyDeadToRoomAround*))(Il2CppBase() + 0x1FE8030))(this);
	}

};

}
