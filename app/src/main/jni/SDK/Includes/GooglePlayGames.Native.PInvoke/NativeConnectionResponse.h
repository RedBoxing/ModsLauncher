#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace GooglePlayGames.Native.PInvoke {

class NativeConnectionResponse
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GooglePlayGames.Native.PInvoke", "NativeConnectionResponse"));
	}


	template <typename T = Il2CppString*> T RemoteEndpointId() {
		return ((T (*)(NativeConnectionResponse*))(Il2CppBase() + 0x2AF02EC))(this);
	}
	template <typename T = uintptr_t> T ResponseCode() {
		return ((T (*)(NativeConnectionResponse*))(Il2CppBase() + 0x2AF03BC))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T Payload() {
		return ((T (*)(NativeConnectionResponse*))(Il2CppBase() + 0x2AF0428))(this);
	}
	template <typename T = void> T CallDispose(uintptr_t selfPointer) {
		return ((T (*)(NativeConnectionResponse*, uintptr_t))(Il2CppBase() + 0x2AF050C))(this, selfPointer);
	}
	template <typename T = uintptr_t> T AsResponse(int64_t localClientId) {
		return ((T (*)(NativeConnectionResponse*, int64_t))(Il2CppBase() + 0x2AF0590))(this, localClientId);
	}
	template <typename T = uintptr_t> static T FromPointer(uintptr_t pointer) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2AF08D8))(0, pointer);
	}
	template <typename T = uintptr_t> T RemoteEndpointIdb__1_0(Il2CppArray<uintptr_t>* out_arg, uintptr_t out_size) {
		return ((T (*)(NativeConnectionResponse*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x2AF0990))(this, out_arg, out_size);
	}
	template <typename T = uintptr_t> T Payloadb__3_0(Il2CppArray<uintptr_t>* out_arg, uintptr_t out_size) {
		return ((T (*)(NativeConnectionResponse*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x2AF09C4))(this, out_arg, out_size);
	}

};

}
