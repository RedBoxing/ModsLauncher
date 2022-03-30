#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace IngameDebugConsole {

class DebugLogEntry
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "IngameDebugConsole", "DebugLogEntry"));
	}

	template <typename T = int32_t> static T& HASH_NOT_CALCULATED() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> T& logString() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& stackTrace() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> T& completeLog() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& logTypeSpriteRepresentation() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& count() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> T& hashValue() {
		return *(T*)((uintptr_t)this + 0x34);
	}

	template <typename T = bool> T Equals(uintptr_t other) {
		return ((T (*)(DebugLogEntry*, uintptr_t))(Il2CppBase() + 0x1A3BE00))(this, other);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(DebugLogEntry*))(Il2CppBase() + 0x1A3BEB4))(this);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(DebugLogEntry*))(Il2CppBase() + 0x1A3BF58))(this);
	}
	template <typename T = Il2CppString*> T iFixBaseProxy_ToString() {
		return ((T (*)(DebugLogEntry*))(Il2CppBase() + 0x1A3C0A0))(this);
	}
	template <typename T = int32_t> T iFixBaseProxy_GetHashCode() {
		return ((T (*)(DebugLogEntry*))(Il2CppBase() + 0x1A3C0A8))(this);
	}

};

}
