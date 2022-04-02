#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace Util.Model {

class Date
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Util.Model", "Date"));
	}

	template <typename T = int32_t> T& year() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& month() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& date() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& hour() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& minute() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = int64_t> T get_TimeStamp() {
		return ((T (*)(Date*))(Il2CppBase() + 0x4402148))(this);
	}
	template <typename T = void> T set_DateTime(uintptr_t value) {
		return ((T (*)(Date*, uintptr_t))(Il2CppBase() + 0x440235C))(this, value);
	}
	template <typename T = uintptr_t> T get_DateTime() {
		return ((T (*)(Date*))(Il2CppBase() + 0x44022AC))(this);
	}
	template <typename T = int32_t> T GetValidMaxDate(int32_t year, int32_t month) {
		return ((T (*)(Date*, int32_t, int32_t))(Il2CppBase() + 0x4402420))(this, year, month);
	}
	template <typename T = void> T FromTimeStamp(int64_t timeStamp) {
		return ((T (*)(Date*, int64_t))(Il2CppBase() + 0x4402538))(this, timeStamp);
	}
	template <typename T = void> T ValidateValue() {
		return ((T (*)(Date*))(Il2CppBase() + 0x44026AC))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(Date*))(Il2CppBase() + 0x44027AC))(this);
	}
	template <typename T = Il2CppString*> T iFixBaseProxy_ToString() {
		return ((T (*)(Date*))(Il2CppBase() + 0x44028A8))(this);
	}

};

}
