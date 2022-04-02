#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace I2.Loc {

class GoogleLanguages
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "I2.Loc", "GoogleLanguages"));
	}

	template <typename T = Il2CppDictionary<Il2CppString*, uintptr_t>*> static T& mLanguageDef() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = Il2CppString*> static T GetLanguageCode(Il2CppString* Filter, bool ShowWarnings) {
		return ((T (*)(void *, Il2CppString*, bool))(Il2CppBase() + 0x4210EC8))(0, Filter, ShowWarnings);
	}
	template <typename T = Il2CppList<Il2CppString*>*> static T GetLanguagesForDropdown(Il2CppString* Filter, Il2CppString* CodesToExclude) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x4211418))(0, Filter, CodesToExclude);
	}
	template <typename T = bool> static T LanguageMatchesFilter(Il2CppString* Language, Il2CppArray<uintptr_t>* Filters) {
		return ((T (*)(void *, Il2CppString*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x42111D8))(0, Language, Filters);
	}
	template <typename T = Il2CppString*> static T GetFormatedLanguageName(Il2CppString* Language) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x42119D4))(0, Language);
	}
	template <typename T = Il2CppString*> static T GetCodedLanguage(Il2CppString* Language, Il2CppString* code) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x4211B7C))(0, Language, code);
	}
	template <typename T = void> static T UnPackCodeFromLanguageName(Il2CppString* CodedLanguage, uintptr_t* Language, uintptr_t* code) {
		return ((T (*)(void *, Il2CppString*, uintptr_t*, uintptr_t*))(Il2CppBase() + 0x4211C8C))(0, CodedLanguage, Language, code);
	}
	template <typename T = Il2CppString*> static T GetGoogleLanguageCode(Il2CppString* InternationalCode) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x4211E80))(0, InternationalCode);
	}
	template <typename T = Il2CppString*> static T GetLanguageName(Il2CppString* code, bool useParenthesesForRegion, bool allowDiscardRegion) {
		return ((T (*)(void *, Il2CppString*, bool, bool))(Il2CppBase() + 0x42120C4))(0, code, useParenthesesForRegion, allowDiscardRegion);
	}
	template <typename T = Il2CppList<Il2CppString*>*> static T GetAllInternationalCodes() {
		return ((T (*)(void *))(Il2CppBase() + 0x4212430))(0);
	}
	template <typename T = bool> static T LanguageCode_HasJoinedWord(Il2CppString* languageCode) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x4212654))(0, languageCode);
	}
	template <typename T = int32_t> static T GetPluralRule(Il2CppString* langCode) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x4212884))(0, langCode);
	}
	template <typename T = bool> static T LanguageHasPluralType(Il2CppString* langCode, Il2CppString* pluralType) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x4212AD4))(0, langCode, pluralType);
	}
	template <typename T = uintptr_t> static T GetPluralType(Il2CppString* langCode, int32_t n) {
		return ((T (*)(void *, Il2CppString*, int32_t))(Il2CppBase() + 0x4212CA0))(0, langCode, n);
	}
	template <typename T = int32_t> static T GetPluralTestNumber(Il2CppString* langCode, uintptr_t pluralType) {
		return ((T (*)(void *, Il2CppString*, uintptr_t))(Il2CppBase() + 0x42134CC))(0, langCode, pluralType);
	}
	template <typename T = bool> static T inRange(int32_t amount, int32_t min, int32_t max) {
		return ((T (*)(void *, int32_t, int32_t, int32_t))(Il2CppBase() + 0x4213440))(0, amount, min, max);
	}

};

}
