#pragma once
#include "Il2Cpp/Il2Cpp.h"

class BuffMark
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BuffMark"));
	}

	template <typename T = uintptr_t> T& lastFrame() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = uintptr_t> T& source_object() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = bool> T& isDestroying() {
		return *(T*)((uintptr_t)this + 0x80);
	}

	template <typename T = void> T Start() {
		return ((T (*)(BuffMark*))(Il2CppBase() + 0x459ABBC))(this);
	}
	template <typename T = void> T BuffEnd() {
		return ((T (*)(BuffMark*))(Il2CppBase() + 0x459ADD0))(this);
	}
	template <typename T = void> T SetSourceObject(uintptr_t value) {
		return ((T (*)(BuffMark*, uintptr_t))(Il2CppBase() + 0x459AE8C))(this, value);
	}
	template <typename T = uintptr_t> T GetSourceObject() {
		return ((T (*)(BuffMark*))(Il2CppBase() + 0x459AF00))(this);
	}
	template <typename T = void> T AblationDestroy() {
		return ((T (*)(BuffMark*))(Il2CppBase() + 0x459AF60))(this);
	}
	template <typename T = void> T iFixBaseProxy_Start() {
		return ((T (*)(BuffMark*))(Il2CppBase() + 0x459B0EC))(this);
	}
	template <typename T = void> T iFixBaseProxy_BuffEnd() {
		return ((T (*)(BuffMark*))(Il2CppBase() + 0x459B0F4))(this);
	}

};

}
