#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace IngameDebugConsole {

class DebugLogIndexList
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "IngameDebugConsole", "DebugLogIndexList"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& indices() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& size() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = int32_t> T get_Count() {
		return ((T (*)(DebugLogIndexList*))(Il2CppBase() + 0x1A3C0B0))(this);
	}
	template <typename T = int32_t> T get_Item(int32_t index) {
		return ((T (*)(DebugLogIndexList*, int32_t))(Il2CppBase() + 0x1A3C110))(this, index);
	}
	template <typename T = void> T Add(int32_t index) {
		return ((T (*)(DebugLogIndexList*, int32_t))(Il2CppBase() + 0x1A3C220))(this, index);
	}
	template <typename T = void> T Clear() {
		return ((T (*)(DebugLogIndexList*))(Il2CppBase() + 0x1A3C358))(this);
	}

};

}
