#pragma once
#include "Il2Cpp/Il2Cpp.h"

class RebuildTextDelayd10
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<RebuildTextDelay>d__10"));
	}

	template <typename T = int32_t> T& 1__state() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& 2__current() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& canvas5__2() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = void> T System_IDisposable_Dispose() {
		return ((T (*)(RebuildTextDelayd10*))(Il2CppBase() + 0x4258724))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(RebuildTextDelayd10*))(Il2CppBase() + 0x4258728))(this);
	}
	template <typename T = uintptr_t> T System_Collections_Generic_IEnumeratorSystem_Object_get_Current() {
		return ((T (*)(RebuildTextDelayd10*))(Il2CppBase() + 0x4258970))(this);
	}
	template <typename T = void> T System_Collections_IEnumerator_Reset() {
		return ((T (*)(RebuildTextDelayd10*))(Il2CppBase() + 0x4258978))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(RebuildTextDelayd10*))(Il2CppBase() + 0x42589E0))(this);
	}

};

}
