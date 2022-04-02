#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace FishChipStore {

class ConfigItem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "FishChipStore", "ConfigItem"));
	}

	template <typename T = Il2CppString*> T& id() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& itemType() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& itemContent() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& customTags() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& price() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppString*> T& subTitleKey() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = Il2CppString*> T& titleKey() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& extraInfo() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& titleColor() {
		return *(T*)((uintptr_t)this + 0x50);
	}

	template <typename T = void*> T get_ItemTypeDropDownList() {
		return ((T (*)(ConfigItem*))(Il2CppBase() + 0x450068C))(this);
	}

};

}
