#pragma once
#include "Il2Cpp/Il2Cpp.h"

class SandboxObjectInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SandboxObjectInfo"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& objectInfos() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = Il2CppDictionary<int32_t, uintptr_t>*> T& id2Sandbox() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& tileInfos() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = Il2CppDictionary<int32_t, uintptr_t>*> T& id2Tile() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = uintptr_t> static T& _info() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = uintptr_t> static T get_info() {
		return ((T (*)(void *))(Il2CppBase() + 0x180D9D0))(0);
	}
	template <typename T = void> static T Load() {
		return ((T (*)(void *))(Il2CppBase() + 0x1816DFC))(0);
	}
	template <typename T = void> T OnLoad() {
		return ((T (*)(SandboxObjectInfo*))(Il2CppBase() + 0x1816EC0))(this);
	}
	template <typename T = void> T SetUpObjectId() {
		return ((T (*)(SandboxObjectInfo*))(Il2CppBase() + 0x18171CC))(this);
	}

};

}
