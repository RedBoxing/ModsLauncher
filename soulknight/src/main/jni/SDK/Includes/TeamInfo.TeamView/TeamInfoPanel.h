#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace TeamInfo.TeamView {

class TeamInfoPanel
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "TeamInfo.TeamView", "TeamInfoPanel"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& itemViews() {
		return *(T*)((uintptr_t)this + 0x10);
	}


};

}
