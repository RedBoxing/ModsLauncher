#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace ChillyRoom {

class PromotionInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ChillyRoom", "PromotionInfo"));
	}

	template <typename T = Il2CppString*> T& gameId() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& adUrl() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> T& isPublished() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppString*> T& downloadUrl() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& adVersion() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppString*> T& rewardTitle() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = Il2CppString*> T& rewardTitleEn() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& _infos() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = Il2CppString*> T get_path() {
		return ((T (*)(PromotionInfo*))(Il2CppBase() + 0x1E6697C))(this);
	}
	template <typename T = Il2CppString*> T get_fullImgPath() {
		return ((T (*)(PromotionInfo*))(Il2CppBase() + 0x1E66A38))(this);
	}
	template <typename T = Il2CppString*> T get_titleImgPath() {
		return ((T (*)(PromotionInfo*))(Il2CppBase() + 0x1E66B00))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T get_infos() {
		return ((T (*)(void *))(Il2CppBase() + 0x1E66BC8))(0);
	}
	template <typename T = bool> static T get_promoteFileExist() {
		return ((T (*)(void *))(Il2CppBase() + 0x1E66F08))(0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T ParseInfo(Il2CppString* path) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x1E66FC0))(0, path);
	}
	template <typename T = bool> T get_needShow() {
		return ((T (*)(PromotionInfo*))(Il2CppBase() + 0x1E6705C))(this);
	}
	template <typename T = bool> T get_rewarded() {
		return ((T (*)(PromotionInfo*))(Il2CppBase() + 0x1E672B8))(this);
	}
	template <typename T = void> T set_rewarded(bool value) {
		return ((T (*)(PromotionInfo*, bool))(Il2CppBase() + 0x1E67404))(this, value);
	}
	template <typename T = int32_t> T get_localAdVersion() {
		return ((T (*)(PromotionInfo*))(Il2CppBase() + 0x1E67364))(this);
	}
	template <typename T = void> T set_localAdVersion(int32_t value) {
		return ((T (*)(PromotionInfo*, int32_t))(Il2CppBase() + 0x1E674B8))(this, value);
	}
	template <typename T = void> static T SetPromotionInfos(Il2CppArray<uintptr_t>* infos) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1E6756C))(0, infos);
	}
	template <typename T = void> static T SetPromotionPath(Il2CppString* path) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x1E67600))(0, path);
	}

};

}
