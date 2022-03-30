#pragma once
#include "Il2Cpp/Il2Cpp.h"

class EmoticonInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "EmoticonInfo"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& emoticonDatas() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = Il2CppDictionary<int32_t, uintptr_t>*> T& emoticondataDic() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& diceSpriteData() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = Il2CppDictionary<int32_t, Il2CppDictionary<uintptr_t, Il2CppDictionary<int32_t, Il2CppVector3>*>*>*> T& emoticonOffsetDatas() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = uintptr_t> static T& _info() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = uintptr_t> static T get_info() {
		return ((T (*)(void *))(Il2CppBase() + 0x22ADD28))(0);
	}
	template <typename T = void> T OnAfterDeserialize() {
		return ((T (*)(EmoticonInfo*))(Il2CppBase() + 0x22ADE1C))(this);
	}
	template <typename T = uintptr_t> static T GetEmoticonSprite(int32_t id) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x22ADFC4))(0, id);
	}
	template <typename T = uintptr_t> static T GetEmoticonSpriteWithType(int32_t id, int32_t seed) {
		return ((T (*)(void *, int32_t, int32_t))(Il2CppBase() + 0x22AC0E8))(0, id, seed);
	}
	template <typename T = uintptr_t> static T GetEmoticonType(int32_t id) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x22AC2D4))(0, id);
	}
	template <typename T = bool> static T GetEmoticonNeedSyncDir(int32_t id) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x22AE130))(0, id);
	}
	template <typename T = Il2CppList<uintptr_t>*> T GetDiceSprites() {
		return ((T (*)(EmoticonInfo*))(Il2CppBase() + 0x22AE0D0))(this);
	}
	template <typename T = void> T iFixBaseProxy_OnAfterDeserialize() {
		return ((T (*)(EmoticonInfo*))(Il2CppBase() + 0x22AE304))(this);
	}

};

}
