#pragma once
#include "Il2Cpp/Il2Cpp.h"

class CloudSaveExtraData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CloudSaveExtraData"));
	}

	template <typename T = int32_t> T& GameSession() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& Gem() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& FishCount() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& ItemTotal() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& HeroTotal() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& SkinTotal() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = int32_t> T& SkillTotal() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& PetTotal() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = Il2CppList<int32_t>*> T& heroUnlock() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppList<Il2CppString*>*> T& skinUnlock() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = Il2CppList<Il2CppString*>*> T& skillUnlock() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = Il2CppList<Il2CppString*>*> T& petUnlock() {
		return *(T*)((uintptr_t)this + 0x48);
	}

	template <typename T = uintptr_t> static T CreateExtraData(uintptr_t cloudData) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x1E801DC))(0, cloudData);
	}
	template <typename T = int32_t> static T GetPassTimes() {
		return ((T (*)(void *))(Il2CppBase() + 0x1E7F658))(0);
	}
	template <typename T = uintptr_t> static T op_Subtraction(uintptr_t a, uintptr_t b) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x1E8140C))(0, a, b);
	}
	template <typename T = uintptr_t> static T op_Addition(uintptr_t a, uintptr_t b) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x1E81708))(0, a, b);
	}
	template <typename T = bool> T GetHasPositiveValue() {
		return ((T (*)(CloudSaveExtraData*))(Il2CppBase() + 0x1E819B0))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(CloudSaveExtraData*))(Il2CppBase() + 0x1E81AE4))(this);
	}
	template <typename T = Il2CppString*> T GetExceptRMBPayDescribe() {
		return ((T (*)(CloudSaveExtraData*))(Il2CppBase() + 0x1E81E50))(this);
	}
	template <typename T = Il2CppString*> T iFixBaseProxy_ToString() {
		return ((T (*)(CloudSaveExtraData*))(Il2CppBase() + 0x1E823B8))(this);
	}

};

}
