#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace TinnyStudios.FavouriteWindow {

class IFinderSettings
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "TinnyStudios.FavouriteWindow", "IFinderSettings"));
	}


	template <typename T = uintptr_t> T get_Data() {
		return ((T (*)(IFinderSettings*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = uintptr_t> T get_gameObject() {
		return ((T (*)(IFinderSettings*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = int32_t> T get_InstanceId() {
		return ((T (*)(IFinderSettings*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = Il2CppList<Il2CppString*>*> T get_WindowGuids() {
		return ((T (*)(IFinderSettings*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T set_WindowGuids(Il2CppList<Il2CppString*>* value) {
		return ((T (*)(IFinderSettings*, Il2CppList<Il2CppString*>*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = int64_t> T get_CreatedTicks() {
		return ((T (*)(IFinderSettings*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T set_CreatedTicks(int64_t value) {
		return ((T (*)(IFinderSettings*, int64_t))(Il2CppBase() + 0x0))(this, value);
	}

};

}
