#pragma once
#include "Il2Cpp/Il2Cpp.h"

class UINarrativeDialog
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UINarrativeDialog"));
	}

	template <typename T = bool> T& editor() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& speakerImagePos() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uintptr_t> T& speakerName() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = uintptr_t> T& speakText() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& speakers() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, uintptr_t>*> T& speakTextOfSpeakers() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& clickSound() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& skip() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = int32_t> T& currentNode() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& nodeList() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> T& onFinishCallback() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& logs() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = bool> T& finished() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, uintptr_t>*> T& speakerImgCache() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = uintptr_t> T& textDisplayer() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = uintptr_t> T& latestSpeakerImgObj() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, void*>*> T& _valueGetter() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = int32_t> T& buttonPressed() {
		return *(T*)((uintptr_t)this + 0xE0);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(UINarrativeDialog*))(Il2CppBase() + 0x422E950))(this);
	}
	template <typename T = uintptr_t> T GetSpeakText(Il2CppString* speakerKey) {
		return ((T (*)(UINarrativeDialog*, Il2CppString*))(Il2CppBase() + 0x422EA84))(this, speakerKey);
	}
	template <typename T = Il2CppString*> T GetSpeakerImgPrefabName(uintptr_t speaker, int32_t speakerState) {
		return ((T (*)(UINarrativeDialog*, uintptr_t, int32_t))(Il2CppBase() + 0x422EEBC))(this, speaker, speakerState);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_logs() {
		return ((T (*)(UINarrativeDialog*))(Il2CppBase() + 0x422F010))(this);
	}
	template <typename T = void> T set_logs(Il2CppList<uintptr_t>* value) {
		return ((T (*)(UINarrativeDialog*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x422F018))(this, value);
	}
	template <typename T = void> T AddArgumentValueGetter(Il2CppString* arg, void* getter) {
		return ((T (*)(UINarrativeDialog*, Il2CppString*, void*))(Il2CppBase() + 0x422F020))(this, arg, getter);
	}
	template <typename T = void> T StartDialog(Il2CppString* jsonConfigContent, uintptr_t onFinish) {
		return ((T (*)(UINarrativeDialog*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x422F0E4))(this, jsonConfigContent, onFinish);
	}
	template <typename T = void> T Skip() {
		return ((T (*)(UINarrativeDialog*))(Il2CppBase() + 0x422F660))(this);
	}
	template <typename T = void> T OnClickTextArea() {
		return ((T (*)(UINarrativeDialog*))(Il2CppBase() + 0x422F8EC))(this);
	}
	template <typename T = void> T Next(bool refreshText, bool immediate) {
		return ((T (*)(UINarrativeDialog*, bool, bool))(Il2CppBase() + 0x422F73C))(this, refreshText, immediate);
	}
	template <typename T = uintptr_t> T UpdateDialogText(bool refreshText, bool immediate) {
		return ((T (*)(UINarrativeDialog*, bool, bool))(Il2CppBase() + 0x422F20C))(this, refreshText, immediate);
	}
	template <typename T = void> T UpdateSpeakerName(uintptr_t speaker) {
		return ((T (*)(UINarrativeDialog*, uintptr_t))(Il2CppBase() + 0x422FE84))(this, speaker);
	}
	template <typename T = uintptr_t> T SetSpeakerImg(Il2CppString* speakerPrefabName) {
		return ((T (*)(UINarrativeDialog*, Il2CppString*))(Il2CppBase() + 0x422FACC))(this, speakerPrefabName);
	}
	template <typename T = Il2CppString*> T ProcessTextArguments(Il2CppString* textContent) {
		return ((T (*)(UINarrativeDialog*, Il2CppString*))(Il2CppBase() + 0x423016C))(this, textContent);
	}
	template <typename T = void> T Update() {
		return ((T (*)(UINarrativeDialog*))(Il2CppBase() + 0x4230274))(this);
	}
	template <typename T = Il2CppString*> T ProcessTextArgumentsb__35_0(uintptr_t e) {
		return ((T (*)(UINarrativeDialog*, uintptr_t))(Il2CppBase() + 0x4230680))(this, e);
	}

};

}
