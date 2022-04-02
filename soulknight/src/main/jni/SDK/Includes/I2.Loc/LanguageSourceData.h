#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace I2.Loc {

class LanguageSourceData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "I2.Loc", "LanguageSourceData"));
	}

	template <typename T = uintptr_t> T& owner() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& UserAgreesToHaveItOnTheScene() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> T& UserAgreesToHaveItInsideThePluginsFolder() {
		return *(T*)((uintptr_t)this + 0x19);
	}
	template <typename T = bool> T& GoogleLiveSyncIsUptoDate() {
		return *(T*)((uintptr_t)this + 0x1A);
	}
	template <typename T = bool> T& mIsGlobalSource() {
		return *(T*)((uintptr_t)this + 0x1B);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& mTerms() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = bool> T& CaseInsensitiveTerms() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, uintptr_t>*> T& mDictionary() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& OnMissingTranslation() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = Il2CppString*> T& mTerm_AppName() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& mLanguages() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = bool> T& IgnoreDeviceLanguage() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& _AllowUnloadingLanguages() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = Il2CppString*> T& Google_WebServiceURL() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = Il2CppString*> T& Google_SpreadsheetKey() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = Il2CppString*> T& Google_SpreadsheetName() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = Il2CppString*> T& Google_LastUpdatedVersion() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = uintptr_t> T& GoogleUpdateFrequency() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = uintptr_t> T& GoogleInEditorCheckFrequency() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& GoogleUpdateSynchronization() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = float> T& GoogleUpdateDelay() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> T& Event_OnSourceUpdateFromGoogle() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& Assets() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, uintptr_t>*> T& mAssetDictionary() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = Il2CppString*> T& mDelayedGoogleData() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = Il2CppString*> static T& EmptyCategory() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& CategorySeparators() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = uintptr_t> T get_ownerObject() {
		return ((T (*)(LanguageSourceData*))(Il2CppBase() + 0x4223910))(this);
	}
	template <typename T = void> T add_Event_OnSourceUpdateFromGoogle(uintptr_t value) {
		return ((T (*)(LanguageSourceData*, uintptr_t))(Il2CppBase() + 0x4222D70))(this, value);
	}
	template <typename T = void> T remove_Event_OnSourceUpdateFromGoogle(uintptr_t value) {
		return ((T (*)(LanguageSourceData*, uintptr_t))(Il2CppBase() + 0x42239D4))(this, value);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(LanguageSourceData*))(Il2CppBase() + 0x422239C))(this);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(LanguageSourceData*))(Il2CppBase() + 0x42224D8))(this);
	}
	template <typename T = bool> T IsEqualTo(uintptr_t Source) {
		return ((T (*)(LanguageSourceData*, uintptr_t))(Il2CppBase() + 0x4224154))(this, Source);
	}
	template <typename T = bool> T ManagerHasASimilarSource() {
		return ((T (*)(LanguageSourceData*))(Il2CppBase() + 0x42248F0))(this);
	}
	template <typename T = void> T ClearAllData() {
		return ((T (*)(LanguageSourceData*))(Il2CppBase() + 0x4224A64))(this);
	}
	template <typename T = bool> T IsGlobalSource() {
		return ((T (*)(LanguageSourceData*))(Il2CppBase() + 0x4224B70))(this);
	}
	template <typename T = void> T Editor_SetDirty() {
		return ((T (*)(LanguageSourceData*))(Il2CppBase() + 0x4224BD0))(this);
	}
	template <typename T = void> T UpdateAssetDictionary() {
		return ((T (*)(LanguageSourceData*))(Il2CppBase() + 0x4223DFC))(this);
	}
	template <typename T = uintptr_t> T FindAsset(Il2CppString* Name) {
		return ((T (*)(LanguageSourceData*, Il2CppString*))(Il2CppBase() + 0x4224C2C))(this, Name);
	}
	template <typename T = bool> T HasAsset(uintptr_t Obj) {
		return ((T (*)(LanguageSourceData*, uintptr_t))(Il2CppBase() + 0x4224D5C))(this, Obj);
	}
	template <typename T = void> T AddAsset(uintptr_t Obj) {
		return ((T (*)(LanguageSourceData*, uintptr_t))(Il2CppBase() + 0x4224E14))(this, Obj);
	}
	template <typename T = Il2CppString*> T Export_I2CSV(Il2CppString* Category, char Separator, bool specializationsAsRows) {
		return ((T (*)(LanguageSourceData*, Il2CppString*, char, bool))(Il2CppBase() + 0x4224F10))(this, Category, Separator, specializationsAsRows);
	}
	template <typename T = void> static T AppendI2Term(uintptr_t Builder, int32_t nLanguages, Il2CppString* Term, uintptr_t termData, char Separator, Il2CppString* forceSpecialization) {
		return ((T (*)(void *, uintptr_t, int32_t, Il2CppString*, uintptr_t, char, Il2CppString*))(Il2CppBase() + 0x4225698))(0, Builder, nLanguages, Term, termData, Separator, forceSpecialization);
	}
	template <typename T = void> static T AppendI2Text(uintptr_t Builder, Il2CppString* text) {
		return ((T (*)(void *, uintptr_t, Il2CppString*))(Il2CppBase() + 0x4225A34))(0, Builder, text);
	}
	template <typename T = Il2CppString*> T Export_Language_to_Cache(int32_t langIndex, bool fillTermWithFallback) {
		return ((T (*)(LanguageSourceData*, int32_t, bool))(Il2CppBase() + 0x4225B6C))(this, langIndex, fillTermWithFallback);
	}
	template <typename T = Il2CppString*> T Export_CSV(Il2CppString* Category, char Separator, bool specializationsAsRows) {
		return ((T (*)(LanguageSourceData*, Il2CppString*, char, bool))(Il2CppBase() + 0x422627C))(this, Category, Separator, specializationsAsRows);
	}
	template <typename T = void> static T AppendTerm(uintptr_t Builder, int32_t nLanguages, Il2CppString* Term, uintptr_t termData, Il2CppString* specialization, char Separator) {
		return ((T (*)(void *, uintptr_t, int32_t, Il2CppString*, uintptr_t, Il2CppString*, char))(Il2CppBase() + 0x4226CB4))(0, Builder, nLanguages, Term, termData, specialization, Separator);
	}
	template <typename T = void> static T AppendString(uintptr_t Builder, Il2CppString* Text, char Separator) {
		return ((T (*)(void *, uintptr_t, Il2CppString*, char))(Il2CppBase() + 0x4226AEC))(0, Builder, Text, Separator);
	}
	template <typename T = void> static T AppendTranslation(uintptr_t Builder, Il2CppString* Text, char Separator, Il2CppString* tags) {
		return ((T (*)(void *, uintptr_t, Il2CppString*, char, Il2CppString*))(Il2CppBase() + 0x4227018))(0, Builder, Text, Separator, tags);
	}
	template <typename T = uintptr_t> T Export_Google_CreateWWWcall(uintptr_t UpdateMode) {
		return ((T (*)(LanguageSourceData*, uintptr_t))(Il2CppBase() + 0x4227218))(this, UpdateMode);
	}
	template <typename T = Il2CppString*> T Export_Google_CreateData() {
		return ((T (*)(LanguageSourceData*))(Il2CppBase() + 0x4227464))(this);
	}
	template <typename T = Il2CppString*> T Import_CSV(Il2CppString* Category, Il2CppString* CSVstring, uintptr_t UpdateMode, char Separator) {
		return ((T (*)(LanguageSourceData*, Il2CppString*, Il2CppString*, uintptr_t, char))(Il2CppBase() + 0x4227924))(this, Category, CSVstring, UpdateMode, Separator);
	}
	template <typename T = Il2CppString*> T Import_I2CSV(Il2CppString* Category, Il2CppString* I2CSVstring, uintptr_t UpdateMode) {
		return ((T (*)(LanguageSourceData*, Il2CppString*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x42287A8))(this, Category, I2CSVstring, UpdateMode);
	}
	template <typename T = Il2CppString*> T Import_CSV_1(Il2CppString* Category, Il2CppList<Il2CppArray<uintptr_t>*>* CSV, uintptr_t UpdateMode) {
		return ((T (*)(LanguageSourceData*, Il2CppString*, Il2CppList<Il2CppArray<uintptr_t>*>*, uintptr_t))(Il2CppBase() + 0x42279D8))(this, Category, CSV, UpdateMode);
	}
	template <typename T = bool> T ArrayContains(Il2CppString* MainText, Il2CppArray<uintptr_t>* texts) {
		return ((T (*)(LanguageSourceData*, Il2CppString*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4228850))(this, MainText, texts);
	}
	template <typename T = uintptr_t> static T GetTermType(Il2CppString* type) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x4228E30))(0, type);
	}
	template <typename T = void> T Import_Language_from_Cache(int32_t langIndex, Il2CppString* langData, bool useFallback, bool onlyCurrentSpecialization) {
		return ((T (*)(LanguageSourceData*, int32_t, Il2CppString*, bool, bool))(Il2CppBase() + 0x42291F8))(this, langIndex, langData, useFallback, onlyCurrentSpecialization);
	}
	template <typename T = void> static T FreeUnusedLanguages() {
		return ((T (*)(void *))(Il2CppBase() + 0x4229508))(0);
	}
	template <typename T = void> T Import_Google_FromCache() {
		return ((T (*)(LanguageSourceData*))(Il2CppBase() + 0x4229718))(this);
	}
	template <typename T = bool> T IsNewerVersion(Il2CppString* currentVersion, Il2CppString* newVersion) {
		return ((T (*)(LanguageSourceData*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x4229C24))(this, currentVersion, newVersion);
	}
	template <typename T = void> T Import_Google(bool ForceUpdate, bool justCheck) {
		return ((T (*)(LanguageSourceData*, bool, bool))(Il2CppBase() + 0x422A3C4))(this, ForceUpdate, justCheck);
	}
	template <typename T = Il2CppString*> T GetSourcePlayerPrefName() {
		return ((T (*)(LanguageSourceData*))(Il2CppBase() + 0x42299E4))(this);
	}
	template <typename T = uintptr_t> T Import_Google_Coroutine(bool JustCheck) {
		return ((T (*)(LanguageSourceData*, bool))(Il2CppBase() + 0x422A67C))(this, JustCheck);
	}
	template <typename T = void> T ApplyDownloadedDataOnSceneLoaded(uintptr_t scene, uintptr_t mode) {
		return ((T (*)(LanguageSourceData*, uintptr_t, uintptr_t))(Il2CppBase() + 0x422A760))(this, scene, mode);
	}
	template <typename T = void> T ApplyDownloadedDataFromGoogle() {
		return ((T (*)(LanguageSourceData*))(Il2CppBase() + 0x422A840))(this);
	}
	template <typename T = uintptr_t> T Import_Google_CreateWWWcall(bool ForceUpdate, bool justCheck) {
		return ((T (*)(LanguageSourceData*, bool, bool))(Il2CppBase() + 0x422A9C8))(this, ForceUpdate, justCheck);
	}
	template <typename T = bool> T HasGoogleSpreadsheet() {
		return ((T (*)(LanguageSourceData*))(Il2CppBase() + 0x422AB6C))(this);
	}
	template <typename T = Il2CppString*> T Import_Google_Result(Il2CppString* JsonString, uintptr_t UpdateMode, bool saveInPlayerPrefs) {
		return ((T (*)(LanguageSourceData*, Il2CppString*, uintptr_t, bool))(Il2CppBase() + 0x4229D08))(this, JsonString, UpdateMode, saveInPlayerPrefs);
	}
	template <typename T = int32_t> T GetLanguageIndex(Il2CppString* language, bool AllowDiscartingRegion, bool SkipDisabled) {
		return ((T (*)(LanguageSourceData*, Il2CppString*, bool, bool))(Il2CppBase() + 0x42243CC))(this, language, AllowDiscartingRegion, SkipDisabled);
	}
	template <typename T = uintptr_t> T GetLanguageData(Il2CppString* language, bool AllowDiscartingRegion) {
		return ((T (*)(LanguageSourceData*, Il2CppString*, bool))(Il2CppBase() + 0x422AE9C))(this, language, AllowDiscartingRegion);
	}
	template <typename T = bool> T IsCurrentLanguage(int32_t languageIndex) {
		return ((T (*)(LanguageSourceData*, int32_t))(Il2CppBase() + 0x422AF88))(this, languageIndex);
	}
	template <typename T = int32_t> T GetLanguageIndexFromCode(Il2CppString* Code, bool exactMatch, bool ignoreDisabled) {
		return ((T (*)(LanguageSourceData*, Il2CppString*, bool, bool))(Il2CppBase() + 0x422895C))(this, Code, exactMatch, ignoreDisabled);
	}
	template <typename T = int32_t> static T GetCommonWordInLanguageNames(Il2CppString* Language1, Il2CppString* Language2) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x422AC50))(0, Language1, Language2);
	}
	template <typename T = bool> static T AreTheSameLanguage(Il2CppString* Language1, Il2CppString* Language2) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x422B088))(0, Language1, Language2);
	}
	template <typename T = Il2CppString*> static T GetLanguageWithoutRegion(Il2CppString* Language) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x422B16C))(0, Language);
	}
	template <typename T = void> T AddLanguage(Il2CppString* LanguageName) {
		return ((T (*)(LanguageSourceData*, Il2CppString*))(Il2CppBase() + 0x422B278))(this, LanguageName);
	}
	template <typename T = void> T AddLanguage_1(Il2CppString* LanguageName, Il2CppString* LanguageCode) {
		return ((T (*)(LanguageSourceData*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x422B344))(this, LanguageName, LanguageCode);
	}
	template <typename T = void> T RemoveLanguage(Il2CppString* LanguageName) {
		return ((T (*)(LanguageSourceData*, Il2CppString*))(Il2CppBase() + 0x422B590))(this, LanguageName);
	}
	template <typename T = Il2CppList<Il2CppString*>*> T GetLanguages(bool skipDisabled) {
		return ((T (*)(LanguageSourceData*, bool))(Il2CppBase() + 0x422B968))(this, skipDisabled);
	}
	template <typename T = Il2CppList<Il2CppString*>*> T GetLanguagesCode(bool allowRegions, bool skipDisabled) {
		return ((T (*)(LanguageSourceData*, bool, bool))(Il2CppBase() + 0x422BB14))(this, allowRegions, skipDisabled);
	}
	template <typename T = bool> T IsLanguageEnabled(Il2CppString* Language) {
		return ((T (*)(LanguageSourceData*, Il2CppString*))(Il2CppBase() + 0x422BD40))(this, Language);
	}
	template <typename T = void> T EnableLanguage(Il2CppString* Language, bool bEnabled) {
		return ((T (*)(LanguageSourceData*, Il2CppString*, bool))(Il2CppBase() + 0x422BE40))(this, Language, bEnabled);
	}
	template <typename T = bool> T AllowUnloadingLanguages() {
		return ((T (*)(LanguageSourceData*))(Il2CppBase() + 0x422BF48))(this);
	}
	template <typename T = Il2CppString*> T GetSavedLanguageFileName(int32_t languageIndex) {
		return ((T (*)(LanguageSourceData*, int32_t))(Il2CppBase() + 0x422BFB0))(this, languageIndex);
	}
	template <typename T = void> T LoadLanguage(int32_t languageIndex, bool UnloadOtherLanguages, bool useFallback, bool onlyCurrentSpecialization, bool forceLoad) {
		return ((T (*)(LanguageSourceData*, int32_t, bool, bool, bool, bool))(Il2CppBase() + 0x422C250))(this, languageIndex, UnloadOtherLanguages, useFallback, onlyCurrentSpecialization, forceLoad);
	}
	template <typename T = void> T LoadAllLanguages(bool forceLoad) {
		return ((T (*)(LanguageSourceData*, bool))(Il2CppBase() + 0x422C70C))(this, forceLoad);
	}
	template <typename T = void> T UnloadLanguage(int32_t languageIndex) {
		return ((T (*)(LanguageSourceData*, int32_t))(Il2CppBase() + 0x422C45C))(this, languageIndex);
	}
	template <typename T = void> T SaveLanguages(bool unloadAll, uintptr_t fileLocation) {
		return ((T (*)(LanguageSourceData*, bool, uintptr_t))(Il2CppBase() + 0x4229060))(this, unloadAll, fileLocation);
	}
	template <typename T = bool> T HasUnloadedLanguages() {
		return ((T (*)(LanguageSourceData*))(Il2CppBase() + 0x4228F48))(this);
	}
	template <typename T = Il2CppList<Il2CppString*>*> T GetCategories(bool OnlyMainCategory, Il2CppList<Il2CppString*>* Categories) {
		return ((T (*)(LanguageSourceData*, bool, Il2CppList<Il2CppString*>*))(Il2CppBase() + 0x42276CC))(this, OnlyMainCategory, Categories);
	}
	template <typename T = Il2CppString*> static T GetKeyFromFullTerm(Il2CppString* FullTerm, bool OnlyMainCategory) {
		return ((T (*)(void *, Il2CppString*, bool))(Il2CppBase() + 0x422C974))(0, FullTerm, OnlyMainCategory);
	}
	template <typename T = Il2CppString*> static T GetCategoryFromFullTerm(Il2CppString* FullTerm, bool OnlyMainCategory) {
		return ((T (*)(void *, Il2CppString*, bool))(Il2CppBase() + 0x422C800))(0, FullTerm, OnlyMainCategory);
	}
	template <typename T = void> static T DeserializeFullTerm(Il2CppString* FullTerm, uintptr_t* Key, uintptr_t* Category, bool OnlyMainCategory) {
		return ((T (*)(void *, Il2CppString*, uintptr_t*, uintptr_t*, bool))(Il2CppBase() + 0x422CAC4))(0, FullTerm, Key, Category, OnlyMainCategory);
	}
	template <typename T = void> T UpdateDictionary(bool force) {
		return ((T (*)(LanguageSourceData*, bool))(Il2CppBase() + 0x4223AC0))(this, force);
	}
	template <typename T = Il2CppString*> T GetTranslation(Il2CppString* term, Il2CppString* overrideLanguage, Il2CppString* overrideSpecialization, bool skipDisabled, bool allowCategoryMistmatch) {
		return ((T (*)(LanguageSourceData*, Il2CppString*, Il2CppString*, Il2CppString*, bool, bool))(Il2CppBase() + 0x422CC90))(this, term, overrideLanguage, overrideSpecialization, skipDisabled, allowCategoryMistmatch);
	}
	template <typename T = bool> T TryGetTranslation(Il2CppString* term, uintptr_t* Translation, Il2CppString* overrideLanguage, Il2CppString* overrideSpecialization, bool skipDisabled, bool allowCategoryMistmatch) {
		return ((T (*)(LanguageSourceData*, Il2CppString*, uintptr_t*, Il2CppString*, Il2CppString*, bool, bool))(Il2CppBase() + 0x422CD90))(this, term, Translation, overrideLanguage, overrideSpecialization, skipDisabled, allowCategoryMistmatch);
	}
	template <typename T = bool> T TryGetFallbackTranslation(uintptr_t termData, uintptr_t* Translation, int32_t langIndex, Il2CppString* overrideSpecialization, bool skipDisabled) {
		return ((T (*)(LanguageSourceData*, uintptr_t, uintptr_t*, int32_t, Il2CppString*, bool))(Il2CppBase() + 0x4225EC4))(this, termData, Translation, langIndex, overrideSpecialization, skipDisabled);
	}
	template <typename T = uintptr_t> T AddTerm(Il2CppString* term) {
		return ((T (*)(LanguageSourceData*, Il2CppString*))(Il2CppBase() + 0x422D00C))(this, term);
	}
	template <typename T = uintptr_t> T GetTermData(Il2CppString* term, bool allowCategoryMistmatch) {
		return ((T (*)(LanguageSourceData*, Il2CppString*, bool))(Il2CppBase() + 0x4224658))(this, term, allowCategoryMistmatch);
	}
	template <typename T = bool> T ContainsTerm(Il2CppString* term) {
		return ((T (*)(LanguageSourceData*, Il2CppString*))(Il2CppBase() + 0x422D2FC))(this, term);
	}
	template <typename T = Il2CppList<Il2CppString*>*> T GetTermsList(Il2CppString* Category) {
		return ((T (*)(LanguageSourceData*, Il2CppString*))(Il2CppBase() + 0x422D384))(this, Category);
	}
	template <typename T = uintptr_t> T AddTerm_1(Il2CppString* NewTerm, uintptr_t termType, bool SaveSource) {
		return ((T (*)(LanguageSourceData*, Il2CppString*, uintptr_t, bool))(Il2CppBase() + 0x422D08C))(this, NewTerm, termType, SaveSource);
	}
	template <typename T = void> T RemoveTerm(Il2CppString* term) {
		return ((T (*)(LanguageSourceData*, Il2CppString*))(Il2CppBase() + 0x422D5F8))(this, term);
	}
	template <typename T = void> static T ValidateFullTerm(uintptr_t Term) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4228BC4))(0, Term);
	}

};

}
