#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace GooglePlayGames.Native.PInvoke {

class NativeConnectionRequest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GooglePlayGames.Native.PInvoke", "NativeConnectionRequest"));
	}


	template <typename T = Il2CppString*> T RemoteEndpointId() {
		return ((T (*)(NativeConnectionRequest*))(Il2CppBase() + 0x2AEFC68))(this);
	}
	template <typename T = Il2CppString*> T RemoteEndpointName() {
		return ((T (*)(NativeConnectionRequest*))(Il2CppBase() + 0x2AEFD38))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T Payload() {
		return ((T (*)(NativeConnectionRequest*))(Il2CppBase() + 0x2AEFE08))(this);
	}
	template <typename T = void> T CallDispose(uintptr_t selfPointer) {
		return ((T (*)(NativeConnectionRequest*, uintptr_t))(Il2CppBase() + 0x2AEFEEC))(this, selfPointer);
	}
	template <typename T = uintptr_t> T AsRequest() {
		return ((T (*)(NativeConnectionRequest*))(Il2CppBase() + 0x2AEFF70))(this);
	}
	template <typename T = uintptr_t> static T FromPointer(uintptr_t pointer) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2AF0120))(0, pointer);
	}
	template <typename T = uintptr_t> T RemoteEndpointIdb__1_0(Il2CppArray<uintptr_t>* out_arg, uintptr_t out_size) {
		return ((T (*)(NativeConnectionRequest*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x2AF01D8))(this, out_arg, out_size);
	}
	template <typename T = uintptr_t> T RemoteEndpointNameb__2_0(Il2CppArray<uintptr_t>* out_arg, uintptr_t out_size) {
		return ((T (*)(NativeConnectionRequest*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x2AF020C))(this, out_arg, out_size);
	}
	template <typename T = uintptr_t> T Payloadb__3_0(Il2CppArray<uintptr_t>* out_arg, uintptr_t out_size) {
		return ((T (*)(NativeConnectionRequest*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x2AF0240))(this, out_arg, out_size);
	}

};

}
