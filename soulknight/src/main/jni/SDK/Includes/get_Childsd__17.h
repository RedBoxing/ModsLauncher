#pragma once
#include "Il2Cpp/Il2Cpp.h"

class getChildsd17
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<get_Childs>d__17"));
	}

	template <typename T = int32_t> T& 1__state() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& 2__current() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& l__initialThreadId() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = void> T System_IDisposable_Dispose() {
		return ((T (*)(getChildsd17*))(Il2CppBase() + 0x17384D0))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(getChildsd17*))(Il2CppBase() + 0x17384D4))(this);
	}
	template <typename T = uintptr_t> T System_Collections_Generic_IEnumeratorI2_Loc_SimpleJSON_JSONNode_get_Current() {
		return ((T (*)(getChildsd17*))(Il2CppBase() + 0x17384EC))(this);
	}
	template <typename T = void> T System_Collections_IEnumerator_Reset() {
		return ((T (*)(getChildsd17*))(Il2CppBase() + 0x17384F4))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(getChildsd17*))(Il2CppBase() + 0x173855C))(this);
	}
	template <typename T = void*> T System_Collections_Generic_IEnumerableI2_Loc_SimpleJSON_JSONNode_GetEnumerator() {
		return ((T (*)(getChildsd17*))(Il2CppBase() + 0x1738564))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerable_GetEnumerator() {
		return ((T (*)(getChildsd17*))(Il2CppBase() + 0x17385FC))(this);
	}

};

}
