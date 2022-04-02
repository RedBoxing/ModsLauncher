#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace GooglePlayGames.Native.PInvoke {

class NativeRealTimeRoom
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GooglePlayGames.Native.PInvoke", "NativeRealTimeRoom"));
	}


	template <typename T = Il2CppString*> T Id() {
		return ((T (*)(NativeRealTimeRoom*))(Il2CppBase() + 0x2AF3A48))(this);
	}
	template <typename T = void*> T Participants() {
		return ((T (*)(NativeRealTimeRoom*))(Il2CppBase() + 0x2AF3B18))(this);
	}
	template <typename T = uint32_t> T ParticipantCount() {
		return ((T (*)(NativeRealTimeRoom*))(Il2CppBase() + 0x2AF3C28))(this);
	}
	template <typename T = uintptr_t> T Status() {
		return ((T (*)(NativeRealTimeRoom*))(Il2CppBase() + 0x2AF3CB0))(this);
	}
	template <typename T = void> T CallDispose(uintptr_t selfPointer) {
		return ((T (*)(NativeRealTimeRoom*, uintptr_t))(Il2CppBase() + 0x2AF3D1C))(this, selfPointer);
	}
	template <typename T = uintptr_t> static T FromPointer(uintptr_t selfPointer) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2AF3DA0))(0, selfPointer);
	}
	template <typename T = uintptr_t> T Idb__1_0(Il2CppArray<uintptr_t>* out_string, uintptr_t size) {
		return ((T (*)(NativeRealTimeRoom*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x2AF3E84))(this, out_string, size);
	}
	template <typename T = uintptr_t> T Participantsb__2_0(uintptr_t index) {
		return ((T (*)(NativeRealTimeRoom*, uintptr_t))(Il2CppBase() + 0x2AF3EB8))(this, index);
	}

};

}
