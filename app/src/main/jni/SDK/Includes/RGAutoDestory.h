#pragma once
#include "Il2Cpp/Il2Cpp.h"

class RGAutoDestory
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RGAutoDestory"));
	}

	template <typename T = float> T& d_time() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& audio_clip() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = void> T Start() {
		return ((T (*)(RGAutoDestory*))(Il2CppBase() + 0x1BADFF4))(this);
	}
	template <typename T = void> T DoDestory() {
		return ((T (*)(RGAutoDestory*))(Il2CppBase() + 0x1BAE198))(this);
	}
	template <typename T = void> T OnTaken() {
		return ((T (*)(RGAutoDestory*))(Il2CppBase() + 0x1BAE054))(this);
	}
	template <typename T = void> T CancelDestroy() {
		return ((T (*)(RGAutoDestory*))(Il2CppBase() + 0x1BAE274))(this);
	}

};

}
