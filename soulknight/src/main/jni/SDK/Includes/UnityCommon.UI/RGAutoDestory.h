#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace UnityCommon.UI {

class RGAutoDestory
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "UnityCommon.UI", "RGAutoDestory"));
	}

	template <typename T = float> T& d_time() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T Start() {
		return ((T (*)(RGAutoDestory*))(Il2CppBase() + 0x43EA51C))(this);
	}
	template <typename T = void> T DoDestory() {
		return ((T (*)(RGAutoDestory*))(Il2CppBase() + 0x43EA640))(this);
	}
	template <typename T = void> T OnTaken() {
		return ((T (*)(RGAutoDestory*))(Il2CppBase() + 0x43EA57C))(this);
	}
	template <typename T = void> T CancelDestroy() {
		return ((T (*)(RGAutoDestory*))(Il2CppBase() + 0x43EA6FC))(this);
	}

};

}
