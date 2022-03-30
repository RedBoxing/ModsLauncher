#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace FogOfWar {

class RectMaskEffect
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "FogOfWar", "RectMaskEffect"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& rects() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& rectMaskMaterial() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _screenRect() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& _camera() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> static T& ShaderIdMaskRects() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& ShaderIdRectCount() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = void> T OnRenderImage(uintptr_t src, uintptr_t dest) {
		return ((T (*)(RectMaskEffect*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4512650))(this, src, dest);
	}

};

}
