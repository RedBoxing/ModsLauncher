#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace PaPa {

class GenericTest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PaPa", "GenericTest"));
	}

	template <typename T = uintptr_t> T& init_scene() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = Il2CppArray<uintptr_t>*> T get_assetbundle_list() {
		return ((T (*)(GenericTest*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_related_data_path_list() {
		return ((T (*)(GenericTest*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_destroyed_gameobject_list() {
		return ((T (*)(GenericTest*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T BeforeTest() {
		return ((T (*)(GenericTest*))(Il2CppBase() + 0x455BD4C))(this);
	}
	template <typename T = void> T AfterTest() {
		return ((T (*)(GenericTest*))(Il2CppBase() + 0x455BFC8))(this);
	}

};

}
