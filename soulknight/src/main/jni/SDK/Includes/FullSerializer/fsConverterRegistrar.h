#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace FullSerializer {

class fsConverterRegistrar
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "FullSerializer", "fsConverterRegistrar"));
	}

	template <typename T = uintptr_t> static T& Register_AnimationCurve_DirectConverter() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& Register_Bounds_DirectConverter() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& Register_Gradient_DirectConverter() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& Register_GUIStyle_DirectConverter() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& Register_GUIStyleState_DirectConverter() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& Register_Keyframe_DirectConverter() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& Register_LayerMask_DirectConverter() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& Register_Rect_DirectConverter() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& Register_RectOffset_DirectConverter() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = Il2CppList<uintptr_t>*> static T& Converters() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}


};

}
