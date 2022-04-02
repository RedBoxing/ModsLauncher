#pragma once
#include "Il2Cpp/Il2Cpp.h"

class SandboxConfigData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SandboxConfigData"));
	}

	template <typename T = bool> T& firstEnter() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& recentColors() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& mapIndex() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> static T& _data() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = uintptr_t> static T get_data() {
		return ((T (*)(void *))(Il2CppBase() + 0x1814260))(0);
	}
	template <typename T = Il2CppString*> static T get__43OldPath() {
		return ((T (*)(void *))(Il2CppBase() + 0x18143EC))(0);
	}
	template <typename T = Il2CppString*> static T get_Path() {
		return ((T (*)(void *))(Il2CppBase() + 0x181447C))(0);
	}
	template <typename T = void> static T FixData(Il2CppString* uid) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x1814568))(0, uid);
	}
	template <typename T = void> static T Save() {
		return ((T (*)(void *))(Il2CppBase() + 0x1814640))(0);
	}
	template <typename T = void> static T Load() {
		return ((T (*)(void *))(Il2CppBase() + 0x1814300))(0);
	}
	template <typename T = void> T Reload() {
		return ((T (*)(SandboxConfigData*))(Il2CppBase() + 0x1814810))(this);
	}

};

}
