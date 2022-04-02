#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace GooglePlayGames.Native.PInvoke {

class NativeAppIdentifier
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GooglePlayGames.Native.PInvoke", "NativeAppIdentifier"));
	}


	template <typename T = uintptr_t> static T NearbyUtils_ConstructAppIdentifier(Il2CppString* appId) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x2AEF88C))(0, appId);
	}
	template <typename T = Il2CppString*> T Id() {
		return ((T (*)(NativeAppIdentifier*))(Il2CppBase() + 0x2AEF9B8))(this);
	}
	template <typename T = void> T CallDispose(uintptr_t selfPointer) {
		return ((T (*)(NativeAppIdentifier*, uintptr_t))(Il2CppBase() + 0x2AEFA88))(this, selfPointer);
	}
	template <typename T = uintptr_t> static T FromString(Il2CppString* appId) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x2AEFB0C))(0, appId);
	}
	template <typename T = uintptr_t> T Idb__2_0(Il2CppArray<uintptr_t>* out_arg, uintptr_t out_size) {
		return ((T (*)(NativeAppIdentifier*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x2AEFBBC))(this, out_arg, out_size);
	}

};

}
