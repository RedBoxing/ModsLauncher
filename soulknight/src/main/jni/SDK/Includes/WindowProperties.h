#pragma once
#include "Il2Cpp/Il2Cpp.h"

class WindowProperties
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "WindowProperties"));
	}

	template <typename T = int32_t> T& windowId() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = Il2CppRect> T& rect() {
		return *(T*)((uintptr_t)this + 0x4);
	}
	template <typename T = void*> T& windowDrawDelegate() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> T& title() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppString*> T& message() {
		return *(T*)((uintptr_t)this + 0x28);
	}


};

}
