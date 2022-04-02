#pragma once
#include "Il2Cpp/Il2Cpp.h"

class ArtifactStaffComPart
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ArtifactStaffComPart"));
	}

	template <typename T = uintptr_t> T& part() {
		return *(T*)((uintptr_t)this + 0xD0);
	}

	template <typename T = int32_t> T get_partID() {
		return ((T (*)(ArtifactStaffComPart*))(Il2CppBase() + 0x1CA958C))(this);
	}
	template <typename T = bool> T get_hasGripPos() {
		return ((T (*)(ArtifactStaffComPart*))(Il2CppBase() + 0x1CA95EC))(this);
	}
	template <typename T = int32_t> T CompositeOrder() {
		return ((T (*)(ArtifactStaffComPart*))(Il2CppBase() + 0x1CA9660))(this);
	}
	template <typename T = int32_t> T OnOtherComponentAttach(uintptr_t other) {
		return ((T (*)(ArtifactStaffComPart*, uintptr_t))(Il2CppBase() + 0x1CA96C0))(this, other);
	}
	template <typename T = Il2CppString*> T GetPartIDKey() {
		return ((T (*)(ArtifactStaffComPart*))(Il2CppBase() + 0x1CA97A8))(this);
	}
	template <typename T = Il2CppString*> T GetPartDefaultName() {
		return ((T (*)(ArtifactStaffComPart*))(Il2CppBase() + 0x1CA9878))(this);
	}
	template <typename T = int32_t> T iFixBaseProxy_get_partID() {
		return ((T (*)(ArtifactStaffComPart*))(Il2CppBase() + 0x1CA994C))(this);
	}
	template <typename T = bool> T iFixBaseProxy_get_hasGripPos() {
		return ((T (*)(ArtifactStaffComPart*))(Il2CppBase() + 0x1CA9950))(this);
	}
	template <typename T = int32_t> T iFixBaseProxy_CompositeOrder() {
		return ((T (*)(ArtifactStaffComPart*))(Il2CppBase() + 0x1CA9954))(this);
	}
	template <typename T = int32_t> T iFixBaseProxy_OnOtherComponentAttach(uintptr_t P0) {
		return ((T (*)(ArtifactStaffComPart*, uintptr_t))(Il2CppBase() + 0x1CA9958))(this, P0);
	}
	template <typename T = Il2CppString*> T iFixBaseProxy_GetPartIDKey() {
		return ((T (*)(ArtifactStaffComPart*))(Il2CppBase() + 0x1CA995C))(this);
	}
	template <typename T = Il2CppString*> T iFixBaseProxy_GetPartDefaultName() {
		return ((T (*)(ArtifactStaffComPart*))(Il2CppBase() + 0x1CA9960))(this);
	}

};

}
