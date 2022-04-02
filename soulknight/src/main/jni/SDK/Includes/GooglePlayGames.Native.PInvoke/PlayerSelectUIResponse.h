#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace GooglePlayGames.Native.PInvoke {

class PlayerSelectUIResponse
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GooglePlayGames.Native.PInvoke", "PlayerSelectUIResponse"));
	}


	template <typename T = uintptr_t> T Status() {
		return ((T (*)(PlayerSelectUIResponse*))(Il2CppBase() + 0x2AFC7A0))(this);
	}
	template <typename T = Il2CppString*> T PlayerIdAtIndex(uintptr_t index) {
		return ((T (*)(PlayerSelectUIResponse*, uintptr_t))(Il2CppBase() + 0x2AFC80C))(this, index);
	}
	template <typename T = void*> T GetEnumerator() {
		return ((T (*)(PlayerSelectUIResponse*))(Il2CppBase() + 0x2AFC93C))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerable_GetEnumerator() {
		return ((T (*)(PlayerSelectUIResponse*))(Il2CppBase() + 0x2AFCA4C))(this);
	}
	template <typename T = uint32_t> T MinimumAutomatchingPlayers() {
		return ((T (*)(PlayerSelectUIResponse*))(Il2CppBase() + 0x2AFCAAC))(this);
	}
	template <typename T = uint32_t> T MaximumAutomatchingPlayers() {
		return ((T (*)(PlayerSelectUIResponse*))(Il2CppBase() + 0x2AFCB18))(this);
	}
	template <typename T = void> T CallDispose(uintptr_t selfPointer) {
		return ((T (*)(PlayerSelectUIResponse*, uintptr_t))(Il2CppBase() + 0x2AFCB84))(this, selfPointer);
	}
	template <typename T = uintptr_t> static T FromPointer(uintptr_t pointer) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2AFCC08))(0, pointer);
	}

};

}
