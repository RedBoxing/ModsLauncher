#pragma once
#include "Il2Cpp/Il2Cpp.h"

class SerializeLinkerDirection
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SerializeLinkerDirection"));
	}

	template <typename T = uintptr_t> T& rotationPrivider() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> static T& key() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = uintptr_t> T get_provider() {
		return ((T (*)(SerializeLinkerDirection*))(Il2CppBase() + 0x1823724))(this);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, Il2CppString*>*> T GetSerializedData() {
		return ((T (*)(SerializeLinkerDirection*))(Il2CppBase() + 0x18237F0))(this);
	}
	template <typename T = bool> T SetSerializedData(Il2CppDictionary<Il2CppString*, Il2CppString*>* dic) {
		return ((T (*)(SerializeLinkerDirection*, Il2CppDictionary<Il2CppString*, Il2CppString*>*))(Il2CppBase() + 0x182397C))(this, dic);
	}

};

}
