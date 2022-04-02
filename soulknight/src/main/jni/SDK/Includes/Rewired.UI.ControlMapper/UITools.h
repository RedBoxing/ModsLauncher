#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace Rewired.UI.ControlMapper {

class UITools
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Rewired.UI.ControlMapper", "UITools"));
	}


	template <typename T = uintptr_t> static T InstantiateGUIObject(uintptr_t prefab, uintptr_t parent, Il2CppString* name) {
		return ((T (*)(void *, uintptr_t, uintptr_t, Il2CppString*))(Il2CppBase() + 0x0))(0, prefab, parent, name);
	}
	template <typename T = uintptr_t> static T InstantiateGUIObject_1(uintptr_t prefab, uintptr_t parent, Il2CppString* name, Il2CppVector2 pivot, Il2CppVector2 anchorMin, Il2CppVector2 anchorMax, Il2CppVector2 anchoredPosition) {
		return ((T (*)(void *, uintptr_t, uintptr_t, Il2CppString*, Il2CppVector2, Il2CppVector2, Il2CppVector2, Il2CppVector2))(Il2CppBase() + 0x0))(0, prefab, parent, name, pivot, anchorMin, anchorMax, anchoredPosition);
	}
	template <typename T = uintptr_t> static T InstantiateGUIObject_Pre(uintptr_t prefab, uintptr_t parent, Il2CppString* name) {
		return ((T (*)(void *, uintptr_t, uintptr_t, Il2CppString*))(Il2CppBase() + 0x0))(0, prefab, parent, name);
	}
	template <typename T = Il2CppVector3> static T GetPointOnRectEdge(uintptr_t rectTransform, Il2CppVector2 dir) {
		return ((T (*)(void *, uintptr_t, Il2CppVector2))(Il2CppBase() + 0x1BE1508))(0, rectTransform, dir);
	}
	template <typename T = Il2CppRect> static T GetWorldSpaceRect(uintptr_t rt) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x1BE2450))(0, rt);
	}
	template <typename T = Il2CppRect> static T TransformRectTo(uintptr_t from, uintptr_t to, Il2CppRect rect) {
		return ((T (*)(void *, uintptr_t, uintptr_t, Il2CppRect))(Il2CppBase() + 0x1BE1770))(0, from, to, rect);
	}
	template <typename T = Il2CppRect> static T InvertY(Il2CppRect rect) {
		return ((T (*)(void *, Il2CppRect))(Il2CppBase() + 0x1BE1BCC))(0, rect);
	}
	template <typename T = void> static T SetInteractable(uintptr_t selectable, bool state, bool playTransition) {
		return ((T (*)(void *, uintptr_t, bool, bool))(Il2CppBase() + 0x1BE2710))(0, selectable, state, playTransition);
	}

};

}
