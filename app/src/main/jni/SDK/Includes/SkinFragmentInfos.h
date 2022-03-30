#pragma once
#include "Il2Cpp/Il2Cpp.h"

class SkinFragmentInfos
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SkinFragmentInfos"));
	}

	template <typename T = uintptr_t> static T& _info() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppDictionary<uintptr_t, Il2CppList<uintptr_t>*>*> T& skin_material_dic() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, Il2CppList<uintptr_t>*>*> T& skin_material_dic2() {
		return *(T*)((uintptr_t)this + 0x60);
	}

	template <typename T = uintptr_t> static T get_info() {
		return ((T (*)(void *))(Il2CppBase() + 0x1836048))(0);
	}
	template <typename T = void> T OnAfterDeserialize() {
		return ((T (*)(SkinFragmentInfos*))(Il2CppBase() + 0x183613C))(this);
	}
	template <typename T = void> T OnLoad() {
		return ((T (*)(SkinFragmentInfos*))(Il2CppBase() + 0x18361A8))(this);
	}
	template <typename T = bool> T CheckMatEnough(Il2CppString* mat_name) {
		return ((T (*)(SkinFragmentInfos*, Il2CppString*))(Il2CppBase() + 0x1836788))(this, mat_name);
	}
	template <typename T = void> T iFixBaseProxy_OnAfterDeserialize() {
		return ((T (*)(SkinFragmentInfos*))(Il2CppBase() + 0x1836CA4))(this);
	}

};

}
