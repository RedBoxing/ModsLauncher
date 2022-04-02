#pragma once
#include "Il2Cpp/Il2Cpp.h"

class GetFlattenedMethodsd18
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<GetFlattenedMethods>d__18"));
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
	template <typename T = uintptr_t> T& type() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& 3__type() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppString*> T& methodName() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = Il2CppString*> T& 3__methodName() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& methods5__2() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = int32_t> T& i5__3() {
		return *(T*)((uintptr_t)this + 0x50);
	}

	template <typename T = void> T System_IDisposable_Dispose() {
		return ((T (*)(GetFlattenedMethodsd18*))(Il2CppBase() + 0x2D09818))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(GetFlattenedMethodsd18*))(Il2CppBase() + 0x2D0981C))(this);
	}
	template <typename T = uintptr_t> T System_Collections_Generic_IEnumeratorSystem_Reflection_MethodInfo_get_Current() {
		return ((T (*)(GetFlattenedMethodsd18*))(Il2CppBase() + 0x2D09A58))(this);
	}
	template <typename T = void> T System_Collections_IEnumerator_Reset() {
		return ((T (*)(GetFlattenedMethodsd18*))(Il2CppBase() + 0x2D09A60))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(GetFlattenedMethodsd18*))(Il2CppBase() + 0x2D09AC8))(this);
	}
	template <typename T = void*> T System_Collections_Generic_IEnumerableSystem_Reflection_MethodInfo_GetEnumerator() {
		return ((T (*)(GetFlattenedMethodsd18*))(Il2CppBase() + 0x2D09AD0))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerable_GetEnumerator() {
		return ((T (*)(GetFlattenedMethodsd18*))(Il2CppBase() + 0x2D09BA0))(this);
	}

};

}
