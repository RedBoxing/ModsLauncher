#pragma once
#include "Il2Cpp/Il2Cpp.h"

class SerializeLinkerSprites
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SerializeLinkerSprites"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& sprites() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& rendererProvider() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppString*> static T& key() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = Il2CppDictionary<Il2CppString*, Il2CppString*>*> T GetSerializedData() {
		return ((T (*)(SerializeLinkerSprites*))(Il2CppBase() + 0x18255D4))(this);
	}
	template <typename T = bool> T SetSerializedData(Il2CppDictionary<Il2CppString*, Il2CppString*>* dic) {
		return ((T (*)(SerializeLinkerSprites*, Il2CppDictionary<Il2CppString*, Il2CppString*>*))(Il2CppBase() + 0x18257C4))(this, dic);
	}

};

}
