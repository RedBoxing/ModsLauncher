#pragma once
#include "Il2Cpp/Il2Cpp.h"

class ColliderOffsetHandler
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ColliderOffsetHandler"));
	}

	template <typename T = uintptr_t> T& Collider() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& Vector2Property() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = uintptr_t> T get_Collider() {
		return ((T (*)(ColliderOffsetHandler*))(Il2CppBase() + 0x2070050))(this);
	}
	template <typename T = uintptr_t> T get_Vector2Property() {
		return ((T (*)(ColliderOffsetHandler*))(Il2CppBase() + 0x2070058))(this);
	}
	template <typename T = void> T AddOffset(Il2CppVector2 offset, Il2CppString* key) {
		return ((T (*)(ColliderOffsetHandler*, Il2CppVector2, Il2CppString*))(Il2CppBase() + 0x2070140))(this, offset, key);
	}
	template <typename T = void> T RemoveOffset(Il2CppString* key) {
		return ((T (*)(ColliderOffsetHandler*, Il2CppString*))(Il2CppBase() + 0x20702B8))(this, key);
	}

};

}
