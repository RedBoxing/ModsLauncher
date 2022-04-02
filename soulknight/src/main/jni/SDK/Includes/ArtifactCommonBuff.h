#pragma once
#include "Il2Cpp/Il2Cpp.h"

class ArtifactCommonBuff
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ArtifactCommonBuff"));
	}

	template <typename T = uintptr_t> T& source() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = bool> T& manuallyDestroy() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = bool> T& followTarget() {
		return *(T*)((uintptr_t)this + 0x79);
	}
	template <typename T = float> T& followSpeed() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& _target() {
		return *(T*)((uintptr_t)this + 0x80);
	}

	template <typename T = void> T SetSourceObject(uintptr_t value) {
		return ((T (*)(ArtifactCommonBuff*, uintptr_t))(Il2CppBase() + 0x1C9C020))(this, value);
	}
	template <typename T = uintptr_t> T GetSourceObject() {
		return ((T (*)(ArtifactCommonBuff*))(Il2CppBase() + 0x1C9C094))(this);
	}
	template <typename T = void> T OnBuffStart() {
		return ((T (*)(ArtifactCommonBuff*))(Il2CppBase() + 0x1C99AEC))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(ArtifactCommonBuff*))(Il2CppBase() + 0x1C9C0F4))(this);
	}
	template <typename T = void> T iFixBaseProxy_OnBuffStart() {
		return ((T (*)(ArtifactCommonBuff*))(Il2CppBase() + 0x1C9C390))(this);
	}

};

}
