#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace Rewired.Integration.UnityUI {

class PointerEventType
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Rewired.Integration.UnityUI", "PointerEventType"));
	}

	template <typename T = int32_t> T& value__() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> static T& Mouse() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& Touch() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
