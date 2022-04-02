#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace GooglePlayGames.BasicApi.Events {

class IEvent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GooglePlayGames.BasicApi.Events", "IEvent"));
	}


	template <typename T = Il2CppString*> T get_Id() {
		return ((T (*)(IEvent*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = Il2CppString*> T get_Name() {
		return ((T (*)(IEvent*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = Il2CppString*> T get_Description() {
		return ((T (*)(IEvent*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = Il2CppString*> T get_ImageUrl() {
		return ((T (*)(IEvent*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = uint64_t> T get_CurrentCount() {
		return ((T (*)(IEvent*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = uintptr_t> T get_Visibility() {
		return ((T (*)(IEvent*))(Il2CppBase() + 0x0))(this);
	}

};

}
