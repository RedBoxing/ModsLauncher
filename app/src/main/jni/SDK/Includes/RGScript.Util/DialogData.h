#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace RGScript.Util {

class DialogData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "RGScript.Util", "DialogData"));
	}

	template <typename T = int64_t> T& TakeEffectUnix() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& DialogType() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> T& Title() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppString*> T& Msg() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppString*> T& PositiveBtnMsg() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppString*> T& PositiveBtnAction() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = Il2CppString*> T& NegativeBtnMsg() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = Il2CppString*> T& NegativeBtnAction() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = bool> T& IsCancelable() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = int32_t> T& ShowTime() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = int32_t> T& MaxVersion() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = Il2CppString*> T& NoMarketAction() {
		return *(T*)((uintptr_t)this + 0x60);
	}


};

}
