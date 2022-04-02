#pragma once
#include "Il2Cpp/Il2Cpp.h"

class NativeConflictResolver
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "NativeConflictResolver"));
	}

	template <typename T = uintptr_t> T& mManager() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& mConflictId() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& mOriginal() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& mUnmerged() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = void*> T& mCompleteCallback() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& mRetryFileOpen() {
		return *(T*)((uintptr_t)this + 0x38);
	}

	template <typename T = void> T ResolveConflict(uintptr_t chosenMetadata, uintptr_t metadataUpdate, Il2CppArray<uintptr_t>* updatedData) {
		return ((T (*)(NativeConflictResolver*, uintptr_t, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x2834530))(this, chosenMetadata, metadataUpdate, updatedData);
	}
	template <typename T = void> T ChooseMetadata(uintptr_t chosenMetadata) {
		return ((T (*)(NativeConflictResolver*, uintptr_t))(Il2CppBase() + 0x28347C0))(this, chosenMetadata);
	}
	template <typename T = void> T ResolveConflictb__7_0(uintptr_t response) {
		return ((T (*)(NativeConflictResolver*, uintptr_t))(Il2CppBase() + 0x28349C4))(this, response);
	}
	template <typename T = void> T ChooseMetadatab__8_0(uintptr_t response) {
		return ((T (*)(NativeConflictResolver*, uintptr_t))(Il2CppBase() + 0x2834AC8))(this, response);
	}

};

}
