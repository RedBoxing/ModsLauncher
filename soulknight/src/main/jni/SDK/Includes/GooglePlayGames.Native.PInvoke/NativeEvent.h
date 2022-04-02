#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace GooglePlayGames.Native.PInvoke {

class NativeEvent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GooglePlayGames.Native.PInvoke", "NativeEvent"));
	}


	template <typename T = Il2CppString*> T get_Id() {
		return ((T (*)(NativeEvent*))(Il2CppBase() + 0x2AF1598))(this);
	}
	template <typename T = Il2CppString*> T get_Name() {
		return ((T (*)(NativeEvent*))(Il2CppBase() + 0x2AF1668))(this);
	}
	template <typename T = Il2CppString*> T get_Description() {
		return ((T (*)(NativeEvent*))(Il2CppBase() + 0x2AF1738))(this);
	}
	template <typename T = Il2CppString*> T get_ImageUrl() {
		return ((T (*)(NativeEvent*))(Il2CppBase() + 0x2AF1808))(this);
	}
	template <typename T = uint64_t> T get_CurrentCount() {
		return ((T (*)(NativeEvent*))(Il2CppBase() + 0x2AF18D8))(this);
	}
	template <typename T = uintptr_t> T get_Visibility() {
		return ((T (*)(NativeEvent*))(Il2CppBase() + 0x2AF1944))(this);
	}
	template <typename T = void> T CallDispose(uintptr_t selfPointer) {
		return ((T (*)(NativeEvent*, uintptr_t))(Il2CppBase() + 0x2AF1A70))(this, selfPointer);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(NativeEvent*))(Il2CppBase() + 0x2AF1AF4))(this);
	}
	template <typename T = uintptr_t> T get_Idb__2_0(Il2CppArray<uintptr_t>* out_string, uintptr_t out_size) {
		return ((T (*)(NativeEvent*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x2AF1E14))(this, out_string, out_size);
	}
	template <typename T = uintptr_t> T get_Nameb__4_0(Il2CppArray<uintptr_t>* out_string, uintptr_t out_size) {
		return ((T (*)(NativeEvent*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x2AF1E48))(this, out_string, out_size);
	}
	template <typename T = uintptr_t> T get_Descriptionb__6_0(Il2CppArray<uintptr_t>* out_string, uintptr_t out_size) {
		return ((T (*)(NativeEvent*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x2AF1E7C))(this, out_string, out_size);
	}
	template <typename T = uintptr_t> T get_ImageUrlb__8_0(Il2CppArray<uintptr_t>* out_string, uintptr_t out_size) {
		return ((T (*)(NativeEvent*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x2AF1EB0))(this, out_string, out_size);
	}
	template <typename T = Il2CppString*> T iFixBaseProxy_ToString() {
		return ((T (*)(NativeEvent*))(Il2CppBase() + 0x2AF1EE4))(this);
	}

};

}
