#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace InGameDebug.UI {

class IPanelLogger
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "InGameDebug.UI", "IPanelLogger"));
	}


	template <typename T = void> T Log(Il2CppString* message) {
		return ((T (*)(IPanelLogger*, Il2CppString*))(Il2CppBase() + 0x0))(this, message);
	}
	template <typename T = void> T LogError(Il2CppString* message) {
		return ((T (*)(IPanelLogger*, Il2CppString*))(Il2CppBase() + 0x0))(this, message);
	}

};

}
