#pragma once
#include "Il2Cpp/Il2Cpp.h"

class DemoPromotionController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DemoPromotionController"));
	}

	template <typename T = uintptr_t> T& textInfo() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> static T& prefabDir() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& promotionPrefab() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppString*> static T& waitForDownloadText() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& downloadCompleteText() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> T& textUpdate() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = bool> T& syncComplete() {
		return *(T*)((uintptr_t)this + 0x29);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(DemoPromotionController*))(Il2CppBase() + 0x42EA984))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(DemoPromotionController*))(Il2CppBase() + 0x42EAA8C))(this);
	}
	template <typename T = void> T onShowButtonClick() {
		return ((T (*)(DemoPromotionController*))(Il2CppBase() + 0x42EAB5C))(this);
	}
	template <typename T = uintptr_t> T DownloadPromoteVideos() {
		return ((T (*)(DemoPromotionController*))(Il2CppBase() + 0x42EAFEC))(this);
	}

};

}
