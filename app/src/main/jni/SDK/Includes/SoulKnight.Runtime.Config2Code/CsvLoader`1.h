#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace SoulKnight.Runtime.Config2Code {

class CsvLoader1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "SoulKnight.Runtime.Config2Code", "CsvLoader`1"));
	}

	template <typename T = Il2CppString*> static T& SecretKey() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppList<Il2CppString*>*> T& _fieldNames() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, uintptr_t>*> T& _dataDict() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> T& _tType() {
		return *(T*)((uintptr_t)this + 0x0);
	}

	template <typename T = void> T LoadRow(void* array) {
		return ((T (*)(CsvLoader1*, void*))(Il2CppBase() + 0x0))(this, array);
	}
	template <typename T = bool> T Load(Il2CppString* path) {
		return ((T (*)(CsvLoader1*, Il2CppString*))(Il2CppBase() + 0x0))(this, path);
	}
	template <typename T = void*> T GetData() {
		return ((T (*)(CsvLoader1*))(Il2CppBase() + 0x0))(this);
	}

};

}
