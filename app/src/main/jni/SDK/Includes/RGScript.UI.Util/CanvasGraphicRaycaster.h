#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace RGScript.UI.Util {

class CanvasGraphicRaycaster
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "RGScript.UI.Util", "CanvasGraphicRaycaster"));
	}

	template <typename T = uintptr_t> T& cursorTextureNormal() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& cursorTextureHover() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& cursorTextureInput() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& _raycaster() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& _pointerEventData() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _raycastResultList() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _raycastButtonCache() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& _cursorState() {
		return *(T*)((uintptr_t)this + 0x50);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(CanvasGraphicRaycaster*))(Il2CppBase() + 0x454158C))(this);
	}
	template <typename T = uintptr_t> static T FindRaycaster() {
		return ((T (*)(void *))(Il2CppBase() + 0x4541634))(0);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(CanvasGraphicRaycaster*))(Il2CppBase() + 0x4541798))(this);
	}
	template <typename T = void> T SetCursorTextureWithState() {
		return ((T (*)(CanvasGraphicRaycaster*))(Il2CppBase() + 0x45418B4))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(CanvasGraphicRaycaster*))(Il2CppBase() + 0x45419DC))(this);
	}

};

}
