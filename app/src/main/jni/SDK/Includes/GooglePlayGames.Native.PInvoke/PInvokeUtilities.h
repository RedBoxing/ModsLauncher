#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace GooglePlayGames.Native.PInvoke {

class PInvokeUtilities
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GooglePlayGames.Native.PInvoke", "PInvokeUtilities"));
	}

	template <typename T = uintptr_t> static T& UnixEpoch() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = uintptr_t> static T CheckNonNull(uintptr_t reference) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2AFA084))(0, reference);
	}
	template <typename T = bool> static T IsNull(uintptr_t reference) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2AFA188))(0, reference);
	}
	template <typename T = bool> static T IsNull_1(uintptr_t pointer) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2AEE2D4))(0, pointer);
	}
	template <typename T = uintptr_t> static T FromMillisSinceUnixEpoch(int64_t millisSinceEpoch) {
		return ((T (*)(void *, int64_t))(Il2CppBase() + 0x2AF5200))(0, millisSinceEpoch);
	}
	template <typename T = Il2CppString*> static T OutParamsToString(uintptr_t outStringMethod) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2AEDA78))(0, outStringMethod);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T OutParamsToArray(void* outMethod) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x0))(0, outMethod);
	}
	template <typename T = void*> static T ToEnumerable(uintptr_t size, void* getElement) {
		return ((T (*)(void *, uintptr_t, void*))(Il2CppBase() + 0x0))(0, size, getElement);
	}
	template <typename T = void*> static T ToEnumerator(uintptr_t size, void* getElement) {
		return ((T (*)(void *, uintptr_t, void*))(Il2CppBase() + 0x0))(0, size, getElement);
	}
	template <typename T = uintptr_t> static T ArrayToSizeT(Il2CppArray<uintptr_t>* array) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x0))(0, array);
	}
	template <typename T = int64_t> static T ToMilliseconds(uintptr_t span) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2AFA6E0))(0, span);
	}

};

}
