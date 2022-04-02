#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace ChillyRoom.Net.Http {

class IAsyncHttpAgent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ChillyRoom.Net.Http", "IAsyncHttpAgent"));
	}


	template <typename T = Il2CppString*> T get_IP() {
		return ((T (*)(IAsyncHttpAgent*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = uint16_t> T get_Port() {
		return ((T (*)(IAsyncHttpAgent*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void*> T PostAsync(Il2CppString* urlkey, Il2CppArray<uintptr_t>* data) {
		return ((T (*)(IAsyncHttpAgent*, Il2CppString*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x0))(this, urlkey, data);
	}
	template <typename T = void*> T GetAsync(Il2CppString* urlkey) {
		return ((T (*)(IAsyncHttpAgent*, Il2CppString*))(Il2CppBase() + 0x0))(this, urlkey);
	}

};

}
