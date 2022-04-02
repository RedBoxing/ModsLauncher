#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace I2.Loc {

class Localize
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "I2.Loc", "Localize"));
	}

	template <typename T = Il2CppString*> T& mTerm() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> T& mTermSecondary() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppString*> T& FinalTerm() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppString*> T& FinalSecondaryTerm() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& PrimaryTermModifier() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& SecondaryTermModifier() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = Il2CppString*> T& TermPrefix() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = Il2CppString*> T& TermSuffix() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = bool> T& LocalizeOnAwake() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = Il2CppString*> T& LastLocalizedLanguage() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = bool> T& IgnoreRTL() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = int32_t> T& MaxCharactersInRTL() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = bool> T& IgnoreNumbersInRTL() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = bool> T& CorrectAlignmentForRTL() {
		return *(T*)((uintptr_t)this + 0x69);
	}
	template <typename T = bool> T& AddSpacesToJoinedLanguages() {
		return *(T*)((uintptr_t)this + 0x6A);
	}
	template <typename T = bool> T& AllowLocalizedParameters() {
		return *(T*)((uintptr_t)this + 0x6B);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& TranslatedObjects() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, uintptr_t>*> T& mAssetDictionary() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = uintptr_t> T& LocalizeEvent() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = Il2CppString*> static T& MainTranslation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& SecondaryTranslation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = Il2CppString*> static T& CallBackTerm() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = Il2CppString*> static T& CallBackSecondaryTerm() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& CurrentLocalizeComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = bool> T& AlwaysForceLocalize() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& LocalizeCallBack() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = bool> T& mGUI_ShowReferences() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = bool> T& mGUI_ShowTems() {
		return *(T*)((uintptr_t)this + 0x99);
	}
	template <typename T = bool> T& mGUI_ShowCallback() {
		return *(T*)((uintptr_t)this + 0x9A);
	}
	template <typename T = uintptr_t> T& mLocalizeTarget() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = Il2CppString*> T& mLocalizeTargetName() {
		return *(T*)((uintptr_t)this + 0xA8);
	}

	template <typename T = Il2CppString*> T get_Term() {
		return ((T (*)(Localize*))(Il2CppBase() + 0x45E34E4))(this);
	}
	template <typename T = void> T set_Term(Il2CppString* value) {
		return ((T (*)(Localize*, Il2CppString*))(Il2CppBase() + 0x45E3544))(this, value);
	}
	template <typename T = Il2CppString*> T get_SecondaryTerm() {
		return ((T (*)(Localize*))(Il2CppBase() + 0x45E364C))(this);
	}
	template <typename T = void> T set_SecondaryTerm(Il2CppString* value) {
		return ((T (*)(Localize*, Il2CppString*))(Il2CppBase() + 0x45E36AC))(this, value);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(Localize*))(Il2CppBase() + 0x45E37C8))(this);
	}
	template <typename T = void> T OnEnable() {
		return ((T (*)(Localize*))(Il2CppBase() + 0x45E412C))(this);
	}
	template <typename T = bool> T HasCallback() {
		return ((T (*)(Localize*))(Il2CppBase() + 0x45E4190))(this);
	}
	template <typename T = void> T OnLocalize(bool Force) {
		return ((T (*)(Localize*, bool))(Il2CppBase() + 0x45DF860))(this, Force);
	}
	template <typename T = bool> T FindTarget() {
		return ((T (*)(Localize*))(Il2CppBase() + 0x45E3BA8))(this);
	}
	template <typename T = void> T GetFinalTerms(uintptr_t* primaryTerm, uintptr_t* secondaryTerm) {
		return ((T (*)(Localize*, uintptr_t*, uintptr_t*))(Il2CppBase() + 0x45E4238))(this, primaryTerm, secondaryTerm);
	}
	template <typename T = Il2CppString*> T GetMainTargetsText() {
		return ((T (*)(Localize*))(Il2CppBase() + 0x45E440C))(this);
	}
	template <typename T = void> T SetFinalTerms(Il2CppString* Main, Il2CppString* Secondary, uintptr_t* primaryTerm, uintptr_t* secondaryTerm, bool RemoveNonASCII) {
		return ((T (*)(Localize*, Il2CppString*, Il2CppString*, uintptr_t*, uintptr_t*, bool))(Il2CppBase() + 0x45E4528))(this, Main, Secondary, primaryTerm, secondaryTerm, RemoveNonASCII);
	}
	template <typename T = void> T SetTerm(Il2CppString* primary) {
		return ((T (*)(Localize*, Il2CppString*))(Il2CppBase() + 0x45E35BC))(this, primary);
	}
	template <typename T = void> T SetTerm_1(Il2CppString* primary, Il2CppString* secondary) {
		return ((T (*)(Localize*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x45E3728))(this, primary, secondary);
	}
	template <typename T = uintptr_t> T GetSecondaryTranslatedObj(uintptr_t mainTranslation, uintptr_t secondaryTranslation) {
		return ((T (*)(Localize*, uintptr_t, uintptr_t))(Il2CppBase() + 0x0))(this, mainTranslation, secondaryTranslation);
	}
	template <typename T = void> T UpdateAssetDictionary() {
		return ((T (*)(Localize*))(Il2CppBase() + 0x45E3850))(this);
	}
	template <typename T = uintptr_t> T GetObject(Il2CppString* Translation) {
		return ((T (*)(Localize*, Il2CppString*))(Il2CppBase() + 0x0))(this, Translation);
	}
	template <typename T = uintptr_t> T GetTranslatedObject(Il2CppString* Translation) {
		return ((T (*)(Localize*, Il2CppString*))(Il2CppBase() + 0x0))(this, Translation);
	}
	template <typename T = void> T DeserializeTranslation(Il2CppString* translation, uintptr_t* value, uintptr_t* secondary) {
		return ((T (*)(Localize*, Il2CppString*, uintptr_t*, uintptr_t*))(Il2CppBase() + 0x45E45F0))(this, translation, value, secondary);
	}
	template <typename T = uintptr_t> T FindTranslatedObject(Il2CppString* value) {
		return ((T (*)(Localize*, Il2CppString*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = bool> T HasTranslatedObject(uintptr_t Obj) {
		return ((T (*)(Localize*, uintptr_t))(Il2CppBase() + 0x45E479C))(this, Obj);
	}
	template <typename T = void> T AddTranslatedObject(uintptr_t Obj) {
		return ((T (*)(Localize*, uintptr_t))(Il2CppBase() + 0x45E4940))(this, Obj);
	}
	template <typename T = void> T SetGlobalLanguage(Il2CppString* Language) {
		return ((T (*)(Localize*, Il2CppString*))(Il2CppBase() + 0x45E4A3C))(this, Language);
	}

};

}
