#pragma once
#include "Il2Cpp/Il2Cpp.h"

class DialogNode
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DialogNode"));
	}

	template <typename T = Il2CppString*> T& speakerKey() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& speakerState() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> T& contentKey() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppString*> T& defaultContent() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppString*> T& content() {
		return *(T*)((uintptr_t)this + 0x30);
	}

	template <typename T = Il2CppString*> T get_content() {
		return ((T (*)(DialogNode*))(Il2CppBase() + 0x4230B34))(this);
	}
	template <typename T = void> T set_content(Il2CppString* value) {
		return ((T (*)(DialogNode*, Il2CppString*))(Il2CppBase() + 0x4230B3C))(this, value);
	}

};

}
