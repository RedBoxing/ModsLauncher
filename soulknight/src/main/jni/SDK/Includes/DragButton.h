#pragma once
#include "Il2Cpp/Il2Cpp.h"

class DragButton
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DragButton"));
	}

	template <typename T = int32_t> static T& grid() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> T& inRight() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> T& inLeft() {
		return *(T*)((uintptr_t)this + 0x19);
	}
	template <typename T = Il2CppVector3> T& position() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppVector2> T& offset() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& rectTransform() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& parentCanvas() {
		return *(T*)((uintptr_t)this + 0x38);
	}

	template <typename T = void> T Start() {
		return ((T (*)(DragButton*))(Il2CppBase() + 0x42EEF50))(this);
	}
	template <typename T = void> T OnDrag(uintptr_t eventData) {
		return ((T (*)(DragButton*, uintptr_t))(Il2CppBase() + 0x42EF108))(this, eventData);
	}

};

}
