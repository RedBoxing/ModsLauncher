#pragma once
#include "Il2Cpp/Il2Cpp.h"

class SandboxObject
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SandboxObject"));
	}

	template <typename T = Il2CppString*> static T& keyX() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& keyY() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = int32_t> T& id() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(SandboxObject*))(Il2CppBase() + 0x18165F8))(this);
	}
	template <typename T = bool> T PositionValid() {
		return ((T (*)(SandboxObject*))(Il2CppBase() + 0x1816728))(this);
	}
	template <typename T = uintptr_t> T GetSerializedData() {
		return ((T (*)(SandboxObject*))(Il2CppBase() + 0x18155DC))(this);
	}
	template <typename T = bool> T SetSerializedData(Il2CppDictionary<Il2CppString*, Il2CppString*>* dic) {
		return ((T (*)(SandboxObject*, Il2CppDictionary<Il2CppString*, Il2CppString*>*))(Il2CppBase() + 0x18168D4))(this, dic);
	}
	template <typename T = uintptr_t> T GetSprite() {
		return ((T (*)(SandboxObject*))(Il2CppBase() + 0x1816B2C))(this);
	}

};

}
