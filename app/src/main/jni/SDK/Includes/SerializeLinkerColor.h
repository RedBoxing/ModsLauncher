#pragma once
#include "Il2Cpp/Il2Cpp.h"

class SerializeLinkerColor
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SerializeLinkerColor"));
	}

	template <typename T = uintptr_t> T& colorProvider() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> static T& key() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = Il2CppDictionary<Il2CppString*, Il2CppString*>*> T GetSerializedData() {
		return ((T (*)(SerializeLinkerColor*))(Il2CppBase() + 0x1823368))(this);
	}
	template <typename T = bool> T SetSerializedData(Il2CppDictionary<Il2CppString*, Il2CppString*>* dic) {
		return ((T (*)(SerializeLinkerColor*, Il2CppDictionary<Il2CppString*, Il2CppString*>*))(Il2CppBase() + 0x18234E4))(this, dic);
	}

};

}
