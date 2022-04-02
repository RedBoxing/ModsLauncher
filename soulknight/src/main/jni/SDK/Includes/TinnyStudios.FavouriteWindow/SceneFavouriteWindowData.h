#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace TinnyStudios.FavouriteWindow {

class SceneFavouriteWindowData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "TinnyStudios.FavouriteWindow", "SceneFavouriteWindowData"));
	}

	template <typename T = uintptr_t> T& Data() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppList<Il2CppString*>*> T& WindowGuids() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int64_t> T& CreatedTicks() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = uintptr_t> T TinnyStudios_FavouriteWindow_IFinderSettings_get_Data() {
		return ((T (*)(SceneFavouriteWindowData*))(Il2CppBase() + 0x1E47564))(this);
	}
	template <typename T = int32_t> T get_InstanceId() {
		return ((T (*)(SceneFavouriteWindowData*))(Il2CppBase() + 0x1E475C4))(this);
	}
	template <typename T = Il2CppList<Il2CppString*>*> T TinnyStudios_FavouriteWindow_IFinderSettings_get_WindowGuids() {
		return ((T (*)(SceneFavouriteWindowData*))(Il2CppBase() + 0x1E47628))(this);
	}
	template <typename T = void> T TinnyStudios_FavouriteWindow_IFinderSettings_set_WindowGuids(Il2CppList<Il2CppString*>* value) {
		return ((T (*)(SceneFavouriteWindowData*, Il2CppList<Il2CppString*>*))(Il2CppBase() + 0x1E47688))(this, value);
	}
	template <typename T = int64_t> T TinnyStudios_FavouriteWindow_IFinderSettings_get_CreatedTicks() {
		return ((T (*)(SceneFavouriteWindowData*))(Il2CppBase() + 0x1E476FC))(this);
	}
	template <typename T = void> T TinnyStudios_FavouriteWindow_IFinderSettings_set_CreatedTicks(int64_t value) {
		return ((T (*)(SceneFavouriteWindowData*, int64_t))(Il2CppBase() + 0x1E4775C))(this, value);
	}
	template <typename T = uintptr_t> T TinnyStudios_FavouriteWindow_IFinderSettings_get_gameObject() {
		return ((T (*)(SceneFavouriteWindowData*))(Il2CppBase() + 0x1E4785C))(this);
	}

};

}
