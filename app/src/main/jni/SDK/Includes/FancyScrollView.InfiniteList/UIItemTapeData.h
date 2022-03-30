#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace FancyScrollView.InfiniteList {

class UIItemTapeData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "FancyScrollView.InfiniteList", "UIItemTapeData"));
	}

	template <typename T = Il2CppString*> T& tapeName() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& bgmName() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& randomList() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& sprite() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = Il2CppString*> T get_tapeName() {
		return ((T (*)(UIItemTapeData*))(Il2CppBase() + 0x4475874))(this);
	}
	template <typename T = Il2CppString*> T get_bgmName() {
		return ((T (*)(UIItemTapeData*))(Il2CppBase() + 0x447587C))(this);
	}
	template <typename T = uintptr_t> T get_sprite() {
		return ((T (*)(UIItemTapeData*))(Il2CppBase() + 0x447494C))(this);
	}

};

}
