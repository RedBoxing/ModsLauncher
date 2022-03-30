#pragma once
#include "Il2Cpp/Il2Cpp.h"

class NpcExplorerOnShow
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "NpcExplorerOnShow"));
	}


	template <typename T = void> T OnShowTalk(int32_t talkIndex) {
		return ((T (*)(NpcExplorerOnShow*, int32_t))(Il2CppBase() + 0x452B618))(this, talkIndex);
	}

};

}
