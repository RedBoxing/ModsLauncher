#pragma once
#include "Il2Cpp/Il2Cpp.h"

class AutoFacing
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AutoFacing"));
	}

	template <typename T = uintptr_t> T& rigid() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> static T& key() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(AutoFacing*))(Il2CppBase() + 0x41861F0))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(AutoFacing*))(Il2CppBase() + 0x4186288))(this);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, Il2CppString*>*> T GetSerializedData() {
		return ((T (*)(AutoFacing*))(Il2CppBase() + 0x41864EC))(this);
	}
	template <typename T = bool> T SetSerializedData(Il2CppDictionary<Il2CppString*, Il2CppString*>* dic) {
		return ((T (*)(AutoFacing*, Il2CppDictionary<Il2CppString*, Il2CppString*>*))(Il2CppBase() + 0x4186638))(this, dic);
	}

};

}
