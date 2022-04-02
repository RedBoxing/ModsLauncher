#pragma once
#include "Il2Cpp/Il2Cpp.h"

class SerializeLinkerRoom
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SerializeLinkerRoom"));
	}

	template <typename T = Il2CppString*> static T& key() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = uintptr_t> T get_roomInfo() {
		return ((T (*)(SerializeLinkerRoom*))(Il2CppBase() + 0x1825128))(this);
	}
	template <typename T = void> T set_roomInfo(uintptr_t value) {
		return ((T (*)(SerializeLinkerRoom*, uintptr_t))(Il2CppBase() + 0x18251D0))(this, value);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, Il2CppString*>*> T GetSerializedData() {
		return ((T (*)(SerializeLinkerRoom*))(Il2CppBase() + 0x1825290))(this);
	}
	template <typename T = bool> T SetSerializedData(Il2CppDictionary<Il2CppString*, Il2CppString*>* dic) {
		return ((T (*)(SerializeLinkerRoom*, Il2CppDictionary<Il2CppString*, Il2CppString*>*))(Il2CppBase() + 0x18253B0))(this, dic);
	}

};

}
