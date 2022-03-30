#pragma once
#include "Il2Cpp/Il2Cpp.h"

class CreateFloorsd36
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<CreateFloors>d__36"));
	}

	template <typename T = int32_t> T& 1__state() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& 2__current() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& 4__this() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& extendLength5__2() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& wait5__3() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> T& floorLength5__4() {
		return *(T*)((uintptr_t)this + 0x38);
	}

	template <typename T = void> T System_IDisposable_Dispose() {
		return ((T (*)(CreateFloorsd36*))(Il2CppBase() + 0x186DA60))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(CreateFloorsd36*))(Il2CppBase() + 0x186DA64))(this);
	}
	template <typename T = uintptr_t> T System_Collections_Generic_IEnumeratorSystem_Object_get_Current() {
		return ((T (*)(CreateFloorsd36*))(Il2CppBase() + 0x186DE84))(this);
	}
	template <typename T = void> T System_Collections_IEnumerator_Reset() {
		return ((T (*)(CreateFloorsd36*))(Il2CppBase() + 0x186DE8C))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(CreateFloorsd36*))(Il2CppBase() + 0x186DEF4))(this);
	}

};

}
