#pragma once
#include "Il2Cpp/Il2Cpp.h"

class TalkEscapeCageMercenary
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TalkEscapeCageMercenary"));
	}

	template <typename T = uintptr_t> T& buy_talk() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = bool> T& change_zero_value() {
		return *(T*)((uintptr_t)this + 0x38);
	}

	template <typename T = void> T OnEnable() {
		return ((T (*)(TalkEscapeCageMercenary*))(Il2CppBase() + 0x43AB970))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(TalkEscapeCageMercenary*))(Il2CppBase() + 0x43ABA54))(this);
	}
	template <typename T = void> T GetHelp() {
		return ((T (*)(TalkEscapeCageMercenary*))(Il2CppBase() + 0x43ABC88))(this);
	}
	template <typename T = void> T SetZeroValue() {
		return ((T (*)(TalkEscapeCageMercenary*))(Il2CppBase() + 0x43ABB78))(this);
	}
	template <typename T = void> T iFixBaseProxy_Start() {
		return ((T (*)(TalkEscapeCageMercenary*))(Il2CppBase() + 0x43ABDA0))(this);
	}
	template <typename T = void> T iFixBaseProxy_GetHelp() {
		return ((T (*)(TalkEscapeCageMercenary*))(Il2CppBase() + 0x43ABDA4))(this);
	}

};

}
