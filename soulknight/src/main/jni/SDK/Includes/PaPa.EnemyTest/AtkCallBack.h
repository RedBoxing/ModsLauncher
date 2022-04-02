#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace PaPa.EnemyTest {

class AtkCallBack
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PaPa.EnemyTest", "AtkCallBack"));
	}


	template <typename T = uintptr_t> T Invoke() {
		return ((T (*)(AtkCallBack*))(Il2CppBase() + 0x26E9118))(this);
	}
	template <typename T = uintptr_t> T BeginInvoke(uintptr_t callback, uintptr_t object) {
		return ((T (*)(AtkCallBack*, uintptr_t, uintptr_t))(Il2CppBase() + 0x26E9534))(this, callback, object);
	}
	template <typename T = uintptr_t> T EndInvoke(uintptr_t result) {
		return ((T (*)(AtkCallBack*, uintptr_t))(Il2CppBase() + 0x26E9568))(this, result);
	}

};

}
