#pragma once
#include "Il2Cpp/Il2Cpp.h"

class cDisplayClass560
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass56_0"));
	}

	template <typename T = uintptr_t> T& 4__this() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& hero() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& skinIndex() {
		return *(T*)((uintptr_t)this + 0x1C);
	}

	template <typename T = void> T OnSkinListButtonClickedb__0() {
		return ((T (*)(cDisplayClass560*))(Il2CppBase() + 0x45BD014))(this);
	}
	template <typename T = void> T OnSkinListButtonClickedb__1() {
		return ((T (*)(cDisplayClass560*))(Il2CppBase() + 0x45BD054))(this);
	}

};

}
