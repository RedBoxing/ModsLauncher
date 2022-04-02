#pragma once
#include "Il2Cpp/Il2Cpp.h"

class Builder
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "Builder"));
	}

	template <typename T = bool> T& mDescriptionUpdated() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = Il2CppString*> T& mNewDescription() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = bool> T& mCoverImageUpdated() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& mNewPngCoverImage() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = void*> T& mNewPlayedTime() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = uintptr_t> T WithUpdatedDescription(Il2CppString* description) {
		return ((T (*)(Builder*, Il2CppString*))(Il2CppBase() + 0x153B300))(this, description);
	}
	template <typename T = uintptr_t> T WithUpdatedPngCoverImage(Il2CppArray<uintptr_t>* newPngCoverImage) {
		return ((T (*)(Builder*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x153B308))(this, newPngCoverImage);
	}
	template <typename T = uintptr_t> T WithUpdatedPlayedTime(uintptr_t newPlayedTime) {
		return ((T (*)(Builder*, uintptr_t))(Il2CppBase() + 0x153B310))(this, newPlayedTime);
	}
	template <typename T = uintptr_t> T Build() {
		return ((T (*)(Builder*))(Il2CppBase() + 0x153B318))(this);
	}

};

}
