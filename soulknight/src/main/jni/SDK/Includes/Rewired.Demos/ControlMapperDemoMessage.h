#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace Rewired.Demos {

class ControlMapperDemoMessage
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Rewired.Demos", "ControlMapperDemoMessage"));
	}

	template <typename T = uintptr_t> T& controlMapper() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& defaultSelectable() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(ControlMapperDemoMessage*))(Il2CppBase() + 0x2055B7C))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(ControlMapperDemoMessage*))(Il2CppBase() + 0x2055CDC))(this);
	}
	template <typename T = void> T OnControlMapperClosed() {
		return ((T (*)(ControlMapperDemoMessage*))(Il2CppBase() + 0x2055EC8))(this);
	}
	template <typename T = void> T OnControlMapperOpened() {
		return ((T (*)(ControlMapperDemoMessage*))(Il2CppBase() + 0x2056014))(this);
	}
	template <typename T = void> T SelectDefault() {
		return ((T (*)(ControlMapperDemoMessage*))(Il2CppBase() + 0x2055D3C))(this);
	}
	template <typename T = uintptr_t> T SelectDefaultDeferred() {
		return ((T (*)(ControlMapperDemoMessage*))(Il2CppBase() + 0x2055F60))(this);
	}

};

}
