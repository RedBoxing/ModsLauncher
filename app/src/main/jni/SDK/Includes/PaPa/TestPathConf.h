#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace PaPa {

class TestPathConf
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PaPa", "TestPathConf"));
	}


	template <typename T = Il2CppString*> static T get_data_path() {
		return ((T (*)(void *))(Il2CppBase() + 0x455C2B4))(0);
	}
	template <typename T = Il2CppString*> static T get_backup_path() {
		return ((T (*)(void *))(Il2CppBase() + 0x4564D6C))(0);
	}
	template <typename T = Il2CppString*> static T get_item_data_path() {
		return ((T (*)(void *))(Il2CppBase() + 0x4564DFC))(0);
	}
	template <typename T = uintptr_t> static T get_local_item_data() {
		return ((T (*)(void *))(Il2CppBase() + 0x4564E8C))(0);
	}

};

}
