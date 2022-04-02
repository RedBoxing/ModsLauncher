#pragma once
#include "Il2Cpp/Il2Cpp.h"

class NetPlayerInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "NetPlayerInfo"));
	}

	template <typename T = bool> T& enterMultiRoom() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, int64_t>*> T& str2longDic() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T SetVal(Il2CppString* key, int64_t val) {
		return ((T (*)(NetPlayerInfo*, Il2CppString*, int64_t))(Il2CppBase() + 0x4444F5C))(this, key, val);
	}
	template <typename T = int64_t> T GetVal(Il2CppString* key) {
		return ((T (*)(NetPlayerInfo*, Il2CppString*))(Il2CppBase() + 0x4456604))(this, key);
	}
	template <typename T = int64_t> T GetPassCount() {
		return ((T (*)(NetPlayerInfo*))(Il2CppBase() + 0x44566F0))(this);
	}
	template <typename T = int64_t> T GetPassDZTCount() {
		return ((T (*)(NetPlayerInfo*))(Il2CppBase() + 0x4456818))(this);
	}
	template <typename T = int32_t> T GetRank() {
		return ((T (*)(NetPlayerInfo*))(Il2CppBase() + 0x4456940))(this);
	}

};

}
