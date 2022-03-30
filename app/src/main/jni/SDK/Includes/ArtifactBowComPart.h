#pragma once
#include "Il2Cpp/Il2Cpp.h"

class ArtifactBowComPart
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ArtifactBowComPart"));
	}

	template <typename T = uintptr_t> T& part() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = uintptr_t> T& defaultBullet() {
		return *(T*)((uintptr_t)this + 0xD8);
	}

	template <typename T = int32_t> T get_partID() {
		return ((T (*)(ArtifactBowComPart*))(Il2CppBase() + 0x1C98F48))(this);
	}
	template <typename T = bool> T get_hasGripPos() {
		return ((T (*)(ArtifactBowComPart*))(Il2CppBase() + 0x1C98FA8))(this);
	}
	template <typename T = bool> T get_isArrow() {
		return ((T (*)(ArtifactBowComPart*))(Il2CppBase() + 0x1C9901C))(this);
	}
	template <typename T = int32_t> T CompositeOrder() {
		return ((T (*)(ArtifactBowComPart*))(Il2CppBase() + 0x1C99090))(this);
	}
	template <typename T = void> T OnDetach() {
		return ((T (*)(ArtifactBowComPart*))(Il2CppBase() + 0x1C990F0))(this);
	}
	template <typename T = int32_t> T OnOtherComponentAttach(uintptr_t other) {
		return ((T (*)(ArtifactBowComPart*, uintptr_t))(Il2CppBase() + 0x1C993A0))(this, other);
	}
	template <typename T = Il2CppString*> T GetPartIDKey() {
		return ((T (*)(ArtifactBowComPart*))(Il2CppBase() + 0x1C99488))(this);
	}
	template <typename T = Il2CppString*> T GetPartDefaultName() {
		return ((T (*)(ArtifactBowComPart*))(Il2CppBase() + 0x1C99558))(this);
	}
	template <typename T = int32_t> T iFixBaseProxy_get_partID() {
		return ((T (*)(ArtifactBowComPart*))(Il2CppBase() + 0x1C996B4))(this);
	}
	template <typename T = bool> T iFixBaseProxy_get_hasGripPos() {
		return ((T (*)(ArtifactBowComPart*))(Il2CppBase() + 0x1C99718))(this);
	}
	template <typename T = int32_t> T iFixBaseProxy_CompositeOrder() {
		return ((T (*)(ArtifactBowComPart*))(Il2CppBase() + 0x1C9977C))(this);
	}
	template <typename T = void> T iFixBaseProxy_OnDetach() {
		return ((T (*)(ArtifactBowComPart*))(Il2CppBase() + 0x1C997E0))(this);
	}
	template <typename T = int32_t> T iFixBaseProxy_OnOtherComponentAttach(uintptr_t P0) {
		return ((T (*)(ArtifactBowComPart*, uintptr_t))(Il2CppBase() + 0x1C997E4))(this, P0);
	}
	template <typename T = Il2CppString*> T iFixBaseProxy_GetPartIDKey() {
		return ((T (*)(ArtifactBowComPart*))(Il2CppBase() + 0x1C9985C))(this);
	}
	template <typename T = Il2CppString*> T iFixBaseProxy_GetPartDefaultName() {
		return ((T (*)(ArtifactBowComPart*))(Il2CppBase() + 0x1C998EC))(this);
	}

};

}
