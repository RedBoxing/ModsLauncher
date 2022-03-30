#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace GooglePlayGames.Native.PInvoke {

class NativePlayer
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GooglePlayGames.Native.PInvoke", "NativePlayer"));
	}


	template <typename T = Il2CppString*> T Id() {
		return ((T (*)(NativePlayer*))(Il2CppBase() + 0x2AF2CBC))(this);
	}
	template <typename T = Il2CppString*> T Name() {
		return ((T (*)(NativePlayer*))(Il2CppBase() + 0x2AF2D8C))(this);
	}
	template <typename T = Il2CppString*> T AvatarURL() {
		return ((T (*)(NativePlayer*))(Il2CppBase() + 0x2AF2E5C))(this);
	}
	template <typename T = void> T CallDispose(uintptr_t selfPointer) {
		return ((T (*)(NativePlayer*, uintptr_t))(Il2CppBase() + 0x2AF2F2C))(this, selfPointer);
	}
	template <typename T = uintptr_t> T AsPlayer() {
		return ((T (*)(NativePlayer*))(Il2CppBase() + 0x2AEE830))(this);
	}
	template <typename T = uintptr_t> T Idb__1_0(Il2CppArray<uintptr_t>* out_string, uintptr_t out_size) {
		return ((T (*)(NativePlayer*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x2AF2FB0))(this, out_string, out_size);
	}
	template <typename T = uintptr_t> T Nameb__2_0(Il2CppArray<uintptr_t>* out_string, uintptr_t out_size) {
		return ((T (*)(NativePlayer*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x2AF2FE4))(this, out_string, out_size);
	}
	template <typename T = uintptr_t> T AvatarURLb__3_0(Il2CppArray<uintptr_t>* out_string, uintptr_t out_size) {
		return ((T (*)(NativePlayer*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x2AF3018))(this, out_string, out_size);
	}

};

}
