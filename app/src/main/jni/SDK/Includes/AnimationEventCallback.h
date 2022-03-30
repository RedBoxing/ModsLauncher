#pragma once
#include "Il2Cpp/Il2Cpp.h"

class AnimationEventCallback
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AnimationEventCallback"));
	}

	template <typename T = uintptr_t> T& animationCallbackEvent() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T AnimationCallback(Il2CppString* eventName) {
		return ((T (*)(AnimationEventCallback*, Il2CppString*))(Il2CppBase() + 0x1A18CDC))(this, eventName);
	}

};

}
