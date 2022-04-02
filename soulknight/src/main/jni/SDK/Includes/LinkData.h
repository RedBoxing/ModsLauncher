#pragma once
#include "Il2Cpp/Il2Cpp.h"

class LinkData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "LinkData"));
	}

	template <typename T = Il2CppString*> T& nameKey() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = Il2CppString*> T& link() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppString*> T& display() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = Il2CppString*> static T GetContentWithUrlData(Il2CppString* content, Il2CppList<uintptr_t>* linkDatas) {
		return ((T (*)(void *, Il2CppString*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x4264910))(0, content, linkDatas);
	}

};

}
