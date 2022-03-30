#pragma once
#include "Il2Cpp/Il2Cpp.h"

class IceCaveNailDropMessage
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IceCaveNailDropMessage"));
	}

	template <typename T = Il2CppVector3> T& explodePosition() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& isSmallExplode() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = bool> T& canRelease() {
		return *(T*)((uintptr_t)this + 0x1D);
	}

	template <typename T = void> T Serialize(uintptr_t writer) {
		return ((T (*)(IceCaveNailDropMessage*, uintptr_t))(Il2CppBase() + 0x19BB4F8))(this, writer);
	}
	template <typename T = void> T Deserialize(uintptr_t reader) {
		return ((T (*)(IceCaveNailDropMessage*, uintptr_t))(Il2CppBase() + 0x19BB608))(this, reader);
	}
	template <typename T = void> T iFixBaseProxy_Serialize(uintptr_t P0) {
		return ((T (*)(IceCaveNailDropMessage*, uintptr_t))(Il2CppBase() + 0x19BB700))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_Deserialize(uintptr_t P0) {
		return ((T (*)(IceCaveNailDropMessage*, uintptr_t))(Il2CppBase() + 0x19BB708))(this, P0);
	}

};

}
