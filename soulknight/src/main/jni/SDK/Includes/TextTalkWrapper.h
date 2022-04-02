#pragma once
#include "Il2Cpp/Il2Cpp.h"

class TextTalkWrapper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TextTalkWrapper"));
	}


	template <typename T = void> T ShowTextTalk(Il2CppString* content) {
		return ((T (*)(TextTalkWrapper*, Il2CppString*))(Il2CppBase() + 0x43C3A6C))(this, content);
	}

};

}
