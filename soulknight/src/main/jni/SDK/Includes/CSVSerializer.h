#pragma once
#include "Il2Cpp/Il2Cpp.h"

class CSVSerializer
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CSVSerializer"));
	}


	template <typename T = Il2CppArray<uintptr_t>*> static T Deserialize(Il2CppString* text) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x0))(0, text);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T Deserialize_1(Il2CppList<Il2CppArray<uintptr_t>*>* rows) {
		return ((T (*)(void *, Il2CppList<Il2CppArray<uintptr_t>*>*))(Il2CppBase() + 0x0))(0, rows);
	}
	template <typename T = uintptr_t> static T DeserializeIdValue(Il2CppString* text, int32_t id_col, int32_t value_col) {
		return ((T (*)(void *, Il2CppString*, int32_t, int32_t))(Il2CppBase() + 0x0))(0, text, id_col, value_col);
	}
	template <typename T = uintptr_t> static T DeserializeIdValue_1(Il2CppList<Il2CppArray<uintptr_t>*>* rows, int32_t id_col, int32_t value_col) {
		return ((T (*)(void *, Il2CppList<Il2CppArray<uintptr_t>*>*, int32_t, int32_t))(Il2CppBase() + 0x0))(0, rows, id_col, value_col);
	}
	template <typename T = uintptr_t> static T CreateArray(uintptr_t type, Il2CppList<Il2CppArray<uintptr_t>*>* rows) {
		return ((T (*)(void *, uintptr_t, Il2CppList<Il2CppArray<uintptr_t>*>*))(Il2CppBase() + 0x1864978))(0, type, rows);
	}
	template <typename T = uintptr_t> static T Create(Il2CppArray<uintptr_t>* cols, Il2CppDictionary<Il2CppString*, int32_t>* table, uintptr_t type) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, Il2CppDictionary<Il2CppString*, int32_t>*, uintptr_t))(Il2CppBase() + 0x1864DB8))(0, cols, table, type);
	}
	template <typename T = void> static T SetValue(uintptr_t v, uintptr_t fieldinfo, Il2CppString* value) {
		return ((T (*)(void *, uintptr_t, uintptr_t, Il2CppString*))(Il2CppBase() + 0x1864FC8))(0, v, fieldinfo, value);
	}
	template <typename T = uintptr_t> static T CreateIdValue(uintptr_t type, Il2CppList<Il2CppArray<uintptr_t>*>* rows, int32_t id_col, int32_t val_col) {
		return ((T (*)(void *, uintptr_t, Il2CppList<Il2CppArray<uintptr_t>*>*, int32_t, int32_t))(Il2CppBase() + 0x186568C))(0, type, rows, id_col, val_col);
	}
	template <typename T = Il2CppList<Il2CppArray<uintptr_t>*>*> static T ParseCSV(Il2CppString* text, char separator) {
		return ((T (*)(void *, Il2CppString*, char))(Il2CppBase() + 0x1865B00))(0, text, separator);
	}

};

}
