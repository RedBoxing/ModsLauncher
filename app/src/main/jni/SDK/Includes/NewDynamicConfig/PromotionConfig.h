#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace NewDynamicConfig {

class PromotionConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "NewDynamicConfig", "PromotionConfig"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& promotionInfos() {
		return *(T*)((uintptr_t)this + 0x40);
	}

	template <typename T = void> T ForceConfig() {
		return ((T (*)(PromotionConfig*))(Il2CppBase() + 0x45200B0))(this);
	}
	template <typename T = void> T AddConfig() {
		return ((T (*)(PromotionConfig*))(Il2CppBase() + 0x4520248))(this);
	}
	template <typename T = void> T MergeConfig() {
		return ((T (*)(PromotionConfig*))(Il2CppBase() + 0x4520544))(this);
	}
	template <typename T = void> T DownloadVideo() {
		return ((T (*)(PromotionConfig*))(Il2CppBase() + 0x45201EC))(this);
	}
	template <typename T = void> T iFixBaseProxy_ForceConfig() {
		return ((T (*)(PromotionConfig*))(Il2CppBase() + 0x45209DC))(this);
	}
	template <typename T = void> T iFixBaseProxy_AddConfig() {
		return ((T (*)(PromotionConfig*))(Il2CppBase() + 0x45209E0))(this);
	}
	template <typename T = void> T iFixBaseProxy_MergeConfig() {
		return ((T (*)(PromotionConfig*))(Il2CppBase() + 0x45209E4))(this);
	}

};

}
