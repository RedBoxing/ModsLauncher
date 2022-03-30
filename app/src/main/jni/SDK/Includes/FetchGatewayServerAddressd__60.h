#pragma once
#include "Il2Cpp/Il2Cpp.h"

class FetchGatewayServerAddressd60
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<FetchGatewayServerAddress>d__60"));
	}

	template <typename T = int32_t> T& 1__state() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& 2__current() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> T& forceRequest() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& 8__1() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = void> T System_IDisposable_Dispose() {
		return ((T (*)(FetchGatewayServerAddressd60*))(Il2CppBase() + 0x4183EAC))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(FetchGatewayServerAddressd60*))(Il2CppBase() + 0x4183EB0))(this);
	}
	template <typename T = uintptr_t> T System_Collections_Generic_IEnumeratorSystem_Object_get_Current() {
		return ((T (*)(FetchGatewayServerAddressd60*))(Il2CppBase() + 0x4183FDC))(this);
	}
	template <typename T = void> T System_Collections_IEnumerator_Reset() {
		return ((T (*)(FetchGatewayServerAddressd60*))(Il2CppBase() + 0x4183FE4))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(FetchGatewayServerAddressd60*))(Il2CppBase() + 0x418404C))(this);
	}

};

}
