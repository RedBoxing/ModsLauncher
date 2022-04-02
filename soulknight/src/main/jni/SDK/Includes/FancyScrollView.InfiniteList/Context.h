#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace FancyScrollView.InfiniteList {

class Context
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "FancyScrollView.InfiniteList", "Context"));
	}

	template <typename T = int32_t> T& SelectedIndex() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = void*> T& OnCellClicked() {
		return *(T*)((uintptr_t)this + 0x18);
	}


};

}
