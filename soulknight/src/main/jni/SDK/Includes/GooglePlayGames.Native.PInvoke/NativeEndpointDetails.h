#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace GooglePlayGames.Native.PInvoke {

class NativeEndpointDetails
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GooglePlayGames.Native.PInvoke", "NativeEndpointDetails"));
	}


	template <typename T = Il2CppString*> T EndpointId() {
		return ((T (*)(NativeEndpointDetails*))(Il2CppBase() + 0x2AF0A70))(this);
	}
	template <typename T = Il2CppString*> T Name() {
		return ((T (*)(NativeEndpointDetails*))(Il2CppBase() + 0x2AF0B40))(this);
	}
	template <typename T = Il2CppString*> T ServiceId() {
		return ((T (*)(NativeEndpointDetails*))(Il2CppBase() + 0x2AF0C10))(this);
	}
	template <typename T = void> T CallDispose(uintptr_t selfPointer) {
		return ((T (*)(NativeEndpointDetails*, uintptr_t))(Il2CppBase() + 0x2AF0CE0))(this, selfPointer);
	}
	template <typename T = uintptr_t> T ToDetails() {
		return ((T (*)(NativeEndpointDetails*))(Il2CppBase() + 0x2AF0D64))(this);
	}
	template <typename T = uintptr_t> static T FromPointer(uintptr_t pointer) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2AF0E10))(0, pointer);
	}
	template <typename T = uintptr_t> T EndpointIdb__1_0(Il2CppArray<uintptr_t>* out_arg, uintptr_t out_size) {
		return ((T (*)(NativeEndpointDetails*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x2AF0EF4))(this, out_arg, out_size);
	}
	template <typename T = uintptr_t> T Nameb__2_0(Il2CppArray<uintptr_t>* out_arg, uintptr_t out_size) {
		return ((T (*)(NativeEndpointDetails*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x2AF0F28))(this, out_arg, out_size);
	}
	template <typename T = uintptr_t> T ServiceIdb__3_0(Il2CppArray<uintptr_t>* out_arg, uintptr_t out_size) {
		return ((T (*)(NativeEndpointDetails*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x2AF0F5C))(this, out_arg, out_size);
	}

};

}
