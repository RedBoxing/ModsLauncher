#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace Utils.GameUtil.NumberStats {

class IntNumberStats
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Utils.GameUtil.NumberStats", "IntNumberStats"));
	}

	template <typename T = int32_t> T& OriginValue() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, int32_t>*> T& AdditionalItemDic() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = int32_t> T get_OriginValue() {
		return ((T (*)(IntNumberStats*))(Il2CppBase() + 0x43556FC))(this);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, int32_t>*> T get_AdditionalItemDic() {
		return ((T (*)(IntNumberStats*))(Il2CppBase() + 0x4355704))(this);
	}
	template <typename T = void> T AddChange(int32_t value, Il2CppString* key) {
		return ((T (*)(IntNumberStats*, int32_t, Il2CppString*))(Il2CppBase() + 0x4355790))(this, value, key);
	}
	template <typename T = void> T RemoveChange(Il2CppString* key) {
		return ((T (*)(IntNumberStats*, Il2CppString*))(Il2CppBase() + 0x43558EC))(this, key);
	}
	template <typename T = int32_t> T GetValueByKey(Il2CppString* key) {
		return ((T (*)(IntNumberStats*, Il2CppString*))(Il2CppBase() + 0x43559E0))(this, key);
	}
	template <typename T = int32_t> T GetFinalValue() {
		return ((T (*)(IntNumberStats*))(Il2CppBase() + 0x4355AA0))(this);
	}

};

}
