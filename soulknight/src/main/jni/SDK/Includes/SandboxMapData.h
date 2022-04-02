#pragma once
#include "Il2Cpp/Il2Cpp.h"

class SandboxMapData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SandboxMapData"));
	}

	template <typename T = int32_t> static T& CurrentVersion() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& version() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& tileFloor() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppVector2> T& startPosition() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& cameraSize() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& objectDatas() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = bool> T& hasChanged() {
		return *(T*)((uintptr_t)this + 0x30);
	}

	template <typename T = uintptr_t> T Clone() {
		return ((T (*)(SandboxMapData*))(Il2CppBase() + 0x1814D38))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(SandboxMapData*))(Il2CppBase() + 0x1815158))(this);
	}
	template <typename T = void> T UpdateMap() {
		return ((T (*)(SandboxMapData*))(Il2CppBase() + 0x1815238))(this);
	}

};

}
