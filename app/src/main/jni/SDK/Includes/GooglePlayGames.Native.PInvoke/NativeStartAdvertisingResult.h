#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace GooglePlayGames.Native.PInvoke {

class NativeStartAdvertisingResult
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GooglePlayGames.Native.PInvoke", "NativeStartAdvertisingResult"));
	}


	template <typename T = int32_t> T GetStatus() {
		return ((T (*)(NativeStartAdvertisingResult*))(Il2CppBase() + 0x2AF5EF4))(this);
	}
	template <typename T = Il2CppString*> T LocalEndpointName() {
		return ((T (*)(NativeStartAdvertisingResult*))(Il2CppBase() + 0x2AF5F60))(this);
	}
	template <typename T = void> T CallDispose(uintptr_t selfPointer) {
		return ((T (*)(NativeStartAdvertisingResult*, uintptr_t))(Il2CppBase() + 0x2AF6030))(this, selfPointer);
	}
	template <typename T = uintptr_t> T AsResult() {
		return ((T (*)(NativeStartAdvertisingResult*))(Il2CppBase() + 0x2AF60B4))(this);
	}
	template <typename T = uintptr_t> static T FromPointer(uintptr_t pointer) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2AF6264))(0, pointer);
	}
	template <typename T = uintptr_t> T LocalEndpointNameb__2_0(Il2CppArray<uintptr_t>* out_arg, uintptr_t out_size) {
		return ((T (*)(NativeStartAdvertisingResult*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x2AF631C))(this, out_arg, out_size);
	}

};

}
