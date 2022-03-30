#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace PaPa.DataTest {

class ItemDataTester
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PaPa.DataTest", "ItemDataTester"));
	}

	template <typename T = Il2CppString*> static T& material_gem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = void> T BeforeTest() {
		return ((T (*)(ItemDataTester*))(Il2CppBase() + 0x26E3A54))(this);
	}
	template <typename T = void> T AfterTest() {
		return ((T (*)(ItemDataTester*))(Il2CppBase() + 0x26E3AB4))(this);
	}
	template <typename T = void> T AddPickableNoneTest() {
		return ((T (*)(ItemDataTester*))(Il2CppBase() + 0x26E3B14))(this);
	}
	template <typename T = void> T AddPickableGemTest() {
		return ((T (*)(ItemDataTester*))(Il2CppBase() + 0x26E3D34))(this);
	}
	template <typename T = void> T AddPickablePlantTest() {
		return ((T (*)(ItemDataTester*))(Il2CppBase() + 0x26E41F4))(this);
	}
	template <typename T = void> T AddPickableBlueprintTest() {
		return ((T (*)(ItemDataTester*))(Il2CppBase() + 0x26E46AC))(this);
	}
	template <typename T = void> T AddPickableMaterialTest() {
		return ((T (*)(ItemDataTester*))(Il2CppBase() + 0x26E4D38))(this);
	}
	template <typename T = void> T ConsumeMaterialTest() {
		return ((T (*)(ItemDataTester*))(Il2CppBase() + 0x26E5260))(this);
	}
	template <typename T = void> T ConsumeSeedTest() {
		return ((T (*)(ItemDataTester*))(Il2CppBase() + 0x26E5A44))(this);
	}
	template <typename T = void> T ResearchBlueprintTest() {
		return ((T (*)(ItemDataTester*))(Il2CppBase() + 0x26E5F40))(this);
	}

};

}
