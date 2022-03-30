#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace FullSerializer {

class fsObjectAttribute
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "FullSerializer", "fsObjectAttribute"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& PreviousModels() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& VersionString() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& MemberSerialization() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& Converter() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& Processor() {
		return *(T*)((uintptr_t)this + 0x30);
	}


};

}
