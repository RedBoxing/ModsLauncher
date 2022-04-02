#pragma once
#include "Il2Cpp/Il2Cpp.h"

class RoleAttributeDeveloper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RoleAttributeDeveloper"));
	}


	template <typename T = void> T RestoreHealth(int32_t value, bool sync) {
		return ((T (*)(RoleAttributeDeveloper*, int32_t, bool))(Il2CppBase() + 0x1BEA368))(this, value, sync);
	}
	template <typename T = void> T iFixBaseProxy_RestoreHealth(int32_t P0, bool P1) {
		return ((T (*)(RoleAttributeDeveloper*, int32_t, bool))(Il2CppBase() + 0x1BEA440))(this, P0, P1);
	}

};

}
