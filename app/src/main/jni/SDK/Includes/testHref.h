#pragma once
#include "Il2Cpp/Il2Cpp.h"

class testHref
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "testHref"));
	}

	template <typename T = uintptr_t> T& textPic() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = void*> T& clickCallback() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppString*> T& link() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(testHref*))(Il2CppBase() + 0x460734C))(this);
	}
	template <typename T = void> T OnEnable() {
		return ((T (*)(testHref*))(Il2CppBase() + 0x46073E4))(this);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(testHref*))(Il2CppBase() + 0x46074E8))(this);
	}
	template <typename T = void> T OnHrefClick(Il2CppString* hrefName) {
		return ((T (*)(testHref*, Il2CppString*))(Il2CppBase() + 0x46075EC))(this, hrefName);
	}

};

}
