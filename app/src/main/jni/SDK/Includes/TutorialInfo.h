#pragma once
#include "Il2Cpp/Il2Cpp.h"

class TutorialInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TutorialInfo"));
	}

	template <typename T = bool> T& complete() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppList<Il2CppString*>*> T& start_talks() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> T& end_talk() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppVector3> T& position() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = uintptr_t> T AddStartTalks(Il2CppArray<uintptr_t>* talks) {
		return ((T (*)(TutorialInfo*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1804130))(this, talks);
	}
	template <typename T = uintptr_t> T AddEndTalk(Il2CppString* talk) {
		return ((T (*)(TutorialInfo*, Il2CppString*))(Il2CppBase() + 0x180421C))(this, talk);
	}
	template <typename T = uintptr_t> T SetComplete(bool complete) {
		return ((T (*)(TutorialInfo*, bool))(Il2CppBase() + 0x18040B4))(this, complete);
	}
	template <typename T = uintptr_t> T SetPosition(Il2CppVector3 position) {
		return ((T (*)(TutorialInfo*, Il2CppVector3))(Il2CppBase() + 0x1804294))(this, position);
	}

};

}
