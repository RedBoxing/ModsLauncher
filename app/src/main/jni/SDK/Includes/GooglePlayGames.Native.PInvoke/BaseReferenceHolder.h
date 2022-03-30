#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace GooglePlayGames.Native.PInvoke {

class BaseReferenceHolder
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GooglePlayGames.Native.PInvoke", "BaseReferenceHolder"));
	}

	template <typename T = Il2CppDictionary<uintptr_t, uintptr_t>*> static T& _refs() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& mSelfPointer() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = bool> T IsDisposed() {
		return ((T (*)(BaseReferenceHolder*))(Il2CppBase() + 0x283ED18))(this);
	}
	template <typename T = uintptr_t> T SelfPtr() {
		return ((T (*)(BaseReferenceHolder*))(Il2CppBase() + 0x283DB74))(this);
	}
	template <typename T = void> T CallDispose(uintptr_t selfPointer) {
		return ((T (*)(BaseReferenceHolder*, uintptr_t))(Il2CppBase() + 0x0))(this, selfPointer);
	}
	template <typename T = void> T Finalize() {
		return ((T (*)(BaseReferenceHolder*))(Il2CppBase() + 0x283EDC8))(this);
	}
	template <typename T = void> T Dispose() {
		return ((T (*)(BaseReferenceHolder*))(Il2CppBase() + 0x282C69C))(this);
	}
	template <typename T = uintptr_t> T AsPointer() {
		return ((T (*)(BaseReferenceHolder*))(Il2CppBase() + 0x283EFD4))(this);
	}
	template <typename T = void> T Dispose_1(bool fromFinalizer) {
		return ((T (*)(BaseReferenceHolder*, bool))(Il2CppBase() + 0x283EE40))(this, fromFinalizer);
	}
	template <typename T = void> T ReferToMe() {
		return ((T (*)(BaseReferenceHolder*))(Il2CppBase() + 0x2836958))(this);
	}
	template <typename T = void> T ForgetMe() {
		return ((T (*)(BaseReferenceHolder*))(Il2CppBase() + 0x2838F0C))(this);
	}

};

}
