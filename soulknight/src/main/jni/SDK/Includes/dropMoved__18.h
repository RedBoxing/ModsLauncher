#pragma once
#include "Il2Cpp/Il2Cpp.h"

class dropMoved18
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<dropMove>d__18"));
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
	template <typename T = Il2CppVector3> T& initPosition() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppVector3> T& targetPosition() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& dropMove5__2() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = float> T& startTime5__3() {
		return *(T*)((uintptr_t)this + 0x48);
	}

	template <typename T = void> T System_IDisposable_Dispose() {
		return ((T (*)(dropMoved18*))(Il2CppBase() + 0x45F77BC))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(dropMoved18*))(Il2CppBase() + 0x45F77C0))(this);
	}
	template <typename T = uintptr_t> T System_Collections_Generic_IEnumeratorSystem_Object_get_Current() {
		return ((T (*)(dropMoved18*))(Il2CppBase() + 0x45F7C98))(this);
	}
	template <typename T = void> T System_Collections_IEnumerator_Reset() {
		return ((T (*)(dropMoved18*))(Il2CppBase() + 0x45F7CA0))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(dropMoved18*))(Il2CppBase() + 0x45F7D08))(this);
	}

};

}
