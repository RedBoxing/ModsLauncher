#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace ChillyRoomAccount {

class ErrorCodeLocalizationArray
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ChillyRoomAccount", "ErrorCodeLocalizationArray"));
	}

	template <typename T = uintptr_t> static T& _errorCodeLocalizationArray() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, uintptr_t>*> T& errLocalizationDic() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = uintptr_t> static T get_errorCodeLocalizationArray() {
		return ((T (*)(void *))(Il2CppBase() + 0x1E74AD0))(0);
	}
	template <typename T = Il2CppString*> T GetNetLocalization(Il2CppString* key) {
		return ((T (*)(ErrorCodeLocalizationArray*, Il2CppString*))(Il2CppBase() + 0x1E74EF8))(this, key);
	}
	template <typename T = Il2CppString*> T GetErrorCodeLocalization(uintptr_t err) {
		return ((T (*)(ErrorCodeLocalizationArray*, uintptr_t))(Il2CppBase() + 0x1E7548C))(this, err);
	}
	template <typename T = Il2CppString*> T GetTextLocalization(Il2CppString* key) {
		return ((T (*)(ErrorCodeLocalizationArray*, Il2CppString*))(Il2CppBase() + 0x1E75760))(this, key);
	}
	template <typename T = void> static T SetLocalizationText(Il2CppString* text) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x1E75840))(0, text);
	}

};

}
