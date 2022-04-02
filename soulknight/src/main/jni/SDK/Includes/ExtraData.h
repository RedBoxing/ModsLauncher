#pragma once
#include "Il2Cpp/Il2Cpp.h"

class ExtraData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ExtraData"));
	}

	template <typename T = Il2CppString*> T& heroRoomMech() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& petIdx() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, Il2CppString*>*> T& extraDic() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = Il2CppString*> T GetDataByKey(Il2CppString* key) {
		return ((T (*)(ExtraData*, Il2CppString*))(Il2CppBase() + 0x4473DB4))(this, key);
	}
	template <typename T = void> T SetData(Il2CppString* key, Il2CppString* value) {
		return ((T (*)(ExtraData*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x4473E98))(this, key, value);
	}

};

}
