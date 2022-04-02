#pragma once
#include "Il2Cpp/Il2Cpp.h"

class CreatePhantomd8
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<CreatePhantom>d__8"));
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
	template <typename T = uintptr_t> T& tmp_weapon_proto5__2() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& hand_weapon5__3() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = float> T& dleay_time5__4() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = Il2CppVector3> T& tmp_create_pos5__5() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& runtime_ani5__6() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& skill2SkinData5__7() {
		return *(T*)((uintptr_t)this + 0x50);
	}

	template <typename T = void> T System_IDisposable_Dispose() {
		return ((T (*)(CreatePhantomd8*))(Il2CppBase() + 0x18C4994))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(CreatePhantomd8*))(Il2CppBase() + 0x18C4998))(this);
	}
	template <typename T = uintptr_t> T System_Collections_Generic_IEnumeratorSystem_Object_get_Current() {
		return ((T (*)(CreatePhantomd8*))(Il2CppBase() + 0x18C5530))(this);
	}
	template <typename T = void> T System_Collections_IEnumerator_Reset() {
		return ((T (*)(CreatePhantomd8*))(Il2CppBase() + 0x18C5538))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(CreatePhantomd8*))(Il2CppBase() + 0x18C55A0))(this);
	}

};

}
