#pragma once
#include "Il2Cpp/Il2Cpp.h"

class FixedSkillDescriptionSized109
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<FixedSkillDescriptionSize>d__109"));
	}

	template <typename T = int32_t> T& 1__state() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& 2__current() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> T& isSkillUnlocked() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& 4__this() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = void> T System_IDisposable_Dispose() {
		return ((T (*)(FixedSkillDescriptionSized109*))(Il2CppBase() + 0x44FA980))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(FixedSkillDescriptionSized109*))(Il2CppBase() + 0x44FA984))(this);
	}
	template <typename T = uintptr_t> T System_Collections_Generic_IEnumeratorSystem_Object_get_Current() {
		return ((T (*)(FixedSkillDescriptionSized109*))(Il2CppBase() + 0x44FAC34))(this);
	}
	template <typename T = void> T System_Collections_IEnumerator_Reset() {
		return ((T (*)(FixedSkillDescriptionSized109*))(Il2CppBase() + 0x44FAC3C))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(FixedSkillDescriptionSized109*))(Il2CppBase() + 0x44FACA4))(this);
	}

};

}
