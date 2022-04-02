#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace GooglePlayGames.BasicApi.SavedGame {

class IConflictResolver
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GooglePlayGames.BasicApi.SavedGame", "IConflictResolver"));
	}


	template <typename T = void> T ChooseMetadata(uintptr_t chosenMetadata) {
		return ((T (*)(IConflictResolver*, uintptr_t))(Il2CppBase() + 0x0))(this, chosenMetadata);
	}
	template <typename T = void> T ResolveConflict(uintptr_t chosenMetadata, uintptr_t metadataUpdate, Il2CppArray<uintptr_t>* updatedData) {
		return ((T (*)(IConflictResolver*, uintptr_t, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x0))(this, chosenMetadata, metadataUpdate, updatedData);
	}

};

}
