#pragma once
#include "Il2Cpp/Il2Cpp.h"

class ArtifactSwordComPart
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ArtifactSwordComPart"));
	}

	template <typename T = uintptr_t> T& part() {
		return *(T*)((uintptr_t)this + 0xD0);
	}

	template <typename T = int32_t> T get_partID() {
		return ((T (*)(ArtifactSwordComPart*))(Il2CppBase() + 0x1CA9964))(this);
	}
	template <typename T = bool> T get_hasGripPos() {
		return ((T (*)(ArtifactSwordComPart*))(Il2CppBase() + 0x1CA99C4))(this);
	}
	template <typename T = int32_t> T CompositeOrder() {
		return ((T (*)(ArtifactSwordComPart*))(Il2CppBase() + 0x1CA9A38))(this);
	}
	template <typename T = int32_t> T OnOtherComponentAttach(uintptr_t other) {
		return ((T (*)(ArtifactSwordComPart*, uintptr_t))(Il2CppBase() + 0x1CA9A98))(this, other);
	}
	template <typename T = Il2CppString*> T GetPartIDKey() {
		return ((T (*)(ArtifactSwordComPart*))(Il2CppBase() + 0x1CA9B80))(this);
	}
	template <typename T = Il2CppString*> T GetPartDefaultName() {
		return ((T (*)(ArtifactSwordComPart*))(Il2CppBase() + 0x1CA9C54))(this);
	}
	template <typename T = int32_t> T iFixBaseProxy_get_partID() {
		return ((T (*)(ArtifactSwordComPart*))(Il2CppBase() + 0x1CA9D2C))(this);
	}
	template <typename T = bool> T iFixBaseProxy_get_hasGripPos() {
		return ((T (*)(ArtifactSwordComPart*))(Il2CppBase() + 0x1CA9D30))(this);
	}
	template <typename T = int32_t> T iFixBaseProxy_CompositeOrder() {
		return ((T (*)(ArtifactSwordComPart*))(Il2CppBase() + 0x1CA9D34))(this);
	}
	template <typename T = int32_t> T iFixBaseProxy_OnOtherComponentAttach(uintptr_t P0) {
		return ((T (*)(ArtifactSwordComPart*, uintptr_t))(Il2CppBase() + 0x1CA9D38))(this, P0);
	}
	template <typename T = Il2CppString*> T iFixBaseProxy_GetPartIDKey() {
		return ((T (*)(ArtifactSwordComPart*))(Il2CppBase() + 0x1CA9D3C))(this);
	}
	template <typename T = Il2CppString*> T iFixBaseProxy_GetPartDefaultName() {
		return ((T (*)(ArtifactSwordComPart*))(Il2CppBase() + 0x1CA9D40))(this);
	}

};

}
