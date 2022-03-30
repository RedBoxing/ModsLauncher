#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace TinnyStudios.FavouriteWindow {

class ProjectFavouriteWindowData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "TinnyStudios.FavouriteWindow", "ProjectFavouriteWindowData"));
	}

	template <typename T = uintptr_t> T& Data() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& gameObject() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppList<Il2CppString*>*> T& WindowGuids() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int64_t> T& CreatedTicks() {
		return *(T*)((uintptr_t)this + 0x30);
	}

	template <typename T = uintptr_t> T TinnyStudios_FavouriteWindow_IFinderSettings_get_Data() {
		return ((T (*)(ProjectFavouriteWindowData*))(Il2CppBase() + 0x1E4719C))(this);
	}
	template <typename T = uintptr_t> T get_gameObject() {
		return ((T (*)(ProjectFavouriteWindowData*))(Il2CppBase() + 0x1E471FC))(this);
	}
	template <typename T = int32_t> T get_InstanceId() {
		return ((T (*)(ProjectFavouriteWindowData*))(Il2CppBase() + 0x1E47204))(this);
	}
	template <typename T = Il2CppList<Il2CppString*>*> T TinnyStudios_FavouriteWindow_IFinderSettings_get_WindowGuids() {
		return ((T (*)(ProjectFavouriteWindowData*))(Il2CppBase() + 0x1E47268))(this);
	}
	template <typename T = void> T TinnyStudios_FavouriteWindow_IFinderSettings_set_WindowGuids(Il2CppList<Il2CppString*>* value) {
		return ((T (*)(ProjectFavouriteWindowData*, Il2CppList<Il2CppString*>*))(Il2CppBase() + 0x1E472C8))(this, value);
	}
	template <typename T = int64_t> T TinnyStudios_FavouriteWindow_IFinderSettings_get_CreatedTicks() {
		return ((T (*)(ProjectFavouriteWindowData*))(Il2CppBase() + 0x1E4733C))(this);
	}
	template <typename T = void> T TinnyStudios_FavouriteWindow_IFinderSettings_set_CreatedTicks(int64_t value) {
		return ((T (*)(ProjectFavouriteWindowData*, int64_t))(Il2CppBase() + 0x1E4739C))(this, value);
	}

};

}
