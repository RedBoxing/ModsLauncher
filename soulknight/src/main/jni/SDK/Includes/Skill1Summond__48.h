#pragma once
#include "Il2Cpp/Il2Cpp.h"

class Skill1Summond48
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<Skill1Summon>d__48"));
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
	template <typename T = Il2CppVector3> T& enemyPosition() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& parent() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = int32_t> T& index() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = Il2CppVector3> T& p5__2() {
		return *(T*)((uintptr_t)this + 0x44);
	}

	template <typename T = void> T System_IDisposable_Dispose() {
		return ((T (*)(Skill1Summond48*))(Il2CppBase() + 0x1F4103C))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(Skill1Summond48*))(Il2CppBase() + 0x1F41040))(this);
	}
	template <typename T = uintptr_t> T System_Collections_Generic_IEnumeratorSystem_Object_get_Current() {
		return ((T (*)(Skill1Summond48*))(Il2CppBase() + 0x1F413CC))(this);
	}
	template <typename T = void> T System_Collections_IEnumerator_Reset() {
		return ((T (*)(Skill1Summond48*))(Il2CppBase() + 0x1F413D4))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(Skill1Summond48*))(Il2CppBase() + 0x1F4143C))(this);
	}

};

}
