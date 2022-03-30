#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace I2.Loc {

class LocalizationManager
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "I2.Loc", "LocalizationManager"));
	}

	template <typename T = Il2CppString*> static T& mCurrentLanguage() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& mLanguageCode() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& mCurrentCulture() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = bool> static T& mChangeCultureInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = bool> static T& IsRight2Left() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x19);
	}
	template <typename T = bool> static T& HasJoinedWords() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1A);
	}
	template <typename T = Il2CppList<uintptr_t>*> static T& ParamManagers() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& LanguagesRTL() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = Il2CppList<uintptr_t>*> static T& Sources() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& GlobalSources() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = Il2CppString*> static T& mCurrentDeviceLanguage() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = Il2CppList<uintptr_t>*> static T& mLocalizeTargets() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& OnLocalizeEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = bool> static T& mLocalizeIsScheduled() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = bool> static T& mLocalizeIsScheduledWithForcedValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x59);
	}
	template <typename T = bool> static T& HighlightLocalizedTargets() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5A);
	}

	template <typename T = void> static T InitializeIfNeeded() {
		return ((T (*)(void *))(Il2CppBase() + 0x45D72B8))(0);
	}
	template <typename T = Il2CppString*> static T GetVersion() {
		return ((T (*)(void *))(Il2CppBase() + 0x45D7BF0))(0);
	}
	template <typename T = int32_t> static T GetRequiredWebServiceVersion() {
		return ((T (*)(void *))(Il2CppBase() + 0x45D7C74))(0);
	}
	template <typename T = Il2CppString*> static T GetWebServiceURL(uintptr_t source) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x45D7CCC))(0, source);
	}
	template <typename T = Il2CppString*> static T get_CurrentLanguage() {
		return ((T (*)(void *))(Il2CppBase() + 0x45D7F04))(0);
	}
	template <typename T = void> static T set_CurrentLanguage(Il2CppString* value) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x45D7FAC))(0, value);
	}
	template <typename T = Il2CppString*> static T get_CurrentLanguageCode() {
		return ((T (*)(void *))(Il2CppBase() + 0x45D8B7C))(0);
	}
	template <typename T = void> static T set_CurrentLanguageCode(Il2CppString* value) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x45D8C24))(0, value);
	}
	template <typename T = Il2CppString*> static T get_CurrentRegion() {
		return ((T (*)(void *))(Il2CppBase() + 0x45D8FDC))(0);
	}
	template <typename T = void> static T set_CurrentRegion(Il2CppString* value) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x45D91E8))(0, value);
	}
	template <typename T = Il2CppString*> static T get_CurrentRegionCode() {
		return ((T (*)(void *))(Il2CppBase() + 0x45D9430))(0);
	}
	template <typename T = void> static T set_CurrentRegionCode(Il2CppString* value) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x45D9558))(0, value);
	}
	template <typename T = uintptr_t> static T get_CurrentCulture() {
		return ((T (*)(void *))(Il2CppBase() + 0x45D96C4))(0);
	}
	template <typename T = void> static T SetLanguageAndCode(Il2CppString* LanguageName, Il2CppString* LanguageCode, bool RememberLanguage, bool Force) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*, bool, bool))(Il2CppBase() + 0x45D892C))(0, LanguageName, LanguageCode, RememberLanguage, Force);
	}
	template <typename T = uintptr_t> static T CreateCultureForCode(Il2CppString* code) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x45D9860))(0, code);
	}
	template <typename T = void> static T EnableChangingCultureInfo(bool bEnable) {
		return ((T (*)(void *, bool))(Il2CppBase() + 0x45D9C7C))(0, bEnable);
	}
	template <typename T = void> static T SetCurrentCultureInfo() {
		return ((T (*)(void *))(Il2CppBase() + 0x45D99A0))(0);
	}
	template <typename T = void> static T SelectStartupLanguage() {
		return ((T (*)(void *))(Il2CppBase() + 0x45D76A8))(0);
	}
	template <typename T = bool> static T HasLanguage(Il2CppString* Language, bool AllowDiscartingRegion, bool Initialize, bool SkipDisabled) {
		return ((T (*)(void *, Il2CppString*, bool, bool, bool))(Il2CppBase() + 0x45D9F74))(0, Language, AllowDiscartingRegion, Initialize, SkipDisabled);
	}
	template <typename T = Il2CppString*> static T GetSupportedLanguage(Il2CppString* Language, bool ignoreDisabled) {
		return ((T (*)(void *, Il2CppString*, bool))(Il2CppBase() + 0x45D80DC))(0, Language, ignoreDisabled);
	}
	template <typename T = Il2CppString*> static T GetLanguageCode(Il2CppString* Language) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x45D86C0))(0, Language);
	}
	template <typename T = Il2CppString*> static T GetLanguageFromCode(Il2CppString* Code, bool exactMatch) {
		return ((T (*)(void *, Il2CppString*, bool))(Il2CppBase() + 0x45D8D5C))(0, Code, exactMatch);
	}
	template <typename T = Il2CppList<Il2CppString*>*> static T GetAllLanguages(bool SkipDisabled) {
		return ((T (*)(void *, bool))(Il2CppBase() + 0x45DA21C))(0, SkipDisabled);
	}
	template <typename T = Il2CppList<Il2CppString*>*> static T GetAllLanguagesCode(bool allowRegions, bool SkipDisabled) {
		return ((T (*)(void *, bool, bool))(Il2CppBase() + 0x45DA50C))(0, allowRegions, SkipDisabled);
	}
	template <typename T = bool> static T IsLanguageEnabled(Il2CppString* Language) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x45DA794))(0, Language);
	}
	template <typename T = void> static T LoadCurrentLanguage() {
		return ((T (*)(void *))(Il2CppBase() + 0x45DA908))(0);
	}
	template <typename T = void> static T PreviewLanguage(Il2CppString* NewLanguage) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x45DAAC8))(0, NewLanguage);
	}
	template <typename T = void> static T AutoLoadGlobalParamManagers() {
		return ((T (*)(void *))(Il2CppBase() + 0x45D73DC))(0);
	}
	template <typename T = void> static T ApplyLocalizationParams(uintptr_t translation, bool allowLocalizedParameters) {
		return ((T (*)(void *, uintptr_t, bool))(Il2CppBase() + 0x45DABF0))(0, translation, allowLocalizedParameters);
	}
	template <typename T = void> static T ApplyLocalizationParams_1(uintptr_t translation, uintptr_t root, bool allowLocalizedParameters) {
		return ((T (*)(void *, uintptr_t, uintptr_t, bool))(Il2CppBase() + 0x45DB2B4))(0, translation, root, allowLocalizedParameters);
	}
	template <typename T = void> static T ApplyLocalizationParams_2(uintptr_t translation, Il2CppDictionary<Il2CppString*, uintptr_t>* parameters, bool allowLocalizedParameters) {
		return ((T (*)(void *, uintptr_t, Il2CppDictionary<Il2CppString*, uintptr_t>*, bool))(Il2CppBase() + 0x45DB3DC))(0, translation, parameters, allowLocalizedParameters);
	}
	template <typename T = void> static T ApplyLocalizationParams_3(uintptr_t translation, uintptr_t getParam, bool allowLocalizedParameters) {
		return ((T (*)(void *, uintptr_t, uintptr_t, bool))(Il2CppBase() + 0x45DAD54))(0, translation, getParam, allowLocalizedParameters);
	}
	template <typename T = Il2CppString*> static T GetLocalizationParam(Il2CppString* ParamName, uintptr_t root) {
		return ((T (*)(void *, Il2CppString*, uintptr_t))(Il2CppBase() + 0x45DBE30))(0, ParamName, root);
	}
	template <typename T = Il2CppString*> static T GetPluralType(uintptr_t matches, Il2CppString* langCode, uintptr_t getParam) {
		return ((T (*)(void *, uintptr_t, Il2CppString*, uintptr_t))(Il2CppBase() + 0x45DC174))(0, matches, langCode, getParam);
	}
	template <typename T = Il2CppString*> static T ApplyRTLfix(Il2CppString* line) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x45DC434))(0, line);
	}
	template <typename T = Il2CppString*> static T ApplyRTLfix_1(Il2CppString* line, int32_t maxCharacters, bool ignoreNumbers) {
		return ((T (*)(void *, Il2CppString*, int32_t, bool))(Il2CppBase() + 0x45DC4E0))(0, line, maxCharacters, ignoreNumbers);
	}
	template <typename T = Il2CppString*> static T FixRTL_IfNeeded(Il2CppString* text, int32_t maxCharacters, bool ignoreNumber) {
		return ((T (*)(void *, Il2CppString*, int32_t, bool))(Il2CppBase() + 0x45DCD98))(0, text, maxCharacters, ignoreNumber);
	}
	template <typename T = bool> static T IsRTL(Il2CppString* Code) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x45D9A6C))(0, Code);
	}
	template <typename T = bool> static T UpdateSources() {
		return ((T (*)(void *))(Il2CppBase() + 0x45D75D0))(0);
	}
	template <typename T = void> static T UnregisterDeletededSources() {
		return ((T (*)(void *))(Il2CppBase() + 0x45DCE98))(0);
	}
	template <typename T = void> static T RegisterSceneSources() {
		return ((T (*)(void *))(Il2CppBase() + 0x45DD248))(0);
	}
	template <typename T = void> static T RegisterSourceInResources() {
		return ((T (*)(void *))(Il2CppBase() + 0x45DD008))(0);
	}
	template <typename T = void> static T AddSource(uintptr_t Source) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x45DD564))(0, Source);
	}
	template <typename T = uintptr_t> static T Delayed_Import_Google(uintptr_t source, float delay, bool justCheck) {
		return ((T (*)(void *, uintptr_t, float, bool))(Il2CppBase() + 0x45DDC24))(0, source, delay, justCheck);
	}
	template <typename T = void> static T RemoveSource(uintptr_t Source) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x45DD498))(0, Source);
	}
	template <typename T = bool> static T IsGlobalSource(Il2CppString* SourceName) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x45DDD5C))(0, SourceName);
	}
	template <typename T = uintptr_t> static T GetSourceContaining(Il2CppString* term, bool fallbackToFirst) {
		return ((T (*)(void *, Il2CppString*, bool))(Il2CppBase() + 0x45DDE24))(0, term, fallbackToFirst);
	}
	template <typename T = uintptr_t> static T FindAsset(Il2CppString* value) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x45DE09C))(0, value);
	}
	template <typename T = void> static T ApplyDownloadedDataFromGoogle() {
		return ((T (*)(void *))(Il2CppBase() + 0x45DE24C))(0);
	}
	template <typename T = Il2CppString*> static T GetCurrentDeviceLanguage(bool force) {
		return ((T (*)(void *, bool))(Il2CppBase() + 0x45D9E68))(0, force);
	}
	template <typename T = void> static T DetectDeviceLanguage() {
		return ((T (*)(void *))(Il2CppBase() + 0x45DE3A4))(0);
	}
	template <typename T = void> static T RegisterTarget(uintptr_t desc) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x45DE7A4))(0, desc);
	}
	template <typename T = void> static T add_OnLocalizeEvent(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x45DEA98))(0, value);
	}
	template <typename T = void> static T remove_OnLocalizeEvent(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x45DEBC8))(0, value);
	}
	template <typename T = Il2CppString*> static T GetTranslation(Il2CppString* Term, bool FixForRTL, int32_t maxLineLengthForRTL, bool ignoreRTLnumbers, bool applyParameters, uintptr_t localParametersRoot, Il2CppString* overrideLanguage) {
		return ((T (*)(void *, Il2CppString*, bool, int32_t, bool, bool, uintptr_t, Il2CppString*))(Il2CppBase() + 0x45DECF8))(0, Term, FixForRTL, maxLineLengthForRTL, ignoreRTLnumbers, applyParameters, localParametersRoot, overrideLanguage);
	}
	template <typename T = Il2CppString*> static T GetTermTranslation(Il2CppString* Term, bool FixForRTL, int32_t maxLineLengthForRTL, bool ignoreRTLnumbers, bool applyParameters, uintptr_t localParametersRoot, Il2CppString* overrideLanguage) {
		return ((T (*)(void *, Il2CppString*, bool, int32_t, bool, bool, uintptr_t, Il2CppString*))(Il2CppBase() + 0x45DF094))(0, Term, FixForRTL, maxLineLengthForRTL, ignoreRTLnumbers, applyParameters, localParametersRoot, overrideLanguage);
	}
	template <typename T = Il2CppString*> static T GetTermTranslation_1(Il2CppString* Term, Il2CppString* overrideLanguage) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x45DF1C8))(0, Term, overrideLanguage);
	}
	template <typename T = bool> static T TryGetTranslation(Il2CppString* Term, uintptr_t* Translation, bool FixForRTL, int32_t maxLineLengthForRTL, bool ignoreRTLnumbers, bool applyParameters, uintptr_t localParametersRoot, Il2CppString* overrideLanguage) {
		return ((T (*)(void *, Il2CppString*, uintptr_t*, bool, int32_t, bool, bool, uintptr_t, Il2CppString*))(Il2CppBase() + 0x45DEE14))(0, Term, Translation, FixForRTL, maxLineLengthForRTL, ignoreRTLnumbers, applyParameters, localParametersRoot, overrideLanguage);
	}
	template <typename T = uintptr_t> static T GetTranslatedObject(Il2CppString* AssetName, uintptr_t optionalLocComp) {
		return ((T (*)(void *, Il2CppString*, uintptr_t))(Il2CppBase() + 0x0))(0, AssetName, optionalLocComp);
	}
	template <typename T = uintptr_t> static T GetTranslatedObjectByTermName(Il2CppString* Term, uintptr_t optionalLocComp) {
		return ((T (*)(void *, Il2CppString*, uintptr_t))(Il2CppBase() + 0x0))(0, Term, optionalLocComp);
	}
	template <typename T = Il2CppString*> static T GetAppName(Il2CppString* languageCode) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x45DF298))(0, languageCode);
	}
	template <typename T = void> static T LocalizeAll(bool Force) {
		return ((T (*)(void *, bool))(Il2CppBase() + 0x45D9B34))(0, Force);
	}
	template <typename T = uintptr_t> static T Coroutine_LocalizeAll() {
		return ((T (*)(void *))(Il2CppBase() + 0x45DF798))(0);
	}
	template <typename T = void> static T DoLocalizeAll(bool Force) {
		return ((T (*)(void *, bool))(Il2CppBase() + 0x45DF560))(0, Force);
	}
	template <typename T = Il2CppList<Il2CppString*>*> static T GetCategories() {
		return ((T (*)(void *))(Il2CppBase() + 0x45E05E8))(0);
	}
	template <typename T = Il2CppList<Il2CppString*>*> static T GetTermsList(Il2CppString* Category) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x45E0770))(0, Category);
	}
	template <typename T = uintptr_t> static T GetTermData(Il2CppString* term) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x45E0A70))(0, term);
	}
	template <typename T = uintptr_t> static T GetTermData_1(Il2CppString* term, uintptr_t* source) {
		return ((T (*)(void *, Il2CppString*, uintptr_t*))(Il2CppBase() + 0x45DBC54))(0, term, source);
	}

};

}
