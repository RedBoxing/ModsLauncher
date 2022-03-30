#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace GooglePlayGames.BasicApi.SavedGame {

class ConflictCallback
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GooglePlayGames.BasicApi.SavedGame", "ConflictCallback"));
	}


	template <typename T = void> T Invoke(uintptr_t resolver, uintptr_t original, Il2CppArray<uintptr_t>* originalData, uintptr_t unmerged, Il2CppArray<uintptr_t>* unmergedData) {
		return ((T (*)(ConflictCallback*, uintptr_t, uintptr_t, Il2CppArray<uintptr_t>*, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x35C66EC))(this, resolver, original, originalData, unmerged, unmergedData);
	}
	template <typename T = uintptr_t> T BeginInvoke(uintptr_t resolver, uintptr_t original, Il2CppArray<uintptr_t>* originalData, uintptr_t unmerged, Il2CppArray<uintptr_t>* unmergedData, uintptr_t callback, uintptr_t object) {
		return ((T (*)(ConflictCallback*, uintptr_t, uintptr_t, Il2CppArray<uintptr_t>*, uintptr_t, Il2CppArray<uintptr_t>*, uintptr_t, uintptr_t))(Il2CppBase() + 0x35C6F28))(this, resolver, original, originalData, unmerged, unmergedData, callback, object);
	}
	template <typename T = void> T EndInvoke(uintptr_t result) {
		return ((T (*)(ConflictCallback*, uintptr_t))(Il2CppBase() + 0x35C6F5C))(this, result);
	}

};

}
