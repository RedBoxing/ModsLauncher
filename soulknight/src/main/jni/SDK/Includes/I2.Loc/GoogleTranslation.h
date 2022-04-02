#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace I2.Loc {

class GoogleTranslation
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "I2.Loc", "GoogleTranslation"));
	}

	template <typename T = Il2CppList<uintptr_t>*> static T& mCurrentTranslations() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppList<uintptr_t>*> static T& mTranslationJobs() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = bool> static T CanTranslate() {
		return ((T (*)(void *))(Il2CppBase() + 0x42198FC))(0);
	}
	template <typename T = void> static T Translate(Il2CppString* text, Il2CppString* LanguageCodeFrom, Il2CppString* LanguageCodeTo, uintptr_t OnTranslationReady) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x4219A04))(0, text, LanguageCodeFrom, LanguageCodeTo, OnTranslationReady);
	}
	template <typename T = Il2CppString*> static T ForceTranslate(Il2CppString* text, Il2CppString* LanguageCodeFrom, Il2CppString* LanguageCodeTo) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x421A788))(0, text, LanguageCodeFrom, LanguageCodeTo);
	}
	template <typename T = void> static T Translate_1(Il2CppDictionary<Il2CppString*, uintptr_t>* requests, uintptr_t OnTranslationReady, bool usePOST) {
		return ((T (*)(void *, Il2CppDictionary<Il2CppString*, uintptr_t>*, uintptr_t, bool))(Il2CppBase() + 0x421A6A4))(0, requests, OnTranslationReady, usePOST);
	}
	template <typename T = bool> static T ForceTranslate_1(Il2CppDictionary<Il2CppString*, uintptr_t>* requests, bool usePOST) {
		return ((T (*)(void *, Il2CppDictionary<Il2CppString*, uintptr_t>*, bool))(Il2CppBase() + 0x421AEFC))(0, requests, usePOST);
	}
	template <typename T = Il2CppList<Il2CppString*>*> static T ConvertTranslationRequest(Il2CppDictionary<Il2CppString*, uintptr_t>* requests, bool encodeGET) {
		return ((T (*)(void *, Il2CppDictionary<Il2CppString*, uintptr_t>*, bool))(Il2CppBase() + 0x421AFDC))(0, requests, encodeGET);
	}
	template <typename T = void> static T AddTranslationJob(uintptr_t job) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x421ADC0))(0, job);
	}
	template <typename T = uintptr_t> static T WaitForTranslations() {
		return ((T (*)(void *))(Il2CppBase() + 0x421B68C))(0);
	}
	template <typename T = Il2CppString*> static T ParseTranslationResult(Il2CppString* html, Il2CppDictionary<Il2CppString*, uintptr_t>* requests) {
		return ((T (*)(void *, Il2CppString*, Il2CppDictionary<Il2CppString*, uintptr_t>*))(Il2CppBase() + 0x421B754))(0, html, requests);
	}
	template <typename T = bool> static T IsTranslating() {
		return ((T (*)(void *))(Il2CppBase() + 0x421BFF8))(0);
	}
	template <typename T = void> static T CancelCurrentGoogleTranslations() {
		return ((T (*)(void *))(Il2CppBase() + 0x421C118))(0);
	}
	template <typename T = void> static T CreateQueries(Il2CppString* text, Il2CppString* LanguageCodeFrom, Il2CppString* LanguageCodeTo, Il2CppDictionary<Il2CppString*, uintptr_t>* dict) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppDictionary<Il2CppString*, uintptr_t>*))(Il2CppBase() + 0x421A434))(0, text, LanguageCodeFrom, LanguageCodeTo, dict);
	}
	template <typename T = void> static T CreateQueries_Plurals(Il2CppString* text, Il2CppString* LanguageCodeFrom, Il2CppString* LanguageCodeTo, Il2CppDictionary<Il2CppString*, uintptr_t>* dict) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppDictionary<Il2CppString*, uintptr_t>*))(Il2CppBase() + 0x421C310))(0, text, LanguageCodeFrom, LanguageCodeTo, dict);
	}
	template <typename T = void> static T AddQuery(Il2CppString* text, Il2CppString* LanguageCodeFrom, Il2CppString* LanguageCodeTo, Il2CppDictionary<Il2CppString*, uintptr_t>* dict) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppDictionary<Il2CppString*, uintptr_t>*))(Il2CppBase() + 0x421A918))(0, text, LanguageCodeFrom, LanguageCodeTo, dict);
	}
	template <typename T = Il2CppString*> static T GetTranslation(Il2CppString* text, Il2CppString* LanguageCodeTo, Il2CppDictionary<Il2CppString*, uintptr_t>* dict) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*, Il2CppDictionary<Il2CppString*, uintptr_t>*))(Il2CppBase() + 0x421D040))(0, text, LanguageCodeTo, dict);
	}
	template <typename T = uintptr_t> static T FindQueryFromOrigText(Il2CppString* origText, Il2CppDictionary<Il2CppString*, uintptr_t>* dict) {
		return ((T (*)(void *, Il2CppString*, Il2CppDictionary<Il2CppString*, uintptr_t>*))(Il2CppBase() + 0x421BCE0))(0, origText, dict);
	}
	template <typename T = bool> static T HasParameters(Il2CppString* text) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x421C650))(0, text);
	}
	template <typename T = Il2CppString*> static T GetPluralParameter(Il2CppString* text, bool forceTag) {
		return ((T (*)(void *, Il2CppString*, bool))(Il2CppBase() + 0x421C924))(0, text, forceTag);
	}
	template <typename T = Il2CppString*> static T GetPluralText(Il2CppString* text, Il2CppString* pluralType) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x421C734))(0, text, pluralType);
	}
	template <typename T = int32_t> static T FindClosingTag(Il2CppString* tag, uintptr_t matches, int32_t startIndex) {
		return ((T (*)(void *, Il2CppString*, uintptr_t, int32_t))(Il2CppBase() + 0x421D198))(0, tag, matches, startIndex);
	}
	template <typename T = Il2CppString*> static T GetGoogleNoTranslateTag(int32_t tagNumber) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x421BF14))(0, tagNumber);
	}
	template <typename T = void> static T ParseNonTranslatableElements(uintptr_t query) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x421CA7C))(0, query);
	}
	template <typename T = Il2CppString*> static T GetQueryResult(Il2CppString* text, Il2CppString* LanguageCodeTo, Il2CppDictionary<Il2CppString*, uintptr_t>* dict) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*, Il2CppDictionary<Il2CppString*, uintptr_t>*))(Il2CppBase() + 0x421AC38))(0, text, LanguageCodeTo, dict);
	}
	template <typename T = Il2CppString*> static T RebuildTranslation(Il2CppString* text, Il2CppDictionary<Il2CppString*, uintptr_t>* dict, Il2CppString* LanguageCodeTo) {
		return ((T (*)(void *, Il2CppString*, Il2CppDictionary<Il2CppString*, uintptr_t>*, Il2CppString*))(Il2CppBase() + 0x421D414))(0, text, dict, LanguageCodeTo);
	}
	template <typename T = Il2CppString*> static T RebuildTranslation_Plural(Il2CppString* text, Il2CppDictionary<Il2CppString*, uintptr_t>* dict, Il2CppString* LanguageCodeTo) {
		return ((T (*)(void *, Il2CppString*, Il2CppDictionary<Il2CppString*, uintptr_t>*, Il2CppString*))(Il2CppBase() + 0x421D710))(0, text, dict, LanguageCodeTo);
	}
	template <typename T = Il2CppString*> static T UppercaseFirst(Il2CppString* s) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x421DB14))(0, s);
	}
	template <typename T = Il2CppString*> static T TitleCase(Il2CppString* s) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x421B580))(0, s);
	}

};

}
