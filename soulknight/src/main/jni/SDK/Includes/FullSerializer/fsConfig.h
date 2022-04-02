#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace FullSerializer {

class fsConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "FullSerializer", "fsConfig"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& SerializeAttributes() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& IgnoreSerializeAttributes() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& IgnoreSerializeTypeAttributes() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& DefaultMemberSerialization() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = void*> T& GetJsonNameFromMemberName() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = bool> T& EnablePropertySerialization() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = bool> T& SerializeNonAutoProperties() {
		return *(T*)((uintptr_t)this + 0x39);
	}
	template <typename T = bool> T& SerializeNonPublicSetProperties() {
		return *(T*)((uintptr_t)this + 0x3A);
	}
	template <typename T = Il2CppString*> T& CustomDateTimeFormatString() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = bool> T& Serialize64BitIntegerAsString() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = bool> T& SerializeEnumsAsInteger() {
		return *(T*)((uintptr_t)this + 0x49);
	}


};

}
