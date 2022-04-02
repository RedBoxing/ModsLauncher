#pragma once
#include "Il2Cpp/Il2Cpp.h"

class HttpUtilTest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "HttpUtilTest"));
	}


	template <typename T = void> T Start() {
		return ((T (*)(HttpUtilTest*))(Il2CppBase() + 0x420A394))(this);
	}
	template <typename T = void> T GetSample(bool needPause, bool setUpdateFirst) {
		return ((T (*)(HttpUtilTest*, bool, bool))(Il2CppBase() + 0x420A3F0))(this, needPause, setUpdateFirst);
	}
	template <typename T = void> T Update() {
		return ((T (*)(HttpUtilTest*))(Il2CppBase() + 0x420A50C))(this);
	}

};

}
