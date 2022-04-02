#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace IFix {

class ILFixDynamicMethodWrapper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "IFix", "ILFixDynamicMethodWrapper"));
	}

	template <typename T = uintptr_t> T& virtualMachine() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& methodId() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& anonObj() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& wrapperArray() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = void> T __Gen_Wrap_0() {
		return ((T (*)(ILFixDynamicMethodWrapper*))(Il2CppBase() + 0x173F194))(this);
	}
	template <typename T = int32_t> T __Gen_Wrap_1(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x173F244))(this, P0, P1);
	}
	template <typename T = bool> T __Gen_Wrap_2() {
		return ((T (*)(ILFixDynamicMethodWrapper*))(Il2CppBase() + 0x173F328))(this);
	}
	template <typename T = Il2CppString*> T __Gen_Wrap_3() {
		return ((T (*)(ILFixDynamicMethodWrapper*))(Il2CppBase() + 0x173F3EC))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T __Gen_Wrap_4(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x173F4D8))(this, P0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T __Gen_Wrap_5() {
		return ((T (*)(ILFixDynamicMethodWrapper*))(Il2CppBase() + 0x173F5D4))(this);
	}
	template <typename T = Il2CppList<Il2CppString*>*> T __Gen_Wrap_6(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x173B5F0))(this, P0);
	}
	template <typename T = void> T __Gen_Wrap_7(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1733034))(this, P0, P1);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_8(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x173F6C0))(this, P0, P1);
	}
	template <typename T = void> T __Gen_Wrap_9(uintptr_t P0, uintptr_t P1, uintptr_t P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x1731114))(this, P0, P1, P2);
	}
	template <typename T = void> T __Gen_Wrap_10(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x173B09C))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_11(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x173F7D0))(this, P0, P1);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_12() {
		return ((T (*)(ILFixDynamicMethodWrapper*))(Il2CppBase() + 0x173F8E0))(this);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_13() {
		return ((T (*)(ILFixDynamicMethodWrapper*))(Il2CppBase() + 0x173F9CC))(this);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_14(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x173FAB8))(this, P0);
	}
	template <typename T = void> T __Gen_Wrap_15(bool P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, bool))(Il2CppBase() + 0x173FBB4))(this, P0);
	}
	template <typename T = bool> T __Gen_Wrap_16(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x173FC74))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_17(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x173FD48))(this, P0, P1);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_18() {
		return ((T (*)(ILFixDynamicMethodWrapper*))(Il2CppBase() + 0x173FE58))(this);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_19(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x1732014))(this, P0);
	}
	template <typename T = bool> T __Gen_Wrap_20(void* P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, void*))(Il2CppBase() + 0x173FF44))(this, P0);
	}
	template <typename T = Il2CppString*> T __Gen_Wrap_21(void* P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, void*))(Il2CppBase() + 0x1740058))(this, P0);
	}
	template <typename T = int32_t> T __Gen_Wrap_22(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17316C8))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_23() {
		return ((T (*)(ILFixDynamicMethodWrapper*))(Il2CppBase() + 0x1740170))(this);
	}
	template <typename T = Il2CppVector2> T __Gen_Wrap_24(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x174025C))(this, P0);
	}
	template <typename T = void> T __Gen_Wrap_25(uintptr_t P0, uintptr_t P1, uintptr_t P2, uintptr_t P3, uintptr_t P4, int32_t P5, bool P6) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, int32_t, bool))(Il2CppBase() + 0x1740358))(this, P0, P1, P2, P3, P4, P5, P6);
	}
	template <typename T = void> T __Gen_Wrap_26(uintptr_t P0, uintptr_t P1, uintptr_t P2, uintptr_t P3, uintptr_t P4, uintptr_t P5, bool P6) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, bool))(Il2CppBase() + 0x17404A0))(this, P0, P1, P2, P3, P4, P5, P6);
	}
	template <typename T = void> T __Gen_Wrap_27(uintptr_t P0, uintptr_t P1, uintptr_t P2, uintptr_t P3, uintptr_t P4) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x17405E8))(this, P0, P1, P2, P3, P4);
	}
	template <typename T = bool> T __Gen_Wrap_28(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x1735AA4))(this, P0);
	}
	template <typename T = bool> T __Gen_Wrap_29(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x1740700))(this, P0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T __Gen_Wrap_30() {
		return ((T (*)(ILFixDynamicMethodWrapper*))(Il2CppBase() + 0x17407D4))(this);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_31(int32_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, int32_t))(Il2CppBase() + 0x17408C0))(this, P0);
	}
	template <typename T = bool> T __Gen_Wrap_32(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17409BC))(this, P0);
	}
	template <typename T = void> T __Gen_Wrap_33(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x1740A90))(this, P0);
	}
	template <typename T = void> T __Gen_Wrap_34(uintptr_t P0, bool P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, bool))(Il2CppBase() + 0x1735C44))(this, P0, P1);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_35() {
		return ((T (*)(ILFixDynamicMethodWrapper*))(Il2CppBase() + 0x1740B50))(this);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_36() {
		return ((T (*)(ILFixDynamicMethodWrapper*))(Il2CppBase() + 0x1740C3C))(this);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_37(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x1740D28))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_38(uintptr_t P0, uintptr_t P1, uintptr_t P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x1740E24))(this, P0, P1, P2);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_39(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1740F50))(this, P0, P1);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_40(uintptr_t P0, uintptr_t P1, int32_t P2, int32_t P3) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, int32_t, int32_t))(Il2CppBase() + 0x1741060))(this, P0, P1, P2, P3);
	}
	template <typename T = Il2CppList<Il2CppArray<uintptr_t>*>*> T __Gen_Wrap_41(uintptr_t P0, char P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, char))(Il2CppBase() + 0x17411A0))(this, P0, P1);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_42() {
		return ((T (*)(ILFixDynamicMethodWrapper*))(Il2CppBase() + 0x17412B0))(this);
	}
	template <typename T = Il2CppString*> T __Gen_Wrap_43(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x1732564))(this, P0);
	}
	template <typename T = void> T __Gen_Wrap_44(uintptr_t P0, int32_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, int32_t))(Il2CppBase() + 0x17352A0))(this, P0, P1);
	}
	template <typename T = void> T __Gen_Wrap_45(uintptr_t P0, float P1, float P2, int32_t P3) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, float, float, int32_t))(Il2CppBase() + 0x174139C))(this, P0, P1, P2, P3);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_46() {
		return ((T (*)(ILFixDynamicMethodWrapper*))(Il2CppBase() + 0x17414A0))(this);
	}
	template <typename T = bool> T __Gen_Wrap_47(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x174158C))(this, P0, P1);
	}
	template <typename T = bool> T __Gen_Wrap_48(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1741674))(this, P0, P1);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_49(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x174175C))(this, P0);
	}
	template <typename T = int32_t> T __Gen_Wrap_50(uintptr_t P0, int32_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, int32_t))(Il2CppBase() + 0x1741858))(this, P0, P1);
	}
	template <typename T = int32_t> T __Gen_Wrap_51(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x174193C))(this, P0, P1);
	}
	template <typename T = void> T __Gen_Wrap_52(uintptr_t P0, float P1, float P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, float, float))(Il2CppBase() + 0x1741A20))(this, P0, P1, P2);
	}
	template <typename T = void> T __Gen_Wrap_53(bool P0, uintptr_t P1, uintptr_t P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, bool, uintptr_t, uintptr_t))(Il2CppBase() + 0x1741B10))(this, P0, P1, P2);
	}
	template <typename T = void> T __Gen_Wrap_54(uintptr_t P0, uintptr_t P1, int32_t P2, uintptr_t P3, uintptr_t P4) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, int32_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x1741BF8))(this, P0, P1, P2, P3, P4);
	}
	template <typename T = void> T __Gen_Wrap_55(int32_t P0, uintptr_t P1, uintptr_t P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, int32_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x1741D10))(this, P0, P1, P2);
	}
	template <typename T = void> T __Gen_Wrap_56(int32_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, int32_t))(Il2CppBase() + 0x1741DF8))(this, P0);
	}
	template <typename T = void> T __Gen_Wrap_57(uintptr_t P0, int64_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, int64_t))(Il2CppBase() + 0x1741EB8))(this, P0, P1);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_58() {
		return ((T (*)(ILFixDynamicMethodWrapper*))(Il2CppBase() + 0x1741F8C))(this);
	}
	template <typename T = void> T __Gen_Wrap_59(int64_t P0, uintptr_t P1, uintptr_t P2, uintptr_t P3, uintptr_t P4) {
		return ((T (*)(ILFixDynamicMethodWrapper*, int64_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x1742078))(this, P0, P1, P2, P3, P4);
	}
	template <typename T = bool> T __Gen_Wrap_60(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1734D4C))(this, P0, P1);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_61() {
		return ((T (*)(ILFixDynamicMethodWrapper*))(Il2CppBase() + 0x1742190))(this);
	}
	template <typename T = void> T __Gen_Wrap_62(uintptr_t P0, bool P1, uintptr_t P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, bool, uintptr_t))(Il2CppBase() + 0x174227C))(this, P0, P1, P2);
	}
	template <typename T = void> T __Gen_Wrap_63(bool P0, uintptr_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, bool, uintptr_t))(Il2CppBase() + 0x1742364))(this, P0, P1);
	}
	template <typename T = void> T __Gen_Wrap_64(uintptr_t P0, uintptr_t P1, uintptr_t P2, int32_t P3, uintptr_t P4) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, uintptr_t, int32_t, uintptr_t))(Il2CppBase() + 0x1742438))(this, P0, P1, P2, P3, P4);
	}
	template <typename T = void> T __Gen_Wrap_65(uintptr_t P0, uintptr_t P1, int32_t P2, uintptr_t P3) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, int32_t, uintptr_t))(Il2CppBase() + 0x1742550))(this, P0, P1, P2, P3);
	}
	template <typename T = void> T __Gen_Wrap_66(uintptr_t P0, int32_t P1, uintptr_t P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, int32_t, uintptr_t))(Il2CppBase() + 0x1731544))(this, P0, P1, P2);
	}
	template <typename T = void> T __Gen_Wrap_67(int32_t P0, uintptr_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, int32_t, uintptr_t))(Il2CppBase() + 0x1742654))(this, P0, P1);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_68() {
		return ((T (*)(ILFixDynamicMethodWrapper*))(Il2CppBase() + 0x1742728))(this);
	}
	template <typename T = void> T __Gen_Wrap_69(uintptr_t P0, int64_t P1, uintptr_t P2, uintptr_t P3, uintptr_t P4) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, int64_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x1742814))(this, P0, P1, P2, P3, P4);
	}
	template <typename T = void> T __Gen_Wrap_70(int64_t P0, uintptr_t P1, uintptr_t P2, uintptr_t P3) {
		return ((T (*)(ILFixDynamicMethodWrapper*, int64_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x174292C))(this, P0, P1, P2, P3);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_71() {
		return ((T (*)(ILFixDynamicMethodWrapper*))(Il2CppBase() + 0x1742A30))(this);
	}
	template <typename T = void> T __Gen_Wrap_72(uintptr_t P0, double P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, double))(Il2CppBase() + 0x1735908))(this, P0, P1);
	}
	template <typename T = void> T __Gen_Wrap_73(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1742B1C))(this, P0, P1);
	}
	template <typename T = int32_t> T __Gen_Wrap_74(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1742C14))(this, P0, P1);
	}
	template <typename T = Il2CppString*> T __Gen_Wrap_75(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1742D1C))(this, P0, P1);
	}
	template <typename T = double> T __Gen_Wrap_76(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1742E50))(this, P0, P1);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_77(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1742F58))(this, P0, P1);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_78(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x174308C))(this, P0, P1);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_79(uintptr_t P0, uintptr_t P1, uintptr_t P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x17431C0))(this, P0, P1, P2);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_80(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x1743340))(this, P0);
	}
	template <typename T = Il2CppList<uintptr_t>*> T __Gen_Wrap_81(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x174343C))(this, P0, P1);
	}
	template <typename T = void> T __Gen_Wrap_82(uintptr_t P0, uintptr_t P1, uintptr_t P2, uintptr_t P3) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x174354C))(this, P0, P1, P2, P3);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_83(uintptr_t P0, uintptr_t P1, uintptr_t P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x17436A0))(this, P0, P1, P2);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_84(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17437CC))(this, P0);
	}
	template <typename T = void> T __Gen_Wrap_85(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17438C8))(this, P0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T __Gen_Wrap_86(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17439CC))(this, P0);
	}
	template <typename T = void*> T __Gen_Wrap_87(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x1743AC8))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_88(uintptr_t P0, uintptr_t P1, uintptr_t P2, uintptr_t* P3) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, uintptr_t, uintptr_t*))(Il2CppBase() + 0x1743BCC))(this, P0, P1, P2, P3);
	}
	template <typename T = bool> T __Gen_Wrap_89(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x1743D38))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_90(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x1743E78))(this, P0);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, uintptr_t>*> T __Gen_Wrap_91(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x1743F74))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_92(uintptr_t P0, uintptr_t P1, uintptr_t P2, uintptr_t P3, uintptr_t* P4) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t*))(Il2CppBase() + 0x1744070))(this, P0, P1, P2, P3, P4);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_93() {
		return ((T (*)(ILFixDynamicMethodWrapper*))(Il2CppBase() + 0x17441F8))(this);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_94(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17442E4))(this, P0);
	}
	template <typename T = double> T __Gen_Wrap_95(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x173576C))(this, P0);
	}
	template <typename T = Il2CppString*> T __Gen_Wrap_96(double P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, double))(Il2CppBase() + 0x17443B4))(this, P0);
	}
	template <typename T = int64_t> T __Gen_Wrap_97(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17444B8))(this, P0);
	}
	template <typename T = Il2CppList<uintptr_t>*> T __Gen_Wrap_98(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x1744588))(this, P0);
	}
	template <typename T = void> T __Gen_Wrap_99(uintptr_t P0, uintptr_t P1, int32_t P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x1744684))(this, P0, P1, P2);
	}
	template <typename T = Il2CppString*> T __Gen_Wrap_100(uintptr_t P0, uintptr_t P1, bool P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, bool))(Il2CppBase() + 0x174476C))(this, P0, P1, P2);
	}
	template <typename T = Il2CppString*> T __Gen_Wrap_101(uintptr_t P0, bool P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, bool))(Il2CppBase() + 0x1744898))(this, P0, P1);
	}
	template <typename T = Il2CppString*> T __Gen_Wrap_102(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1732CD8))(this, P0, P1);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_103() {
		return ((T (*)(ILFixDynamicMethodWrapper*))(Il2CppBase() + 0x17449A8))(this);
	}
	template <typename T = int32_t> T __Gen_Wrap_104(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x1744A94))(this, P0);
	}
	template <typename T = void> T __Gen_Wrap_105(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1744B64))(this, P0, P1);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_106() {
		return ((T (*)(ILFixDynamicMethodWrapper*))(Il2CppBase() + 0x1744C74))(this);
	}
	template <typename T = Il2CppString*> T __Gen_Wrap_107(uintptr_t P0, uintptr_t P1, uintptr_t P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x1744D60))(this, P0, P1, P2);
	}
	template <typename T = Il2CppString*> T __Gen_Wrap_108(uintptr_t P0, uintptr_t P1, uintptr_t P2, bool P3) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, uintptr_t, bool))(Il2CppBase() + 0x1744E8C))(this, P0, P1, P2, P3);
	}
	template <typename T = Il2CppString*> T __Gen_Wrap_109(uintptr_t P0, uintptr_t P1, bool P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, bool))(Il2CppBase() + 0x1744FCC))(this, P0, P1, P2);
	}
	template <typename T = Il2CppString*> T __Gen_Wrap_110(uintptr_t P0, uintptr_t P1, uintptr_t P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x17391A8))(this, P0, P1, P2);
	}
	template <typename T = bool> T __Gen_Wrap_111(uintptr_t P0, uintptr_t P1, uintptr_t P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x17450F8))(this, P0, P1, P2);
	}
	template <typename T = bool> T __Gen_Wrap_112(uintptr_t P0, uintptr_t P1, uintptr_t P2, bool P3) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, uintptr_t, bool))(Il2CppBase() + 0x17451F4))(this, P0, P1, P2, P3);
	}
	template <typename T = bool> T __Gen_Wrap_113(uintptr_t P0, uintptr_t P1, bool P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, bool))(Il2CppBase() + 0x174530C))(this, P0, P1, P2);
	}
	template <typename T = int32_t> T __Gen_Wrap_114() {
		return ((T (*)(ILFixDynamicMethodWrapper*))(Il2CppBase() + 0x1745408))(this);
	}
	template <typename T = bool> T __Gen_Wrap_115(uintptr_t P0, uintptr_t P1, uintptr_t P2, uintptr_t P3, bool P4) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, uintptr_t, uintptr_t, bool))(Il2CppBase() + 0x17454C8))(this, P0, P1, P2, P3, P4);
	}
	template <typename T = bool> T __Gen_Wrap_116(uintptr_t P0, uintptr_t P1, uintptr_t P2, bool P3) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, uintptr_t, bool))(Il2CppBase() + 0x17455F4))(this, P0, P1, P2, P3);
	}
	template <typename T = Il2CppList<Il2CppArray<uintptr_t>*>*> T __Gen_Wrap_117(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x174570C))(this, P0);
	}
	template <typename T = void> T __Gen_Wrap_118(uintptr_t P0, uintptr_t* P1, uintptr_t* P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t*, uintptr_t*))(Il2CppBase() + 0x1745808))(this, P0, P1, P2);
	}
	template <typename T = int32_t> T __Gen_Wrap_119(uintptr_t P0, uintptr_t P1, bool P2, bool P3) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, bool, bool))(Il2CppBase() + 0x174596C))(this, P0, P1, P2, P3);
	}
	template <typename T = void> T __Gen_Wrap_120(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x1745A80))(this, P0);
	}
	template <typename T = bool> T __Gen_Wrap_121(uintptr_t P0, int32_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, int32_t))(Il2CppBase() + 0x1745B90))(this, P0, P1);
	}
	template <typename T = Il2CppString*> T __Gen_Wrap_122(uintptr_t P0, int32_t P1, uintptr_t P2, bool P3) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, int32_t, uintptr_t, bool))(Il2CppBase() + 0x173A5A4))(this, P0, P1, P2, P3);
	}
	template <typename T = bool> T __Gen_Wrap_123(uintptr_t P0, uintptr_t P1, uintptr_t* P2, int32_t P3, uintptr_t P4, bool P5) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, uintptr_t*, int32_t, uintptr_t, bool))(Il2CppBase() + 0x1745C78))(this, P0, P1, P2, P3, P4, P5);
	}
	template <typename T = Il2CppString*> T __Gen_Wrap_124(uintptr_t P0, int32_t P1, bool P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, int32_t, bool))(Il2CppBase() + 0x1745E10))(this, P0, P1, P2);
	}
	template <typename T = Il2CppString*> T __Gen_Wrap_125(uintptr_t P0, int32_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, int32_t))(Il2CppBase() + 0x1745F3C))(this, P0, P1);
	}
	template <typename T = void> T __Gen_Wrap_126(uintptr_t P0, bool P1, uintptr_t P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, bool, uintptr_t))(Il2CppBase() + 0x174604C))(this, P0, P1, P2);
	}
	template <typename T = bool> T __Gen_Wrap_127(uintptr_t P0, uintptr_t P1, bool P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, bool))(Il2CppBase() + 0x173B244))(this, P0, P1, P2);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_128(uintptr_t P0, uintptr_t P1, bool P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, bool))(Il2CppBase() + 0x1746134))(this, P0, P1, P2);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_129(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x1746260))(this, P0);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, Il2CppString*>*> T __Gen_Wrap_130(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1739950))(this, P0, P1);
	}
	template <typename T = void> T __Gen_Wrap_131(uintptr_t P0, int32_t P1, uintptr_t P2, uintptr_t P3) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, int32_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x173A844))(this, P0, P1, P2, P3);
	}
	template <typename T = Il2CppString*> T __Gen_Wrap_132(uintptr_t P0, uintptr_t P1, uintptr_t P2, uintptr_t P3) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x1746330))(this, P0, P1, P2, P3);
	}
	template <typename T = Il2CppString*> T __Gen_Wrap_133(uintptr_t P0, uintptr_t P1, uintptr_t P2, bool P3) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, uintptr_t, bool))(Il2CppBase() + 0x1746470))(this, P0, P1, P2, P3);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_134(uintptr_t P0, bool P1, bool P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, bool, bool))(Il2CppBase() + 0x17465B0))(this, P0, P1, P2);
	}
	template <typename T = void> T __Gen_Wrap_135(uintptr_t P0, int32_t P1, uintptr_t P2, bool P3, bool P4) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, int32_t, uintptr_t, bool, bool))(Il2CppBase() + 0x17466DC))(this, P0, P1, P2, P3, P4);
	}
	template <typename T = void> T __Gen_Wrap_136(uintptr_t P0, int32_t P1, bool P2, bool P3, bool P4, bool P5) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, int32_t, bool, bool, bool, bool))(Il2CppBase() + 0x17467F4))(this, P0, P1, P2, P3, P4, P5);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_137(Il2CppString* P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, Il2CppString*))(Il2CppBase() + 0x1746928))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_138(uintptr_t P0, uintptr_t* P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t*))(Il2CppBase() + 0x1746A24))(this, P0, P1);
	}
	template <typename T = bool> T __Gen_Wrap_139(int32_t P0, int32_t P1, int32_t P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, int32_t, int32_t, int32_t))(Il2CppBase() + 0x1746B60))(this, P0, P1, P2);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_140(uintptr_t P0, int32_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, int32_t))(Il2CppBase() + 0x1746C5C))(this, P0, P1);
	}
	template <typename T = void> T __Gen_Wrap_141(uintptr_t P0, uintptr_t P1, bool P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, bool))(Il2CppBase() + 0x1746D40))(this, P0, P1, P2);
	}
	template <typename T = bool> T __Gen_Wrap_142(uintptr_t P0, int32_t P1, uintptr_t* P2, uintptr_t* P3) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, int32_t, uintptr_t*, uintptr_t*))(Il2CppBase() + 0x1746E80))(this, P0, P1, P2, P3);
	}
	template <typename T = bool> T __Gen_Wrap_143(char P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, char))(Il2CppBase() + 0x1746FE0))(this, P0);
	}
	template <typename T = Il2CppString*> T __Gen_Wrap_144(uintptr_t P0, uintptr_t* P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t*))(Il2CppBase() + 0x17470B4))(this, P0, P1);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_145() {
		return ((T (*)(ILFixDynamicMethodWrapper*))(Il2CppBase() + 0x17471F0))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T __Gen_Wrap_146(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x17472DC))(this, P0, P1);
	}
	template <typename T = Il2CppString*> T __Gen_Wrap_147(uintptr_t P0, bool P1, bool P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, bool, bool))(Il2CppBase() + 0x17473EC))(this, P0, P1, P2);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_148() {
		return ((T (*)(ILFixDynamicMethodWrapper*))(Il2CppBase() + 0x1747518))(this);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_149() {
		return ((T (*)(ILFixDynamicMethodWrapper*))(Il2CppBase() + 0x1747604))(this);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_150(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17476F0))(this, P0);
	}
	template <typename T = void> T __Gen_Wrap_151(uintptr_t P0, uintptr_t P1, uintptr_t P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x17477EC))(this, P0, P1, P2);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_152(uintptr_t P0, bool P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, bool))(Il2CppBase() + 0x1747918))(this, P0, P1);
	}
	template <typename T = void> T __Gen_Wrap_153(uintptr_t P0, bool P1, bool P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, bool, bool))(Il2CppBase() + 0x1747A28))(this, P0, P1, P2);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_154(uintptr_t P0, float P1, bool P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, float, bool))(Il2CppBase() + 0x1747B10))(this, P0, P1, P2);
	}
	template <typename T = Il2CppString*> T __Gen_Wrap_155(bool P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, bool))(Il2CppBase() + 0x1747C3C))(this, P0);
	}
	template <typename T = bool> T __Gen_Wrap_156(uintptr_t P0, bool P1, bool P2, bool P3) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, bool, bool, bool))(Il2CppBase() + 0x1747D38))(this, P0, P1, P2, P3);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_157(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x1747E50))(this, P0);
	}
	template <typename T = void> T __Gen_Wrap_158(uintptr_t P0, uintptr_t P1, bool P2, bool P3) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, bool, bool))(Il2CppBase() + 0x1747F4C))(this, P0, P1, P2, P3);
	}
	template <typename T = bool> T __Gen_Wrap_159(uintptr_t P0, uintptr_t P1, uintptr_t* P2, uintptr_t P3, uintptr_t P4, bool P5, bool P6) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, uintptr_t*, uintptr_t, uintptr_t, bool, bool))(Il2CppBase() + 0x1748050))(this, P0, P1, P2, P3, P4, P5, P6);
	}
	template <typename T = bool> T __Gen_Wrap_160(uintptr_t P0, uintptr_t* P1, bool P2, int32_t P3, bool P4, bool P5, uintptr_t P6, uintptr_t P7) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t*, bool, int32_t, bool, bool, uintptr_t, uintptr_t))(Il2CppBase() + 0x1748204))(this, P0, P1, P2, P3, P4, P5, P6, P7);
	}
	template <typename T = Il2CppString*> T __Gen_Wrap_161(uintptr_t P0, bool P1, int32_t P2, bool P3, bool P4, uintptr_t P5, uintptr_t P6) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, bool, int32_t, bool, bool, uintptr_t, uintptr_t))(Il2CppBase() + 0x17483CC))(this, P0, P1, P2, P3, P4, P5, P6);
	}
	template <typename T = void> T __Gen_Wrap_162(uintptr_t P0, int32_t P1, int32_t P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, int32_t, int32_t))(Il2CppBase() + 0x1748558))(this, P0, P1, P2);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T __Gen_Wrap_163(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x1748640))(this, P0);
	}
	template <typename T = bool> T __Gen_Wrap_164(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x174873C))(this, P0);
	}
	template <typename T = void> T __Gen_Wrap_165(uintptr_t P0, uintptr_t P1, bool P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, bool))(Il2CppBase() + 0x1748810))(this, P0, P1, P2);
	}
	template <typename T = void> T __Gen_Wrap_166(uintptr_t P0, uintptr_t P1, int32_t P2, bool P3) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, int32_t, bool))(Il2CppBase() + 0x17488F8))(this, P0, P1, P2, P3);
	}
	template <typename T = void> T __Gen_Wrap_167(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17489FC))(this, P0);
	}
	template <typename T = bool> T __Gen_Wrap_168(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x1748ABC))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_169(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1748B90))(this, P0, P1);
	}
	template <typename T = void> T __Gen_Wrap_170(uintptr_t P0, uintptr_t P1, uintptr_t P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x1748C74))(this, P0, P1, P2);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_171() {
		return ((T (*)(ILFixDynamicMethodWrapper*))(Il2CppBase() + 0x1748D5C))(this);
	}
	template <typename T = float> T __Gen_Wrap_172(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x1735434))(this, P0);
	}
	template <typename T = void> T __Gen_Wrap_173(uintptr_t P0, float P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, float))(Il2CppBase() + 0x17355D0))(this, P0, P1);
	}
	template <typename T = int32_t> T __Gen_Wrap_174(uintptr_t P0, uintptr_t P1, int32_t P2, bool P3) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, int32_t, bool))(Il2CppBase() + 0x1748E48))(this, P0, P1, P2, P3);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_175() {
		return ((T (*)(ILFixDynamicMethodWrapper*))(Il2CppBase() + 0x1748F5C))(this);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_176(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1749048))(this, P0, P1);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_177() {
		return ((T (*)(ILFixDynamicMethodWrapper*))(Il2CppBase() + 0x1749158))(this);
	}
	template <typename T = void> T __Gen_Wrap_178(uintptr_t P0, uintptr_t P1, uintptr_t P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x1749244))(this, P0, P1, P2);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_179(uintptr_t P0, bool P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, bool))(Il2CppBase() + 0x17493A0))(this, P0, P1);
	}
	template <typename T = int32_t> T __Gen_Wrap_180(uintptr_t P0, int32_t P1, int32_t P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, int32_t, int32_t))(Il2CppBase() + 0x17494B0))(this, P0, P1, P2);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_181(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17495A8))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_182(uintptr_t P0, uintptr_t P1, Il2CppVector3 P2, Il2CppQuaternion P3, bool P4) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, Il2CppVector3, Il2CppQuaternion, bool))(Il2CppBase() + 0x17496A4))(this, P0, P1, P2, P3, P4);
	}
	template <typename T = void> T __Gen_Wrap_183(uintptr_t P0, uintptr_t P1, float P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, float))(Il2CppBase() + 0x173E5D4))(this, P0, P1, P2);
	}
	template <typename T = void> T __Gen_Wrap_184(uintptr_t P0, Il2CppVector3 P1, uintptr_t P2, float P3, float P4) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, Il2CppVector3, uintptr_t, float, float))(Il2CppBase() + 0x1749868))(this, P0, P1, P2, P3, P4);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_185() {
		return ((T (*)(ILFixDynamicMethodWrapper*))(Il2CppBase() + 0x17499D8))(this);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_186(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1749AC4))(this, P0, P1);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_187() {
		return ((T (*)(ILFixDynamicMethodWrapper*))(Il2CppBase() + 0x1749BD4))(this);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_188(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x1749CC0))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_189(bool P0, uintptr_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, bool, uintptr_t))(Il2CppBase() + 0x1749DBC))(this, P0, P1);
	}
	template <typename T = void> T __Gen_Wrap_190(uintptr_t P0, int32_t P1, uintptr_t P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, int32_t, uintptr_t))(Il2CppBase() + 0x1749ECC))(this, P0, P1, P2);
	}
	template <typename T = void> T __Gen_Wrap_191(uintptr_t P0, uintptr_t P1, int32_t P2, uintptr_t P3) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, int32_t, uintptr_t))(Il2CppBase() + 0x174A014))(this, P0, P1, P2, P3);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_192() {
		return ((T (*)(ILFixDynamicMethodWrapper*))(Il2CppBase() + 0x174A178))(this);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_193() {
		return ((T (*)(ILFixDynamicMethodWrapper*))(Il2CppBase() + 0x174A264))(this);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_194(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x174A350))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_195(uintptr_t P0, Il2CppVector2 P1, Il2CppQuaternion P2, float P3, bool P4) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, Il2CppVector2, Il2CppQuaternion, float, bool))(Il2CppBase() + 0x174A44C))(this, P0, P1, P2, P3, P4);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_196(uintptr_t P0, uintptr_t P1, uintptr_t P2, uintptr_t P3, bool P4) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, uintptr_t, uintptr_t, bool))(Il2CppBase() + 0x174A600))(this, P0, P1, P2, P3, P4);
	}
	template <typename T = Il2CppVector3> T __Gen_Wrap_197(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x174A75C))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_198(uintptr_t P0, uintptr_t P1, uintptr_t P2, uintptr_t P3, float P4, bool P5) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, uintptr_t, uintptr_t, float, bool))(Il2CppBase() + 0x174A858))(this, P0, P1, P2, P3, P4, P5);
	}
	template <typename T = void> T __Gen_Wrap_199(uintptr_t P0, float P1, Il2CppVector2 P2, int32_t P3, float P4, float P5, Il2CppVector3 P6, float P7, bool P8) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, float, Il2CppVector2, int32_t, float, float, Il2CppVector3, float, bool))(Il2CppBase() + 0x174A9D0))(this, P0, P1, P2, P3, P4, P5, P6, P7, P8);
	}
	template <typename T = void*> T __Gen_Wrap_200(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x174ABC0))(this, P0);
	}
	template <typename T = void> T __Gen_Wrap_201(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x174ACBC))(this, P0, P1);
	}
	template <typename T = void> T __Gen_Wrap_202(float P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, float))(Il2CppBase() + 0x174ADF0))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_203(float P0, uintptr_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, float, uintptr_t))(Il2CppBase() + 0x174AEB8))(this, P0, P1);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_204(uintptr_t P0, uintptr_t P1, uintptr_t P2, float P3) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, uintptr_t, float))(Il2CppBase() + 0x174AFD0))(this, P0, P1, P2, P3);
	}
	template <typename T = void> T __Gen_Wrap_205(uintptr_t P0, uintptr_t P1, uintptr_t P2, float P3, float P4, uintptr_t P5) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, uintptr_t, float, float, uintptr_t))(Il2CppBase() + 0x174B17C))(this, P0, P1, P2, P3, P4, P5);
	}
	template <typename T = void> T __Gen_Wrap_206(uintptr_t P0, uintptr_t P1, float P2, uintptr_t P3) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, float, uintptr_t))(Il2CppBase() + 0x174B310))(this, P0, P1, P2, P3);
	}
	template <typename T = void> T __Gen_Wrap_207(uintptr_t P0, uintptr_t P1, uintptr_t P2, float P3, float P4, int32_t P5, uintptr_t P6) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, uintptr_t, float, float, int32_t, uintptr_t))(Il2CppBase() + 0x174B474))(this, P0, P1, P2, P3, P4, P5, P6);
	}
	template <typename T = void> T __Gen_Wrap_208(uintptr_t P0, uintptr_t P1, uintptr_t P2, float P3, float P4, int32_t P5) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, uintptr_t, float, float, int32_t))(Il2CppBase() + 0x174B5BC))(this, P0, P1, P2, P3, P4, P5);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_209() {
		return ((T (*)(ILFixDynamicMethodWrapper*))(Il2CppBase() + 0x174B6F0))(this);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_210(uintptr_t P0, int32_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, int32_t))(Il2CppBase() + 0x174B7DC))(this, P0, P1);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_211(uintptr_t P0, int32_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, int32_t))(Il2CppBase() + 0x174B8EC))(this, P0, P1);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_212(uintptr_t P0, uint32_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uint32_t))(Il2CppBase() + 0x174B9FC))(this, P0, P1);
	}
	template <typename T = float> T __Gen_Wrap_213(uintptr_t P0, float P1, float P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, float, float))(Il2CppBase() + 0x174BB0C))(this, P0, P1, P2);
	}
	template <typename T = bool> T __Gen_Wrap_214(uintptr_t P0, uintptr_t P1, uintptr_t P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x174BC0C))(this, P0, P1, P2);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_215(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x174BD08))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_216(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x174BE6C))(this, P0, P1);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_217(uintptr_t P0, uintptr_t P1, uintptr_t P2, float P3, Il2CppVector2 P4, float P5, int32_t P6, uintptr_t P7) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, uintptr_t, float, Il2CppVector2, float, int32_t, uintptr_t))(Il2CppBase() + 0x174BFE4))(this, P0, P1, P2, P3, P4, P5, P6, P7);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_218(uintptr_t P0, float P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, float))(Il2CppBase() + 0x174C210))(this, P0, P1);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_219(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x174C390))(this, P0, P1);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_220(uintptr_t P0, uintptr_t P1, int32_t P2, int32_t P3, int32_t P4, int32_t P5) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, int32_t, int32_t, int32_t, int32_t))(Il2CppBase() + 0x174C508))(this, P0, P1, P2, P3, P4, P5);
	}
	template <typename T = void> T __Gen_Wrap_221(uintptr_t P0, uintptr_t P1, uintptr_t P2, bool P3, uintptr_t P4) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, uintptr_t, bool, uintptr_t))(Il2CppBase() + 0x174C6E0))(this, P0, P1, P2, P3, P4);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_222(uintptr_t P0, uintptr_t P1, bool P2, uintptr_t P3) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, bool, uintptr_t))(Il2CppBase() + 0x174C86C))(this, P0, P1, P2, P3);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_223(uintptr_t P0, int32_t P1, int32_t P2, int32_t P3, bool P4) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, int32_t, int32_t, int32_t, bool))(Il2CppBase() + 0x174C9F4))(this, P0, P1, P2, P3, P4);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_224() {
		return ((T (*)(ILFixDynamicMethodWrapper*))(Il2CppBase() + 0x174CB50))(this);
	}
	template <typename T = float> T __Gen_Wrap_225(float P0, float P1, float P2, uintptr_t P3) {
		return ((T (*)(ILFixDynamicMethodWrapper*, float, float, float, uintptr_t))(Il2CppBase() + 0x174CC3C))(this, P0, P1, P2, P3);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_226(uintptr_t P0, uintptr_t P1, float P2, float P3, float P4, bool P5) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, float, float, float, bool))(Il2CppBase() + 0x174CD58))(this, P0, P1, P2, P3, P4, P5);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_227(uintptr_t P0, uintptr_t P1, float P2, float P3, float P4, Il2CppVector2 P5) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, float, float, float, Il2CppVector2))(Il2CppBase() + 0x174CED0))(this, P0, P1, P2, P3, P4, P5);
	}
	template <typename T = void> T __Gen_Wrap_228(uintptr_t P0, Il2CppVector2 P1, uintptr_t P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, Il2CppVector2, uintptr_t))(Il2CppBase() + 0x174D064))(this, P0, P1, P2);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_229(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x174D194))(this, P0);
	}
	template <typename T = Il2CppList<uintptr_t>*> T __Gen_Wrap_230(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x174D290))(this, P0);
	}
	template <typename T = void> T __Gen_Wrap_231(uintptr_t P0, int32_t P1, bool P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, int32_t, bool))(Il2CppBase() + 0x174D38C))(this, P0, P1, P2);
	}
	template <typename T = void> T __Gen_Wrap_232(uintptr_t P0, Il2CppVector3 P1, float P2, int32_t P3) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, Il2CppVector3, float, int32_t))(Il2CppBase() + 0x174D474))(this, P0, P1, P2, P3);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_233(uintptr_t P0, float P1, float P2, uintptr_t P3) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, float, float, uintptr_t))(Il2CppBase() + 0x174D5C8))(this, P0, P1, P2, P3);
	}
	template <typename T = void> T __Gen_Wrap_234(uintptr_t P0, float P1, float P2, uintptr_t P3) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, float, float, uintptr_t))(Il2CppBase() + 0x174D708))(this, P0, P1, P2, P3);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T __Gen_Wrap_235(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x174D80C))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_236(uintptr_t P0, Il2CppVector2 P1, float P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, Il2CppVector2, float))(Il2CppBase() + 0x174D908))(this, P0, P1, P2);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_237(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x174DA58))(this, P0, P1);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_238(uintptr_t P0, bool P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, bool))(Il2CppBase() + 0x174DB68))(this, P0, P1);
	}
	template <typename T = void> T __Gen_Wrap_239(uintptr_t P0, uintptr_t P1, Il2CppVector3 P2, bool P3) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, Il2CppVector3, bool))(Il2CppBase() + 0x174DC78))(this, P0, P1, P2, P3);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_240(int32_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, int32_t))(Il2CppBase() + 0x174DDD4))(this, P0);
	}
	template <typename T = void> T __Gen_Wrap_241(uintptr_t P0, uint32_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uint32_t))(Il2CppBase() + 0x174DED0))(this, P0, P1);
	}
	template <typename T = bool> T __Gen_Wrap_242(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x174DFA4))(this, P0, P1);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_243(uintptr_t P0, uintptr_t P1, Il2CppVector3 P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, Il2CppVector3))(Il2CppBase() + 0x174E08C))(this, P0, P1, P2);
	}
	template <typename T = void> T __Gen_Wrap_244(uintptr_t P0, int32_t P1, bool P2, bool P3, bool P4) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, int32_t, bool, bool, bool))(Il2CppBase() + 0x174E1E4))(this, P0, P1, P2, P3, P4);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_245(float P0, uintptr_t P1, uintptr_t P2, bool P3, bool P4, uintptr_t P5) {
		return ((T (*)(ILFixDynamicMethodWrapper*, float, uintptr_t, uintptr_t, bool, bool, uintptr_t))(Il2CppBase() + 0x174E2FC))(this, P0, P1, P2, P3, P4, P5);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_246(float P0, bool P1, bool P2, uintptr_t P3) {
		return ((T (*)(ILFixDynamicMethodWrapper*, float, bool, bool, uintptr_t))(Il2CppBase() + 0x174E474))(this, P0, P1, P2, P3);
	}
	template <typename T = void> T __Gen_Wrap_247(uintptr_t P0, int32_t P1, float P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, int32_t, float))(Il2CppBase() + 0x174E5BC))(this, P0, P1, P2);
	}
	template <typename T = void> T __Gen_Wrap_248(uintptr_t P0, Il2CppVector3 P1, int32_t P2, float P3, uintptr_t P4) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, Il2CppVector3, int32_t, float, uintptr_t))(Il2CppBase() + 0x174E6AC))(this, P0, P1, P2, P3, P4);
	}
	template <typename T = void> T __Gen_Wrap_249(uintptr_t P0, Il2CppVector3 P1, int32_t P2, float P3, uintptr_t P4, bool P5) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, Il2CppVector3, int32_t, float, uintptr_t, bool))(Il2CppBase() + 0x174E81C))(this, P0, P1, P2, P3, P4, P5);
	}
	template <typename T = bool> T __Gen_Wrap_250(int32_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, int32_t))(Il2CppBase() + 0x174E9A0))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_251() {
		return ((T (*)(ILFixDynamicMethodWrapper*))(Il2CppBase() + 0x174EA74))(this);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_252(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x174EB60))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_253(uintptr_t P0, uintptr_t P1, uintptr_t P2, int32_t P3) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x174EC30))(this, P0, P1, P2, P3);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_254(uintptr_t P0, uintptr_t P1, int32_t P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x174ED70))(this, P0, P1, P2);
	}
	template <typename T = void> T __Gen_Wrap_255(uintptr_t P0, uintptr_t P1, bool P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, bool))(Il2CppBase() + 0x174EE9C))(this, P0, P1, P2);
	}
	template <typename T = void> T __Gen_Wrap_256(uintptr_t P0, uintptr_t P1, uintptr_t P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x174EF84))(this, P0, P1, P2);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_257() {
		return ((T (*)(ILFixDynamicMethodWrapper*))(Il2CppBase() + 0x174F06C))(this);
	}
	template <typename T = void> T __Gen_Wrap_258(uintptr_t P0, int32_t P1, bool P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, int32_t, bool))(Il2CppBase() + 0x174F158))(this, P0, P1, P2);
	}
	template <typename T = void> T __Gen_Wrap_259(uintptr_t P0, uintptr_t P1, int32_t P2, bool P3) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, int32_t, bool))(Il2CppBase() + 0x174F240))(this, P0, P1, P2, P3);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_260(int32_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, int32_t))(Il2CppBase() + 0x174F344))(this, P0);
	}
	template <typename T = Il2CppList<uintptr_t>*> T __Gen_Wrap_261(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x174F440))(this, P0, P1);
	}
	template <typename T = bool> T __Gen_Wrap_262(uintptr_t P0, int32_t P1, int32_t P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, int32_t, int32_t))(Il2CppBase() + 0x174F550))(this, P0, P1, P2);
	}
	template <typename T = bool> T __Gen_Wrap_263(uintptr_t P0, int32_t P1, bool P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, int32_t, bool))(Il2CppBase() + 0x173AC94))(this, P0, P1, P2);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_264(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x174F64C))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_265(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x174F748))(this, P0);
	}
	template <typename T = void> T __Gen_Wrap_266(int32_t P0, uintptr_t P1, uintptr_t P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, int32_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x174F844))(this, P0, P1, P2);
	}
	template <typename T = bool> T __Gen_Wrap_267(uintptr_t P0, int32_t P1, int32_t P2, uintptr_t P3) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, int32_t, int32_t, uintptr_t))(Il2CppBase() + 0x174F92C))(this, P0, P1, P2, P3);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_268(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x174FA44))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_269() {
		return ((T (*)(ILFixDynamicMethodWrapper*))(Il2CppBase() + 0x174FB40))(this);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_270(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x174FC2C))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_271(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x174FD28))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_272() {
		return ((T (*)(ILFixDynamicMethodWrapper*))(Il2CppBase() + 0x174FDF8))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T __Gen_Wrap_273(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x174FEE4))(this, P0);
	}
	template <typename T = Il2CppList<int32_t>*> T __Gen_Wrap_274(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x174FFE0))(this, P0);
	}
	template <typename T = bool> T __Gen_Wrap_275(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17500DC))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_276(uintptr_t P0, int32_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, int32_t))(Il2CppBase() + 0x17501B0))(this, P0, P1);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_277() {
		return ((T (*)(ILFixDynamicMethodWrapper*))(Il2CppBase() + 0x17502C0))(this);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_278(uintptr_t P0, int32_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, int32_t))(Il2CppBase() + 0x17503AC))(this, P0, P1);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_279(uintptr_t P0, uintptr_t P1, uintptr_t P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x17504BC))(this, P0, P1, P2);
	}
	template <typename T = Il2CppString*> T __Gen_Wrap_280(uintptr_t P0, int32_t P1, bool P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, int32_t, bool))(Il2CppBase() + 0x17505E8))(this, P0, P1, P2);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, uintptr_t>*> T __Gen_Wrap_281() {
		return ((T (*)(ILFixDynamicMethodWrapper*))(Il2CppBase() + 0x1750714))(this);
	}
	template <typename T = Il2CppString*> T __Gen_Wrap_282(int32_t P0, bool P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, int32_t, bool))(Il2CppBase() + 0x1750800))(this, P0, P1);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_283(uintptr_t P0, uintptr_t P1, int64_t P2, uintptr_t P3, uintptr_t P4, bool P5) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, int64_t, uintptr_t, uintptr_t, bool))(Il2CppBase() + 0x1750910))(this, P0, P1, P2, P3, P4, P5);
	}
	template <typename T = void*> T __Gen_Wrap_284(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x1750A80))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_285(uintptr_t P0, uintptr_t P1, uintptr_t P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x1750B7C))(this, P0, P1, P2);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_286(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1750CA8))(this, P0, P1);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_287(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x1750DB8))(this, P0);
	}
	template <typename T = void> T __Gen_Wrap_288(uintptr_t P0, uintptr_t P1, uintptr_t P2, Il2CppVector3 P3, uintptr_t P4) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, uintptr_t, Il2CppVector3, uintptr_t))(Il2CppBase() + 0x1750EB4))(this, P0, P1, P2, P3, P4);
	}
	template <typename T = void> T __Gen_Wrap_289(uintptr_t P0, uintptr_t P1, Il2CppVector3 P2, uintptr_t P3) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, Il2CppVector3, uintptr_t))(Il2CppBase() + 0x1751024))(this, P0, P1, P2, P3);
	}
	template <typename T = void> T __Gen_Wrap_290(uintptr_t P0, uintptr_t P1, uintptr_t P2, float P3, bool P4) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, uintptr_t, float, bool))(Il2CppBase() + 0x1751180))(this, P0, P1, P2, P3, P4);
	}
	template <typename T = void> T __Gen_Wrap_291(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x17512A0))(this, P0, P1);
	}
	template <typename T = void> T __Gen_Wrap_292(uintptr_t P0, uintptr_t P1, bool P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, bool))(Il2CppBase() + 0x17513B8))(this, P0, P1, P2);
	}
	template <typename T = void> T __Gen_Wrap_293(uintptr_t P0, uintptr_t P1, int32_t P2, float P3) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, int32_t, float))(Il2CppBase() + 0x17514EC))(this, P0, P1, P2, P3);
	}
	template <typename T = void> T __Gen_Wrap_294(uintptr_t P0, uintptr_t P1, int32_t P2, float P3, uintptr_t P4) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, int32_t, float, uintptr_t))(Il2CppBase() + 0x17515F0))(this, P0, P1, P2, P3, P4);
	}
	template <typename T = void> T __Gen_Wrap_295(uintptr_t P0, Il2CppVector2 P1, float P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, Il2CppVector2, float))(Il2CppBase() + 0x1751710))(this, P0, P1, P2);
	}
	template <typename T = int32_t> T __Gen_Wrap_296(int32_t P0, void* P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, int32_t, void*))(Il2CppBase() + 0x1751848))(this, P0, P1);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_297() {
		return ((T (*)(ILFixDynamicMethodWrapper*))(Il2CppBase() + 0x175192C))(this);
	}
	template <typename T = void> T __Gen_Wrap_298(uintptr_t P0, int32_t P1, float P2, Il2CppVector2 P3) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, int32_t, float, Il2CppVector2))(Il2CppBase() + 0x1751A18))(this, P0, P1, P2, P3);
	}
	template <typename T = void> T __Gen_Wrap_299(uintptr_t P0, Il2CppVector2 P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, Il2CppVector2))(Il2CppBase() + 0x1751B64))(this, P0, P1);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_300(uintptr_t P0, float P1, int32_t P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, float, int32_t))(Il2CppBase() + 0x1751C80))(this, P0, P1, P2);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_301(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x1751DAC))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_302(uintptr_t P0, uintptr_t P1, bool P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, bool))(Il2CppBase() + 0x1751EA8))(this, P0, P1, P2);
	}
	template <typename T = void> T __Gen_Wrap_303(uintptr_t P0, float P1, float P2, bool P3) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, float, float, bool))(Il2CppBase() + 0x1751FD4))(this, P0, P1, P2, P3);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_304(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17520D8))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_305() {
		return ((T (*)(ILFixDynamicMethodWrapper*))(Il2CppBase() + 0x17521D4))(this);
	}
	template <typename T = Il2CppList<int32_t>*> T __Gen_Wrap_306(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x17522C0))(this, P0, P1);
	}
	template <typename T = Il2CppDictionary<int32_t, Il2CppList<uintptr_t>*>*> T __Gen_Wrap_307(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17523D0))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_308(uintptr_t P0, int32_t P1, uintptr_t P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, int32_t, uintptr_t))(Il2CppBase() + 0x17524CC))(this, P0, P1, P2);
	}
	template <typename T = Il2CppList<uintptr_t>*> T __Gen_Wrap_309(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x17525C4))(this, P0, P1);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T __Gen_Wrap_310() {
		return ((T (*)(ILFixDynamicMethodWrapper*))(Il2CppBase() + 0x17526D4))(this);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_311(uintptr_t P0, int32_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, int32_t))(Il2CppBase() + 0x17527C0))(this, P0, P1);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_312(uintptr_t P0, int32_t P1, bool P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, int32_t, bool))(Il2CppBase() + 0x17528D0))(this, P0, P1, P2);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, int32_t>*> T __Gen_Wrap_313(uintptr_t P0, int32_t P1, uintptr_t P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, int32_t, uintptr_t))(Il2CppBase() + 0x17529FC))(this, P0, P1, P2);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_314(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x1752B28))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_315() {
		return ((T (*)(ILFixDynamicMethodWrapper*))(Il2CppBase() + 0x1752C24))(this);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_316(uintptr_t P0, uintptr_t P1, bool P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, bool))(Il2CppBase() + 0x1752D10))(this, P0, P1, P2);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_317() {
		return ((T (*)(ILFixDynamicMethodWrapper*))(Il2CppBase() + 0x1752E3C))(this);
	}
	template <typename T = bool> T __Gen_Wrap_318(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x1752F28))(this, P0);
	}
	template <typename T = void> T __Gen_Wrap_319(Il2CppString* P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, Il2CppString*))(Il2CppBase() + 0x1752FFC))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_320() {
		return ((T (*)(ILFixDynamicMethodWrapper*))(Il2CppBase() + 0x17530BC))(this);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_321() {
		return ((T (*)(ILFixDynamicMethodWrapper*))(Il2CppBase() + 0x17531A8))(this);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_322(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x1753294))(this, P0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T __Gen_Wrap_323(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x1753390))(this, P0);
	}
	template <typename T = bool> T __Gen_Wrap_324(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x175348C))(this, P0, P1);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_325(uintptr_t P0, uintptr_t P1, uintptr_t P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x17535E0))(this, P0, P1, P2);
	}
	template <typename T = Il2CppVector2> T __Gen_Wrap_326(uintptr_t P0, uintptr_t P1, uintptr_t P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x1753724))(this, P0, P1, P2);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_327(uintptr_t P0, uintptr_t P1, bool P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, bool))(Il2CppBase() + 0x1753850))(this, P0, P1, P2);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_328(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x175397C))(this, P0);
	}
	template <typename T = void> T __Gen_Wrap_329(uintptr_t P0, float P1, uintptr_t P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, float, uintptr_t))(Il2CppBase() + 0x1753A78))(this, P0, P1, P2);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_330(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x1753B68))(this, P0);
	}
	template <typename T = void> T __Gen_Wrap_331(uintptr_t P0, float P1, float P2, int32_t P3, uintptr_t P4) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, float, float, int32_t, uintptr_t))(Il2CppBase() + 0x1753C64))(this, P0, P1, P2, P3, P4);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_332(uintptr_t P0, float P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, float))(Il2CppBase() + 0x1753D7C))(this, P0, P1);
	}
	template <typename T = void> T __Gen_Wrap_333(uintptr_t P0, uintptr_t P1, float P2, bool P3) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, float, bool))(Il2CppBase() + 0x1753E94))(this, P0, P1, P2, P3);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_334(int32_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, int32_t))(Il2CppBase() + 0x1753F98))(this, P0);
	}
	template <typename T = Il2CppList<uintptr_t>*> T __Gen_Wrap_335(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1754094))(this, P0, P1);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_336() {
		return ((T (*)(ILFixDynamicMethodWrapper*))(Il2CppBase() + 0x17541A4))(this);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_337() {
		return ((T (*)(ILFixDynamicMethodWrapper*))(Il2CppBase() + 0x1754290))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T __Gen_Wrap_338(uintptr_t P0, uintptr_t P1, Il2CppVector3 P2, float P3) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, Il2CppVector3, float))(Il2CppBase() + 0x175437C))(this, P0, P1, P2, P3);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_339(uintptr_t P0, int32_t P1, uintptr_t P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, int32_t, uintptr_t))(Il2CppBase() + 0x17544E8))(this, P0, P1, P2);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_340(uintptr_t P0, int32_t P1, bool P2, uintptr_t P3, uintptr_t P4, uintptr_t P5, uintptr_t P6, Il2CppVector3 P7) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, int32_t, bool, uintptr_t, uintptr_t, uintptr_t, uintptr_t, Il2CppVector3))(Il2CppBase() + 0x1754614))(this, P0, P1, P2, P3, P4, P5, P6, P7);
	}
	template <typename T = bool> T __Gen_Wrap_341(uintptr_t P0, Il2CppVector2 P1, float P2, float P3, bool P4) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, Il2CppVector2, float, float, bool))(Il2CppBase() + 0x17547E8))(this, P0, P1, P2, P3, P4);
	}
	template <typename T = bool> T __Gen_Wrap_342(uintptr_t P0, int32_t P1, uintptr_t P2, int32_t P3) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, int32_t, uintptr_t, int32_t))(Il2CppBase() + 0x175495C))(this, P0, P1, P2, P3);
	}
	template <typename T = void> T __Gen_Wrap_343(uintptr_t P0, int32_t P1, bool P2, Il2CppVector3 P3, uintptr_t P4, uintptr_t P5, uintptr_t P6, int32_t P7) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, int32_t, bool, Il2CppVector3, uintptr_t, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x1754A74))(this, P0, P1, P2, P3, P4, P5, P6, P7);
	}
	template <typename T = bool> T __Gen_Wrap_344(uintptr_t P0, uintptr_t P1, Il2CppVector3 P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, Il2CppVector3))(Il2CppBase() + 0x1754C30))(this, P0, P1, P2);
	}
	template <typename T = int32_t> T __Gen_Wrap_345(int32_t P0, int32_t P1, uintptr_t P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, int32_t, int32_t, uintptr_t))(Il2CppBase() + 0x1754D84))(this, P0, P1, P2);
	}
	template <typename T = Il2CppVector3> T __Gen_Wrap_346(Il2CppVector2 P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, Il2CppVector2))(Il2CppBase() + 0x1754E7C))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_347(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x1754F9C))(this, P0);
	}
	template <typename T = void> T __Gen_Wrap_348(uintptr_t P0, uintptr_t P1, uintptr_t P2, float P3, float P4) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, uintptr_t, float, float))(Il2CppBase() + 0x1755098))(this, P0, P1, P2, P3, P4);
	}
	template <typename T = void> T __Gen_Wrap_349(uintptr_t P0, uintptr_t P1, bool P2, int32_t P3) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, bool, int32_t))(Il2CppBase() + 0x17551B0))(this, P0, P1, P2, P3);
	}
	template <typename T = Il2CppVector3> T __Gen_Wrap_350(uintptr_t P0, Il2CppVector3 P1, Il2CppVector3 P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, Il2CppVector3, Il2CppVector3))(Il2CppBase() + 0x17552B4))(this, P0, P1, P2);
	}
	template <typename T = void> T __Gen_Wrap_351(Il2CppVector3 P0, Il2CppVector3 P1, float P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, Il2CppVector3, Il2CppVector3, float))(Il2CppBase() + 0x1755430))(this, P0, P1, P2);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_352(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x173DFCC))(this, P0);
	}
	template <typename T = float> T __Gen_Wrap_353(float P0, float P1, float P2, float P3) {
		return ((T (*)(ILFixDynamicMethodWrapper*, float, float, float, float))(Il2CppBase() + 0x175559C))(this, P0, P1, P2, P3);
	}
	template <typename T = Il2CppList<int32_t>*> T __Gen_Wrap_354(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x17556B8))(this, P0, P1);
	}
	template <typename T = bool> T __Gen_Wrap_355(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17557C8))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_356(uintptr_t P0, uintptr_t P1, int32_t P2, int32_t P3, uintptr_t P4, uintptr_t P5, uintptr_t P6, bool P7) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, int32_t, int32_t, uintptr_t, uintptr_t, uintptr_t, bool))(Il2CppBase() + 0x175589C))(this, P0, P1, P2, P3, P4, P5, P6, P7);
	}
	template <typename T = int32_t> T __Gen_Wrap_357(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1755A3C))(this, P0, P1);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T __Gen_Wrap_358(uintptr_t P0, bool P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, bool))(Il2CppBase() + 0x1755B20))(this, P0, P1);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_359(uintptr_t P0, uintptr_t P1, int32_t P2, int32_t P3, int32_t P4, uintptr_t P5, bool P6, uintptr_t P7) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, int32_t, int32_t, int32_t, uintptr_t, bool, uintptr_t))(Il2CppBase() + 0x1755C30))(this, P0, P1, P2, P3, P4, P5, P6, P7);
	}
	template <typename T = void> T __Gen_Wrap_360(uintptr_t P0, uintptr_t P1, uintptr_t P2, int32_t P3) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x1755DD0))(this, P0, P1, P2, P3);
	}
	template <typename T = void> T __Gen_Wrap_361(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x1755ED4))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_362(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1755F94))(this, P0, P1);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T __Gen_Wrap_363(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17560A4))(this, P0);
	}
	template <typename T = bool> T __Gen_Wrap_364(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17561A0))(this, P0);
	}
	template <typename T = float> T __Gen_Wrap_365(uintptr_t P0, uintptr_t P1, int32_t P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x1756274))(this, P0, P1, P2);
	}
	template <typename T = int32_t> T __Gen_Wrap_366(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x175636C))(this, P0, P1);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_367(uintptr_t P0, uintptr_t P1, float P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, float))(Il2CppBase() + 0x1756450))(this, P0, P1, P2);
	}
	template <typename T = Il2CppString*> T __Gen_Wrap_368(int32_t P0, bool P1, bool P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, int32_t, bool, bool))(Il2CppBase() + 0x175657C))(this, P0, P1, P2);
	}
	template <typename T = Il2CppString*> T __Gen_Wrap_369(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17566A8))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_370(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17567E0))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_371(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17568DC))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_372(uintptr_t P0, int32_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, int32_t))(Il2CppBase() + 0x17569D8))(this, P0, P1);
	}
	template <typename T = int32_t> T __Gen_Wrap_373(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1756AE8))(this, P0, P1);
	}
	template <typename T = bool> T __Gen_Wrap_374(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x1756BCC))(this, P0);
	}
	template <typename T = Il2CppList<uintptr_t>*> T __Gen_Wrap_375(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1756CA0))(this, P0, P1);
	}
	template <typename T = Il2CppString*> T __Gen_Wrap_376(uintptr_t P0, bool P1, uintptr_t P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, bool, uintptr_t))(Il2CppBase() + 0x1756DB0))(this, P0, P1, P2);
	}
	template <typename T = void> T __Gen_Wrap_377(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x1756EDC))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_378() {
		return ((T (*)(ILFixDynamicMethodWrapper*))(Il2CppBase() + 0x1756F9C))(this);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_379(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x1757088))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_380(uintptr_t P0, uintptr_t P1, bool P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, bool))(Il2CppBase() + 0x1757184))(this, P0, P1, P2);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_381(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x17572B0))(this, P0, P1);
	}
	template <typename T = int32_t> T __Gen_Wrap_382(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x17573C0))(this, P0, P1);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_383(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x17574A4))(this, P0, P1);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_384(uintptr_t P0, uintptr_t P1, uintptr_t P2, uintptr_t* P3) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, uintptr_t, uintptr_t*))(Il2CppBase() + 0x17575B4))(this, P0, P1, P2, P3);
	}
	template <typename T = void> T __Gen_Wrap_385(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1757718))(this, P0, P1);
	}
	template <typename T = void> T __Gen_Wrap_386(uintptr_t P0, uintptr_t P1, float P2, bool P3) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, float, bool))(Il2CppBase() + 0x17577EC))(this, P0, P1, P2, P3);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_387(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17578F0))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_388(uintptr_t P0, uintptr_t P1, uintptr_t P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x17579EC))(this, P0, P1, P2);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_389(uintptr_t P0, int32_t P1, int32_t P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, int32_t, int32_t))(Il2CppBase() + 0x1757B18))(this, P0, P1, P2);
	}
	template <typename T = bool> T __Gen_Wrap_390(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x1757C44))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_391(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1757D18))(this, P0, P1);
	}
	template <typename T = bool> T __Gen_Wrap_392(uintptr_t P0, int32_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, int32_t))(Il2CppBase() + 0x1757DFC))(this, P0, P1);
	}
	template <typename T = void> T __Gen_Wrap_393(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1757EE4))(this, P0, P1);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_394(uintptr_t P0, uintptr_t P1, int32_t P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x1757FB8))(this, P0, P1, P2);
	}
	template <typename T = void> T __Gen_Wrap_395(uintptr_t P0, uintptr_t P1, int32_t P2, int32_t P3) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, int32_t, int32_t))(Il2CppBase() + 0x17580E4))(this, P0, P1, P2, P3);
	}
	template <typename T = Il2CppString*> T __Gen_Wrap_396(uintptr_t P0, bool P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, bool))(Il2CppBase() + 0x17581E8))(this, P0, P1);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_397() {
		return ((T (*)(ILFixDynamicMethodWrapper*))(Il2CppBase() + 0x17582F8))(this);
	}
	template <typename T = Il2CppDictionary<uintptr_t, uintptr_t>*> T __Gen_Wrap_398(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17583E4))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_399(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x17584E0))(this, P0, P1);
	}
	template <typename T = void> T __Gen_Wrap_400(uintptr_t P0, uintptr_t P1, uintptr_t P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x17585F0))(this, P0, P1, P2);
	}
	template <typename T = int32_t> T __Gen_Wrap_401(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x17586D8))(this, P0, P1);
	}
	template <typename T = int32_t> T __Gen_Wrap_402(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x17587BC))(this, P0, P1);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_403(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x17588A0))(this, P0, P1);
	}
	template <typename T = bool> T __Gen_Wrap_404(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x17589B0))(this, P0, P1);
	}
	template <typename T = bool> T __Gen_Wrap_405(uintptr_t P0, uintptr_t P1, int32_t P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x1758A98))(this, P0, P1, P2);
	}
	template <typename T = bool> T __Gen_Wrap_406(uintptr_t P0, uintptr_t P1, int32_t P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x1758B94))(this, P0, P1, P2);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_407() {
		return ((T (*)(ILFixDynamicMethodWrapper*))(Il2CppBase() + 0x1758C90))(this);
	}
	template <typename T = float> T __Gen_Wrap_408(float P0, float P1, float P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, float, float, float))(Il2CppBase() + 0x1758D7C))(this, P0, P1, P2);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_409(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x1758E84))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_410(uintptr_t P0, Il2CppVector3 P1, Il2CppVector3 P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, Il2CppVector3, Il2CppVector3))(Il2CppBase() + 0x1758F80))(this, P0, P1, P2);
	}
	template <typename T = void> T __Gen_Wrap_411(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17590FC))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_412() {
		return ((T (*)(ILFixDynamicMethodWrapper*))(Il2CppBase() + 0x1759208))(this);
	}
	template <typename T = void> T __Gen_Wrap_413(Il2CppArray<uintptr_t>* P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x17592F4))(this, P0);
	}
	template <typename T = void> T __Gen_Wrap_414(uintptr_t P0, uintptr_t P1, double P2, uintptr_t P3) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, double, uintptr_t))(Il2CppBase() + 0x17593B4))(this, P0, P1, P2, P3);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_415(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17594B8))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_416(uintptr_t P0, uintptr_t P1, uintptr_t P2, uintptr_t P3, uintptr_t P4) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x17595B4))(this, P0, P1, P2, P3, P4);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T __Gen_Wrap_417(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x1759710))(this, P0);
	}
	template <typename T = void> T __Gen_Wrap_418(uintptr_t P0, bool P1, bool P2, uintptr_t P3) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, bool, bool, uintptr_t))(Il2CppBase() + 0x175980C))(this, P0, P1, P2, P3);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_419(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1759910))(this, P0, P1);
	}
	template <typename T = int32_t> T __Gen_Wrap_420(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1759A20))(this, P0, P1);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_421(uintptr_t P0, uintptr_t P1, float P2, float P3) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, float, float))(Il2CppBase() + 0x1759B04))(this, P0, P1, P2, P3);
	}
	template <typename T = void> T __Gen_Wrap_422(uintptr_t P0, uintptr_t P1, uintptr_t P2, uintptr_t P3) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x1759C44))(this, P0, P1, P2, P3);
	}
	template <typename T = void> T __Gen_Wrap_423(uintptr_t P0, uintptr_t P1, Il2CppVector3 P2, uintptr_t P3, float P4) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, Il2CppVector3, uintptr_t, float))(Il2CppBase() + 0x1759D48))(this, P0, P1, P2, P3, P4);
	}
	template <typename T = void> T __Gen_Wrap_424(uintptr_t P0, uintptr_t P1, Il2CppVector3 P2, float P3) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, Il2CppVector3, float))(Il2CppBase() + 0x1759EEC))(this, P0, P1, P2, P3);
	}
	template <typename T = bool> T __Gen_Wrap_425(float P0, float P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, float, float))(Il2CppBase() + 0x175A040))(this, P0, P1);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_426(float P0, uintptr_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, float, uintptr_t))(Il2CppBase() + 0x175A130))(this, P0, P1);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_427(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x175A248))(this, P0, P1);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_428(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x175A358))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_429(float P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, float))(Il2CppBase() + 0x175A454))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_430(uintptr_t P0, uintptr_t P1, uintptr_t P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x175A558))(this, P0, P1, P2);
	}
	template <typename T = int32_t> T __Gen_Wrap_431(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x175A684))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_432(uintptr_t P0, uintptr_t P1, uintptr_t P2, uintptr_t P3, uintptr_t P4, uintptr_t P5, uintptr_t P6) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x175A754))(this, P0, P1, P2, P3, P4, P5, P6);
	}
	template <typename T = void> T __Gen_Wrap_433(uintptr_t P0, uintptr_t P1, uintptr_t P2, bool P3) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, uintptr_t, bool))(Il2CppBase() + 0x175A8E0))(this, P0, P1, P2, P3);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_434(uintptr_t P0, bool P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, bool))(Il2CppBase() + 0x175A9E4))(this, P0, P1);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_435(uintptr_t P0, uintptr_t P1, int32_t P2, uintptr_t P3, int32_t P4, bool P5) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, int32_t, uintptr_t, int32_t, bool))(Il2CppBase() + 0x175AAF4))(this, P0, P1, P2, P3, P4, P5);
	}
	template <typename T = bool> T __Gen_Wrap_436(uintptr_t P0, float P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, float))(Il2CppBase() + 0x175AC64))(this, P0, P1);
	}
	template <typename T = void> T __Gen_Wrap_437(int32_t P0, Il2CppString* P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, int32_t, Il2CppString*))(Il2CppBase() + 0x175AD54))(this, P0, P1);
	}
	template <typename T = float> T __Gen_Wrap_438() {
		return ((T (*)(ILFixDynamicMethodWrapper*))(Il2CppBase() + 0x175AE28))(this);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_439() {
		return ((T (*)(ILFixDynamicMethodWrapper*))(Il2CppBase() + 0x175AEE8))(this);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_440(uintptr_t P0, bool P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, bool))(Il2CppBase() + 0x175AFD4))(this, P0, P1);
	}
	template <typename T = Il2CppList<uintptr_t>*> T __Gen_Wrap_441(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x175B0E4))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_442(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x175B1E0))(this, P0, P1);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_443(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x175B2F0))(this, P0, P1);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_444(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x175B400))(this, P0, P1);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_445() {
		return ((T (*)(ILFixDynamicMethodWrapper*))(Il2CppBase() + 0x175B510))(this);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, uintptr_t>*> T __Gen_Wrap_446() {
		return ((T (*)(ILFixDynamicMethodWrapper*))(Il2CppBase() + 0x175B5FC))(this);
	}
	template <typename T = void> T __Gen_Wrap_447(uintptr_t P0, uintptr_t P1, uintptr_t P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x175B6E8))(this, P0, P1, P2);
	}
	template <typename T = void> T __Gen_Wrap_448(uintptr_t P0, uintptr_t P1, Il2CppVector3 P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, Il2CppVector3))(Il2CppBase() + 0x175B7D0))(this, P0, P1, P2);
	}
	template <typename T = void> T __Gen_Wrap_449(int32_t P0, void* P1, void* P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, int32_t, void*, void*))(Il2CppBase() + 0x175B910))(this, P0, P1, P2);
	}
	template <typename T = void> T __Gen_Wrap_450(uintptr_t P0, Il2CppVector2 P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, Il2CppVector2))(Il2CppBase() + 0x175B9F8))(this, P0, P1);
	}
	template <typename T = void> T __Gen_Wrap_451(uintptr_t P0, Il2CppVector3 P1, uintptr_t P2, int32_t P3) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, Il2CppVector3, uintptr_t, int32_t))(Il2CppBase() + 0x175BB14))(this, P0, P1, P2, P3);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_452(uintptr_t P0, uintptr_t P1, uintptr_t P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x175BC70))(this, P0, P1, P2);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_453(uintptr_t P0, bool P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, bool))(Il2CppBase() + 0x175BD9C))(this, P0, P1);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_454(uintptr_t P0, uintptr_t P1, int32_t P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x175BEAC))(this, P0, P1, P2);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_455(uintptr_t P0, int32_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, int32_t))(Il2CppBase() + 0x175BFD8))(this, P0, P1);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_456(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x175C150))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_457(uintptr_t P0, uintptr_t P1, float P2, int32_t P3) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, float, int32_t))(Il2CppBase() + 0x175C254))(this, P0, P1, P2, P3);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_458(uintptr_t P0, uintptr_t P1, uintptr_t P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x175C3A4))(this, P0, P1, P2);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_459(uintptr_t P0, uintptr_t P1, uintptr_t P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x175C4F8))(this, P0, P1, P2);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_460(uintptr_t P0, Il2CppVector2 P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, Il2CppVector2))(Il2CppBase() + 0x175C650))(this, P0, P1);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_461(uintptr_t P0, int32_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, int32_t))(Il2CppBase() + 0x175C7EC))(this, P0, P1);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_462(float P0, Il2CppVector3 P1, uintptr_t P2, uintptr_t P3, uintptr_t P4, int32_t P5, uintptr_t P6, uintptr_t P7) {
		return ((T (*)(ILFixDynamicMethodWrapper*, float, Il2CppVector3, uintptr_t, uintptr_t, uintptr_t, int32_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x175C964))(this, P0, P1, P2, P3, P4, P5, P6, P7);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_463(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x175CB80))(this, P0);
	}
	template <typename T = float> T __Gen_Wrap_464(float P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, float))(Il2CppBase() + 0x175CC84))(this, P0);
	}
	template <typename T = float> T __Gen_Wrap_465(float P0, float P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, float, float))(Il2CppBase() + 0x175CD5C))(this, P0, P1);
	}
	template <typename T = void> T __Gen_Wrap_466(uintptr_t P0, float P1, Il2CppVector3 P2, bool P3, uintptr_t P4) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, float, Il2CppVector3, bool, uintptr_t))(Il2CppBase() + 0x175CE48))(this, P0, P1, P2, P3, P4);
	}
	template <typename T = void> T __Gen_Wrap_467(uintptr_t P0, float P1, Il2CppVector3 P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, float, Il2CppVector3))(Il2CppBase() + 0x175CFB8))(this, P0, P1, P2);
	}
	template <typename T = void> T __Gen_Wrap_468(uintptr_t P0, float P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, float))(Il2CppBase() + 0x175D0F8))(this, P0, P1);
	}
	template <typename T = void> T __Gen_Wrap_469(uintptr_t P0, float P1, uintptr_t P2, uintptr_t P3) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, float, uintptr_t, uintptr_t))(Il2CppBase() + 0x175D1D4))(this, P0, P1, P2, P3);
	}
	template <typename T = bool> T __Gen_Wrap_470(float P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, float))(Il2CppBase() + 0x175D2D8))(this, P0);
	}
	template <typename T = void> T __Gen_Wrap_471(uintptr_t P0, float P1, uintptr_t P2, Il2CppVector3 P3, uintptr_t P4) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, float, uintptr_t, Il2CppVector3, uintptr_t))(Il2CppBase() + 0x175D3B4))(this, P0, P1, P2, P3, P4);
	}
	template <typename T = void> T __Gen_Wrap_472(uintptr_t P0, int32_t P1, float P2, float P3, float P4, int32_t P5, uintptr_t P6, uintptr_t P7) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, int32_t, float, float, float, int32_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x175D524))(this, P0, P1, P2, P3, P4, P5, P6, P7);
	}
	template <typename T = int32_t> T __Gen_Wrap_473(int32_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, int32_t))(Il2CppBase() + 0x175D688))(this, P0);
	}
	template <typename T = Il2CppVector2> T __Gen_Wrap_474(Il2CppVector3 P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, Il2CppVector3))(Il2CppBase() + 0x175D758))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_475(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x175D888))(this, P0);
	}
	template <typename T = void> T __Gen_Wrap_476(uintptr_t P0, float P1, uintptr_t P2, uintptr_t P3) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, float, uintptr_t, uintptr_t))(Il2CppBase() + 0x175D958))(this, P0, P1, P2, P3);
	}
	template <typename T = void> T __Gen_Wrap_477(uintptr_t P0, uintptr_t P1, bool P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, bool))(Il2CppBase() + 0x175DA5C))(this, P0, P1, P2);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_478(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x175DB44))(this, P0);
	}
	template <typename T = int32_t> T __Gen_Wrap_479(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x175DC40))(this, P0, P1);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_480(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x175DD24))(this, P0, P1);
	}
	template <typename T = void> T __Gen_Wrap_481(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x175DE34))(this, P0, P1);
	}
	template <typename T = void> T __Gen_Wrap_482(uintptr_t P0, uintptr_t P1, int32_t P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x175DF08))(this, P0, P1, P2);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_483(uintptr_t P0, uintptr_t* P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t*))(Il2CppBase() + 0x175DFF0))(this, P0, P1);
	}
	template <typename T = int32_t> T __Gen_Wrap_484(uintptr_t P0, float P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, float))(Il2CppBase() + 0x175E128))(this, P0, P1);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_485(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x175E214))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_486(uintptr_t P0, float P1, Il2CppVector3 P2, float P3, int32_t P4, float P5, float P6) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, float, Il2CppVector3, float, int32_t, float, float))(Il2CppBase() + 0x175E310))(this, P0, P1, P2, P3, P4, P5, P6);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_487(uintptr_t P0, Il2CppVector3 P1, float P2, int32_t P3) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, Il2CppVector3, float, int32_t))(Il2CppBase() + 0x175E4C8))(this, P0, P1, P2, P3);
	}
	template <typename T = void> T __Gen_Wrap_488(uintptr_t P0, int32_t P1, float P2, uintptr_t P3, uintptr_t P4) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, int32_t, float, uintptr_t, uintptr_t))(Il2CppBase() + 0x175E634))(this, P0, P1, P2, P3, P4);
	}
	template <typename T = void> T __Gen_Wrap_489(uintptr_t P0, int32_t P1, float P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, int32_t, float))(Il2CppBase() + 0x175E754))(this, P0, P1, P2);
	}
	template <typename T = void> T __Gen_Wrap_490(uintptr_t P0, uintptr_t P1, uintptr_t P2, float P3) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, uintptr_t, float))(Il2CppBase() + 0x175E844))(this, P0, P1, P2, P3);
	}
	template <typename T = Il2CppList<uintptr_t>*> T __Gen_Wrap_491(uintptr_t P0, Il2CppVector3 P1, uintptr_t P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, Il2CppVector3, uintptr_t))(Il2CppBase() + 0x175E948))(this, P0, P1, P2);
	}
	template <typename T = void> T __Gen_Wrap_492(uintptr_t P0, uintptr_t P1, uintptr_t P2, uintptr_t P3, uintptr_t P4) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x175EAA0))(this, P0, P1, P2, P3, P4);
	}
	template <typename T = Il2CppList<uintptr_t>*> T __Gen_Wrap_493(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x175EC04))(this, P0);
	}
	template <typename T = float> T __Gen_Wrap_494(uintptr_t P0, int32_t P1, float P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, int32_t, float))(Il2CppBase() + 0x175ED00))(this, P0, P1, P2);
	}
	template <typename T = float> T __Gen_Wrap_495(uintptr_t P0, int32_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, int32_t))(Il2CppBase() + 0x175EE00))(this, P0, P1);
	}
	template <typename T = int32_t> T __Gen_Wrap_496(uintptr_t P0, uintptr_t P1, int32_t P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x175EEE4))(this, P0, P1, P2);
	}
	template <typename T = void> T __Gen_Wrap_497(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x175EFDC))(this, P0, P1);
	}
	template <typename T = void> T __Gen_Wrap_498(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x175F0F4))(this, P0);
	}
	template <typename T = void> T __Gen_Wrap_499(uintptr_t P0, uintptr_t P1, float P2, uintptr_t P3, int32_t P4) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, float, uintptr_t, int32_t))(Il2CppBase() + 0x175F1B4))(this, P0, P1, P2, P3, P4);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_500(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x175F2D4))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_501(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x175F3D0))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_502(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x175F4CC))(this, P0, P1);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_503(uintptr_t P0, int32_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, int32_t))(Il2CppBase() + 0x175F610))(this, P0, P1);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_504(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x175F730))(this, P0, P1);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_505(uintptr_t P0, int32_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, int32_t))(Il2CppBase() + 0x175F870))(this, P0, P1);
	}
	template <typename T = void> T __Gen_Wrap_506(uintptr_t P0, Il2CppVector2 P1, float P2, float P3) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, Il2CppVector2, float, float))(Il2CppBase() + 0x175F990))(this, P0, P1, P2, P3);
	}
	template <typename T = void> T __Gen_Wrap_507(uintptr_t P0, uintptr_t P1, uintptr_t P2, uintptr_t P3) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x175FADC))(this, P0, P1, P2, P3);
	}
	template <typename T = bool> T __Gen_Wrap_508(uintptr_t P0, uintptr_t P1, uintptr_t P2, uintptr_t P3) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x175FC8C))(this, P0, P1, P2, P3);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_509(int32_t P0, int32_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, int32_t, int32_t))(Il2CppBase() + 0x175FDF0))(this, P0, P1);
	}
	template <typename T = void*> T __Gen_Wrap_510(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x175FF00))(this, P0);
	}
	template <typename T = void> T __Gen_Wrap_511(uintptr_t P0, uintptr_t P1, bool P2, bool P3) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, bool, bool))(Il2CppBase() + 0x175FFFC))(this, P0, P1, P2, P3);
	}
	template <typename T = void> T __Gen_Wrap_512(uintptr_t P0, uintptr_t P1, int32_t P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x1760100))(this, P0, P1, P2);
	}
	template <typename T = void> T __Gen_Wrap_513(uintptr_t P0, uintptr_t P1, uintptr_t P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x17601E8))(this, P0, P1, P2);
	}
	template <typename T = void> T __Gen_Wrap_514(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x17602D0))(this, P0, P1);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_515(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17603A4))(this, P0);
	}
	template <typename T = int32_t> T __Gen_Wrap_516(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1760474))(this, P0, P1);
	}
	template <typename T = bool> T __Gen_Wrap_517(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x1760558))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_518() {
		return ((T (*)(ILFixDynamicMethodWrapper*))(Il2CppBase() + 0x176062C))(this);
	}
	template <typename T = Il2CppString*> T __Gen_Wrap_519(uintptr_t P0, uintptr_t P1, int32_t P2, uintptr_t P3, uintptr_t P4, uintptr_t P5) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, int32_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x1760718))(this, P0, P1, P2, P3, P4, P5);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_520(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1760888))(this, P0, P1);
	}
	template <typename T = bool> T __Gen_Wrap_521(uintptr_t P0, uintptr_t P1, uintptr_t* P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, uintptr_t*))(Il2CppBase() + 0x17609B8))(this, P0, P1, P2);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_522(uintptr_t P0, uintptr_t P1, bool P2, int32_t P3) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, bool, int32_t))(Il2CppBase() + 0x1760AD8))(this, P0, P1, P2, P3);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T __Gen_Wrap_523(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1760C38))(this, P0, P1);
	}
	template <typename T = bool> T __Gen_Wrap_524(uintptr_t P0, Il2CppVector3 P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, Il2CppVector3))(Il2CppBase() + 0x1760D48))(this, P0, P1);
	}
	template <typename T = float> T __Gen_Wrap_525(uintptr_t P0, Il2CppVector3 P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, Il2CppVector3))(Il2CppBase() + 0x1760E88))(this, P0, P1);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_526(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1760FC4))(this, P0, P1);
	}
	template <typename T = void> T __Gen_Wrap_527(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x17610D4))(this, P0, P1);
	}
	template <typename T = void> T __Gen_Wrap_528(uintptr_t P0, float P1, Il2CppVector2 P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, float, Il2CppVector2))(Il2CppBase() + 0x1761200))(this, P0, P1, P2);
	}
	template <typename T = void> T __Gen_Wrap_529(uintptr_t P0, float P1, float P2, Il2CppVector2 P3) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, float, float, Il2CppVector2))(Il2CppBase() + 0x1761338))(this, P0, P1, P2, P3);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_530(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x1761484))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_531(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x1761580))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_532() {
		return ((T (*)(ILFixDynamicMethodWrapper*))(Il2CppBase() + 0x176167C))(this);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_533(int32_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, int32_t))(Il2CppBase() + 0x1761768))(this, P0);
	}
	template <typename T = void> T __Gen_Wrap_534(uintptr_t P0, uintptr_t P1, int64_t P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, int64_t))(Il2CppBase() + 0x1761864))(this, P0, P1, P2);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_535(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x176194C))(this, P0);
	}
	template <typename T = void> T __Gen_Wrap_536(uintptr_t P0, uintptr_t P1, uintptr_t P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x1761A48))(this, P0, P1, P2);
	}
	template <typename T = void> T __Gen_Wrap_537(uintptr_t P0, uintptr_t P1, int32_t P2, int32_t P3, uintptr_t P4) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, int32_t, int32_t, uintptr_t))(Il2CppBase() + 0x1761B30))(this, P0, P1, P2, P3, P4);
	}
	template <typename T = Il2CppList<uintptr_t>*> T __Gen_Wrap_538(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x1761C8C))(this, P0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T __Gen_Wrap_539(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x1761D88))(this, P0);
	}
	template <typename T = void> T __Gen_Wrap_540(uintptr_t P0, int32_t P1, int32_t P2, Il2CppVector3 P3, int32_t P4) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, int32_t, int32_t, Il2CppVector3, int32_t))(Il2CppBase() + 0x1761E84))(this, P0, P1, P2, P3, P4);
	}
	template <typename T = int32_t> T __Gen_Wrap_541(int32_t P0, int32_t P1, int32_t P2, int32_t P3, uintptr_t P4) {
		return ((T (*)(ILFixDynamicMethodWrapper*, int32_t, int32_t, int32_t, int32_t, uintptr_t))(Il2CppBase() + 0x1761FF4))(this, P0, P1, P2, P3, P4);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_542(int32_t P0, int32_t P1, bool P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, int32_t, int32_t, bool))(Il2CppBase() + 0x176211C))(this, P0, P1, P2);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_543(int32_t P0, int32_t P1, uintptr_t P2, int32_t P3, float P4) {
		return ((T (*)(ILFixDynamicMethodWrapper*, int32_t, int32_t, uintptr_t, int32_t, float))(Il2CppBase() + 0x1762248))(this, P0, P1, P2, P3, P4);
	}
	template <typename T = void> T __Gen_Wrap_544(uintptr_t P0, Il2CppVector3 P1, bool P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, Il2CppVector3, bool))(Il2CppBase() + 0x17623A4))(this, P0, P1, P2);
	}
	template <typename T = void> T __Gen_Wrap_545(uintptr_t P0, int32_t P1, int32_t P2, Il2CppVector3 P3) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, int32_t, int32_t, Il2CppVector3))(Il2CppBase() + 0x17624E4))(this, P0, P1, P2, P3);
	}
	template <typename T = void> T __Gen_Wrap_546(uintptr_t P0, Il2CppVector2 P1, Il2CppVector2 P2, uintptr_t P3) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, Il2CppVector2, Il2CppVector2, uintptr_t))(Il2CppBase() + 0x1762640))(this, P0, P1, P2, P3);
	}
	template <typename T = void> T __Gen_Wrap_547(uintptr_t P0, uintptr_t P1, uintptr_t P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x17627A0))(this, P0, P1, P2);
	}
	template <typename T = void> T __Gen_Wrap_548(uintptr_t P0, Il2CppVector3 P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, Il2CppVector3))(Il2CppBase() + 0x1762888))(this, P0, P1);
	}
	template <typename T = void> T __Gen_Wrap_549(int32_t P0, int32_t P1, Il2CppVector3 P2, uintptr_t P3) {
		return ((T (*)(ILFixDynamicMethodWrapper*, int32_t, int32_t, Il2CppVector3, uintptr_t))(Il2CppBase() + 0x17629B4))(this, P0, P1, P2, P3);
	}
	template <typename T = void> T __Gen_Wrap_550(int32_t P0, int32_t P1, uintptr_t P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, int32_t, int32_t, uintptr_t))(Il2CppBase() + 0x1762B10))(this, P0, P1, P2);
	}
	template <typename T = void> T __Gen_Wrap_551(Il2CppVector2 P0, Il2CppVector2 P1, uintptr_t P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, Il2CppVector2, Il2CppVector2, uintptr_t))(Il2CppBase() + 0x1762BF8))(this, P0, P1, P2);
	}
	template <typename T = void> T __Gen_Wrap_552(int32_t P0, int32_t P1, int32_t P2, uintptr_t P3, uintptr_t P4) {
		return ((T (*)(ILFixDynamicMethodWrapper*, int32_t, int32_t, int32_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x1762D44))(this, P0, P1, P2, P3, P4);
	}
	template <typename T = bool> T __Gen_Wrap_553(uintptr_t P0, int32_t P1, int32_t P2, int32_t P3, int32_t P4) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, int32_t, int32_t, int32_t, int32_t))(Il2CppBase() + 0x1762E5C))(this, P0, P1, P2, P3, P4);
	}
	template <typename T = bool> T __Gen_Wrap_554(uintptr_t P0, int32_t P1, uintptr_t P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, int32_t, uintptr_t))(Il2CppBase() + 0x1762F88))(this, P0, P1, P2);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_555(uintptr_t P0, int32_t P1, uintptr_t P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, int32_t, uintptr_t))(Il2CppBase() + 0x1763084))(this, P0, P1, P2);
	}
	template <typename T = void> T __Gen_Wrap_556(uintptr_t P0, int32_t P1, Il2CppVector3 P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, int32_t, Il2CppVector3))(Il2CppBase() + 0x17631B0))(this, P0, P1, P2);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_557(Il2CppVector3 P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, Il2CppVector3))(Il2CppBase() + 0x17632F0))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_558(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x1763420))(this, P0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T __Gen_Wrap_559(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x176351C))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_560(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x1763618))(this, P0);
	}
	template <typename T = void> T __Gen_Wrap_561(uintptr_t P0, int32_t P1, Il2CppVector2 P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, int32_t, Il2CppVector2))(Il2CppBase() + 0x1763714))(this, P0, P1, P2);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, Il2CppString*>*> T __Gen_Wrap_562(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x1763844))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_563(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x1763940))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_564(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x1763A3C))(this, P0);
	}
	template <typename T = void> T __Gen_Wrap_565(uintptr_t P0, float P1, bool P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, float, bool))(Il2CppBase() + 0x1763B38))(this, P0, P1, P2);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_566() {
		return ((T (*)(ILFixDynamicMethodWrapper*))(Il2CppBase() + 0x1763C28))(this);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_567() {
		return ((T (*)(ILFixDynamicMethodWrapper*))(Il2CppBase() + 0x1763D14))(this);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_568(uintptr_t P0, int32_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, int32_t))(Il2CppBase() + 0x1763E00))(this, P0, P1);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_569(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x1763F10))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_570(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x176400C))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_571() {
		return ((T (*)(ILFixDynamicMethodWrapper*))(Il2CppBase() + 0x1764108))(this);
	}
	template <typename T = void> T __Gen_Wrap_572(uintptr_t P0, Il2CppVector2 P1, float P2, int32_t P3) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, Il2CppVector2, float, int32_t))(Il2CppBase() + 0x17641F4))(this, P0, P1, P2, P3);
	}
	template <typename T = void> T __Gen_Wrap_573(uintptr_t P0, Il2CppVector3 P1, uintptr_t P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, Il2CppVector3, uintptr_t))(Il2CppBase() + 0x1764340))(this, P0, P1, P2);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_574(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x1764480))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_575() {
		return ((T (*)(ILFixDynamicMethodWrapper*))(Il2CppBase() + 0x176457C))(this);
	}
	template <typename T = bool> T __Gen_Wrap_576(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x1764668))(this, P0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T __Gen_Wrap_577(int32_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, int32_t))(Il2CppBase() + 0x1764778))(this, P0);
	}
	template <typename T = Il2CppList<uintptr_t>*> T __Gen_Wrap_578(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x1764874))(this, P0);
	}
	template <typename T = void> T __Gen_Wrap_579(uintptr_t P0, uintptr_t P1, uintptr_t P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x1764970))(this, P0, P1, P2);
	}
	template <typename T = bool> T __Gen_Wrap_580(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x1764AB8))(this, P0);
	}
	template <typename T = float> T __Gen_Wrap_581(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x1764B8C))(this, P0);
	}
	template <typename T = void> T __Gen_Wrap_582(uintptr_t P0, float P1, bool P2, uintptr_t P3) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, float, bool, uintptr_t))(Il2CppBase() + 0x1764C5C))(this, P0, P1, P2, P3);
	}
	template <typename T = void> T __Gen_Wrap_583(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x1764D60))(this, P0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T __Gen_Wrap_584(uintptr_t P0, int32_t P1, int32_t P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, int32_t, int32_t))(Il2CppBase() + 0x1764E80))(this, P0, P1, P2);
	}
	template <typename T = void> T __Gen_Wrap_585(bool P0, Il2CppString* P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, bool, Il2CppString*))(Il2CppBase() + 0x1764FAC))(this, P0, P1);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_586(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x1765080))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_587(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x176517C))(this, P0);
	}
	template <typename T = void> T __Gen_Wrap_588(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1765278))(this, P0, P1);
	}
	template <typename T = bool> T __Gen_Wrap_589(bool P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, bool))(Il2CppBase() + 0x1765388))(this, P0);
	}
	template <typename T = void> T __Gen_Wrap_590(uint32_t P0, uintptr_t P1, int32_t P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uint32_t, uintptr_t, int32_t))(Il2CppBase() + 0x176545C))(this, P0, P1, P2);
	}
	template <typename T = void> T __Gen_Wrap_591(uintptr_t P0, uintptr_t P1, uint32_t P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, uint32_t))(Il2CppBase() + 0x1765544))(this, P0, P1, P2);
	}
	template <typename T = void> T __Gen_Wrap_592(uintptr_t P0, unsigned char P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, unsigned char))(Il2CppBase() + 0x176562C))(this, P0, P1);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_593(uintptr_t P0, unsigned char P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, unsigned char))(Il2CppBase() + 0x1765700))(this, P0, P1);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T __Gen_Wrap_594(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x1765810))(this, P0);
	}
	template <typename T = uint32_t> T __Gen_Wrap_595(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x176590C))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_596(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x17659DC))(this, P0, P1);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T __Gen_Wrap_597() {
		return ((T (*)(ILFixDynamicMethodWrapper*))(Il2CppBase() + 0x1765AEC))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T __Gen_Wrap_598() {
		return ((T (*)(ILFixDynamicMethodWrapper*))(Il2CppBase() + 0x1765BD8))(this);
	}
	template <typename T = void> T __Gen_Wrap_599(uintptr_t P0, uintptr_t P1, uint32_t P2, uintptr_t P3) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, uint32_t, uintptr_t))(Il2CppBase() + 0x1765CC4))(this, P0, P1, P2, P3);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_600(uintptr_t P0, uintptr_t P1, uintptr_t P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x1765DC8))(this, P0, P1, P2);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_601(uintptr_t P0, uintptr_t P1, uintptr_t P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x1765EF4))(this, P0, P1, P2);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_602() {
		return ((T (*)(ILFixDynamicMethodWrapper*))(Il2CppBase() + 0x1766020))(this);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_603(uintptr_t P0, bool P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, bool))(Il2CppBase() + 0x176610C))(this, P0, P1);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_604(Il2CppString* P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, Il2CppString*))(Il2CppBase() + 0x176621C))(this, P0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T __Gen_Wrap_605() {
		return ((T (*)(ILFixDynamicMethodWrapper*))(Il2CppBase() + 0x1766318))(this);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_606(bool P0, bool P1, uintptr_t P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, bool, bool, uintptr_t))(Il2CppBase() + 0x1766404))(this, P0, P1, P2);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_607(bool P0, bool P1, uintptr_t P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, bool, bool, uintptr_t))(Il2CppBase() + 0x1766530))(this, P0, P1, P2);
	}
	template <typename T = void*> T __Gen_Wrap_608(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x176665C))(this, P0, P1);
	}
	template <typename T = void> T __Gen_Wrap_609(uintptr_t P0, bool P1, bool P2, uintptr_t P3) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, bool, bool, uintptr_t))(Il2CppBase() + 0x176676C))(this, P0, P1, P2, P3);
	}
	template <typename T = void> T __Gen_Wrap_610(uintptr_t P0, uintptr_t P1, uintptr_t P2, uintptr_t P3, uintptr_t P4, int32_t P5) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x1766870))(this, P0, P1, P2, P3, P4, P5);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_611(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17669A4))(this, P0);
	}
	template <typename T = void> T __Gen_Wrap_612(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x1766AA0))(this, P0);
	}
	template <typename T = Il2CppVector2> T __Gen_Wrap_613() {
		return ((T (*)(ILFixDynamicMethodWrapper*))(Il2CppBase() + 0x1766B60))(this);
	}
	template <typename T = void> T __Gen_Wrap_614(Il2CppVector2 P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, Il2CppVector2))(Il2CppBase() + 0x1766C4C))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_615(uintptr_t P0, uintptr_t P1, uintptr_t P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x1766D54))(this, P0, P1, P2);
	}
	template <typename T = void> T __Gen_Wrap_616(uintptr_t P0, uintptr_t P1, int32_t P2, int32_t P3, uintptr_t P4) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, int32_t, int32_t, uintptr_t))(Il2CppBase() + 0x1766E80))(this, P0, P1, P2, P3, P4);
	}
	template <typename T = Il2CppString*> T __Gen_Wrap_617(uintptr_t P0, bool P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, bool))(Il2CppBase() + 0x1766F98))(this, P0, P1);
	}
	template <typename T = Il2CppString*> T __Gen_Wrap_618(uintptr_t P0, bool P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, bool))(Il2CppBase() + 0x17670A8))(this, P0, P1);
	}
	template <typename T = void> T __Gen_Wrap_619(uintptr_t P0, int32_t P1, Il2CppVector2 P2, Il2CppVector2 P3, Il2CppVector2 P4, float P5) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, int32_t, Il2CppVector2, Il2CppVector2, Il2CppVector2, float))(Il2CppBase() + 0x17671B8))(this, P0, P1, P2, P3, P4, P5);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_620(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x1767364))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_621(uintptr_t P0, float P1, float P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, float, float))(Il2CppBase() + 0x1767460))(this, P0, P1, P2);
	}
	template <typename T = void> T __Gen_Wrap_622(uintptr_t P0, Il2CppVector3 P1, int32_t P2, int32_t P3, float P4, uintptr_t P5) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, Il2CppVector3, int32_t, int32_t, float, uintptr_t))(Il2CppBase() + 0x176758C))(this, P0, P1, P2, P3, P4, P5);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_623(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x1767710))(this, P0);
	}
	template <typename T = void> T __Gen_Wrap_624(uintptr_t P0, int32_t P1, int32_t P2, bool P3) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, int32_t, int32_t, bool))(Il2CppBase() + 0x176780C))(this, P0, P1, P2, P3);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_625(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x1767910))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_626(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x1767A14))(this, P0);
	}
	template <typename T = void> T __Gen_Wrap_627(bool P0, bool P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, bool, bool))(Il2CppBase() + 0x1767B10))(this, P0, P1);
	}
	template <typename T = void> T __Gen_Wrap_628(uintptr_t P0, bool P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, bool))(Il2CppBase() + 0x1767BE4))(this, P0, P1);
	}
	template <typename T = void> T __Gen_Wrap_629(uintptr_t P0, uintptr_t P1, bool P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, bool))(Il2CppBase() + 0x1767CB8))(this, P0, P1, P2);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_630(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x1767DA0))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_631(uintptr_t P0, int32_t P1, float P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, int32_t, float))(Il2CppBase() + 0x1767E9C))(this, P0, P1, P2);
	}
	template <typename T = void> T __Gen_Wrap_632(uintptr_t P0, uintptr_t P1, int32_t P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x1767FC8))(this, P0, P1, P2);
	}
	template <typename T = Il2CppString*> T __Gen_Wrap_633(uintptr_t P0, int32_t P1, uintptr_t P2, uintptr_t P3) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, int32_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x17680B0))(this, P0, P1, P2, P3);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_634(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x17681F0))(this, P0, P1);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_635(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1768300))(this, P0, P1);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_636(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1768410))(this, P0, P1);
	}
	template <typename T = Il2CppString*> T __Gen_Wrap_637(uintptr_t P0, bool P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, bool))(Il2CppBase() + 0x17684F4))(this, P0, P1);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_638() {
		return ((T (*)(ILFixDynamicMethodWrapper*))(Il2CppBase() + 0x1768604))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T __Gen_Wrap_639(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17686F0))(this, P0);
	}
	template <typename T = void> T __Gen_Wrap_640(float P0, float P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, float, float))(Il2CppBase() + 0x17687EC))(this, P0, P1);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_641(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17688C8))(this, P0);
	}
	template <typename T = float> T __Gen_Wrap_642(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x17689C4))(this, P0, P1);
	}
	template <typename T = Il2CppList<uintptr_t>*> T __Gen_Wrap_643(uintptr_t P0, float P1, bool P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, float, bool))(Il2CppBase() + 0x1768AA8))(this, P0, P1, P2);
	}
	template <typename T = Il2CppList<uintptr_t>*> T __Gen_Wrap_644(uintptr_t P0, float P1, bool P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, float, bool))(Il2CppBase() + 0x1768BD4))(this, P0, P1, P2);
	}
	template <typename T = Il2CppList<uintptr_t>*> T __Gen_Wrap_645(uintptr_t P0, float P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, float))(Il2CppBase() + 0x1768D00))(this, P0, P1);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_646(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x1768E18))(this, P0);
	}
	template <typename T = void> T __Gen_Wrap_647(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1768F14))(this, P0, P1);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_648() {
		return ((T (*)(ILFixDynamicMethodWrapper*))(Il2CppBase() + 0x176902C))(this);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_649(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1769118))(this, P0, P1);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_650(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x1769228))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_651(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x1769324))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_652() {
		return ((T (*)(ILFixDynamicMethodWrapper*))(Il2CppBase() + 0x17693F4))(this);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_653(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x17694E0))(this, P0, P1);
	}
	template <typename T = void> T __Gen_Wrap_654(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17695F0))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_655(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17696B0))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_656(uintptr_t P0, int32_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, int32_t))(Il2CppBase() + 0x17697AC))(this, P0, P1);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_657(uintptr_t P0, int32_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, int32_t))(Il2CppBase() + 0x17698BC))(this, P0, P1);
	}
	template <typename T = void> T __Gen_Wrap_658(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x17699CC))(this, P0, P1);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_659(uintptr_t P0, bool P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, bool))(Il2CppBase() + 0x1769AA0))(this, P0, P1);
	}
	template <typename T = void> T __Gen_Wrap_660(uintptr_t P0, bool P1, uintptr_t P2, int32_t P3) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, bool, uintptr_t, int32_t))(Il2CppBase() + 0x1769C18))(this, P0, P1, P2, P3);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_661(uintptr_t P0, uintptr_t P1, int32_t P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x1769D1C))(this, P0, P1, P2);
	}
	template <typename T = bool> T __Gen_Wrap_662(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1769E48))(this, P0, P1);
	}
	template <typename T = Il2CppList<uintptr_t>*> T __Gen_Wrap_663(uintptr_t P0, int32_t P1, bool P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, int32_t, bool))(Il2CppBase() + 0x1769F30))(this, P0, P1, P2);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_664() {
		return ((T (*)(ILFixDynamicMethodWrapper*))(Il2CppBase() + 0x176A05C))(this);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_665(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x176A148))(this, P0, P1);
	}
	template <typename T = void> T __Gen_Wrap_666(uintptr_t P0, uintptr_t P1, float P2, float P3) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, float, float))(Il2CppBase() + 0x176A258))(this, P0, P1, P2, P3);
	}
	template <typename T = float> T __Gen_Wrap_667(uintptr_t P0, float P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, float))(Il2CppBase() + 0x176A35C))(this, P0, P1);
	}
	template <typename T = void> T __Gen_Wrap_668(uintptr_t P0, float P1, int32_t P2, float P3, int32_t P4) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, float, int32_t, float, int32_t))(Il2CppBase() + 0x176A448))(this, P0, P1, P2, P3, P4);
	}
	template <typename T = Il2CppDictionary<uintptr_t, Il2CppList<uintptr_t>*>*> T __Gen_Wrap_669(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x176A560))(this, P0);
	}
	template <typename T = Il2CppList<uintptr_t>*> T __Gen_Wrap_670(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x176A65C))(this, P0, P1);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_671(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x176A76C))(this, P0);
	}
	template <typename T = Il2CppList<uintptr_t>*> T __Gen_Wrap_672(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x176A868))(this, P0);
	}
	template <typename T = Il2CppList<uintptr_t>*> T __Gen_Wrap_673(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x176A964))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_674(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x176AA60))(this, P0);
	}
	template <typename T = void> T __Gen_Wrap_675(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x176AB30))(this, P0, P1);
	}
	template <typename T = Il2CppList<int32_t>*> T __Gen_Wrap_676() {
		return ((T (*)(ILFixDynamicMethodWrapper*))(Il2CppBase() + 0x176AC04))(this);
	}
	template <typename T = bool> T __Gen_Wrap_677(uintptr_t P0, uintptr_t* P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t*))(Il2CppBase() + 0x176ACF0))(this, P0, P1);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_678() {
		return ((T (*)(ILFixDynamicMethodWrapper*))(Il2CppBase() + 0x176ADFC))(this);
	}
	template <typename T = int32_t> T __Gen_Wrap_679(uintptr_t P0, uintptr_t P1, int32_t P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x176AEE8))(this, P0, P1, P2);
	}
	template <typename T = Il2CppString*> T __Gen_Wrap_680(uintptr_t P0, int32_t P1, int32_t P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, int32_t, int32_t))(Il2CppBase() + 0x176AFE0))(this, P0, P1, P2);
	}
	template <typename T = Il2CppString*> T __Gen_Wrap_681(uintptr_t P0, int32_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, int32_t))(Il2CppBase() + 0x176B10C))(this, P0, P1);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T __Gen_Wrap_682(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x176B21C))(this, P0);
	}
	template <typename T = Il2CppList<uintptr_t>*> T __Gen_Wrap_683(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x176B318))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_684(uintptr_t P0, uintptr_t P1, float P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, float))(Il2CppBase() + 0x176B414))(this, P0, P1, P2);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_685(uintptr_t P0, int32_t P1, uintptr_t P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, int32_t, uintptr_t))(Il2CppBase() + 0x176B540))(this, P0, P1, P2);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_686(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x176B66C))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_687(uintptr_t P0, uintptr_t P1, uintptr_t P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x176B768))(this, P0, P1, P2);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_688(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x176B860))(this, P0, P1);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T __Gen_Wrap_689(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x176B970))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_690(uintptr_t P0, uintptr_t P1, int32_t P2, float P3) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, int32_t, float))(Il2CppBase() + 0x176BA6C))(this, P0, P1, P2, P3);
	}
	template <typename T = bool> T __Gen_Wrap_691(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x176BBB4))(this, P0, P1);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_692(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x176BC9C))(this, P0);
	}
	template <typename T = void> T __Gen_Wrap_693(uintptr_t P0, int32_t P1, int32_t P2, uintptr_t P3) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, int32_t, int32_t, uintptr_t))(Il2CppBase() + 0x176BD98))(this, P0, P1, P2, P3);
	}
	template <typename T = Il2CppVector2> T __Gen_Wrap_694(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x176BE9C))(this, P0, P1);
	}
	template <typename T = void*> T __Gen_Wrap_695(void* P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, void*))(Il2CppBase() + 0x176BFAC))(this, P0);
	}
	template <typename T = bool> T __Gen_Wrap_696(void* P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, void*))(Il2CppBase() + 0x176C0C4))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_697(void* P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, void*))(Il2CppBase() + 0x176C1D8))(this, P0);
	}
	template <typename T = bool> T __Gen_Wrap_698(void* P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, void*))(Il2CppBase() + 0x176C2F0))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_699(void* P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, void*))(Il2CppBase() + 0x176C404))(this, P0);
	}
	template <typename T = int64_t> T __Gen_Wrap_700(int64_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, int64_t))(Il2CppBase() + 0x176C51C))(this, P0);
	}
	template <typename T = void> T __Gen_Wrap_701(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x176C5EC))(this, P0);
	}
	template <typename T = float> T __Gen_Wrap_702(Il2CppVector2 P0, Il2CppVector2 P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, Il2CppVector2, Il2CppVector2))(Il2CppBase() + 0x176C724))(this, P0, P1);
	}
	template <typename T = Il2CppVector2> T __Gen_Wrap_703(Il2CppVector2 P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, Il2CppVector2))(Il2CppBase() + 0x176C86C))(this, P0);
	}
	template <typename T = bool> T __Gen_Wrap_704(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x176C98C))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_705(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x176CA60))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_706(int32_t P0, int32_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, int32_t, int32_t))(Il2CppBase() + 0x176CB5C))(this, P0, P1);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_707(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x176CC6C))(this, P0, P1);
	}
	template <typename T = Il2CppString*> T __Gen_Wrap_708(uintptr_t P0, uintptr_t P1, int32_t P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x176CD7C))(this, P0, P1, P2);
	}
	template <typename T = bool> T __Gen_Wrap_709(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x176CEA8))(this, P0);
	}
	template <typename T = Il2CppString*> T __Gen_Wrap_710(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x176CF7C))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_711(uintptr_t P0, bool P1, bool P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, bool, bool))(Il2CppBase() + 0x176D078))(this, P0, P1, P2);
	}
	template <typename T = bool> T __Gen_Wrap_712(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x176D1A4))(this, P0, P1);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T __Gen_Wrap_713() {
		return ((T (*)(ILFixDynamicMethodWrapper*))(Il2CppBase() + 0x176D28C))(this);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_714(uintptr_t P0, bool P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, bool))(Il2CppBase() + 0x176D378))(this, P0, P1);
	}
	template <typename T = void*> T __Gen_Wrap_715(uintptr_t P0, uintptr_t P1, bool P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, bool))(Il2CppBase() + 0x176D488))(this, P0, P1, P2);
	}
	template <typename T = void*> T __Gen_Wrap_716(uintptr_t P0, uintptr_t P1, uintptr_t P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x176D5B4))(this, P0, P1, P2);
	}
	template <typename T = Il2CppString*> T __Gen_Wrap_717(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x176D6E0))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_718(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x176D7DC))(this, P0);
	}
	template <typename T = void*> T __Gen_Wrap_719(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x176D8D8))(this, P0, P1);
	}
	template <typename T = void> T __Gen_Wrap_720(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x176D9E8))(this, P0);
	}
	template <typename T = void> T __Gen_Wrap_721(uintptr_t P0, uintptr_t P1, uintptr_t P2, uintptr_t P3, uintptr_t P4, uintptr_t P5, float P6) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, float))(Il2CppBase() + 0x176DAA8))(this, P0, P1, P2, P3, P4, P5, P6);
	}
	template <typename T = void> T __Gen_Wrap_722(uintptr_t P0, uintptr_t P1, void* P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, void*))(Il2CppBase() + 0x176DBF8))(this, P0, P1, P2);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_723(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x176DD28))(this, P0, P1);
	}
	template <typename T = void*> T __Gen_Wrap_724(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x176DE38))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_725(uintptr_t P0, uintptr_t P1, uintptr_t P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x176DF34))(this, P0, P1, P2);
	}
	template <typename T = unsigned char> T __Gen_Wrap_726(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x176E060))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_727(uintptr_t P0, uintptr_t P1, uint16_t P2, uintptr_t P3) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, uint16_t, uintptr_t))(Il2CppBase() + 0x176E130))(this, P0, P1, P2, P3);
	}
	template <typename T = void> T __Gen_Wrap_728(uint16_t P0, uintptr_t P1, int32_t P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uint16_t, uintptr_t, int32_t))(Il2CppBase() + 0x176E270))(this, P0, P1, P2);
	}
	template <typename T = void> T __Gen_Wrap_729(uintptr_t P0, uint16_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uint16_t))(Il2CppBase() + 0x176E358))(this, P0, P1);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_730(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x176E42C))(this, P0, P1);
	}
	template <typename T = void> T __Gen_Wrap_731(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x176E53C))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_732() {
		return ((T (*)(ILFixDynamicMethodWrapper*))(Il2CppBase() + 0x176E5FC))(this);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_733(uintptr_t P0, uintptr_t P1, uintptr_t P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x176E6E8))(this, P0, P1, P2);
	}
	template <typename T = Il2CppList<uintptr_t>*> T __Gen_Wrap_734(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x176E814))(this, P0, P1);
	}
	template <typename T = void> T __Gen_Wrap_735(uintptr_t P0, uintptr_t P1, uintptr_t P2, uintptr_t P3, uintptr_t P4) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x176E924))(this, P0, P1, P2, P3, P4);
	}
	template <typename T = void*> T __Gen_Wrap_736(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x176EA3C))(this, P0);
	}
	template <typename T = Il2CppString*> T __Gen_Wrap_737(uintptr_t P0, uintptr_t P1, uintptr_t P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x176EB38))(this, P0, P1, P2);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_738(uintptr_t P0, uintptr_t P1, uintptr_t P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x176ECB8))(this, P0, P1, P2);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_739(uintptr_t P0, uintptr_t P1, uintptr_t P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x176EE38))(this, P0, P1, P2);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_740(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x176EFB8))(this, P0, P1);
	}
	template <typename T = bool> T __Gen_Wrap_741(double P0, uintptr_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, double, uintptr_t))(Il2CppBase() + 0x176F0F8))(this, P0, P1);
	}
	template <typename T = uint16_t> T __Gen_Wrap_742(uintptr_t P0, int32_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, int32_t))(Il2CppBase() + 0x176F1E8))(this, P0, P1);
	}
	template <typename T = uint16_t> T __Gen_Wrap_743(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x176F2CC))(this, P0);
	}
	template <typename T = void> T __Gen_Wrap_744(uintptr_t P0, uintptr_t P1, uint32_t P2, uint32_t P3) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, uint32_t, uint32_t))(Il2CppBase() + 0x176F39C))(this, P0, P1, P2, P3);
	}
	template <typename T = void> T __Gen_Wrap_745(uintptr_t P0, signed char P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, signed char))(Il2CppBase() + 0x176F4A0))(this, P0, P1);
	}
	template <typename T = void> T __Gen_Wrap_746(int16_t P0, uintptr_t P1, int32_t P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, int16_t, uintptr_t, int32_t))(Il2CppBase() + 0x176F574))(this, P0, P1, P2);
	}
	template <typename T = void> T __Gen_Wrap_747(uintptr_t P0, int16_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, int16_t))(Il2CppBase() + 0x176F65C))(this, P0, P1);
	}
	template <typename T = void> T __Gen_Wrap_748(int32_t P0, uintptr_t P1, int32_t P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, int32_t, uintptr_t, int32_t))(Il2CppBase() + 0x176F730))(this, P0, P1, P2);
	}
	template <typename T = void> T __Gen_Wrap_749(int64_t P0, uintptr_t P1, int32_t P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, int64_t, uintptr_t, int32_t))(Il2CppBase() + 0x176F818))(this, P0, P1, P2);
	}
	template <typename T = void> T __Gen_Wrap_750(uint64_t P0, uintptr_t P1, int32_t P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uint64_t, uintptr_t, int32_t))(Il2CppBase() + 0x176F900))(this, P0, P1, P2);
	}
	template <typename T = void> T __Gen_Wrap_751(uintptr_t P0, uint64_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uint64_t))(Il2CppBase() + 0x176F9E8))(this, P0, P1);
	}
	template <typename T = signed char> T __Gen_Wrap_752(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x176FABC))(this, P0);
	}
	template <typename T = int16_t> T __Gen_Wrap_753(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x176FB8C))(this, P0);
	}
	template <typename T = uint64_t> T __Gen_Wrap_754(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x176FC5C))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_755(uintptr_t P0, unsigned char P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, unsigned char))(Il2CppBase() + 0x176FD2C))(this, P0, P1);
	}
	template <typename T = void> T __Gen_Wrap_756(uintptr_t P0, int32_t P1, uint32_t P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, int32_t, uint32_t))(Il2CppBase() + 0x176FE3C))(this, P0, P1, P2);
	}
	template <typename T = uint32_t> T __Gen_Wrap_757(uintptr_t P0, int32_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, int32_t))(Il2CppBase() + 0x176FF24))(this, P0, P1);
	}
	template <typename T = int64_t> T __Gen_Wrap_758() {
		return ((T (*)(ILFixDynamicMethodWrapper*))(Il2CppBase() + 0x1770008))(this);
	}
	template <typename T = uint64_t> T __Gen_Wrap_759() {
		return ((T (*)(ILFixDynamicMethodWrapper*))(Il2CppBase() + 0x17700C8))(this);
	}
	template <typename T = uint32_t> T __Gen_Wrap_760(uint32_t P0, int32_t P1, int32_t P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uint32_t, int32_t, int32_t))(Il2CppBase() + 0x1770188))(this, P0, P1, P2);
	}
	template <typename T = uint64_t> T __Gen_Wrap_761(uint64_t P0, int32_t P1, int32_t P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uint64_t, int32_t, int32_t))(Il2CppBase() + 0x1770280))(this, P0, P1, P2);
	}
	template <typename T = uint32_t> T __Gen_Wrap_762(uint64_t P0, int32_t P1, int32_t P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uint64_t, int32_t, int32_t))(Il2CppBase() + 0x1770378))(this, P0, P1, P2);
	}
	template <typename T = bool> T __Gen_Wrap_763(int32_t P0, int32_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, int32_t, int32_t))(Il2CppBase() + 0x1770470))(this, P0, P1);
	}
	template <typename T = void> T __Gen_Wrap_764(uintptr_t P0, int32_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, int32_t))(Il2CppBase() + 0x1770558))(this, P0, P1);
	}
	template <typename T = void> T __Gen_Wrap_765(char P0, uintptr_t P1, int32_t P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, char, uintptr_t, int32_t))(Il2CppBase() + 0x1770650))(this, P0, P1, P2);
	}
	template <typename T = void> T __Gen_Wrap_766(bool P0, uintptr_t P1, int32_t P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, bool, uintptr_t, int32_t))(Il2CppBase() + 0x1770738))(this, P0, P1, P2);
	}
	template <typename T = int16_t> T __Gen_Wrap_767(uintptr_t P0, int32_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, int32_t))(Il2CppBase() + 0x1770820))(this, P0, P1);
	}
	template <typename T = float> T __Gen_Wrap_768(float P0, float P1, float P2, float P3, float P4, float P5) {
		return ((T (*)(ILFixDynamicMethodWrapper*, float, float, float, float, float, float))(Il2CppBase() + 0x1770904))(this, P0, P1, P2, P3, P4, P5);
	}
	template <typename T = bool> T __Gen_Wrap_769(float P0, float P1, float P2, float P3, float P4, float P5, float P6, float P7, float P8) {
		return ((T (*)(ILFixDynamicMethodWrapper*, float, float, float, float, float, float, float, float, float))(Il2CppBase() + 0x1770A50))(this, P0, P1, P2, P3, P4, P5, P6, P7, P8);
	}
	template <typename T = bool> T __Gen_Wrap_770(float P0, float P1, float P2, float P3, float P4, float P5, float P6, float P7) {
		return ((T (*)(ILFixDynamicMethodWrapper*, float, float, float, float, float, float, float, float))(Il2CppBase() + 0x1770BE4))(this, P0, P1, P2, P3, P4, P5, P6, P7);
	}
	template <typename T = bool> T __Gen_Wrap_771(float P0, float P1, float P2, float P3, float P4, float P5, float P6) {
		return ((T (*)(ILFixDynamicMethodWrapper*, float, float, float, float, float, float, float))(Il2CppBase() + 0x1770D64))(this, P0, P1, P2, P3, P4, P5, P6);
	}
	template <typename T = bool> T __Gen_Wrap_772(float P0, float P1, float P2, float P3, float P4, float P5) {
		return ((T (*)(ILFixDynamicMethodWrapper*, float, float, float, float, float, float))(Il2CppBase() + 0x1770ED0))(this, P0, P1, P2, P3, P4, P5);
	}
	template <typename T = float> T __Gen_Wrap_773(Il2CppVector2 P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, Il2CppVector2))(Il2CppBase() + 0x1771020))(this, P0);
	}
	template <typename T = Il2CppVector2> T __Gen_Wrap_774(float P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, float))(Il2CppBase() + 0x1771138))(this, P0);
	}
	template <typename T = void> T __Gen_Wrap_775(uintptr_t P0, int32_t P1, float P2, uintptr_t P3) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, int32_t, float, uintptr_t))(Il2CppBase() + 0x177123C))(this, P0, P1, P2, P3);
	}
	template <typename T = void> T __Gen_Wrap_776(Il2CppVector3 P0, Il2CppVector3 P1, float P2, uintptr_t* P3, uintptr_t* P4, uintptr_t P5) {
		return ((T (*)(ILFixDynamicMethodWrapper*, Il2CppVector3, Il2CppVector3, float, uintptr_t*, uintptr_t*, uintptr_t))(Il2CppBase() + 0x1771340))(this, P0, P1, P2, P3, P4, P5);
	}
	template <typename T = void> T __Gen_Wrap_777(Il2CppVector3 P0, Il2CppVector3 P1, Il2CppVector3 P2, Il2CppVector3 P3, int32_t P4, uintptr_t P5, int32_t P6) {
		return ((T (*)(ILFixDynamicMethodWrapper*, Il2CppVector3, Il2CppVector3, Il2CppVector3, Il2CppVector3, int32_t, uintptr_t, int32_t))(Il2CppBase() + 0x1771548))(this, P0, P1, P2, P3, P4, P5, P6);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_778(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x1771760))(this, P0);
	}
	template <typename T = void> T __Gen_Wrap_779(uintptr_t P0, bool P1, int32_t P2, uintptr_t P3, uintptr_t P4) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, bool, int32_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x177185C))(this, P0, P1, P2, P3, P4);
	}
	template <typename T = void> T __Gen_Wrap_780(uintptr_t P0, int32_t P1, int32_t P2, int32_t P3, int32_t P4, int32_t P5) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, int32_t, int32_t, int32_t, int32_t, int32_t))(Il2CppBase() + 0x1771974))(this, P0, P1, P2, P3, P4, P5);
	}
	template <typename T = void> T __Gen_Wrap_781(uintptr_t P0, int32_t P1, int32_t P2, bool P3, int32_t P4, int32_t P5) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, int32_t, int32_t, bool, int32_t, int32_t))(Il2CppBase() + 0x1771AA8))(this, P0, P1, P2, P3, P4, P5);
	}
	template <typename T = void> T __Gen_Wrap_782(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1771BDC))(this, P0, P1);
	}
	template <typename T = void> T __Gen_Wrap_783(uintptr_t P0, uintptr_t P1, float P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, float))(Il2CppBase() + 0x1771CF4))(this, P0, P1, P2);
	}
	template <typename T = void> T __Gen_Wrap_784(uintptr_t P0, uintptr_t P1, uintptr_t P2, uintptr_t P3) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x1771DE4))(this, P0, P1, P2, P3);
	}
	template <typename T = bool> T __Gen_Wrap_785(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1771F48))(this, P0, P1);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_786(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x1772030))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_787(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x177212C))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_788(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x1772228))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_789(uintptr_t P0, uintptr_t P1, int32_t P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x1772324))(this, P0, P1, P2);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_790(uintptr_t P0, Il2CppVector3 P1, int32_t P2, uintptr_t P3) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, Il2CppVector3, int32_t, uintptr_t))(Il2CppBase() + 0x1772450))(this, P0, P1, P2, P3);
	}
	template <typename T = void> T __Gen_Wrap_791(uintptr_t P0, uintptr_t P1, uintptr_t P2, Il2CppVector3 P3) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, uintptr_t, Il2CppVector3))(Il2CppBase() + 0x17725C4))(this, P0, P1, P2, P3);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_792(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x1772720))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_793(uintptr_t P0, uintptr_t P1, float P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, float))(Il2CppBase() + 0x177281C))(this, P0, P1, P2);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_794(Il2CppVector3 P0, Il2CppQuaternion P1, uintptr_t P2, float P3) {
		return ((T (*)(ILFixDynamicMethodWrapper*, Il2CppVector3, Il2CppQuaternion, uintptr_t, float))(Il2CppBase() + 0x1772948))(this, P0, P1, P2, P3);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_795(uintptr_t P0, uintptr_t P1, float P2, uintptr_t P3) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, float, uintptr_t))(Il2CppBase() + 0x1772AF0))(this, P0, P1, P2, P3);
	}
	template <typename T = void> T __Gen_Wrap_796(uintptr_t P0, uintptr_t P1, float P2, uintptr_t P3) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, float, uintptr_t))(Il2CppBase() + 0x1772C38))(this, P0, P1, P2, P3);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_797(uintptr_t P0, int32_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, int32_t))(Il2CppBase() + 0x1772D3C))(this, P0, P1);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_798(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x1772E4C))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_799(uintptr_t P0, float P1, float P2, float P3, float P4, int32_t P5, float P6, bool P7) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, float, float, float, float, int32_t, float, bool))(Il2CppBase() + 0x1772F48))(this, P0, P1, P2, P3, P4, P5, P6, P7);
	}
	template <typename T = void> T __Gen_Wrap_800(uintptr_t P0, uintptr_t P1, int32_t P2, float P3, bool P4, int32_t P5, int32_t P6) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, int32_t, float, bool, int32_t, int32_t))(Il2CppBase() + 0x17730F0))(this, P0, P1, P2, P3, P4, P5, P6);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_801(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x1773240))(this, P0);
	}
	template <typename T = void> T __Gen_Wrap_802(uintptr_t P0, int32_t P1, int32_t P2, float P3, uintptr_t P4) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, int32_t, int32_t, float, uintptr_t))(Il2CppBase() + 0x177333C))(this, P0, P1, P2, P3, P4);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_803(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x177345C))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_804(uintptr_t P0, uintptr_t P1, Il2CppVector3 P2, float P3, float P4) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, Il2CppVector3, float, float))(Il2CppBase() + 0x1773558))(this, P0, P1, P2, P3, P4);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_805(uintptr_t P0, float P1, float P2, float P3) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, float, float, float))(Il2CppBase() + 0x17736E0))(this, P0, P1, P2, P3);
	}
	template <typename T = void> T __Gen_Wrap_806(uintptr_t P0, float P1, float P2, float P3) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, float, float, float))(Il2CppBase() + 0x1773828))(this, P0, P1, P2, P3);
	}
	template <typename T = void> T __Gen_Wrap_807(uintptr_t P0, uintptr_t P1, uintptr_t P2, int32_t P3, float P4, bool P5, float P6) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, uintptr_t, int32_t, float, bool, float))(Il2CppBase() + 0x1773934))(this, P0, P1, P2, P3, P4, P5, P6);
	}
	template <typename T = void> T __Gen_Wrap_808(uintptr_t P0, float P1, float P2, float P3, float P4) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, float, float, float, float))(Il2CppBase() + 0x1773A7C))(this, P0, P1, P2, P3, P4);
	}
	template <typename T = void> T __Gen_Wrap_809(uintptr_t P0, Il2CppVector3 P1, uintptr_t P2, float P3) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, Il2CppVector3, uintptr_t, float))(Il2CppBase() + 0x1773B9C))(this, P0, P1, P2, P3);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_810(uintptr_t P0, Il2CppVector3 P1, uintptr_t P2, float P3) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, Il2CppVector3, uintptr_t, float))(Il2CppBase() + 0x1773CF0))(this, P0, P1, P2, P3);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_811(uintptr_t P0, uintptr_t P1, float P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, float))(Il2CppBase() + 0x1773E5C))(this, P0, P1, P2);
	}
	template <typename T = void> T __Gen_Wrap_812(uintptr_t P0, int32_t P1, int32_t P2, float P3) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, int32_t, int32_t, float))(Il2CppBase() + 0x1773F88))(this, P0, P1, P2, P3);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T __Gen_Wrap_813(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x177408C))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_814(uintptr_t P0, float P1, bool P2, uintptr_t P3) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, float, bool, uintptr_t))(Il2CppBase() + 0x1774188))(this, P0, P1, P2, P3);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_815(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x17742D0))(this, P0, P1);
	}
	template <typename T = void> T __Gen_Wrap_816(uintptr_t P0, float P1, int32_t P2, float P3, int32_t P4, bool P5, int32_t P6, bool P7) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, float, int32_t, float, int32_t, bool, int32_t, bool))(Il2CppBase() + 0x17743E0))(this, P0, P1, P2, P3, P4, P5, P6, P7);
	}
	template <typename T = void> T __Gen_Wrap_817(uintptr_t P0, uintptr_t P1, Il2CppVector3 P2, float P3, float P4) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, Il2CppVector3, float, float))(Il2CppBase() + 0x1774544))(this, P0, P1, P2, P3, P4);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_818(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17746B4))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_819(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x1774784))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_820(bool P0, uintptr_t P1, uintptr_t P2, uintptr_t P3) {
		return ((T (*)(ILFixDynamicMethodWrapper*, bool, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x1774880))(this, P0, P1, P2, P3);
	}
	template <typename T = void> T __Gen_Wrap_821(uintptr_t P0, int32_t P1, uintptr_t P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, int32_t, uintptr_t))(Il2CppBase() + 0x17749C0))(this, P0, P1, P2);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_822(uintptr_t P0, float P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, float))(Il2CppBase() + 0x1774B34))(this, P0, P1);
	}
	template <typename T = void> T __Gen_Wrap_823(uintptr_t P0, uintptr_t P1, uintptr_t P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x1774CB4))(this, P0, P1, P2);
	}
	template <typename T = void> T __Gen_Wrap_824(uintptr_t P0, float P1, float P2, int32_t P3, int32_t P4) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, float, float, int32_t, int32_t))(Il2CppBase() + 0x1774DFC))(this, P0, P1, P2, P3, P4);
	}
	template <typename T = void> T __Gen_Wrap_825(uintptr_t P0, Il2CppVector3 P1, Il2CppVector3 P2, uintptr_t P3, int32_t P4) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, Il2CppVector3, Il2CppVector3, uintptr_t, int32_t))(Il2CppBase() + 0x1774F14))(this, P0, P1, P2, P3, P4);
	}
	template <typename T = void> T __Gen_Wrap_826(uintptr_t P0, uintptr_t P1, int32_t P2, float P3, float P4, float P5, int32_t P6) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, int32_t, float, float, float, int32_t))(Il2CppBase() + 0x17750A8))(this, P0, P1, P2, P3, P4, P5, P6);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_827(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17751F8))(this, P0);
	}
	template <typename T = void> T __Gen_Wrap_828(uintptr_t P0, int32_t P1, uintptr_t P2, bool P3) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, int32_t, uintptr_t, bool))(Il2CppBase() + 0x17752F4))(this, P0, P1, P2, P3);
	}
	template <typename T = void> T __Gen_Wrap_829(uintptr_t P0, uintptr_t P1, int32_t P2, float P3, float P4, int32_t P5) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, int32_t, float, float, int32_t))(Il2CppBase() + 0x17753F8))(this, P0, P1, P2, P3, P4, P5);
	}
	template <typename T = void> T __Gen_Wrap_830(uintptr_t P0, uintptr_t P1, uintptr_t* P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, uintptr_t*))(Il2CppBase() + 0x177552C))(this, P0, P1, P2);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_831(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x177563C))(this, P0);
	}
	template <typename T = void> T __Gen_Wrap_832(uintptr_t P0, int32_t P1, float P2, float P3, float P4, float P5, uintptr_t P6, uintptr_t P7) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, int32_t, float, float, float, float, uintptr_t, uintptr_t))(Il2CppBase() + 0x1775738))(this, P0, P1, P2, P3, P4, P5, P6, P7);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_833(Il2CppVector3 P0, Il2CppVector3 P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, Il2CppVector3, Il2CppVector3))(Il2CppBase() + 0x177589C))(this, P0, P1);
	}
	template <typename T = void> T __Gen_Wrap_834(uintptr_t P0, Il2CppVector3 P1, Il2CppVector3 P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, Il2CppVector3, Il2CppVector3))(Il2CppBase() + 0x1775A0C))(this, P0, P1, P2);
	}
	template <typename T = void> T __Gen_Wrap_835(uintptr_t P0, Il2CppVector3 P1, Il2CppVector3 P2, bool P3) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, Il2CppVector3, Il2CppVector3, bool))(Il2CppBase() + 0x1775B70))(this, P0, P1, P2, P3);
	}
	template <typename T = void> T __Gen_Wrap_836(uintptr_t P0, float P1, uintptr_t P2, uintptr_t P3, bool P4) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, float, uintptr_t, uintptr_t, bool))(Il2CppBase() + 0x1775CE8))(this, P0, P1, P2, P3, P4);
	}
	template <typename T = void> T __Gen_Wrap_837(uintptr_t P0, uintptr_t P1, int32_t P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x1775E08))(this, P0, P1, P2);
	}
	template <typename T = void> T __Gen_Wrap_838(uintptr_t P0, int32_t P1, int32_t P2, int32_t P3, int32_t P4) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, int32_t, int32_t, int32_t, int32_t))(Il2CppBase() + 0x1775F3C))(this, P0, P1, P2, P3, P4);
	}
	template <typename T = Il2CppList<uintptr_t>*> T __Gen_Wrap_839() {
		return ((T (*)(ILFixDynamicMethodWrapper*))(Il2CppBase() + 0x1776054))(this);
	}
	template <typename T = Il2CppVector2> T __Gen_Wrap_840(float P0, Il2CppVector2 P1, Il2CppVector2 P2, Il2CppVector2 P3, Il2CppVector2 P4) {
		return ((T (*)(ILFixDynamicMethodWrapper*, float, Il2CppVector2, Il2CppVector2, Il2CppVector2, Il2CppVector2))(Il2CppBase() + 0x1776140))(this, P0, P1, P2, P3, P4);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T __Gen_Wrap_841(Il2CppVector2 P0, Il2CppVector2 P1, int32_t P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, Il2CppVector2, Il2CppVector2, int32_t))(Il2CppBase() + 0x1776304))(this, P0, P1, P2);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T __Gen_Wrap_842(uintptr_t P0, uintptr_t P1, int32_t P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x1776468))(this, P0, P1, P2);
	}
	template <typename T = void> T __Gen_Wrap_843(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1776594))(this, P0, P1);
	}
	template <typename T = float> T __Gen_Wrap_844(uintptr_t P0, int32_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, int32_t))(Il2CppBase() + 0x1776668))(this, P0, P1);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_845(uintptr_t P0, Il2CppQuaternion P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, Il2CppQuaternion))(Il2CppBase() + 0x17767D0))(this, P0, P1);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_846(uintptr_t P0, float P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, float))(Il2CppBase() + 0x177691C))(this, P0, P1);
	}
	template <typename T = void> T __Gen_Wrap_847(uintptr_t P0, uintptr_t P1, uintptr_t P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x1776A5C))(this, P0, P1, P2);
	}
	template <typename T = void> T __Gen_Wrap_848(uintptr_t P0, uintptr_t P1, uintptr_t P2, int32_t P3, uintptr_t P4) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, uintptr_t, int32_t, uintptr_t))(Il2CppBase() + 0x1776BD0))(this, P0, P1, P2, P3, P4);
	}
	template <typename T = void> T __Gen_Wrap_849(uintptr_t P0, uintptr_t P1, int32_t P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x1776D74))(this, P0, P1, P2);
	}
	template <typename T = void> T __Gen_Wrap_850(uintptr_t P0, uintptr_t P1, int32_t P2, uintptr_t P3) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, int32_t, uintptr_t))(Il2CppBase() + 0x1776EE8))(this, P0, P1, P2, P3);
	}
	template <typename T = void> T __Gen_Wrap_851(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1777070))(this, P0, P1);
	}
	template <typename T = Il2CppVector3> T __Gen_Wrap_852(uintptr_t P0, float P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, float))(Il2CppBase() + 0x17771C8))(this, P0, P1);
	}
	template <typename T = void> T __Gen_Wrap_853(uintptr_t P0, float P1, float P2, int32_t P3, float P4) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, float, float, int32_t, float))(Il2CppBase() + 0x17772E0))(this, P0, P1, P2, P3, P4);
	}
	template <typename T = bool> T __Gen_Wrap_854(void* P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, void*))(Il2CppBase() + 0x1777400))(this, P0);
	}
	template <typename T = void> T __Gen_Wrap_855(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x1777514))(this, P0);
	}
	template <typename T = void> T __Gen_Wrap_856(uintptr_t P0, uintptr_t P1, uintptr_t P2, uintptr_t P3) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x17775D4))(this, P0, P1, P2, P3);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_857(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x1777744))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_858(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x1777840))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_859(uintptr_t P0, int32_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, int32_t))(Il2CppBase() + 0x177793C))(this, P0, P1);
	}
	template <typename T = void> T __Gen_Wrap_860(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x1777A4C))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_861(uintptr_t P0, uintptr_t P1, Il2CppVector2 P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, Il2CppVector2))(Il2CppBase() + 0x1777B0C))(this, P0, P1, P2);
	}
	template <typename T = void> T __Gen_Wrap_862(uintptr_t P0, bool P1, bool P2, bool P3) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, bool, bool, bool))(Il2CppBase() + 0x1777C54))(this, P0, P1, P2, P3);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_863(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x1777D58))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_864(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x1777E5C))(this, P0);
	}
	template <typename T = void> T __Gen_Wrap_865(uintptr_t P0, int32_t P1, uintptr_t P2, uintptr_t P3, uintptr_t P4) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, int32_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x1777F58))(this, P0, P1, P2, P3, P4);
	}
	template <typename T = void> T __Gen_Wrap_866(uintptr_t P0, uintptr_t P1, Il2CppVector3 P2, Il2CppVector3 P3, float P4) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, Il2CppVector3, Il2CppVector3, float))(Il2CppBase() + 0x17780C4))(this, P0, P1, P2, P3, P4);
	}
	template <typename T = bool> T __Gen_Wrap_867(uintptr_t P0, Il2CppVector3 P1, uintptr_t* P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, Il2CppVector3, uintptr_t*))(Il2CppBase() + 0x1778258))(this, P0, P1, P2);
	}
	template <typename T = void> T __Gen_Wrap_868(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x17783D0))(this, P0, P1);
	}
	template <typename T = void> T __Gen_Wrap_869(uintptr_t P0, int32_t P1, uintptr_t P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, int32_t, uintptr_t))(Il2CppBase() + 0x17784F0))(this, P0, P1, P2);
	}
	template <typename T = void> T __Gen_Wrap_870(uintptr_t P0, uintptr_t P1, uintptr_t P2, uintptr_t P3) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x177862C))(this, P0, P1, P2, P3);
	}
	template <typename T = int32_t> T __Gen_Wrap_871(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x177877C))(this, P0, P1);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_872(uintptr_t P0, Il2CppVector3 P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, Il2CppVector3))(Il2CppBase() + 0x1778904))(this, P0, P1);
	}
	template <typename T = int64_t> T __Gen_Wrap_873(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1778A48))(this, P0, P1);
	}
	template <typename T = bool> T __Gen_Wrap_874(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x1778B2C))(this, P0);
	}
	template <typename T = Il2CppVector3> T __Gen_Wrap_875() {
		return ((T (*)(ILFixDynamicMethodWrapper*))(Il2CppBase() + 0x1778C00))(this);
	}
	template <typename T = void> T __Gen_Wrap_876(Il2CppVector3 P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, Il2CppVector3))(Il2CppBase() + 0x1778CEC))(this, P0);
	}
	template <typename T = Il2CppVector3> T __Gen_Wrap_877(Il2CppVector3 P0, Il2CppVector3 P1, float P2, int32_t P3) {
		return ((T (*)(ILFixDynamicMethodWrapper*, Il2CppVector3, Il2CppVector3, float, int32_t))(Il2CppBase() + 0x1778E04))(this, P0, P1, P2, P3);
	}
	template <typename T = void> T __Gen_Wrap_878(Il2CppVector2 P0, float P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, Il2CppVector2, float))(Il2CppBase() + 0x1778F9C))(this, P0, P1);
	}
	template <typename T = void> T __Gen_Wrap_879(Il2CppVector2 P0, Il2CppVector2 P1, float P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, Il2CppVector2, Il2CppVector2, float))(Il2CppBase() + 0x17790C0))(this, P0, P1, P2);
	}
	template <typename T = void> T __Gen_Wrap_880(uintptr_t P0, uintptr_t P1, uintptr_t P2, int32_t P3) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x1779214))(this, P0, P1, P2, P3);
	}
	template <typename T = void> T __Gen_Wrap_881(uintptr_t P0, Il2CppVector2 P1, Il2CppVector2 P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, Il2CppVector2, Il2CppVector2))(Il2CppBase() + 0x1779364))(this, P0, P1, P2);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_882(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17794B0))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_883(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x17795AC))(this, P0, P1);
	}
	template <typename T = void> T __Gen_Wrap_884(uintptr_t P0, uintptr_t P1, int32_t P2, Il2CppVector3 P3) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, int32_t, Il2CppVector3))(Il2CppBase() + 0x17796BC))(this, P0, P1, P2, P3);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_885(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1779818))(this, P0, P1);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_886(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1779928))(this, P0, P1);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_887(uintptr_t P0, int32_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, int32_t))(Il2CppBase() + 0x1779A38))(this, P0, P1);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_888(uintptr_t P0, Il2CppVector3 P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, Il2CppVector3))(Il2CppBase() + 0x1779B48))(this, P0, P1);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_889(uintptr_t P0, uintptr_t P1, uintptr_t P2, int32_t P3, int32_t P4) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, uintptr_t, int32_t, int32_t))(Il2CppBase() + 0x1779C8C))(this, P0, P1, P2, P3, P4);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_890(uintptr_t P0, int32_t P1, uintptr_t P2, int32_t P3, int32_t P4) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, int32_t, uintptr_t, int32_t, int32_t))(Il2CppBase() + 0x1779DE8))(this, P0, P1, P2, P3, P4);
	}
	template <typename T = void> T __Gen_Wrap_891(uintptr_t P0, bool P1, uintptr_t P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, bool, uintptr_t))(Il2CppBase() + 0x1779F44))(this, P0, P1, P2);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_892(uintptr_t P0, int32_t P1, bool P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, int32_t, bool))(Il2CppBase() + 0x177A02C))(this, P0, P1, P2);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_893(uintptr_t P0, int32_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, int32_t))(Il2CppBase() + 0x177A158))(this, P0, P1);
	}
	template <typename T = int32_t> T __Gen_Wrap_894(uintptr_t P0, int32_t P1, uintptr_t P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, int32_t, uintptr_t))(Il2CppBase() + 0x177A268))(this, P0, P1, P2);
	}
	template <typename T = void> T __Gen_Wrap_895(uintptr_t P0, int32_t P1, float P2, int32_t P3, float P4) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, int32_t, float, int32_t, float))(Il2CppBase() + 0x177A360))(this, P0, P1, P2, P3, P4);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_896(uintptr_t P0, int32_t P1, int32_t P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, int32_t, int32_t))(Il2CppBase() + 0x177A478))(this, P0, P1, P2);
	}
	template <typename T = void> T __Gen_Wrap_897(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x177A5A4))(this, P0);
	}
	template <typename T = void> T __Gen_Wrap_898(uintptr_t P0, float P1, uintptr_t P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, float, uintptr_t))(Il2CppBase() + 0x177A664))(this, P0, P1, P2);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_899(uintptr_t P0, Il2CppVector3 P1, float P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, Il2CppVector3, float))(Il2CppBase() + 0x177A754))(this, P0, P1, P2);
	}
	template <typename T = void> T __Gen_Wrap_900(uintptr_t P0, int32_t P1, Il2CppVector3 P2, Il2CppVector3 P3) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, int32_t, Il2CppVector3, Il2CppVector3))(Il2CppBase() + 0x177A8AC))(this, P0, P1, P2, P3);
	}
	template <typename T = void> T __Gen_Wrap_901(uintptr_t P0, uintptr_t P1, int32_t P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x177AA24))(this, P0, P1, P2);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_902(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x177AB60))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_903(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x177AC5C))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_904(uintptr_t P0, uintptr_t P1, int32_t P2, int32_t P3) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, int32_t, int32_t))(Il2CppBase() + 0x177AD58))(this, P0, P1, P2, P3);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_905(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x177AE98))(this, P0);
	}
	template <typename T = void*> T __Gen_Wrap_906() {
		return ((T (*)(ILFixDynamicMethodWrapper*))(Il2CppBase() + 0x177AF9C))(this);
	}
	template <typename T = int32_t> T __Gen_Wrap_907(uintptr_t P0, uintptr_t P1, int32_t P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x177B088))(this, P0, P1, P2);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_908(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x177B180))(this, P0);
	}
	template <typename T = Il2CppList<uintptr_t>*> T __Gen_Wrap_909(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x177B27C))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_910(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x177B378))(this, P0, P1);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_911(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x177B488))(this, P0);
	}
	template <typename T = bool> T __Gen_Wrap_912(uintptr_t P0, Il2CppVector2 P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, Il2CppVector2))(Il2CppBase() + 0x177B558))(this, P0, P1);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_913(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x177B688))(this, P0);
	}
	template <typename T = Il2CppList<uintptr_t>*> T __Gen_Wrap_914(uintptr_t P0, int32_t P1, bool P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, int32_t, bool))(Il2CppBase() + 0x177B784))(this, P0, P1, P2);
	}
	template <typename T = void> T __Gen_Wrap_915(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x177B8B0))(this, P0, P1);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_916(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x177B984))(this, P0, P1);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_917(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x177BA94))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_918(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x177BB90))(this, P0, P1);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_919(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x177BCA0))(this, P0);
	}
	template <typename T = void> T __Gen_Wrap_920(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x177BD9C))(this, P0, P1);
	}
	template <typename T = bool> T __Gen_Wrap_921(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x177BE70))(this, P0);
	}
	template <typename T = int32_t> T __Gen_Wrap_922(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x177BF44))(this, P0);
	}
	template <typename T = Il2CppString*> T __Gen_Wrap_923(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x177C014))(this, P0);
	}
	template <typename T = void> T __Gen_Wrap_924(uintptr_t P0, bool P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, bool))(Il2CppBase() + 0x177C110))(this, P0, P1);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_925(uintptr_t P0, int32_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, int32_t))(Il2CppBase() + 0x177C1E4))(this, P0, P1);
	}
	template <typename T = Il2CppString*> T __Gen_Wrap_926(uintptr_t P0, bool P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, bool))(Il2CppBase() + 0x177C2F4))(this, P0, P1);
	}
	template <typename T = void> T __Gen_Wrap_927(uintptr_t P0, uintptr_t P1, uintptr_t P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x177C404))(this, P0, P1, P2);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_928(uintptr_t P0, bool P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, bool))(Il2CppBase() + 0x177C4EC))(this, P0, P1);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_929(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x177C5FC))(this, P0, P1);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_930(uintptr_t P0, Il2CppVector3 P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, Il2CppVector3))(Il2CppBase() + 0x177C70C))(this, P0, P1);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_931(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x177C850))(this, P0, P1);
	}
	template <typename T = void> T __Gen_Wrap_932(uintptr_t P0, uintptr_t P1, int32_t P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x177C960))(this, P0, P1, P2);
	}
	template <typename T = bool> T __Gen_Wrap_933(uintptr_t P0, uintptr_t P1, int32_t P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x177CA48))(this, P0, P1, P2);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_934() {
		return ((T (*)(ILFixDynamicMethodWrapper*))(Il2CppBase() + 0x177CB44))(this);
	}
	template <typename T = bool> T __Gen_Wrap_935(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x177CC30))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_936(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x177CD04))(this, P0);
	}
	template <typename T = bool> T __Gen_Wrap_937(uintptr_t P0, uintptr_t P1, uintptr_t P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x177CE00))(this, P0, P1, P2);
	}
	template <typename T = Il2CppString*> T __Gen_Wrap_938(uintptr_t P0, uintptr_t P1, int32_t P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x177CF40))(this, P0, P1, P2);
	}
	template <typename T = Il2CppList<void*>*> T __Gen_Wrap_939(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x177D06C))(this, P0, P1);
	}
	template <typename T = int32_t> T __Gen_Wrap_940(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x177D17C))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_941() {
		return ((T (*)(ILFixDynamicMethodWrapper*))(Il2CppBase() + 0x177D2C4))(this);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_942(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x177D3B0))(this, P0);
	}
	template <typename T = bool> T __Gen_Wrap_943(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x177D4AC))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_944(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x177D580))(this, P0, P1);
	}
	template <typename T = Il2CppDictionary<int32_t, int32_t>*> T __Gen_Wrap_945() {
		return ((T (*)(ILFixDynamicMethodWrapper*))(Il2CppBase() + 0x177D690))(this);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_946(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x177D77C))(this, P0);
	}
	template <typename T = void> T __Gen_Wrap_947(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x177D878))(this, P0);
	}
	template <typename T = void> T __Gen_Wrap_948(uintptr_t P0, uintptr_t P1, uintptr_t P2, int32_t P3, bool P4) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, uintptr_t, int32_t, bool))(Il2CppBase() + 0x177D938))(this, P0, P1, P2, P3, P4);
	}
	template <typename T = void> T __Gen_Wrap_949(uintptr_t P0, uintptr_t P1, int32_t P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x177DA50))(this, P0, P1, P2);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_950(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x177DB38))(this, P0);
	}
	template <typename T = void> T __Gen_Wrap_951(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x177DC08))(this, P0, P1);
	}
	template <typename T = void> T __Gen_Wrap_952(uintptr_t P0, uintptr_t P1, bool P2, bool P3) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, bool, bool))(Il2CppBase() + 0x177DCDC))(this, P0, P1, P2, P3);
	}
	template <typename T = int32_t> T __Gen_Wrap_953(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x177DDE0))(this, P0, P1);
	}
	template <typename T = void> T __Gen_Wrap_954(uintptr_t P0, uintptr_t P1, int32_t P2, int32_t P3) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, int32_t, int32_t))(Il2CppBase() + 0x177DEC4))(this, P0, P1, P2, P3);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_955(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x177DFC8))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_956(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x177E098))(this, P0, P1);
	}
	template <typename T = bool> T __Gen_Wrap_957(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x177E1A8))(this, P0, P1);
	}
	template <typename T = Il2CppList<void*>*> T __Gen_Wrap_958(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x177E290))(this, P0);
	}
	template <typename T = Il2CppDictionary<uintptr_t, uintptr_t>*> T __Gen_Wrap_959(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x177E38C))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_960(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x177E488))(this, P0, P1);
	}
	template <typename T = int32_t> T __Gen_Wrap_961(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x177E56C))(this, P0, P1);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_962() {
		return ((T (*)(ILFixDynamicMethodWrapper*))(Il2CppBase() + 0x177E6B0))(this);
	}
	template <typename T = int32_t> T __Gen_Wrap_963(int32_t P0, bool P1, bool P2, bool P3) {
		return ((T (*)(ILFixDynamicMethodWrapper*, int32_t, bool, bool, bool))(Il2CppBase() + 0x177E79C))(this, P0, P1, P2, P3);
	}
	template <typename T = Il2CppString*> T __Gen_Wrap_964(int32_t P0, bool P1, bool P2, bool P3, bool P4) {
		return ((T (*)(ILFixDynamicMethodWrapper*, int32_t, bool, bool, bool, bool))(Il2CppBase() + 0x177E8B0))(this, P0, P1, P2, P3, P4);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_965() {
		return ((T (*)(ILFixDynamicMethodWrapper*))(Il2CppBase() + 0x177EA0C))(this);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_966(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x177EAF8))(this, P0, P1);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_967() {
		return ((T (*)(ILFixDynamicMethodWrapper*))(Il2CppBase() + 0x177EC08))(this);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_968(int32_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, int32_t))(Il2CppBase() + 0x177ECF4))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_969(int32_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, int32_t))(Il2CppBase() + 0x177EDF0))(this, P0);
	}
	template <typename T = Il2CppList<uintptr_t>*> T __Gen_Wrap_970(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x177EEC0))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_971(int32_t P0, int32_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, int32_t, int32_t))(Il2CppBase() + 0x177EFBC))(this, P0, P1);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_972() {
		return ((T (*)(ILFixDynamicMethodWrapper*))(Il2CppBase() + 0x177F0CC))(this);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_973() {
		return ((T (*)(ILFixDynamicMethodWrapper*))(Il2CppBase() + 0x177F1B8))(this);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_974() {
		return ((T (*)(ILFixDynamicMethodWrapper*))(Il2CppBase() + 0x177F2A4))(this);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_975(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x177F390))(this, P0, P1);
	}
	template <typename T = bool> T __Gen_Wrap_976(void* P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, void*))(Il2CppBase() + 0x177F4A0))(this, P0);
	}
	template <typename T = bool> T __Gen_Wrap_977(Il2CppString* P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, Il2CppString*))(Il2CppBase() + 0x177F5B4))(this, P0);
	}
	template <typename T = bool> T __Gen_Wrap_978(void* P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, void*))(Il2CppBase() + 0x177F688))(this, P0);
	}
	template <typename T = bool> T __Gen_Wrap_979(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x177F79C))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_980(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x177F870))(this, P0);
	}
	template <typename T = int32_t> T __Gen_Wrap_981(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x177F974))(this, P0);
	}
	template <typename T = void> T __Gen_Wrap_982(uintptr_t P0, int32_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, int32_t))(Il2CppBase() + 0x177FA44))(this, P0, P1);
	}
	template <typename T = void> T __Gen_Wrap_983(uintptr_t P0, uintptr_t P1, int32_t P2, bool P3) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, int32_t, bool))(Il2CppBase() + 0x177FB18))(this, P0, P1, P2, P3);
	}
	template <typename T = bool> T __Gen_Wrap_984(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x177FC1C))(this, P0, P1);
	}
	template <typename T = int32_t> T __Gen_Wrap_985(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x177FD04))(this, P0, P1);
	}
	template <typename T = void*> T __Gen_Wrap_986(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x177FDE8))(this, P0, P1);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_987(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x177FEF8))(this, P0, P1);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_988() {
		return ((T (*)(ILFixDynamicMethodWrapper*))(Il2CppBase() + 0x177FFDC))(this);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_989() {
		return ((T (*)(ILFixDynamicMethodWrapper*))(Il2CppBase() + 0x17800C8))(this);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_990(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x17801B4))(this, P0, P1);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_991() {
		return ((T (*)(ILFixDynamicMethodWrapper*))(Il2CppBase() + 0x17802C4))(this);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_992(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x17803B0))(this, P0, P1);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_993(uintptr_t P0, uintptr_t P1, int32_t P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x17804C0))(this, P0, P1, P2);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_994(uintptr_t P0, int32_t P1, int32_t P2, int32_t P3) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, int32_t, int32_t, int32_t))(Il2CppBase() + 0x17805EC))(this, P0, P1, P2, P3);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_995(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x178072C))(this, P0);
	}
	template <typename T = bool> T __Gen_Wrap_996(uintptr_t P0, uintptr_t P1, uintptr_t* P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, uintptr_t*))(Il2CppBase() + 0x17807FC))(this, P0, P1, P2);
	}
	template <typename T = bool> T __Gen_Wrap_997(uintptr_t P0, uintptr_t P1, uintptr_t* P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, uintptr_t*))(Il2CppBase() + 0x178091C))(this, P0, P1, P2);
	}
	template <typename T = bool> T __Gen_Wrap_998(uintptr_t P0, uintptr_t P1, uintptr_t* P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, uintptr_t*))(Il2CppBase() + 0x1780A70))(this, P0, P1, P2);
	}
	template <typename T = unsigned char> T __Gen_Wrap_999(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1780B90))(this, P0, P1);
	}
	template <typename T = void> T __Gen_Wrap_1000(uintptr_t P0, uintptr_t P1, unsigned char P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, unsigned char))(Il2CppBase() + 0x1780C74))(this, P0, P1, P2);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, uintptr_t>*> T __Gen_Wrap_1001(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x1780D5C))(this, P0);
	}
	template <typename T = Il2CppList<uintptr_t>*> T __Gen_Wrap_1002(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x1780E58))(this, P0);
	}
	template <typename T = Il2CppDictionary<int32_t, int32_t>*> T __Gen_Wrap_1003(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x1780F54))(this, P0);
	}
	template <typename T = void> T __Gen_Wrap_1004(uintptr_t P0, uintptr_t P1, uintptr_t P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x1781050))(this, P0, P1, P2);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1005(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x1781138))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1006(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1781234))(this, P0, P1);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1007(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x178135C))(this, P0, P1);
	}
	template <typename T = Il2CppString*> T __Gen_Wrap_1008(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x178146C))(this, P0, P1);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1009(uintptr_t P0, int32_t P1, int32_t P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, int32_t, int32_t))(Il2CppBase() + 0x178157C))(this, P0, P1, P2);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1010(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17816A8))(this, P0);
	}
	template <typename T = int32_t> T __Gen_Wrap_1011(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x17817A4))(this, P0, P1);
	}
	template <typename T = uint32_t> T __Gen_Wrap_1012(char P0, uint32_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, char, uint32_t))(Il2CppBase() + 0x1781888))(this, P0, P1);
	}
	template <typename T = uint32_t> T __Gen_Wrap_1013(char P0, char P1, char P2, char P3) {
		return ((T (*)(ILFixDynamicMethodWrapper*, char, char, char, char))(Il2CppBase() + 0x178196C))(this, P0, P1, P2, P3);
	}
	template <typename T = Il2CppString*> T __Gen_Wrap_1014(uintptr_t P0, int32_t P1, uintptr_t P2, int32_t P3, uintptr_t P4) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, int32_t, uintptr_t, int32_t, uintptr_t))(Il2CppBase() + 0x1781A80))(this, P0, P1, P2, P3, P4);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1015() {
		return ((T (*)(ILFixDynamicMethodWrapper*))(Il2CppBase() + 0x1781BDC))(this);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1016(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1781CC8))(this, P0, P1);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1017() {
		return ((T (*)(ILFixDynamicMethodWrapper*))(Il2CppBase() + 0x1781DD8))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T __Gen_Wrap_1018(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1781EC4))(this, P0, P1);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1019(uintptr_t P0, uintptr_t P1, int32_t P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x1781FD4))(this, P0, P1, P2);
	}
	template <typename T = void> T __Gen_Wrap_1020(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x1782100))(this, P0);
	}
	template <typename T = void*> T __Gen_Wrap_1021(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17821C0))(this, P0);
	}
	template <typename T = int32_t> T __Gen_Wrap_1022(uintptr_t P0, uintptr_t P1, uintptr_t P2, uintptr_t P3) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x17822BC))(this, P0, P1, P2, P3);
	}
	template <typename T = void> T __Gen_Wrap_1023(uintptr_t P0, uintptr_t P1, uintptr_t P2, uintptr_t P3) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x1782464))(this, P0, P1, P2, P3);
	}
	template <typename T = bool> T __Gen_Wrap_1024(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17825B4))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1025(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x1782688))(this, P0);
	}
	template <typename T = int32_t> T __Gen_Wrap_1026(uintptr_t P0, uintptr_t P1, int32_t P2, uintptr_t P3, uintptr_t P4) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, int32_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x1782784))(this, P0, P1, P2, P3, P4);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1027(uintptr_t P0, float P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, float))(Il2CppBase() + 0x1782900))(this, P0, P1);
	}
	template <typename T = void> T __Gen_Wrap_1028(uintptr_t P0, int32_t P1, uintptr_t P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, int32_t, uintptr_t))(Il2CppBase() + 0x1782A18))(this, P0, P1, P2);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, uintptr_t>*> T __Gen_Wrap_1029(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x1782B00))(this, P0);
	}
	template <typename T = bool> T __Gen_Wrap_1030(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x1782BFC))(this, P0);
	}
	template <typename T = void*> T __Gen_Wrap_1031() {
		return ((T (*)(ILFixDynamicMethodWrapper*))(Il2CppBase() + 0x1782CD0))(this);
	}
	template <typename T = void> T __Gen_Wrap_1032(uintptr_t P0, uintptr_t P1, uintptr_t P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x1782DBC))(this, P0, P1, P2);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1033(int32_t P0, uintptr_t P1, uintptr_t P2, uintptr_t P3, uintptr_t P4, uintptr_t P5, bool P6, uintptr_t P7) {
		return ((T (*)(ILFixDynamicMethodWrapper*, int32_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, bool, uintptr_t))(Il2CppBase() + 0x1782EE8))(this, P0, P1, P2, P3, P4, P5, P6, P7);
	}
	template <typename T = void> T __Gen_Wrap_1034(uintptr_t P0, uintptr_t P1, uintptr_t P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x1783088))(this, P0, P1, P2);
	}
	template <typename T = void> T __Gen_Wrap_1035(uintptr_t P0, uintptr_t P1, uintptr_t P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x17831C8))(this, P0, P1, P2);
	}
	template <typename T = bool> T __Gen_Wrap_1036(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x1783308))(this, P0);
	}
	template <typename T = bool> T __Gen_Wrap_1037(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x1783420))(this, P0);
	}
	template <typename T = void> T __Gen_Wrap_1038(uintptr_t P0, uintptr_t P1, bool P2, uintptr_t P3) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, bool, uintptr_t))(Il2CppBase() + 0x17834F4))(this, P0, P1, P2, P3);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1039(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17835F8))(this, P0);
	}
	template <typename T = bool> T __Gen_Wrap_1040(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x17836F4))(this, P0, P1);
	}
	template <typename T = bool> T __Gen_Wrap_1041(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x1783864))(this, P0);
	}
	template <typename T = void> T __Gen_Wrap_1042(uintptr_t P0, uintptr_t P1, uintptr_t P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x1783978))(this, P0, P1, P2);
	}
	template <typename T = int32_t> T __Gen_Wrap_1043(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1783AA4))(this, P0, P1);
	}
	template <typename T = Il2CppVector3> T __Gen_Wrap_1044(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1783C10))(this, P0, P1);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1045(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x1783D20))(this, P0);
	}
	template <typename T = void> T __Gen_Wrap_1046(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1783E24))(this, P0, P1);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1047(uintptr_t P0, Il2CppVector3 P1, float P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, Il2CppVector3, float))(Il2CppBase() + 0x1783F58))(this, P0, P1, P2);
	}
	template <typename T = void> T __Gen_Wrap_1048(uintptr_t P0, Il2CppVector3 P1, float P2, uintptr_t P3, uintptr_t P4, uintptr_t P5) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, Il2CppVector3, float, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x17840B0))(this, P0, P1, P2, P3, P4, P5);
	}
	template <typename T = Il2CppVector3> T __Gen_Wrap_1049(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x1784234))(this, P0);
	}
	template <typename T = void> T __Gen_Wrap_1050(uintptr_t P0, uintptr_t P1, uintptr_t* P2, uintptr_t* P3, uintptr_t* P4, uintptr_t* P5) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, uintptr_t*, uintptr_t*, uintptr_t*, uintptr_t*))(Il2CppBase() + 0x1784348))(this, P0, P1, P2, P3, P4, P5);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1051(uintptr_t P0, uintptr_t P1, uintptr_t P2, uintptr_t P3, uintptr_t* P4) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t*))(Il2CppBase() + 0x178450C))(this, P0, P1, P2, P3, P4);
	}
	template <typename T = void> T __Gen_Wrap_1052(uintptr_t P0, Il2CppVector3 P1, Il2CppVector3 P2, uintptr_t P3, float P4, float P5, uintptr_t P6) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, Il2CppVector3, Il2CppVector3, uintptr_t, float, float, uintptr_t))(Il2CppBase() + 0x1784698))(this, P0, P1, P2, P3, P4, P5, P6);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1053(uintptr_t P0, uintptr_t P1, uintptr_t P2, uintptr_t P3, uintptr_t P4) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x178485C))(this, P0, P1, P2, P3, P4);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1054(uintptr_t P0, uintptr_t P1, uintptr_t P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x17849B8))(this, P0, P1, P2);
	}
	template <typename T = void> T __Gen_Wrap_1055(uintptr_t P0, uintptr_t P1, uintptr_t P2, uintptr_t P3, int32_t P4) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x1784AE4))(this, P0, P1, P2, P3, P4);
	}
	template <typename T = bool> T __Gen_Wrap_1056(uintptr_t P0, int32_t P1, int32_t P2, uintptr_t P3) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, int32_t, int32_t, uintptr_t))(Il2CppBase() + 0x1784BFC))(this, P0, P1, P2, P3);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1057(Il2CppVector3 P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, Il2CppVector3))(Il2CppBase() + 0x1784D14))(this, P0);
	}
	template <typename T = void> T __Gen_Wrap_1058(int32_t P0, int32_t P1, Il2CppVector3 P2, int32_t P3) {
		return ((T (*)(ILFixDynamicMethodWrapper*, int32_t, int32_t, Il2CppVector3, int32_t))(Il2CppBase() + 0x1784E48))(this, P0, P1, P2, P3);
	}
	template <typename T = bool> T __Gen_Wrap_1059(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x1784FA4))(this, P0);
	}
	template <typename T = bool> T __Gen_Wrap_1060(uintptr_t P0, Il2CppVector3 P1, Il2CppVector3 P2, Il2CppVector3 P3, Il2CppVector3 P4) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, Il2CppVector3, Il2CppVector3, Il2CppVector3, Il2CppVector3))(Il2CppBase() + 0x17850BC))(this, P0, P1, P2, P3, P4);
	}
	template <typename T = void> T __Gen_Wrap_1061(uintptr_t P0, uintptr_t P1, uintptr_t P2, uintptr_t P3, uintptr_t P4) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x17852B8))(this, P0, P1, P2, P3, P4);
	}
	template <typename T = bool> T __Gen_Wrap_1062(Il2CppVector3 P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, Il2CppVector3))(Il2CppBase() + 0x178543C))(this, P0);
	}
	template <typename T = Il2CppList<uintptr_t>*> T __Gen_Wrap_1063() {
		return ((T (*)(ILFixDynamicMethodWrapper*))(Il2CppBase() + 0x1785568))(this);
	}
	template <typename T = void> T __Gen_Wrap_1064(uintptr_t P0, int32_t P1, int32_t P2, Il2CppVector3 P3, float P4) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, int32_t, int32_t, Il2CppVector3, float))(Il2CppBase() + 0x1785654))(this, P0, P1, P2, P3, P4);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1065(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17857C4))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1066(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17858C0))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1067() {
		return ((T (*)(ILFixDynamicMethodWrapper*))(Il2CppBase() + 0x17859BC))(this);
	}
	template <typename T = void> T __Gen_Wrap_1068(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x1785AA8))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1069(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x1785B68))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1070(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1785C64))(this, P0, P1);
	}
	template <typename T = void> T __Gen_Wrap_1071(uintptr_t P0, uintptr_t P1, uintptr_t P2, float P3, float P4) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, uintptr_t, float, float))(Il2CppBase() + 0x1785D74))(this, P0, P1, P2, P3, P4);
	}
	template <typename T = Il2CppDictionary<uintptr_t, int32_t>*> T __Gen_Wrap_1072(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x1785E8C))(this, P0);
	}
	template <typename T = bool> T __Gen_Wrap_1073(void* P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, void*))(Il2CppBase() + 0x1785F88))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1074(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x178609C))(this, P0, P1);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1075(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x1786180))(this, P0);
	}
	template <typename T = void> T __Gen_Wrap_1076(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x178627C))(this, P0, P1);
	}
	template <typename T = void> T __Gen_Wrap_1077(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1786350))(this, P0, P1);
	}
	template <typename T = void> T __Gen_Wrap_1078(uintptr_t P0, uintptr_t P1, uintptr_t P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x1786424))(this, P0, P1, P2);
	}
	template <typename T = void> T __Gen_Wrap_1079(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x178650C))(this, P0);
	}
	template <typename T = void> T __Gen_Wrap_1080(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17865CC))(this, P0);
	}
	template <typename T = Il2CppString*> T __Gen_Wrap_1081(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x178668C))(this, P0);
	}
	template <typename T = Il2CppString*> T __Gen_Wrap_1082(uintptr_t P0, bool P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, bool))(Il2CppBase() + 0x1786788))(this, P0, P1);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1083(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x1786898))(this, P0);
	}
	template <typename T = void> T __Gen_Wrap_1084(uintptr_t P0, uintptr_t P1, uintptr_t P2, uintptr_t P3, uintptr_t P4, int32_t P5, uintptr_t P6) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, int32_t, uintptr_t))(Il2CppBase() + 0x17869BC))(this, P0, P1, P2, P3, P4, P5, P6);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1085() {
		return ((T (*)(ILFixDynamicMethodWrapper*))(Il2CppBase() + 0x1786B04))(this);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1086(uintptr_t P0, uintptr_t P1, uintptr_t P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x1786BF0))(this, P0, P1, P2);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1087(int32_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, int32_t))(Il2CppBase() + 0x1786D1C))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1088(int32_t P0, int32_t P1, int32_t P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, int32_t, int32_t, int32_t))(Il2CppBase() + 0x1786E18))(this, P0, P1, P2);
	}
	template <typename T = void> T __Gen_Wrap_1089(uintptr_t P0, uintptr_t P1, uintptr_t P2, uintptr_t P3, bool P4) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, uintptr_t, uintptr_t, bool))(Il2CppBase() + 0x1786F10))(this, P0, P1, P2, P3, P4);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T __Gen_Wrap_1090(int32_t P0, int32_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, int32_t, int32_t))(Il2CppBase() + 0x1787028))(this, P0, P1);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1091() {
		return ((T (*)(ILFixDynamicMethodWrapper*))(Il2CppBase() + 0x1787138))(this);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1092(uintptr_t P0, Il2CppVector3 P1, uintptr_t P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, Il2CppVector3, uintptr_t))(Il2CppBase() + 0x1787224))(this, P0, P1, P2);
	}
	template <typename T = void> T __Gen_Wrap_1093(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x178737C))(this, P0, P1);
	}
	template <typename T = Il2CppList<uintptr_t>*> T __Gen_Wrap_1094(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17874E4))(this, P0);
	}
	template <typename T = void> T __Gen_Wrap_1095(uintptr_t P0, float P1, float P2, uintptr_t P3) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, float, float, uintptr_t))(Il2CppBase() + 0x17875E0))(this, P0, P1, P2, P3);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T __Gen_Wrap_1096(uintptr_t P0, uintptr_t P1, int32_t P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x17876E4))(this, P0, P1, P2);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T __Gen_Wrap_1097(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1787810))(this, P0, P1);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1098(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x1787920))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1099(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1787A1C))(this, P0, P1);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1100() {
		return ((T (*)(ILFixDynamicMethodWrapper*))(Il2CppBase() + 0x1787B2C))(this);
	}
	template <typename T = void> T __Gen_Wrap_1101(int32_t P0, uintptr_t P1, uintptr_t P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, int32_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x1787C18))(this, P0, P1, P2);
	}
	template <typename T = void> T __Gen_Wrap_1102(uintptr_t P0, int32_t P1, uintptr_t P2, uintptr_t P3) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, int32_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x1787D00))(this, P0, P1, P2, P3);
	}
	template <typename T = void*> T __Gen_Wrap_1103() {
		return ((T (*)(ILFixDynamicMethodWrapper*))(Il2CppBase() + 0x1787E04))(this);
	}
	template <typename T = void> T __Gen_Wrap_1104(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1787EF0))(this, P0, P1);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1105(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1787FC4))(this, P0, P1);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1106(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17880D4))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1107(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17881D0))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1108(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17882CC))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1109(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17883C8))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1110(uintptr_t P0, uintptr_t P1, bool P2, bool P3) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, bool, bool))(Il2CppBase() + 0x17884C4))(this, P0, P1, P2, P3);
	}
	template <typename T = void> T __Gen_Wrap_1111(uintptr_t P0, uintptr_t P1, uintptr_t P2, uintptr_t P3, float P4) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, uintptr_t, uintptr_t, float))(Il2CppBase() + 0x1788604))(this, P0, P1, P2, P3, P4);
	}
	template <typename T = void> T __Gen_Wrap_1112(uintptr_t P0, Il2CppVector3 P1, uintptr_t P2, uintptr_t P3, uintptr_t P4, float P5, float P6) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, Il2CppVector3, uintptr_t, uintptr_t, uintptr_t, float, float))(Il2CppBase() + 0x1788724))(this, P0, P1, P2, P3, P4, P5, P6);
	}
	template <typename T = Il2CppString*> T __Gen_Wrap_1113(uintptr_t P0, bool P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, bool))(Il2CppBase() + 0x17888C4))(this, P0, P1);
	}
	template <typename T = void> T __Gen_Wrap_1114(uintptr_t P0, bool P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, bool))(Il2CppBase() + 0x1788A34))(this, P0, P1);
	}
	template <typename T = int32_t> T __Gen_Wrap_1115(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x1788B8C))(this, P0);
	}
	template <typename T = Il2CppString*> T __Gen_Wrap_1116(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x1788CE0))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1117(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x1788E3C))(this, P0);
	}
	template <typename T = void> T __Gen_Wrap_1118(uintptr_t P0, uintptr_t P1, uintptr_t P2, uintptr_t P3, uintptr_t P4, Il2CppVector3 P5, float P6, float P7) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, Il2CppVector3, float, float))(Il2CppBase() + 0x1788F98))(this, P0, P1, P2, P3, P4, P5, P6, P7);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1119(uintptr_t P0, uintptr_t P1, int32_t P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x1789174))(this, P0, P1, P2);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1120() {
		return ((T (*)(ILFixDynamicMethodWrapper*))(Il2CppBase() + 0x17892A8))(this);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1121(uintptr_t P0, int32_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, int32_t))(Il2CppBase() + 0x1789394))(this, P0, P1);
	}
	template <typename T = void> T __Gen_Wrap_1122(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17894A4))(this, P0);
	}
	template <typename T = Il2CppString*> T __Gen_Wrap_1123(uintptr_t P0, uintptr_t P1, int32_t P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x1789564))(this, P0, P1, P2);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1124() {
		return ((T (*)(ILFixDynamicMethodWrapper*))(Il2CppBase() + 0x1789690))(this);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1125(uintptr_t P0, uintptr_t P1, int32_t P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x178977C))(this, P0, P1, P2);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1126(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x17898B0))(this, P0, P1);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T __Gen_Wrap_1127(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17899C0))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1128(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1789ABC))(this, P0, P1);
	}
	template <typename T = void> T __Gen_Wrap_1129(uintptr_t P0, uintptr_t P1, uintptr_t P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x1789BCC))(this, P0, P1, P2);
	}
	template <typename T = void> T __Gen_Wrap_1130(uintptr_t P0, Il2CppVector3 P1, int32_t P2, float P3, uintptr_t P4, uintptr_t P5) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, Il2CppVector3, int32_t, float, uintptr_t, uintptr_t))(Il2CppBase() + 0x1789CB4))(this, P0, P1, P2, P3, P4, P5);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1131() {
		return ((T (*)(ILFixDynamicMethodWrapper*))(Il2CppBase() + 0x1789E74))(this);
	}
	template <typename T = void> T __Gen_Wrap_1132(uintptr_t P0, bool P1, uintptr_t P2, bool P3) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, bool, uintptr_t, bool))(Il2CppBase() + 0x1789F60))(this, P0, P1, P2, P3);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1133(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x178A064))(this, P0);
	}
	template <typename T = void> T __Gen_Wrap_1134(uintptr_t P0, uintptr_t P1, uintptr_t P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x178A160))(this, P0, P1, P2);
	}
	template <typename T = void> T __Gen_Wrap_1135(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x178A248))(this, P0);
	}
	template <typename T = void> T __Gen_Wrap_1136(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x178A308))(this, P0, P1);
	}
	template <typename T = bool> T __Gen_Wrap_1137(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x178A3DC))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1138(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x178A4B0))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1139(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x178A5AC))(this, P0, P1);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1140(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x178A6BC))(this, P0);
	}
	template <typename T = Il2CppList<uintptr_t>*> T __Gen_Wrap_1141(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x178A7D8))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1142(uintptr_t P0, uintptr_t P1, uintptr_t P2, uintptr_t P3) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x178A8D4))(this, P0, P1, P2, P3);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1143(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x178AA14))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1144(uintptr_t P0, uintptr_t P1, Il2CppVector3 P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, Il2CppVector3))(Il2CppBase() + 0x178AAE4))(this, P0, P1, P2);
	}
	template <typename T = bool> T __Gen_Wrap_1145(uintptr_t P0, bool P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, bool))(Il2CppBase() + 0x178AC3C))(this, P0, P1);
	}
	template <typename T = void> T __Gen_Wrap_1146(uintptr_t P0, uintptr_t P1, bool P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, bool))(Il2CppBase() + 0x178AD24))(this, P0, P1, P2);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1147() {
		return ((T (*)(ILFixDynamicMethodWrapper*))(Il2CppBase() + 0x178AE0C))(this);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1148(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x178AEF8))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1149(uintptr_t P0, uintptr_t P1, uintptr_t P2, bool P3) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, uintptr_t, bool))(Il2CppBase() + 0x178AFF4))(this, P0, P1, P2, P3);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1150(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x178B134))(this, P0, P1);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, uintptr_t>*> T __Gen_Wrap_1151() {
		return ((T (*)(ILFixDynamicMethodWrapper*))(Il2CppBase() + 0x178B244))(this);
	}
	template <typename T = Il2CppString*> T __Gen_Wrap_1152(int32_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, int32_t))(Il2CppBase() + 0x178B330))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1153() {
		return ((T (*)(ILFixDynamicMethodWrapper*))(Il2CppBase() + 0x178B42C))(this);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1154() {
		return ((T (*)(ILFixDynamicMethodWrapper*))(Il2CppBase() + 0x178B518))(this);
	}
	template <typename T = bool> T __Gen_Wrap_1155(uintptr_t P0, uintptr_t* P1, uintptr_t* P2, uintptr_t* P3) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t*, uintptr_t*, uintptr_t*))(Il2CppBase() + 0x178B604))(this, P0, P1, P2, P3);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1156() {
		return ((T (*)(ILFixDynamicMethodWrapper*))(Il2CppBase() + 0x178B7B4))(this);
	}
	template <typename T = void> T __Gen_Wrap_1157(uintptr_t P0, uintptr_t P1, uintptr_t P2, uintptr_t P3) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x178B8A0))(this, P0, P1, P2, P3);
	}
	template <typename T = void> T __Gen_Wrap_1158(uintptr_t P0, uintptr_t P1, uintptr_t P2, int32_t P3, bool P4) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, uintptr_t, int32_t, bool))(Il2CppBase() + 0x178B9A4))(this, P0, P1, P2, P3, P4);
	}
	template <typename T = void> T __Gen_Wrap_1159(uintptr_t P0, uintptr_t P1, int32_t P2, uintptr_t P3) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, int32_t, uintptr_t))(Il2CppBase() + 0x178BABC))(this, P0, P1, P2, P3);
	}
	template <typename T = void> T __Gen_Wrap_1160(uintptr_t P0, uintptr_t P1, uintptr_t P2, uintptr_t P3) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x178BBC0))(this, P0, P1, P2, P3);
	}
	template <typename T = void> T __Gen_Wrap_1161(uintptr_t P0, uintptr_t P1, uintptr_t P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x178BCC4))(this, P0, P1, P2);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1162(int32_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, int32_t))(Il2CppBase() + 0x178BDAC))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1163(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x178BEA8))(this, P0);
	}
	template <typename T = Il2CppList<uintptr_t>*> T __Gen_Wrap_1164(int32_t P0, int32_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, int32_t, int32_t))(Il2CppBase() + 0x178BFA4))(this, P0, P1);
	}
	template <typename T = Il2CppList<uintptr_t>*> T __Gen_Wrap_1165(int32_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, int32_t))(Il2CppBase() + 0x178C0B4))(this, P0);
	}
	template <typename T = int32_t> T __Gen_Wrap_1166(int32_t P0, uintptr_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, int32_t, uintptr_t))(Il2CppBase() + 0x178C1B0))(this, P0, P1);
	}
	template <typename T = int32_t> T __Gen_Wrap_1167(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x178C294))(this, P0);
	}
	template <typename T = void> T __Gen_Wrap_1168(uintptr_t P0, bool P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, bool))(Il2CppBase() + 0x178C364))(this, P0, P1);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1169() {
		return ((T (*)(ILFixDynamicMethodWrapper*))(Il2CppBase() + 0x178C438))(this);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1170() {
		return ((T (*)(ILFixDynamicMethodWrapper*))(Il2CppBase() + 0x178C524))(this);
	}
	template <typename T = void> T __Gen_Wrap_1171(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x178C610))(this, P0);
	}
	template <typename T = void> T __Gen_Wrap_1172(int32_t P0, uintptr_t P1, int32_t P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, int32_t, uintptr_t, int32_t))(Il2CppBase() + 0x178C6D0))(this, P0, P1, P2);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1173() {
		return ((T (*)(ILFixDynamicMethodWrapper*))(Il2CppBase() + 0x178C7B8))(this);
	}
	template <typename T = void> T __Gen_Wrap_1174(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x178C8A4))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1175(uintptr_t P0, uintptr_t P1, uintptr_t P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x178C964))(this, P0, P1, P2);
	}
	template <typename T = void> T __Gen_Wrap_1176(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x178CA90))(this, P0, P1);
	}
	template <typename T = Il2CppString*> T __Gen_Wrap_1177(int32_t P0, int32_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, int32_t, int32_t))(Il2CppBase() + 0x178CB64))(this, P0, P1);
	}
	template <typename T = void> T __Gen_Wrap_1178(uintptr_t P0, uintptr_t P1, uintptr_t P2, int32_t P3, bool P4) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, uintptr_t, int32_t, bool))(Il2CppBase() + 0x178CC74))(this, P0, P1, P2, P3, P4);
	}
	template <typename T = void> T __Gen_Wrap_1179(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x178CD8C))(this, P0, P1);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1180(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x178CE60))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1181(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x178CF30))(this, P0, P1);
	}
	template <typename T = Il2CppString*> T __Gen_Wrap_1182(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x178D040))(this, P0);
	}
	template <typename T = bool> T __Gen_Wrap_1183(uintptr_t P0, uintptr_t P1, uintptr_t P2, uintptr_t P3) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x178D13C))(this, P0, P1, P2, P3);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1184(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x178D254))(this, P0);
	}
	template <typename T = bool> T __Gen_Wrap_1185(void* P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, void*))(Il2CppBase() + 0x178D350))(this, P0);
	}
	template <typename T = void*> T __Gen_Wrap_1186(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x178D464))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1187() {
		return ((T (*)(ILFixDynamicMethodWrapper*))(Il2CppBase() + 0x178D560))(this);
	}
	template <typename T = bool> T __Gen_Wrap_1188(uintptr_t P0, uintptr_t* P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t*))(Il2CppBase() + 0x178D64C))(this, P0, P1);
	}
	template <typename T = void> T __Gen_Wrap_1189(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x178D784))(this, P0, P1);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1190() {
		return ((T (*)(ILFixDynamicMethodWrapper*))(Il2CppBase() + 0x178D858))(this);
	}
	template <typename T = void> T __Gen_Wrap_1191(int32_t P0, uintptr_t P1, uintptr_t P2, int32_t P3, bool P4) {
		return ((T (*)(ILFixDynamicMethodWrapper*, int32_t, uintptr_t, uintptr_t, int32_t, bool))(Il2CppBase() + 0x178D918))(this, P0, P1, P2, P3, P4);
	}
	template <typename T = void> T __Gen_Wrap_1192(uintptr_t P0, uint32_t P1, int32_t P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uint32_t, int32_t))(Il2CppBase() + 0x178DA30))(this, P0, P1, P2);
	}
	template <typename T = bool> T __Gen_Wrap_1193(uintptr_t P0, uint32_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uint32_t))(Il2CppBase() + 0x178DB18))(this, P0, P1);
	}
	template <typename T = void*> T __Gen_Wrap_1194() {
		return ((T (*)(ILFixDynamicMethodWrapper*))(Il2CppBase() + 0x178DC00))(this);
	}
	template <typename T = void> T __Gen_Wrap_1195(uintptr_t P0, int32_t P1, int32_t P2, int32_t P3) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, int32_t, int32_t, int32_t))(Il2CppBase() + 0x178DCEC))(this, P0, P1, P2, P3);
	}
	template <typename T = void> T __Gen_Wrap_1196(uintptr_t P0, uintptr_t P1, int32_t P2, int32_t P3, uint32_t P4) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, int32_t, int32_t, uint32_t))(Il2CppBase() + 0x178DDF0))(this, P0, P1, P2, P3, P4);
	}
	template <typename T = void> T __Gen_Wrap_1197(uintptr_t P0, int32_t P1, int32_t P2, uintptr_t P3, bool P4) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, int32_t, int32_t, uintptr_t, bool))(Il2CppBase() + 0x178DF08))(this, P0, P1, P2, P3, P4);
	}
	template <typename T = void> T __Gen_Wrap_1198(uintptr_t P0, int32_t P1, bool P2, Il2CppVector2 P3, int32_t P4, uint32_t P5) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, int32_t, bool, Il2CppVector2, int32_t, uint32_t))(Il2CppBase() + 0x178E020))(this, P0, P1, P2, P3, P4, P5);
	}
	template <typename T = void> T __Gen_Wrap_1199(uintptr_t P0, Il2CppVector3 P1, bool P2, bool P3) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, Il2CppVector3, bool, bool))(Il2CppBase() + 0x178E19C))(this, P0, P1, P2, P3);
	}
	template <typename T = void> T __Gen_Wrap_1200(uintptr_t P0, uintptr_t P1, uintptr_t P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x178E2F8))(this, P0, P1, P2);
	}
	template <typename T = void> T __Gen_Wrap_1201(uintptr_t P0, uintptr_t P1, bool P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, bool))(Il2CppBase() + 0x178E3E0))(this, P0, P1, P2);
	}
	template <typename T = void> T __Gen_Wrap_1202(uintptr_t P0, uintptr_t P1, Il2CppVector3 P2, uintptr_t P3, bool P4) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, Il2CppVector3, uintptr_t, bool))(Il2CppBase() + 0x178E4C8))(this, P0, P1, P2, P3, P4);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1203() {
		return ((T (*)(ILFixDynamicMethodWrapper*))(Il2CppBase() + 0x178E638))(this);
	}
	template <typename T = void> T __Gen_Wrap_1204(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x178E724))(this, P0, P1);
	}
	template <typename T = int32_t> T __Gen_Wrap_1205(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x178E7F8))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1206(Il2CppVector3 P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, Il2CppVector3))(Il2CppBase() + 0x178E8C8))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1207() {
		return ((T (*)(ILFixDynamicMethodWrapper*))(Il2CppBase() + 0x178E9F8))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T __Gen_Wrap_1208(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x178EAE4))(this, P0);
	}
	template <typename T = void> T __Gen_Wrap_1209(uintptr_t P0, uintptr_t P1, float P2, bool P3, uintptr_t P4) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, float, bool, uintptr_t))(Il2CppBase() + 0x178EBE0))(this, P0, P1, P2, P3, P4);
	}
	template <typename T = int32_t> T __Gen_Wrap_1210(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x178ED00))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1211() {
		return ((T (*)(ILFixDynamicMethodWrapper*))(Il2CppBase() + 0x178EDD0))(this);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1212(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x178EEBC))(this, P0, P1);
	}
	template <typename T = void> T __Gen_Wrap_1213(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x178EFDC))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1214(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x178F09C))(this, P0);
	}
	template <typename T = int32_t> T __Gen_Wrap_1215(int32_t P0, int32_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, int32_t, int32_t))(Il2CppBase() + 0x178F198))(this, P0, P1);
	}
	template <typename T = void> T __Gen_Wrap_1216(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x178F27C))(this, P0);
	}
	template <typename T = void> T __Gen_Wrap_1217(Il2CppString* P0, Il2CppString* P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x178F378))(this, P0, P1);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T __Gen_Wrap_1218() {
		return ((T (*)(ILFixDynamicMethodWrapper*))(Il2CppBase() + 0x178F44C))(this);
	}
	template <typename T = Il2CppString*> T __Gen_Wrap_1219(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x178F538))(this, P0);
	}
	template <typename T = void*> T __Gen_Wrap_1220(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x178F634))(this, P0);
	}
	template <typename T = bool> T __Gen_Wrap_1221(uintptr_t P0, bool P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, bool))(Il2CppBase() + 0x178F730))(this, P0, P1);
	}
	template <typename T = char> T __Gen_Wrap_1222(Il2CppString* P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, Il2CppString*))(Il2CppBase() + 0x178F818))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1223() {
		return ((T (*)(ILFixDynamicMethodWrapper*))(Il2CppBase() + 0x178F8E8))(this);
	}
	template <typename T = void> T __Gen_Wrap_1224(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x178F9D4))(this, P0, P1);
	}
	template <typename T = void> T __Gen_Wrap_1225(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x178FAA8))(this, P0, P1);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1226() {
		return ((T (*)(ILFixDynamicMethodWrapper*))(Il2CppBase() + 0x178FB7C))(this);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1227() {
		return ((T (*)(ILFixDynamicMethodWrapper*))(Il2CppBase() + 0x178FC68))(this);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1228() {
		return ((T (*)(ILFixDynamicMethodWrapper*))(Il2CppBase() + 0x178FD54))(this);
	}
	template <typename T = Il2CppVector3> T __Gen_Wrap_1229(uintptr_t P0, uintptr_t P1, int32_t P2, int32_t P3) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, int32_t, int32_t))(Il2CppBase() + 0x178FE40))(this, P0, P1, P2, P3);
	}
	template <typename T = bool> T __Gen_Wrap_1230(uintptr_t P0, uintptr_t P1, int32_t P2, uintptr_t* P3, uintptr_t* P4) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, int32_t, uintptr_t*, uintptr_t*))(Il2CppBase() + 0x178FF80))(this, P0, P1, P2, P3, P4);
	}
	template <typename T = bool> T __Gen_Wrap_1231(uintptr_t P0, uintptr_t P1, int32_t P2, int32_t P3, uintptr_t* P4) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, int32_t, int32_t, uintptr_t*))(Il2CppBase() + 0x17900F4))(this, P0, P1, P2, P3, P4);
	}
	template <typename T = void> T __Gen_Wrap_1232(uintptr_t P0, uintptr_t P1, uintptr_t P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x1790278))(this, P0, P1, P2);
	}
	template <typename T = Il2CppVector3> T __Gen_Wrap_1233(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x17903D4))(this, P0, P1);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1234(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x17904E4))(this, P0, P1);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1235(uintptr_t P0, Il2CppVector3 P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, Il2CppVector3))(Il2CppBase() + 0x17905F4))(this, P0, P1);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1236(Il2CppVector3 P0, uintptr_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, Il2CppVector3, uintptr_t))(Il2CppBase() + 0x1790738))(this, P0, P1);
	}
	template <typename T = void> T __Gen_Wrap_1237(uintptr_t P0, Il2CppVector3 P1, int32_t P2, int32_t P3, bool P4, uintptr_t P5) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, Il2CppVector3, int32_t, int32_t, bool, uintptr_t))(Il2CppBase() + 0x1790874))(this, P0, P1, P2, P3, P4, P5);
	}
	template <typename T = void> T __Gen_Wrap_1238(uintptr_t P0, uintptr_t* P1, uintptr_t* P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t*, uintptr_t*))(Il2CppBase() + 0x1790A00))(this, P0, P1, P2);
	}
	template <typename T = bool> T __Gen_Wrap_1239(uintptr_t P0, uintptr_t P1, uintptr_t* P2, uintptr_t* P3, uintptr_t* P4) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, uintptr_t*, uintptr_t*, uintptr_t*))(Il2CppBase() + 0x1790B38))(this, P0, P1, P2, P3, P4);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1240(uintptr_t P0, uintptr_t P1, uintptr_t P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x1790D08))(this, P0, P1, P2);
	}
	template <typename T = void> T __Gen_Wrap_1241(uintptr_t P0, Il2CppVector3 P1, float P2, float P3) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, Il2CppVector3, float, float))(Il2CppBase() + 0x1790E34))(this, P0, P1, P2, P3);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1242() {
		return ((T (*)(ILFixDynamicMethodWrapper*))(Il2CppBase() + 0x1790F90))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T __Gen_Wrap_1243(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x179107C))(this, P0);
	}
	template <typename T = void> T __Gen_Wrap_1244(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x1791178))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1245(uintptr_t P0, int32_t P1, int32_t P2, int32_t P3) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, int32_t, int32_t, int32_t))(Il2CppBase() + 0x1791238))(this, P0, P1, P2, P3);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1246(uintptr_t P0, uintptr_t P1, int32_t P2, int32_t P3) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, int32_t, int32_t))(Il2CppBase() + 0x1791378))(this, P0, P1, P2, P3);
	}
	template <typename T = void> T __Gen_Wrap_1247(uintptr_t P0, int32_t P1, int32_t P2, uintptr_t P3, float P4) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, int32_t, int32_t, uintptr_t, float))(Il2CppBase() + 0x17914B8))(this, P0, P1, P2, P3, P4);
	}
	template <typename T = Il2CppList<Il2CppString*>*> T __Gen_Wrap_1248() {
		return ((T (*)(ILFixDynamicMethodWrapper*))(Il2CppBase() + 0x17915D8))(this);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1249() {
		return ((T (*)(ILFixDynamicMethodWrapper*))(Il2CppBase() + 0x17916C4))(this);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1250(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x17917B0))(this, P0, P1);
	}
	template <typename T = void> T __Gen_Wrap_1251(uintptr_t P0, uintptr_t P1, uintptr_t P2, uintptr_t P3, uintptr_t P4, uintptr_t P5, uintptr_t P6) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x17918C0))(this, P0, P1, P2, P3, P4, P5, P6);
	}
	template <typename T = void> T __Gen_Wrap_1252(uintptr_t P0, uintptr_t P1, Il2CppVector2 P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, Il2CppVector2))(Il2CppBase() + 0x1791A08))(this, P0, P1, P2);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1253(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x1791B38))(this, P0);
	}
	template <typename T = Il2CppList<uintptr_t>*> T __Gen_Wrap_1254(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1791C34))(this, P0, P1);
	}
	template <typename T = int32_t> T __Gen_Wrap_1255(uintptr_t P0, uintptr_t P1, uintptr_t P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x1791D44))(this, P0, P1, P2);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1256(uintptr_t P0, uintptr_t P1, uintptr_t P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x1791E3C))(this, P0, P1, P2);
	}
	template <typename T = int32_t> T __Gen_Wrap_1257(uintptr_t P0, int32_t P1, int32_t P2, uintptr_t P3) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, int32_t, int32_t, uintptr_t))(Il2CppBase() + 0x1791F68))(this, P0, P1, P2, P3);
	}
	template <typename T = Il2CppList<Il2CppVector2>*> T __Gen_Wrap_1258(Il2CppVector2 P0, uintptr_t P1, Il2CppVector2 P2, uintptr_t P3, int32_t P4) {
		return ((T (*)(ILFixDynamicMethodWrapper*, Il2CppVector2, uintptr_t, Il2CppVector2, uintptr_t, int32_t))(Il2CppBase() + 0x179207C))(this, P0, P1, P2, P3, P4);
	}
	template <typename T = Il2CppVector2> T __Gen_Wrap_1259(uintptr_t P0, uintptr_t* P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t*))(Il2CppBase() + 0x1792238))(this, P0, P1);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1260(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x1792370))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1261(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x179246C))(this, P0);
	}
	template <typename T = Il2CppList<Il2CppVector2>*> T __Gen_Wrap_1262(uintptr_t P0, uintptr_t P1, Il2CppVector2 P2, int32_t P3) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, Il2CppVector2, int32_t))(Il2CppBase() + 0x1792568))(this, P0, P1, P2, P3);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1263(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x17926E4))(this, P0, P1);
	}
	template <typename T = int32_t> T __Gen_Wrap_1264(uintptr_t P0, uintptr_t P1, int32_t P2, int32_t P3) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, int32_t, int32_t))(Il2CppBase() + 0x17927F4))(this, P0, P1, P2, P3);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1265(uintptr_t P0, uintptr_t P1, int32_t P2, int32_t P3) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, int32_t, int32_t))(Il2CppBase() + 0x1792908))(this, P0, P1, P2, P3);
	}
	template <typename T = int32_t> T __Gen_Wrap_1266(Il2CppRect P0, Il2CppRect P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, Il2CppRect, Il2CppRect))(Il2CppBase() + 0x1792A1C))(this, P0, P1);
	}
	template <typename T = int32_t> T __Gen_Wrap_1267(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1792B90))(this, P0, P1);
	}
	template <typename T = int32_t> T __Gen_Wrap_1268(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x1792C74))(this, P0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T __Gen_Wrap_1269(uintptr_t P0, int32_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, int32_t))(Il2CppBase() + 0x1792DC8))(this, P0, P1);
	}
	template <typename T = void> T __Gen_Wrap_1270(uintptr_t P0, uintptr_t P1, uintptr_t P2, int32_t P3, uintptr_t P4) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, uintptr_t, int32_t, uintptr_t))(Il2CppBase() + 0x1792ED8))(this, P0, P1, P2, P3, P4);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1271() {
		return ((T (*)(ILFixDynamicMethodWrapper*))(Il2CppBase() + 0x1792FF0))(this);
	}
	template <typename T = void> T __Gen_Wrap_1272(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17930DC))(this, P0);
	}
	template <typename T = uint64_t> T __Gen_Wrap_1273(uintptr_t P0, uintptr_t P1, uintptr_t P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x179319C))(this, P0, P1, P2);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1274(int32_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, int32_t))(Il2CppBase() + 0x1793294))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1275() {
		return ((T (*)(ILFixDynamicMethodWrapper*))(Il2CppBase() + 0x1793390))(this);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1276(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x179347C))(this, P0);
	}
	template <typename T = void> T __Gen_Wrap_1277(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x1793578))(this, P0);
	}
	template <typename T = void> T __Gen_Wrap_1278(uintptr_t P0, uintptr_t P1, uint16_t P2, uintptr_t P3) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, uint16_t, uintptr_t))(Il2CppBase() + 0x1793638))(this, P0, P1, P2, P3);
	}
	template <typename T = void> T __Gen_Wrap_1279(uintptr_t P0, uintptr_t P1, uintptr_t P2, uintptr_t P3) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x179373C))(this, P0, P1, P2, P3);
	}
	template <typename T = void> T __Gen_Wrap_1280(uintptr_t P0, uintptr_t P1, uint16_t P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, uint16_t))(Il2CppBase() + 0x1793840))(this, P0, P1, P2);
	}
	template <typename T = void> T __Gen_Wrap_1281(uintptr_t P0, uintptr_t P1, uintptr_t P2, uint32_t P3) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, uintptr_t, uint32_t))(Il2CppBase() + 0x1793928))(this, P0, P1, P2, P3);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1282(uintptr_t P0, uintptr_t P1, uintptr_t P2, uint32_t P3) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, uintptr_t, uint32_t))(Il2CppBase() + 0x1793A2C))(this, P0, P1, P2, P3);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1283(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x1793B6C))(this, P0);
	}
	template <typename T = void> T __Gen_Wrap_1284(uintptr_t P0, uintptr_t P1, int32_t P2, int32_t P3, float P4) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, int32_t, int32_t, float))(Il2CppBase() + 0x1793C68))(this, P0, P1, P2, P3, P4);
	}
	template <typename T = void> T __Gen_Wrap_1285(uintptr_t P0, uintptr_t P1, int32_t P2, uintptr_t P3, bool P4, bool P5) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, int32_t, uintptr_t, bool, bool))(Il2CppBase() + 0x1793D88))(this, P0, P1, P2, P3, P4, P5);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1286(uintptr_t P0, int32_t P1, int32_t P2, float P3) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, int32_t, int32_t, float))(Il2CppBase() + 0x1793EBC))(this, P0, P1, P2, P3);
	}
	template <typename T = void> T __Gen_Wrap_1287(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1794004))(this, P0, P1);
	}
	template <typename T = void*> T __Gen_Wrap_1288(uintptr_t P0, uintptr_t P1, int32_t P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x17940D8))(this, P0, P1, P2);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1289(uintptr_t P0, int32_t P1, bool P2, uintptr_t P3) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, int32_t, bool, uintptr_t))(Il2CppBase() + 0x1794204))(this, P0, P1, P2, P3);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1290() {
		return ((T (*)(ILFixDynamicMethodWrapper*))(Il2CppBase() + 0x1794344))(this);
	}
	template <typename T = void> T __Gen_Wrap_1291(uintptr_t P0, uintptr_t P1, uintptr_t P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x1794404))(this, P0, P1, P2);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T __Gen_Wrap_1292(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17944EC))(this, P0);
	}
	template <typename T = void> T __Gen_Wrap_1293(uintptr_t P0, int32_t P1, uintptr_t P2, int32_t P3, int32_t P4, int32_t P5, bool P6) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, int32_t, uintptr_t, int32_t, int32_t, int32_t, bool))(Il2CppBase() + 0x17945E8))(this, P0, P1, P2, P3, P4, P5, P6);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1294() {
		return ((T (*)(ILFixDynamicMethodWrapper*))(Il2CppBase() + 0x1794730))(this);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1295(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x179481C))(this, P0, P1);
	}
	template <typename T = void> T __Gen_Wrap_1296(uintptr_t P0, bool P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, bool))(Il2CppBase() + 0x179492C))(this, P0, P1);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1297() {
		return ((T (*)(ILFixDynamicMethodWrapper*))(Il2CppBase() + 0x1794A00))(this);
	}
	template <typename T = void> T __Gen_Wrap_1298(uintptr_t P0, int32_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, int32_t))(Il2CppBase() + 0x1794AEC))(this, P0, P1);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1299() {
		return ((T (*)(ILFixDynamicMethodWrapper*))(Il2CppBase() + 0x1794BC0))(this);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1300() {
		return ((T (*)(ILFixDynamicMethodWrapper*))(Il2CppBase() + 0x1794CAC))(this);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1301(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x1794D98))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1302(uintptr_t P0, bool P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, bool))(Il2CppBase() + 0x1794E94))(this, P0, P1);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1303() {
		return ((T (*)(ILFixDynamicMethodWrapper*))(Il2CppBase() + 0x1794FA4))(this);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1304(uintptr_t P0, int32_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, int32_t))(Il2CppBase() + 0x1795090))(this, P0, P1);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1305(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17951A0))(this, P0);
	}
	template <typename T = void> T __Gen_Wrap_1306(uintptr_t P0, uintptr_t P1, uintptr_t P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x179529C))(this, P0, P1, P2);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1307() {
		return ((T (*)(ILFixDynamicMethodWrapper*))(Il2CppBase() + 0x1795384))(this);
	}
	template <typename T = bool> T __Gen_Wrap_1308(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1795470))(this, P0, P1);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1309(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x17955FC))(this, P0, P1);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1310(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x179573C))(this, P0, P1);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1311(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x17958DC))(this, P0, P1);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1312(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x1795A64))(this, P0);
	}
	template <typename T = void> T __Gen_Wrap_1313(uintptr_t P0, uintptr_t P1, uintptr_t P2, uintptr_t P3) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x1795BE0))(this, P0, P1, P2, P3);
	}
	template <typename T = void> T __Gen_Wrap_1314(uintptr_t P0, uintptr_t P1, uintptr_t P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x1795D20))(this, P0, P1, P2);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1315(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x1795E08))(this, P0);
	}
	template <typename T = Il2CppString*> T __Gen_Wrap_1316(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x1795F04))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1317(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x1796000))(this, P0);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, bool>*> T __Gen_Wrap_1318() {
		return ((T (*)(ILFixDynamicMethodWrapper*))(Il2CppBase() + 0x17960FC))(this);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, Il2CppString*>*> T __Gen_Wrap_1319() {
		return ((T (*)(ILFixDynamicMethodWrapper*))(Il2CppBase() + 0x17961E8))(this);
	}
	template <typename T = bool> T __Gen_Wrap_1320(uintptr_t P0, uintptr_t* P1, uintptr_t* P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t*, uintptr_t*))(Il2CppBase() + 0x17962D4))(this, P0, P1, P2);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1321(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x179644C))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1322(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1796548))(this, P0, P1);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1323() {
		return ((T (*)(ILFixDynamicMethodWrapper*))(Il2CppBase() + 0x1796658))(this);
	}
	template <typename T = void> T __Gen_Wrap_1324(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1796744))(this, P0, P1);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1325(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x1796818))(this, P0);
	}
	template <typename T = void> T __Gen_Wrap_1326(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17968E8))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1327(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17969A8))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1328(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1796A78))(this, P0, P1);
	}
	template <typename T = bool> T __Gen_Wrap_1329(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x1796B5C))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1330(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x1796C30))(this, P0);
	}
	template <typename T = void*> T __Gen_Wrap_1331(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1796D00))(this, P0, P1);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1332(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x1796E20))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1333(uintptr_t P0, uintptr_t P1, uintptr_t P2, uintptr_t P3, uintptr_t P4) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x1796EF0))(this, P0, P1, P2, P3, P4);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1334(uintptr_t P0, uintptr_t P1, uintptr_t P2, uintptr_t P3) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x179704C))(this, P0, P1, P2, P3);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1335(uintptr_t P0, uintptr_t P1, uintptr_t P2, uintptr_t P3) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x179718C))(this, P0, P1, P2, P3);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1336(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17972CC))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1337(uintptr_t P0, uintptr_t P1, uintptr_t P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x179739C))(this, P0, P1, P2);
	}
	template <typename T = void> T __Gen_Wrap_1338(uintptr_t P0, uint32_t P1, uint32_t P2, uintptr_t P3, uintptr_t P4) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uint32_t, uint32_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x17974C8))(this, P0, P1, P2, P3, P4);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1339(uintptr_t P0, uintptr_t P1, uintptr_t P2, uintptr_t P3, uintptr_t P4) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x17975E0))(this, P0, P1, P2, P3, P4);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1340(uintptr_t P0, uintptr_t P1, bool P2, uintptr_t P3) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, bool, uintptr_t))(Il2CppBase() + 0x179773C))(this, P0, P1, P2, P3);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1341(uintptr_t P0, uintptr_t P1, uintptr_t P2, uintptr_t P3, uintptr_t P4) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x179787C))(this, P0, P1, P2, P3, P4);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1342(uintptr_t P0, uintptr_t P1, uintptr_t P2, uintptr_t P3, uintptr_t P4) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x17979D8))(this, P0, P1, P2, P3, P4);
	}
	template <typename T = void*> T __Gen_Wrap_1343(uintptr_t P0, int32_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, int32_t))(Il2CppBase() + 0x1797B34))(this, P0, P1);
	}
	template <typename T = void*> T __Gen_Wrap_1344(uintptr_t P0, uintptr_t P1, uintptr_t P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x1797C44))(this, P0, P1, P2);
	}
	template <typename T = void*> T __Gen_Wrap_1345(uintptr_t P0, uintptr_t P1, uintptr_t P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x1797D70))(this, P0, P1, P2);
	}
	template <typename T = void*> T __Gen_Wrap_1346(uintptr_t P0, uintptr_t P1, uint16_t P2, uintptr_t P3, uintptr_t P4, int32_t P5) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, uint16_t, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x1797E9C))(this, P0, P1, P2, P3, P4, P5);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1347() {
		return ((T (*)(ILFixDynamicMethodWrapper*))(Il2CppBase() + 0x179800C))(this);
	}
	template <typename T = void> T __Gen_Wrap_1348(int64_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, int64_t))(Il2CppBase() + 0x17980CC))(this, P0);
	}
	template <typename T = void> T __Gen_Wrap_1349(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x179818C))(this, P0, P1);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1350() {
		return ((T (*)(ILFixDynamicMethodWrapper*))(Il2CppBase() + 0x1798260))(this);
	}
	template <typename T = void> T __Gen_Wrap_1351(uint32_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uint32_t))(Il2CppBase() + 0x179834C))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1352(uint32_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uint32_t))(Il2CppBase() + 0x179840C))(this, P0);
	}
	template <typename T = void> T __Gen_Wrap_1353(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x1798508))(this, P0);
	}
	template <typename T = void> T __Gen_Wrap_1354(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x17985C8))(this, P0, P1);
	}
	template <typename T = void> T __Gen_Wrap_1355(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x179869C))(this, P0, P1);
	}
	template <typename T = void> T __Gen_Wrap_1356(uintptr_t P0, int32_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, int32_t))(Il2CppBase() + 0x1798770))(this, P0, P1);
	}
	template <typename T = void> T __Gen_Wrap_1357(uint32_t P0, uintptr_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uint32_t, uintptr_t))(Il2CppBase() + 0x1798844))(this, P0, P1);
	}
	template <typename T = void> T __Gen_Wrap_1358(uintptr_t P0, uintptr_t P1, uintptr_t P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x1798918))(this, P0, P1, P2);
	}
	template <typename T = void> T __Gen_Wrap_1359(uintptr_t P0, uintptr_t P1, uintptr_t P2, uintptr_t P3, bool P4) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, uintptr_t, uintptr_t, bool))(Il2CppBase() + 0x1798A00))(this, P0, P1, P2, P3, P4);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1360(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1798B18))(this, P0, P1);
	}
	template <typename T = void> T __Gen_Wrap_1361(uintptr_t P0, uintptr_t P1, uintptr_t P2, Il2CppVector3 P3, uintptr_t P4) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, uintptr_t, Il2CppVector3, uintptr_t))(Il2CppBase() + 0x1798C28))(this, P0, P1, P2, P3, P4);
	}
	template <typename T = void> T __Gen_Wrap_1362(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1798DB8))(this, P0, P1);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1363(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x173D820))(this, P0);
	}
	template <typename T = void> T __Gen_Wrap_1364(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1798E8C))(this, P0, P1);
	}
	template <typename T = Il2CppList<void*>*> T __Gen_Wrap_1365(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x1798F60))(this, P0);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, void*>*> T __Gen_Wrap_1366(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x179905C))(this, P0);
	}
	template <typename T = Il2CppString*> T __Gen_Wrap_1367(uintptr_t P0, uintptr_t P1, uintptr_t P2, uintptr_t P3, uintptr_t P4) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x173D9F8))(this, P0, P1, P2, P3, P4);
	}
	template <typename T = bool> T __Gen_Wrap_1368(void* P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, void*))(Il2CppBase() + 0x1799158))(this, P0);
	}
	template <typename T = Il2CppString*> T __Gen_Wrap_1369(uintptr_t P0, uintptr_t P1, uintptr_t P2, uintptr_t P3, uintptr_t P4) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x1799270))(this, P0, P1, P2, P3, P4);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T __Gen_Wrap_1370(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17993CC))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1371(uintptr_t P0, int32_t P1, int32_t P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, int32_t, int32_t))(Il2CppBase() + 0x17994C8))(this, P0, P1, P2);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, uintptr_t>*> T __Gen_Wrap_1372(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x17995F4))(this, P0, P1);
	}
	template <typename T = Il2CppDictionary<uintptr_t, Il2CppString*>*> T __Gen_Wrap_1373(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x1799704))(this, P0);
	}
	template <typename T = Il2CppString*> T __Gen_Wrap_1374(uintptr_t P0, bool P1, int32_t P2, int64_t P3) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, bool, int32_t, int64_t))(Il2CppBase() + 0x1799800))(this, P0, P1, P2, P3);
	}
	template <typename T = Il2CppString*> T __Gen_Wrap_1375(uintptr_t P0, uintptr_t P1, bool P2, int64_t P3) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, bool, int64_t))(Il2CppBase() + 0x1799940))(this, P0, P1, P2, P3);
	}
	template <typename T = bool> T __Gen_Wrap_1376(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x1799A80))(this, P0);
	}
	template <typename T = bool> T __Gen_Wrap_1377(void* P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, void*))(Il2CppBase() + 0x1799B54))(this, P0);
	}
	template <typename T = void> T __Gen_Wrap_1378(uintptr_t P0, uintptr_t P1, int32_t P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x1799C68))(this, P0, P1, P2);
	}
	template <typename T = void> T __Gen_Wrap_1379(uintptr_t P0, uintptr_t P1, uintptr_t P2, Il2CppVector3 P3, uintptr_t P4, int32_t P5) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, uintptr_t, Il2CppVector3, uintptr_t, int32_t))(Il2CppBase() + 0x1799D50))(this, P0, P1, P2, P3, P4, P5);
	}
	template <typename T = Il2CppString*> T __Gen_Wrap_1380(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1799EDC))(this, P0, P1);
	}
	template <typename T = int64_t> T __Gen_Wrap_1381(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x179A00C))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1382(uintptr_t P0, bool P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, bool))(Il2CppBase() + 0x179A0DC))(this, P0, P1);
	}
	template <typename T = Il2CppString*> T __Gen_Wrap_1383(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x179A1C0))(this, P0, P1);
	}
	template <typename T = bool> T __Gen_Wrap_1384(uintptr_t P0, uintptr_t P1, bool P2, uintptr_t P3) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, bool, uintptr_t))(Il2CppBase() + 0x179A2F8))(this, P0, P1, P2, P3);
	}
	template <typename T = Il2CppString*> T __Gen_Wrap_1385(void* P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, void*))(Il2CppBase() + 0x179A410))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1386() {
		return ((T (*)(ILFixDynamicMethodWrapper*))(Il2CppBase() + 0x179A528))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T __Gen_Wrap_1387(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x179A614))(this, P0);
	}
	template <typename T = void*> T __Gen_Wrap_1388() {
		return ((T (*)(ILFixDynamicMethodWrapper*))(Il2CppBase() + 0x179A710))(this);
	}
	template <typename T = bool> T __Gen_Wrap_1389(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x179A7FC))(this, P0);
	}
	template <typename T = bool> T __Gen_Wrap_1390(uintptr_t P0, int64_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, int64_t))(Il2CppBase() + 0x179A8D0))(this, P0, P1);
	}
	template <typename T = int64_t> T __Gen_Wrap_1391(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x179A9B8))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1392(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x179AA88))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1393(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x179AB58))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1394(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x179AC54))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1395() {
		return ((T (*)(ILFixDynamicMethodWrapper*))(Il2CppBase() + 0x179AD58))(this);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1396(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x179AE44))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1397(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x179AF40))(this, P0);
	}
	template <typename T = bool> T __Gen_Wrap_1398(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x179B03C))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1399(uintptr_t P0, uintptr_t P1, uintptr_t* P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, uintptr_t*))(Il2CppBase() + 0x179B110))(this, P0, P1, P2);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1400() {
		return ((T (*)(ILFixDynamicMethodWrapper*))(Il2CppBase() + 0x179B260))(this);
	}
	template <typename T = void> T __Gen_Wrap_1401(uintptr_t P0, int32_t P1, uintptr_t P2, uintptr_t P3) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, int32_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x179B34C))(this, P0, P1, P2, P3);
	}
	template <typename T = void> T __Gen_Wrap_1402(uintptr_t P0, uintptr_t P1, uintptr_t P2, uintptr_t P3) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x179B450))(this, P0, P1, P2, P3);
	}
	template <typename T = void> T __Gen_Wrap_1403(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x179B554))(this, P0, P1);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1404(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x179B628))(this, P0, P1);
	}
	template <typename T = void> T __Gen_Wrap_1405(uintptr_t P0, uintptr_t P1, uintptr_t P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x179B70C))(this, P0, P1, P2);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1406(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x179B7F4))(this, P0, P1);
	}
	template <typename T = bool> T __Gen_Wrap_1407(uintptr_t P0, uintptr_t P1, int32_t P2, int32_t P3, uintptr_t* P4) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, int32_t, int32_t, uintptr_t*))(Il2CppBase() + 0x179B904))(this, P0, P1, P2, P3, P4);
	}
	template <typename T = void> T __Gen_Wrap_1408(uintptr_t P0, uintptr_t P1, uintptr_t P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x179BA88))(this, P0, P1, P2);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1409(uintptr_t P0, Il2CppVector2 P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, Il2CppVector2))(Il2CppBase() + 0x179BBE4))(this, P0, P1);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1410(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x179BD10))(this, P0);
	}
	template <typename T = void> T __Gen_Wrap_1411(uintptr_t P0, uintptr_t P1, int32_t P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x179BE0C))(this, P0, P1, P2);
	}
	template <typename T = void> T __Gen_Wrap_1412(uintptr_t P0, uintptr_t P1, uintptr_t P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x179BF38))(this, P0, P1, P2);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1413(uintptr_t P0, int32_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, int32_t))(Il2CppBase() + 0x179C064))(this, P0, P1);
	}
	template <typename T = void> T __Gen_Wrap_1414(uintptr_t P0, bool P1, uintptr_t P2, uintptr_t P3) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, bool, uintptr_t, uintptr_t))(Il2CppBase() + 0x179C174))(this, P0, P1, P2, P3);
	}
	template <typename T = void> T __Gen_Wrap_1415(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x179C2B4))(this, P0, P1);
	}
	template <typename T = void> T __Gen_Wrap_1416(uintptr_t P0, uintptr_t P1, uintptr_t P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x179C3D0))(this, P0, P1, P2);
	}
	template <typename T = void> T __Gen_Wrap_1417(uintptr_t P0, int32_t P1, int32_t P2, float P3, uintptr_t P4, uintptr_t P5, uintptr_t P6) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, int32_t, int32_t, float, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x179C4B8))(this, P0, P1, P2, P3, P4, P5, P6);
	}
	template <typename T = void> T __Gen_Wrap_1418(uintptr_t P0, Il2CppVector3 P1, int32_t P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, Il2CppVector3, int32_t))(Il2CppBase() + 0x179C608))(this, P0, P1, P2);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1419(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x179C748))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1420(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x179C844))(this, P0);
	}
	template <typename T = int32_t> T __Gen_Wrap_1421(int32_t P0, int32_t P1, int32_t P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, int32_t, int32_t, int32_t))(Il2CppBase() + 0x179C940))(this, P0, P1, P2);
	}
	template <typename T = void> T __Gen_Wrap_1422(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x179CA38))(this, P0, P1);
	}
	template <typename T = void> T __Gen_Wrap_1423(uintptr_t P0, float P1, float P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, float, float))(Il2CppBase() + 0x179CB5C))(this, P0, P1, P2);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1424(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x179CC70))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1425(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x179CD40))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1426(uintptr_t P0, int32_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, int32_t))(Il2CppBase() + 0x179CE3C))(this, P0, P1);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1427(uintptr_t P0, int32_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, int32_t))(Il2CppBase() + 0x179CF4C))(this, P0, P1);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1428(uintptr_t P0, int32_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, int32_t))(Il2CppBase() + 0x179D05C))(this, P0, P1);
	}
	template <typename T = void> T __Gen_Wrap_1429(uintptr_t P0, int32_t P1, Il2CppVector3 P2, int32_t P3, float P4) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, int32_t, Il2CppVector3, int32_t, float))(Il2CppBase() + 0x179D16C))(this, P0, P1, P2, P3, P4);
	}
	template <typename T = Il2CppRect> T __Gen_Wrap_1430(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x179D2DC))(this, P0);
	}
	template <typename T = void> T __Gen_Wrap_1431(uintptr_t P0, Il2CppRect P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, Il2CppRect))(Il2CppBase() + 0x179D3D8))(this, P0, P1);
	}
	template <typename T = void> T __Gen_Wrap_1432(uintptr_t P0, bool P1, uintptr_t P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, bool, uintptr_t))(Il2CppBase() + 0x179D50C))(this, P0, P1, P2);
	}
	template <typename T = void> T __Gen_Wrap_1433(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x179D680))(this, P0, P1);
	}
	template <typename T = void> T __Gen_Wrap_1434(uintptr_t P0, uintptr_t P1, int32_t P2, int32_t P3, bool P4) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, int32_t, int32_t, bool))(Il2CppBase() + 0x179D798))(this, P0, P1, P2, P3, P4);
	}
	template <typename T = void> T __Gen_Wrap_1435(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x179D8FC))(this, P0, P1);
	}
	template <typename T = void> T __Gen_Wrap_1436(uintptr_t P0, int32_t P1, uintptr_t P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, int32_t, uintptr_t))(Il2CppBase() + 0x179DA54))(this, P0, P1, P2);
	}
	template <typename T = int32_t> T __Gen_Wrap_1437(void* P0, void* P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, void*, void*))(Il2CppBase() + 0x179DB88))(this, P0, P1);
	}
	template <typename T = void> T __Gen_Wrap_1438(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x179DCC8))(this, P0, P1);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1439(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x179DD9C))(this, P0, P1);
	}
	template <typename T = bool> T __Gen_Wrap_1440(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x179DEAC))(this, P0, P1);
	}
	template <typename T = bool> T __Gen_Wrap_1441(int32_t P0, uintptr_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, int32_t, uintptr_t))(Il2CppBase() + 0x179DF94))(this, P0, P1);
	}
	template <typename T = int32_t> T __Gen_Wrap_1442(int32_t P0, uintptr_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, int32_t, uintptr_t))(Il2CppBase() + 0x179E07C))(this, P0, P1);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1443(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x179E160))(this, P0, P1);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1444(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x179E270))(this, P0);
	}
	template <typename T = Il2CppString*> T __Gen_Wrap_1445(float P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, float))(Il2CppBase() + 0x179E36C))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1446(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x179E470))(this, P0);
	}
	template <typename T = Il2CppString*> T __Gen_Wrap_1447(uintptr_t P0, int32_t P1, int32_t P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, int32_t, int32_t))(Il2CppBase() + 0x179E56C))(this, P0, P1, P2);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1448() {
		return ((T (*)(ILFixDynamicMethodWrapper*))(Il2CppBase() + 0x179E698))(this);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1449(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x179E784))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1450(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x179E880))(this, P0, P1);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1451(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x179E990))(this, P0, P1);
	}
	template <typename T = void> T __Gen_Wrap_1452(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x179EAA0))(this, P0, P1);
	}
	template <typename T = bool> T __Gen_Wrap_1453(int32_t P0, bool P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, int32_t, bool))(Il2CppBase() + 0x179EBBC))(this, P0, P1);
	}
	template <typename T = bool> T __Gen_Wrap_1454(uintptr_t P0, bool P1, bool P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, bool, bool))(Il2CppBase() + 0x179ECA4))(this, P0, P1, P2);
	}
	template <typename T = void> T __Gen_Wrap_1455(uintptr_t P0, uintptr_t P1, float P2, float P3, int32_t P4) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, float, float, int32_t))(Il2CppBase() + 0x179EDA0))(this, P0, P1, P2, P3, P4);
	}
	template <typename T = void> T __Gen_Wrap_1456(uintptr_t P0, Il2CppVector3 P1, uintptr_t P2, uintptr_t P3) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, Il2CppVector3, uintptr_t, uintptr_t))(Il2CppBase() + 0x179EEB8))(this, P0, P1, P2, P3);
	}
	template <typename T = Il2CppString*> T __Gen_Wrap_1457(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x179F014))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1458(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x179F110))(this, P0, P1);
	}
	template <typename T = void> T __Gen_Wrap_1459(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x179F220))(this, P0, P1);
	}
	template <typename T = void> T __Gen_Wrap_1460(uintptr_t P0, uintptr_t P1, uintptr_t P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x179F2F4))(this, P0, P1, P2);
	}
	template <typename T = void> T __Gen_Wrap_1461(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x179F3DC))(this, P0, P1);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T __Gen_Wrap_1462(uintptr_t P0, int32_t P1, int32_t P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, int32_t, int32_t))(Il2CppBase() + 0x179F4B0))(this, P0, P1, P2);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T __Gen_Wrap_1463(uintptr_t P0, int32_t P1, uintptr_t P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, int32_t, uintptr_t))(Il2CppBase() + 0x179F5DC))(this, P0, P1, P2);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1464(uintptr_t P0, float P1, float P2, float P3) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, float, float, float))(Il2CppBase() + 0x179F708))(this, P0, P1, P2, P3);
	}
	template <typename T = Il2CppString*> T __Gen_Wrap_1465(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x179F850))(this, P0, P1);
	}
	template <typename T = void> T __Gen_Wrap_1466(uintptr_t P0, void* P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, void*))(Il2CppBase() + 0x179F960))(this, P0, P1);
	}
	template <typename T = void> T __Gen_Wrap_1467(void* P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, void*))(Il2CppBase() + 0x179FA80))(this, P0);
	}
	template <typename T = void> T __Gen_Wrap_1468(uintptr_t P0, uintptr_t P1, uintptr_t P2, uintptr_t P3, bool P4) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, uintptr_t, uintptr_t, bool))(Il2CppBase() + 0x179FB8C))(this, P0, P1, P2, P3, P4);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1469(uintptr_t P0, int32_t P1, int32_t P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, int32_t, int32_t))(Il2CppBase() + 0x179FCF0))(this, P0, P1, P2);
	}
	template <typename T = void> T __Gen_Wrap_1470(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x179FE1C))(this, P0);
	}
	template <typename T = void> T __Gen_Wrap_1471(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x179FF20))(this, P0);
	}
	template <typename T = bool> T __Gen_Wrap_1472(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x179FFE0))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1473(uintptr_t P0, uintptr_t P1, uintptr_t P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x17A00B4))(this, P0, P1, P2);
	}
	template <typename T = int32_t> T __Gen_Wrap_1474(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x17A01E0))(this, P0, P1);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1475(uintptr_t P0, int32_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, int32_t))(Il2CppBase() + 0x17A0328))(this, P0, P1);
	}
	template <typename T = bool> T __Gen_Wrap_1476(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17A0438))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1477(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x17A050C))(this, P0, P1);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1478(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17A061C))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1479(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17A0718))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1480(uintptr_t P0, int32_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, int32_t))(Il2CppBase() + 0x17A0814))(this, P0, P1);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1481(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17A0924))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1482(uintptr_t P0, bool P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, bool))(Il2CppBase() + 0x17A0A20))(this, P0, P1);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1483() {
		return ((T (*)(ILFixDynamicMethodWrapper*))(Il2CppBase() + 0x17A0B30))(this);
	}
	template <typename T = bool> T __Gen_Wrap_1484(void* P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, void*))(Il2CppBase() + 0x17A0C1C))(this, P0);
	}
	template <typename T = void> T __Gen_Wrap_1485(uintptr_t P0, uintptr_t P1, uintptr_t P2, bool P3) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, uintptr_t, bool))(Il2CppBase() + 0x17A0CF0))(this, P0, P1, P2, P3);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1486(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17A0E38))(this, P0);
	}
	template <typename T = bool> T __Gen_Wrap_1487(void* P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, void*))(Il2CppBase() + 0x17A0F34))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1488(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x17A1008))(this, P0, P1);
	}
	template <typename T = Il2CppDictionary<uintptr_t, void*>*> T __Gen_Wrap_1489(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17A1118))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1490(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x17A1214))(this, P0, P1);
	}
	template <typename T = void> T __Gen_Wrap_1491(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x17A1384))(this, P0, P1);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1492(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17A1458))(this, P0);
	}
	template <typename T = Il2CppList<Il2CppString*>*> T __Gen_Wrap_1493(uintptr_t P0, bool P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, bool))(Il2CppBase() + 0x17A1554))(this, P0, P1);
	}
	template <typename T = Il2CppList<Il2CppString*>*> T __Gen_Wrap_1494(bool P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, bool))(Il2CppBase() + 0x17A1664))(this, P0);
	}
	template <typename T = void> T __Gen_Wrap_1495(uintptr_t P0, uintptr_t P1, uintptr_t P2, uintptr_t P3, bool P4) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, uintptr_t, uintptr_t, bool))(Il2CppBase() + 0x17A1760))(this, P0, P1, P2, P3, P4);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1496(uintptr_t P0, uintptr_t P1, uintptr_t P2, uintptr_t P3) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x17A18CC))(this, P0, P1, P2, P3);
	}
	template <typename T = void> T __Gen_Wrap_1497(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x17A1A0C))(this, P0, P1);
	}
	template <typename T = void> T __Gen_Wrap_1498(uintptr_t P0, uintptr_t P1, uintptr_t P2, uintptr_t P3) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x17A1AE0))(this, P0, P1, P2, P3);
	}
	template <typename T = void> T __Gen_Wrap_1499(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x17A1C30))(this, P0, P1);
	}
	template <typename T = void*> T __Gen_Wrap_1500(uintptr_t P0, bool P1, uintptr_t P2, bool P3) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, bool, uintptr_t, bool))(Il2CppBase() + 0x17A1D04))(this, P0, P1, P2, P3);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1501(uintptr_t P0, bool P1, uintptr_t P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, bool, uintptr_t))(Il2CppBase() + 0x17A1E44))(this, P0, P1, P2);
	}
	template <typename T = void*> T __Gen_Wrap_1502(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x17A1F70))(this, P0, P1);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1503(uintptr_t P0, bool P1, bool P2, bool P3) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, bool, bool, bool))(Il2CppBase() + 0x17A2080))(this, P0, P1, P2, P3);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1504() {
		return ((T (*)(ILFixDynamicMethodWrapper*))(Il2CppBase() + 0x17A21C0))(this);
	}
	template <typename T = void> T __Gen_Wrap_1505(uintptr_t P0, Il2CppString* P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, Il2CppString*))(Il2CppBase() + 0x17A22AC))(this, P0, P1);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1506(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x17A2380))(this, P0, P1);
	}
	template <typename T = int32_t> T __Gen_Wrap_1507(uintptr_t P0, void* P1, void* P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, void*, void*))(Il2CppBase() + 0x17A2490))(this, P0, P1, P2);
	}
	template <typename T = bool> T __Gen_Wrap_1508(void* P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, void*))(Il2CppBase() + 0x17A25DC))(this, P0);
	}
	template <typename T = Il2CppString*> T __Gen_Wrap_1509(void* P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, void*))(Il2CppBase() + 0x17A26F0))(this, P0);
	}
	template <typename T = bool> T __Gen_Wrap_1510(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17A2808))(this, P0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T __Gen_Wrap_1511() {
		return ((T (*)(ILFixDynamicMethodWrapper*))(Il2CppBase() + 0x17A28DC))(this);
	}
	template <typename T = Il2CppString*> T __Gen_Wrap_1512(uintptr_t P0, uintptr_t P1, uintptr_t P2, int32_t P3) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x17A29C8))(this, P0, P1, P2, P3);
	}
	template <typename T = bool> T __Gen_Wrap_1513(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x17A2B08))(this, P0, P1);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1514(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17A2BF0))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1515(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17A2CEC))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1516(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17A2DE8))(this, P0);
	}
	template <typename T = void*> T __Gen_Wrap_1517(int32_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, int32_t))(Il2CppBase() + 0x17A2EE4))(this, P0);
	}
	template <typename T = void*> T __Gen_Wrap_1518() {
		return ((T (*)(ILFixDynamicMethodWrapper*))(Il2CppBase() + 0x17A2FE0))(this);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1519() {
		return ((T (*)(ILFixDynamicMethodWrapper*))(Il2CppBase() + 0x17A30CC))(this);
	}
	template <typename T = void> T __Gen_Wrap_1520(void* P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, void*))(Il2CppBase() + 0x17A31B8))(this, P0);
	}
	template <typename T = void> T __Gen_Wrap_1521(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17A32B8))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1522(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x17A3378))(this, P0, P1);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1523(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17A3488))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1524(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17A3584))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1525(uintptr_t P0, uintptr_t P1, int32_t P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x17A3680))(this, P0, P1, P2);
	}
	template <typename T = bool> T __Gen_Wrap_1526(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17A37AC))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1527() {
		return ((T (*)(ILFixDynamicMethodWrapper*))(Il2CppBase() + 0x17A3880))(this);
	}
	template <typename T = bool> T __Gen_Wrap_1528(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17A396C))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1529() {
		return ((T (*)(ILFixDynamicMethodWrapper*))(Il2CppBase() + 0x17A3A40))(this);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1530(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17A3B00))(this, P0);
	}
	template <typename T = void> T __Gen_Wrap_1531(uintptr_t P0, uintptr_t P1, uintptr_t P2, uintptr_t P3) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x17A3BFC))(this, P0, P1, P2, P3);
	}
	template <typename T = Il2CppVector3> T __Gen_Wrap_1532(uintptr_t P0, float P1, float P2, int32_t P3) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, float, float, int32_t))(Il2CppBase() + 0x17A3D00))(this, P0, P1, P2, P3);
	}
	template <typename T = bool> T __Gen_Wrap_1533(uintptr_t P0, float P1, Il2CppVector2 P2, uintptr_t* P3) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, float, Il2CppVector2, uintptr_t*))(Il2CppBase() + 0x17A3E40))(this, P0, P1, P2, P3);
	}
	template <typename T = bool> T __Gen_Wrap_1534(uintptr_t P0, uintptr_t* P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t*))(Il2CppBase() + 0x17A3FCC))(this, P0, P1);
	}
	template <typename T = bool> T __Gen_Wrap_1535(uintptr_t* P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t*))(Il2CppBase() + 0x17A40D8))(this, P0);
	}
	template <typename T = bool> T __Gen_Wrap_1536(uintptr_t P0, uintptr_t* P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t*))(Il2CppBase() + 0x17A41D0))(this, P0, P1);
	}
	template <typename T = void> T __Gen_Wrap_1537(bool P0, float P1, uintptr_t P2, uintptr_t P3) {
		return ((T (*)(ILFixDynamicMethodWrapper*, bool, float, uintptr_t, uintptr_t))(Il2CppBase() + 0x17A42DC))(this, P0, P1, P2, P3);
	}
	template <typename T = void> T __Gen_Wrap_1538(int32_t P0, uintptr_t P1, uintptr_t P2, uintptr_t P3, uintptr_t P4) {
		return ((T (*)(ILFixDynamicMethodWrapper*, int32_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x17A43E0))(this, P0, P1, P2, P3, P4);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, uintptr_t>*> T __Gen_Wrap_1539(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17A44F8))(this, P0);
	}
	template <typename T = bool> T __Gen_Wrap_1540(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17A45F4))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1541(int32_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, int32_t))(Il2CppBase() + 0x17A46C8))(this, P0);
	}
	template <typename T = int32_t> T __Gen_Wrap_1542(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17A47C4))(this, P0);
	}
	template <typename T = bool> T __Gen_Wrap_1543(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17A48D0))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1544(uintptr_t P0, uintptr_t* P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t*))(Il2CppBase() + 0x17A49E0))(this, P0, P1);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1545(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17A4B24))(this, P0);
	}
	template <typename T = Il2CppVector2> T __Gen_Wrap_1546(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17A4C40))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1547() {
		return ((T (*)(ILFixDynamicMethodWrapper*))(Il2CppBase() + 0x17A4D54))(this);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1548(uintptr_t P0, int32_t P1, Il2CppVector3 P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, int32_t, Il2CppVector3))(Il2CppBase() + 0x17A4E40))(this, P0, P1, P2);
	}
	template <typename T = Il2CppDictionary<uintptr_t, int32_t>*> T __Gen_Wrap_1549(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x17A4F98))(this, P0, P1);
	}
	template <typename T = Il2CppVector2> T __Gen_Wrap_1550(uintptr_t P0, float P1, Il2CppVector2 P2, Il2CppVector2 P3, Il2CppVector2 P4, Il2CppVector2 P5) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, float, Il2CppVector2, Il2CppVector2, Il2CppVector2, Il2CppVector2))(Il2CppBase() + 0x17A50A8))(this, P0, P1, P2, P3, P4, P5);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T __Gen_Wrap_1551(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x17A5280))(this, P0, P1);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1552(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17A5390))(this, P0);
	}
	template <typename T = float> T __Gen_Wrap_1553(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x17A548C))(this, P0, P1);
	}
	template <typename T = void> T __Gen_Wrap_1554(uintptr_t P0, uintptr_t P1, float P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, float))(Il2CppBase() + 0x17A5570))(this, P0, P1, P2);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1555(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x17A5660))(this, P0, P1);
	}
	template <typename T = void> T __Gen_Wrap_1556(uintptr_t P0, uintptr_t P1, int32_t P2, float P3, float P4) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, int32_t, float, float))(Il2CppBase() + 0x17A5794))(this, P0, P1, P2, P3, P4);
	}
	template <typename T = void> T __Gen_Wrap_1557(uintptr_t P0, int32_t P1, Il2CppVector3 P2, float P3) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, int32_t, Il2CppVector3, float))(Il2CppBase() + 0x17A58AC))(this, P0, P1, P2, P3);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T __Gen_Wrap_1558(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17A5A00))(this, P0);
	}
	template <typename T = void> T __Gen_Wrap_1559(uintptr_t P0, bool P1, float P2, int32_t P3, int32_t P4, float P5, int32_t P6, uintptr_t P7) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, bool, float, int32_t, int32_t, float, int32_t, uintptr_t))(Il2CppBase() + 0x17A5AFC))(this, P0, P1, P2, P3, P4, P5, P6, P7);
	}
	template <typename T = void> T __Gen_Wrap_1560(uintptr_t P0, uintptr_t P1, Il2CppVector3 P2, int32_t P3, bool P4) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, Il2CppVector3, int32_t, bool))(Il2CppBase() + 0x17A5C60))(this, P0, P1, P2, P3, P4);
	}
	template <typename T = void*> T __Gen_Wrap_1561(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17A5DD0))(this, P0);
	}
	template <typename T = void> T __Gen_Wrap_1562(uintptr_t P0, uintptr_t P1, Il2CppVector3 P2, uintptr_t P3, bool P4, int32_t P5, int32_t P6, float P7) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, Il2CppVector3, uintptr_t, bool, int32_t, int32_t, float))(Il2CppBase() + 0x17A5ECC))(this, P0, P1, P2, P3, P4, P5, P6, P7);
	}
	template <typename T = Il2CppList<uintptr_t>*> T __Gen_Wrap_1563(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17A6080))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1564(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17A617C))(this, P0);
	}
	template <typename T = void> T __Gen_Wrap_1565(uintptr_t P0, int32_t P1, Il2CppVector3 P2, int32_t P3) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, int32_t, Il2CppVector3, int32_t))(Il2CppBase() + 0x17A6278))(this, P0, P1, P2, P3);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1566(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17A63D4))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1567(uintptr_t P0, float P1, bool P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, float, bool))(Il2CppBase() + 0x17A64D0))(this, P0, P1, P2);
	}
	template <typename T = Il2CppList<uintptr_t>*> T __Gen_Wrap_1568(uintptr_t P0, float P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, float))(Il2CppBase() + 0x17A65FC))(this, P0, P1);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1569(uintptr_t P0, int32_t P1, int32_t P2, uintptr_t P3) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, int32_t, int32_t, uintptr_t))(Il2CppBase() + 0x17A6714))(this, P0, P1, P2, P3);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1570(uintptr_t P0, Il2CppVector2 P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, Il2CppVector2))(Il2CppBase() + 0x17A6854))(this, P0, P1);
	}
	template <typename T = Il2CppVector3> T __Gen_Wrap_1571(uintptr_t P0, int32_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, int32_t))(Il2CppBase() + 0x17A6988))(this, P0, P1);
	}
	template <typename T = void> T __Gen_Wrap_1572(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x17A6A98))(this, P0, P1);
	}
	template <typename T = void> T __Gen_Wrap_1573(uintptr_t P0, float P1, int32_t P2, uintptr_t P3, uintptr_t P4) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, float, int32_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x17A6BB4))(this, P0, P1, P2, P3, P4);
	}
	template <typename T = bool> T __Gen_Wrap_1574(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17A6CD4))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1575(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17A6DA8))(this, P0);
	}
	template <typename T = int32_t> T __Gen_Wrap_1576(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17A6EA4))(this, P0);
	}
	template <typename T = Il2CppList<uintptr_t>*> T __Gen_Wrap_1577(int32_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, int32_t))(Il2CppBase() + 0x17A6FB4))(this, P0);
	}
	template <typename T = void*> T __Gen_Wrap_1578(Il2CppList<uintptr_t>* P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x17A70B0))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1579(uintptr_t P0, uintptr_t P1, uintptr_t P2, float P3) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, uintptr_t, float))(Il2CppBase() + 0x17A71AC))(this, P0, P1, P2, P3);
	}
	template <typename T = void> T __Gen_Wrap_1580(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17A72F4))(this, P0);
	}
	template <typename T = void*> T __Gen_Wrap_1581(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17A73B4))(this, P0);
	}
	template <typename T = bool> T __Gen_Wrap_1582(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17A74B0))(this, P0);
	}
	template <typename T = void> T __Gen_Wrap_1583(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17A7584))(this, P0);
	}
	template <typename T = bool> T __Gen_Wrap_1584(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x17A7644))(this, P0, P1);
	}
	template <typename T = void> T __Gen_Wrap_1585(uintptr_t P0, float P1, uintptr_t P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, float, uintptr_t))(Il2CppBase() + 0x17A772C))(this, P0, P1, P2);
	}
	template <typename T = void> T __Gen_Wrap_1586(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x17A781C))(this, P0, P1);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1587(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17A7988))(this, P0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T __Gen_Wrap_1588(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x17A7A84))(this, P0, P1);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T __Gen_Wrap_1589(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x17A7B94))(this, P0, P1);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1590(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17A7CA4))(this, P0);
	}
	template <typename T = Il2CppVector3> T __Gen_Wrap_1591(uintptr_t P0, float P1, uintptr_t P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, float, uintptr_t))(Il2CppBase() + 0x17A7DA0))(this, P0, P1, P2);
	}
	template <typename T = void> T __Gen_Wrap_1592(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x17A7ECC))(this, P0, P1);
	}
	template <typename T = void> T __Gen_Wrap_1593(uintptr_t P0, uintptr_t P1, uintptr_t P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x17A7FA0))(this, P0, P1, P2);
	}
	template <typename T = void> T __Gen_Wrap_1594(uintptr_t P0, uintptr_t P1, uintptr_t P2, uintptr_t P3) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x17A8088))(this, P0, P1, P2, P3);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1595(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17A818C))(this, P0);
	}
	template <typename T = Il2CppString*> T __Gen_Wrap_1596(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17A8288))(this, P0);
	}
	template <typename T = bool> T __Gen_Wrap_1597(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17A83CC))(this, P0);
	}
	template <typename T = char> T __Gen_Wrap_1598(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17A850C))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1599(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17A85DC))(this, P0);
	}
	template <typename T = Il2CppList<uintptr_t>*> T __Gen_Wrap_1600(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17A86AC))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1601(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x17A87A8))(this, P0, P1);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T __Gen_Wrap_1602(uintptr_t P0, uintptr_t P1, int32_t P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x17A88B8))(this, P0, P1, P2);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1603(Il2CppRect P0, uintptr_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, Il2CppRect, uintptr_t))(Il2CppBase() + 0x17A89E4))(this, P0, P1);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1604(uintptr_t P0, Il2CppRect P1, uintptr_t P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, Il2CppRect, uintptr_t))(Il2CppBase() + 0x17A8B30))(this, P0, P1, P2);
	}
	template <typename T = bool> T __Gen_Wrap_1605(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17A8C90))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1606() {
		return ((T (*)(ILFixDynamicMethodWrapper*))(Il2CppBase() + 0x17A8D64))(this);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1607(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17A8E50))(this, P0);
	}
	template <typename T = char> T __Gen_Wrap_1608(uintptr_t P0, int32_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, int32_t))(Il2CppBase() + 0x17A8F4C))(this, P0, P1);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1609(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x17A9030))(this, P0, P1);
	}
	template <typename T = bool> T __Gen_Wrap_1610(uintptr_t P0, char P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, char))(Il2CppBase() + 0x17A9140))(this, P0, P1);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1611(uintptr_t P0, uintptr_t* P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t*))(Il2CppBase() + 0x17A9228))(this, P0, P1);
	}
	template <typename T = uint32_t> T __Gen_Wrap_1612(uintptr_t P0, char P1, uint32_t P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, char, uint32_t))(Il2CppBase() + 0x17A9364))(this, P0, P1, P2);
	}
	template <typename T = uint32_t> T __Gen_Wrap_1613(uintptr_t P0, char P1, char P2, char P3, char P4) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, char, char, char, char))(Il2CppBase() + 0x17A945C))(this, P0, P1, P2, P3, P4);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1614(uintptr_t P0, uintptr_t* P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t*))(Il2CppBase() + 0x17A9584))(this, P0, P1);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1615(uintptr_t P0, uintptr_t* P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t*))(Il2CppBase() + 0x17A96B8))(this, P0, P1);
	}
	template <typename T = void*> T __Gen_Wrap_1616(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17A97F4))(this, P0);
	}
	template <typename T = Il2CppString*> T __Gen_Wrap_1617(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17A9938))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1618(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17A9A7C))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1619(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17A9BC0))(this, P0);
	}
	template <typename T = void> T __Gen_Wrap_1620(uintptr_t P0, uintptr_t P1, uintptr_t P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x17A9CFC))(this, P0, P1, P2);
	}
	template <typename T = void> T __Gen_Wrap_1621(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17A9E3C))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1622(uintptr_t P0, int32_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, int32_t))(Il2CppBase() + 0x17A9F4C))(this, P0, P1);
	}
	template <typename T = bool> T __Gen_Wrap_1623(uintptr_t P0, uintptr_t P1, uintptr_t P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x17AA05C))(this, P0, P1, P2);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1624(uintptr_t P0, uintptr_t P1, uintptr_t* P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, uintptr_t*))(Il2CppBase() + 0x17AA1A4))(this, P0, P1, P2);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1625(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x17AA31C))(this, P0, P1);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1626(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x17AA488))(this, P0, P1);
	}
	template <typename T = void> T __Gen_Wrap_1627(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x17AA5D0))(this, P0, P1);
	}
	template <typename T = bool> T __Gen_Wrap_1628(uintptr_t P0, uintptr_t P1, uintptr_t* P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, uintptr_t*))(Il2CppBase() + 0x17AA710))(this, P0, P1, P2);
	}
	template <typename T = bool> T __Gen_Wrap_1629(uintptr_t P0, uintptr_t* P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t*))(Il2CppBase() + 0x17AA864))(this, P0, P1);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1630(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x17AA99C))(this, P0, P1);
	}
	template <typename T = void> T __Gen_Wrap_1631(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x17AAAAC))(this, P0, P1);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1632(uintptr_t P0, uintptr_t P1, uintptr_t P2, uintptr_t P3, uintptr_t P4) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x17AABD0))(this, P0, P1, P2, P3, P4);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1633(uintptr_t P0, uintptr_t P1, uintptr_t P2, uintptr_t P3, uintptr_t P4, uintptr_t* P5) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t*))(Il2CppBase() + 0x17AAD58))(this, P0, P1, P2, P3, P4, P5);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1634(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x17AAF20))(this, P0, P1);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1635(uintptr_t P0, uintptr_t P1, uintptr_t P2, uintptr_t P3) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x17AB090))(this, P0, P1, P2, P3);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1636(uintptr_t P0, uintptr_t P1, bool P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, bool))(Il2CppBase() + 0x17AB1FC))(this, P0, P1, P2);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1637(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17AB328))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1638(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17AB424))(this, P0);
	}
	template <typename T = int32_t> T __Gen_Wrap_1639(uintptr_t P0, char P1, int32_t P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, char, int32_t))(Il2CppBase() + 0x17AB520))(this, P0, P1, P2);
	}
	template <typename T = int32_t> T __Gen_Wrap_1640(char P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, char))(Il2CppBase() + 0x17AB618))(this, P0);
	}
	template <typename T = Il2CppString*> T __Gen_Wrap_1641(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17AB6E8))(this, P0);
	}
	template <typename T = Il2CppList<uintptr_t>*> T __Gen_Wrap_1642(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17AB7E4))(this, P0);
	}
	template <typename T = void> T __Gen_Wrap_1643(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17AB8E0))(this, P0);
	}
	template <typename T = Il2CppVector2> T __Gen_Wrap_1644(uintptr_t P0, Il2CppVector2 P1, Il2CppVector2 P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, Il2CppVector2, Il2CppVector2))(Il2CppBase() + 0x17AB9A0))(this, P0, P1, P2);
	}
	template <typename T = bool> T __Gen_Wrap_1645(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x17ABB04))(this, P0, P1);
	}
	template <typename T = bool> T __Gen_Wrap_1646(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x17ABC4C))(this, P0, P1);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1647(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x17ABD9C))(this, P0, P1);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1648(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x17ABEAC))(this, P0, P1);
	}
	template <typename T = Il2CppString*> T __Gen_Wrap_1649(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17ABFBC))(this, P0);
	}
	template <typename T = Il2CppString*> T __Gen_Wrap_1650(uintptr_t P0, uintptr_t P1, uintptr_t P2, bool P3) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, uintptr_t, bool))(Il2CppBase() + 0x17AC0B8))(this, P0, P1, P2, P3);
	}
	template <typename T = bool> T __Gen_Wrap_1651(uintptr_t P0, uintptr_t P1, uintptr_t* P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, uintptr_t*))(Il2CppBase() + 0x17AC1F8))(this, P0, P1, P2);
	}
	template <typename T = void> T __Gen_Wrap_1652(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x17AC34C))(this, P0, P1);
	}
	template <typename T = bool> T __Gen_Wrap_1653(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x17AC468))(this, P0, P1);
	}
	template <typename T = int32_t> T __Gen_Wrap_1654(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17AC5D4))(this, P0);
	}
	template <typename T = Il2CppString*> T __Gen_Wrap_1655(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17AC728))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1656(uintptr_t P0, uintptr_t P1, uintptr_t P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x17AC824))(this, P0, P1, P2);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1657(uintptr_t P0, uintptr_t P1, uintptr_t P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x17AC950))(this, P0, P1, P2);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1658(int32_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, int32_t))(Il2CppBase() + 0x17ACA7C))(this, P0);
	}
	template <typename T = void> T __Gen_Wrap_1659(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x17ACB78))(this, P0, P1);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T __Gen_Wrap_1660(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17ACCD4))(this, P0);
	}
	template <typename T = bool> T __Gen_Wrap_1661(uintptr_t P0, uintptr_t P1, uintptr_t P2, bool P3) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, uintptr_t, bool))(Il2CppBase() + 0x17ACDD0))(this, P0, P1, P2, P3);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1662(uintptr_t P0, uintptr_t P1, uintptr_t* P2, uintptr_t P3) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, uintptr_t*, uintptr_t))(Il2CppBase() + 0x17ACEE8))(this, P0, P1, P2, P3);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1663(uintptr_t P0, uintptr_t P1, uintptr_t P2, uintptr_t P3) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x17AD054))(this, P0, P1, P2, P3);
	}
	template <typename T = void> T __Gen_Wrap_1664(uintptr_t P0, uintptr_t* P1, uintptr_t* P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t*, uintptr_t*))(Il2CppBase() + 0x17AD1C0))(this, P0, P1, P2);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1665(uintptr_t P0, uintptr_t P1, uintptr_t P2, uintptr_t P3) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x17AD324))(this, P0, P1, P2, P3);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1666(uintptr_t P0, uintptr_t P1, uintptr_t* P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, uintptr_t*))(Il2CppBase() + 0x17AD464))(this, P0, P1, P2);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1667(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17AD5BC))(this, P0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T __Gen_Wrap_1668(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17AD6B8))(this, P0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T __Gen_Wrap_1669(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17AD7B4))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1670(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x17AD8B0))(this, P0, P1);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1671(uintptr_t P0, uintptr_t P1, bool P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, bool))(Il2CppBase() + 0x17AD9C0))(this, P0, P1, P2);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T __Gen_Wrap_1672(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x17ADAEC))(this, P0, P1);
	}
	template <typename T = void*> T __Gen_Wrap_1673(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x17ADBFC))(this, P0, P1);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1674(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x17ADD0C))(this, P0, P1);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T __Gen_Wrap_1675(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17ADE1C))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1676(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17ADF18))(this, P0);
	}
	template <typename T = bool> T __Gen_Wrap_1677(uintptr_t P0, uintptr_t P1, uintptr_t P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x17AE014))(this, P0, P1, P2);
	}
	template <typename T = int32_t> T __Gen_Wrap_1678(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x17AE174))(this, P0, P1);
	}
	template <typename T = Il2CppString*> T __Gen_Wrap_1679(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17AE2A0))(this, P0);
	}
	template <typename T = bool> T __Gen_Wrap_1680(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x17AE3FC))(this, P0, P1);
	}
	template <typename T = bool> T __Gen_Wrap_1681(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x17AE544))(this, P0, P1);
	}
	template <typename T = int32_t> T __Gen_Wrap_1682(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17AE6B0))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1683(uintptr_t P0, uintptr_t P1, uintptr_t P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x17AE804))(this, P0, P1, P2);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1684(uintptr_t P0, uintptr_t P1, uintptr_t P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x17AE95C))(this, P0, P1, P2);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1685(uintptr_t P0, uintptr_t P1, uintptr_t P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x17AEAA8))(this, P0, P1, P2);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1686(uintptr_t P0, uintptr_t P1, uintptr_t P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x17AEC34))(this, P0, P1, P2);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1687(uintptr_t P0, uintptr_t P1, uintptr_t P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x17AED8C))(this, P0, P1, P2);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1688(uintptr_t P0, uintptr_t P1, uintptr_t P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x17AEEE4))(this, P0, P1, P2);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1689(uintptr_t P0, uintptr_t P1, uintptr_t P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x17AF03C))(this, P0, P1, P2);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1690(uintptr_t P0, uintptr_t P1, uintptr_t P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x17AF188))(this, P0, P1, P2);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1691(uintptr_t P0, uintptr_t P1, uintptr_t P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x17AF314))(this, P0, P1, P2);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1692(uintptr_t P0, uintptr_t P1, uintptr_t P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x17AF458))(this, P0, P1, P2);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1693(uintptr_t P0, Il2CppRect P1, uintptr_t P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, Il2CppRect, uintptr_t))(Il2CppBase() + 0x17AF5CC))(this, P0, P1, P2);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1694(uintptr_t P0, uintptr_t P1, uintptr_t P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x17AF72C))(this, P0, P1, P2);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1695(uintptr_t P0, uintptr_t P1, uintptr_t P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x17AF8A4))(this, P0, P1, P2);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1696(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17AF9FC))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1697(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x17AFAF8))(this, P0, P1);
	}
	template <typename T = Il2CppString*> T __Gen_Wrap_1698(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17AFC20))(this, P0);
	}
	template <typename T = void> T __Gen_Wrap_1699(uintptr_t P0, uintptr_t P1, uintptr_t P2, uintptr_t P3) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x17AFD7C))(this, P0, P1, P2, P3);
	}
	template <typename T = void> T __Gen_Wrap_1700(uintptr_t P0, uintptr_t P1, uintptr_t P2, uintptr_t P3) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x17AFEBC))(this, P0, P1, P2, P3);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1701(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17AFFFC))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1702(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x17B00CC))(this, P0, P1);
	}
	template <typename T = void> T __Gen_Wrap_1703(uintptr_t P0, uintptr_t P1, uintptr_t P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x17B01DC))(this, P0, P1, P2);
	}
	template <typename T = void> T __Gen_Wrap_1704(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x17B0308))(this, P0, P1);
	}
	template <typename T = void> T __Gen_Wrap_1705(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x17B0418))(this, P0, P1);
	}
	template <typename T = void> T __Gen_Wrap_1706(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x17B0528))(this, P0, P1);
	}
	template <typename T = void> T __Gen_Wrap_1707(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x17B05FC))(this, P0, P1);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1708(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x17B06D0))(this, P0, P1);
	}
	template <typename T = Il2CppString*> T __Gen_Wrap_1709(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x17B0800))(this, P0, P1);
	}
	template <typename T = Il2CppList<uintptr_t>*> T __Gen_Wrap_1710(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17B0928))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1711(uintptr_t P0, int32_t P1, uintptr_t P2, uintptr_t P3) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, int32_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x17B0A24))(this, P0, P1, P2, P3);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1712(uintptr_t P0, int32_t P1, int32_t P2, uintptr_t P3, uintptr_t P4) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, int32_t, int32_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x17B0B64))(this, P0, P1, P2, P3, P4);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1713(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17B0CC0))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1714(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17B0D90))(this, P0);
	}
	template <typename T = Il2CppList<uintptr_t>*> T __Gen_Wrap_1715(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17B0E8C))(this, P0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T __Gen_Wrap_1716(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17B0F88))(this, P0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T __Gen_Wrap_1717(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17B1084))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1718(uintptr_t P0, int32_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, int32_t))(Il2CppBase() + 0x17B1180))(this, P0, P1);
	}
	template <typename T = Il2CppString*> T __Gen_Wrap_1719(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17B1290))(this, P0);
	}
	template <typename T = void> T __Gen_Wrap_1720(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17B138C))(this, P0);
	}
	template <typename T = void> T __Gen_Wrap_1721(uintptr_t P0, uintptr_t P1, uintptr_t P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x17B144C))(this, P0, P1, P2);
	}
	template <typename T = void> T __Gen_Wrap_1722(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x17B1534))(this, P0, P1);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1723(uintptr_t P0, int32_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, int32_t))(Il2CppBase() + 0x17B1650))(this, P0, P1);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1724(uintptr_t P0, int32_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, int32_t))(Il2CppBase() + 0x17B1760))(this, P0, P1);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1725(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17B1870))(this, P0);
	}
	template <typename T = void> T __Gen_Wrap_1726(uintptr_t P0, Il2CppVector3 P1, Il2CppVector3 P2, uintptr_t P3) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, Il2CppVector3, Il2CppVector3, uintptr_t))(Il2CppBase() + 0x17B196C))(this, P0, P1, P2, P3);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1727(uintptr_t P0, Il2CppVector3 P1, float P2, float P3) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, Il2CppVector3, float, float))(Il2CppBase() + 0x17B1AE4))(this, P0, P1, P2, P3);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1728(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17B1C58))(this, P0);
	}
	template <typename T = void> T __Gen_Wrap_1729(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17B1D54))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1730() {
		return ((T (*)(ILFixDynamicMethodWrapper*))(Il2CppBase() + 0x17B1E64))(this);
	}
	template <typename T = void*> T __Gen_Wrap_1731() {
		return ((T (*)(ILFixDynamicMethodWrapper*))(Il2CppBase() + 0x17B1F50))(this);
	}
	template <typename T = void*> T __Gen_Wrap_1732(Il2CppString* P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, Il2CppString*))(Il2CppBase() + 0x17B203C))(this, P0);
	}
	template <typename T = void*> T __Gen_Wrap_1733(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17B2138))(this, P0);
	}
	template <typename T = void*> T __Gen_Wrap_1734() {
		return ((T (*)(ILFixDynamicMethodWrapper*))(Il2CppBase() + 0x17B2234))(this);
	}
	template <typename T = Il2CppString*> T __Gen_Wrap_1735(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17B2320))(this, P0);
	}
	template <typename T = bool> T __Gen_Wrap_1736(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17B241C))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1737(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x17B24F0))(this, P0, P1);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1738() {
		return ((T (*)(ILFixDynamicMethodWrapper*))(Il2CppBase() + 0x17B2624))(this);
	}
	template <typename T = Il2CppString*> T __Gen_Wrap_1739(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x17B2710))(this, P0, P1);
	}
	template <typename T = void> T __Gen_Wrap_1740(uintptr_t P0, uint32_t P1, bool P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uint32_t, bool))(Il2CppBase() + 0x17B2820))(this, P0, P1, P2);
	}
	template <typename T = Il2CppVector3> T __Gen_Wrap_1741(uintptr_t P0, Il2CppVector3 P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, Il2CppVector3))(Il2CppBase() + 0x17B2908))(this, P0, P1);
	}
	template <typename T = void> T __Gen_Wrap_1742(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x17B2A4C))(this, P0, P1);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T __Gen_Wrap_1743(uintptr_t P0, int32_t P1, uintptr_t P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, int32_t, uintptr_t))(Il2CppBase() + 0x17B2B64))(this, P0, P1, P2);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1744(uintptr_t P0, int32_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, int32_t))(Il2CppBase() + 0x17B2C90))(this, P0, P1);
	}
	template <typename T = void> T __Gen_Wrap_1745(uintptr_t P0, uintptr_t* P1, uintptr_t* P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t*, uintptr_t*))(Il2CppBase() + 0x17B2DA0))(this, P0, P1, P2);
	}
	template <typename T = bool> T __Gen_Wrap_1746(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17B2ED8))(this, P0);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, uintptr_t>*> T __Gen_Wrap_1747(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17B2FAC))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1748(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17B30A8))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1749(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x17B3178))(this, P0, P1);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1750(uintptr_t P0, uintptr_t P1, uintptr_t P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x17B3288))(this, P0, P1, P2);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T __Gen_Wrap_1751(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17B33B4))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1752() {
		return ((T (*)(ILFixDynamicMethodWrapper*))(Il2CppBase() + 0x17B34B0))(this);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1753() {
		return ((T (*)(ILFixDynamicMethodWrapper*))(Il2CppBase() + 0x17B359C))(this);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1754(int32_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, int32_t))(Il2CppBase() + 0x17B3688))(this, P0);
	}
	template <typename T = void*> T __Gen_Wrap_1755(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x17B3784))(this, P0, P1);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1756(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17B3898))(this, P0);
	}
	template <typename T = bool> T __Gen_Wrap_1757(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x17B399C))(this, P0, P1);
	}
	template <typename T = bool> T __Gen_Wrap_1758(uintptr_t P0, uintptr_t P1, int32_t P2, uintptr_t* P3) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, int32_t, uintptr_t*))(Il2CppBase() + 0x17B3A84))(this, P0, P1, P2, P3);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, Il2CppDictionary<Il2CppString*, uintptr_t>*>*> T __Gen_Wrap_1759(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17B3BEC))(this, P0);
	}
	template <typename T = int32_t> T __Gen_Wrap_1760(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17B3CE8))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1761(uintptr_t P0, uintptr_t P1, int32_t P2, uintptr_t P3) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, int32_t, uintptr_t))(Il2CppBase() + 0x17B3DB8))(this, P0, P1, P2, P3);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1762(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17B3EF8))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1763(uintptr_t P0, Il2CppVector2 P1, uintptr_t P2, float P3) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, Il2CppVector2, uintptr_t, float))(Il2CppBase() + 0x17B3FF4))(this, P0, P1, P2, P3);
	}
	template <typename T = void> T __Gen_Wrap_1764(uintptr_t P0, Il2CppVector3 P1, float P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, Il2CppVector3, float))(Il2CppBase() + 0x17B4158))(this, P0, P1, P2);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1765(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17B4298))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1766(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17B4394))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1767(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17B4490))(this, P0);
	}
	template <typename T = int32_t> T __Gen_Wrap_1768(Il2CppVector3 P0, Il2CppVector3 P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, Il2CppVector3, Il2CppVector3))(Il2CppBase() + 0x17B458C))(this, P0, P1);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1769(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17B46EC))(this, P0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T __Gen_Wrap_1770(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17B47E8))(this, P0);
	}
	template <typename T = bool> T __Gen_Wrap_1771(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17B48E4))(this, P0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T __Gen_Wrap_1772(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17B49B8))(this, P0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T __Gen_Wrap_1773(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17B4AB4))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1774(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17B4BB0))(this, P0);
	}
	template <typename T = bool> T __Gen_Wrap_1775(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17B4CAC))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1776(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17B4D80))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1777() {
		return ((T (*)(ILFixDynamicMethodWrapper*))(Il2CppBase() + 0x17B4E7C))(this);
	}
	template <typename T = bool> T __Gen_Wrap_1778(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17B4F68))(this, P0);
	}
	template <typename T = void> T __Gen_Wrap_1779(uintptr_t P0, float P1, Il2CppVector3 P2, int32_t P3) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, float, Il2CppVector3, int32_t))(Il2CppBase() + 0x17B503C))(this, P0, P1, P2, P3);
	}
	template <typename T = void> T __Gen_Wrap_1780(uintptr_t P0, int32_t P1, float P2, Il2CppVector3 P3) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, int32_t, float, Il2CppVector3))(Il2CppBase() + 0x17B5190))(this, P0, P1, P2, P3);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1781(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17B52E4))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1782(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x17B53E0))(this, P0, P1);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1783(int32_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, int32_t))(Il2CppBase() + 0x17B54F0))(this, P0);
	}
	template <typename T = void*> T __Gen_Wrap_1784(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17B55EC))(this, P0);
	}
	template <typename T = Il2CppString*> T __Gen_Wrap_1785(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x17B56E8))(this, P0, P1);
	}
	template <typename T = Il2CppList<void*>*> T __Gen_Wrap_1786() {
		return ((T (*)(ILFixDynamicMethodWrapper*))(Il2CppBase() + 0x17B57F8))(this);
	}
	template <typename T = void> T __Gen_Wrap_1787(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17B58E4))(this, P0);
	}
	template <typename T = bool> T __Gen_Wrap_1788(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17B59A4))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1789() {
		return ((T (*)(ILFixDynamicMethodWrapper*))(Il2CppBase() + 0x17B5A78))(this);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1790(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x17B5B64))(this, P0, P1);
	}
	template <typename T = void> T __Gen_Wrap_1791(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x17B5C74))(this, P0, P1);
	}
	template <typename T = void> T __Gen_Wrap_1792(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17B5D48))(this, P0);
	}
	template <typename T = void> T __Gen_Wrap_1793(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x17B5E50))(this, P0, P1);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1794(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17B5F6C))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1795(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x17B608C))(this, P0, P1);
	}
	template <typename T = void> T __Gen_Wrap_1796(uintptr_t P0, uintptr_t P1, uintptr_t P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x17B61C0))(this, P0, P1, P2);
	}
	template <typename T = void> T __Gen_Wrap_1797(uintptr_t P0, uintptr_t P1, uintptr_t P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x17B62F8))(this, P0, P1, P2);
	}
	template <typename T = void*> T __Gen_Wrap_1798(int32_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, int32_t))(Il2CppBase() + 0x17B6430))(this, P0);
	}
	template <typename T = void*> T __Gen_Wrap_1799(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17B6530))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1800(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17B662C))(this, P0);
	}
	template <typename T = void> T __Gen_Wrap_1801(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x17B66FC))(this, P0, P1);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1802(int32_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, int32_t))(Il2CppBase() + 0x17B67D0))(this, P0);
	}
	template <typename T = int32_t> T __Gen_Wrap_1803(int32_t P0, float P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, int32_t, float))(Il2CppBase() + 0x17B68A0))(this, P0, P1);
	}
	template <typename T = void> T __Gen_Wrap_1804(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x17B698C))(this, P0, P1);
	}
	template <typename T = void> T __Gen_Wrap_1805(uintptr_t P0, uintptr_t P1, uintptr_t P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x17B6A60))(this, P0, P1, P2);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1806(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17B6B48))(this, P0);
	}
	template <typename T = bool> T __Gen_Wrap_1807(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17B6C18))(this, P0);
	}
	template <typename T = bool> T __Gen_Wrap_1808(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17B6D38))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1809(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17B6E0C))(this, P0);
	}
	template <typename T = void> T __Gen_Wrap_1810(uintptr_t P0, uintptr_t P1, uintptr_t P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x17B6F68))(this, P0, P1, P2);
	}
	template <typename T = Il2CppVector3> T __Gen_Wrap_1811(uintptr_t P0, int32_t P1, int32_t P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, int32_t, int32_t))(Il2CppBase() + 0x17B709C))(this, P0, P1, P2);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1812(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17B71C8))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1813(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17B72C4))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1814(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17B73C0))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1815(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17B74BC))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1816(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17B75B8))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1817(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17B76B4))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1818(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17B77B0))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1819(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17B78AC))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1820(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17B79A8))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1821(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17B7AA4))(this, P0);
	}
	template <typename T = void*> T __Gen_Wrap_1822() {
		return ((T (*)(ILFixDynamicMethodWrapper*))(Il2CppBase() + 0x17B7BA0))(this);
	}
	template <typename T = int32_t> T __Gen_Wrap_1823(uintptr_t P0, uint32_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uint32_t))(Il2CppBase() + 0x17B7C8C))(this, P0, P1);
	}
	template <typename T = uint64_t> T __Gen_Wrap_1824(uintptr_t P0, uint32_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uint32_t))(Il2CppBase() + 0x17B7D70))(this, P0, P1);
	}
	template <typename T = Il2CppString*> T __Gen_Wrap_1825(uintptr_t P0, uint64_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uint64_t))(Il2CppBase() + 0x17B7E54))(this, P0, P1);
	}
	template <typename T = uint32_t> T __Gen_Wrap_1826(uintptr_t P0, uint64_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uint64_t))(Il2CppBase() + 0x17B7F64))(this, P0, P1);
	}
	template <typename T = bool> T __Gen_Wrap_1827(uintptr_t P0, uint64_t P1, float P2, float P3, float P4, float P5) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uint64_t, float, float, float, float))(Il2CppBase() + 0x17B8048))(this, P0, P1, P2, P3, P4, P5);
	}
	template <typename T = void> T __Gen_Wrap_1828(uintptr_t P0, uint64_t P1, int32_t P2, float P3, float P4, uint64_t P5) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uint64_t, int32_t, float, float, uint64_t))(Il2CppBase() + 0x17B8190))(this, P0, P1, P2, P3, P4, P5);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1829(uintptr_t P0, int32_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, int32_t))(Il2CppBase() + 0x17B82C4))(this, P0, P1);
	}
	template <typename T = void> T __Gen_Wrap_1830(uintptr_t P0, int32_t P1, uintptr_t* P2, uintptr_t* P3, uintptr_t* P4, uintptr_t* P5, uintptr_t* P6, uintptr_t* P7, uintptr_t* P8) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, int32_t, uintptr_t*, uintptr_t*, uintptr_t*, uintptr_t*, uintptr_t*, uintptr_t*, uintptr_t*))(Il2CppBase() + 0x17B83D4))(this, P0, P1, P2, P3, P4, P5, P6, P7, P8);
	}
	template <typename T = void> T __Gen_Wrap_1831(uintptr_t P0, int32_t P1, uintptr_t* P2, uintptr_t* P3, uintptr_t* P4, uintptr_t* P5, uintptr_t* P6, uintptr_t* P7) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, int32_t, uintptr_t*, uintptr_t*, uintptr_t*, uintptr_t*, uintptr_t*, uintptr_t*))(Il2CppBase() + 0x17B8644))(this, P0, P1, P2, P3, P4, P5, P6, P7);
	}
	template <typename T = int32_t> T __Gen_Wrap_1832(uintptr_t P0, int32_t P1, uintptr_t P2, uintptr_t P3) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, int32_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x17B8880))(this, P0, P1, P2, P3);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1833(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17B8994))(this, P0);
	}
	template <typename T = int32_t> T __Gen_Wrap_1834(uintptr_t P0, int32_t P1, int32_t P2, int32_t P3, int32_t P4, int32_t P5) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, int32_t, int32_t, int32_t, int32_t, int32_t))(Il2CppBase() + 0x17B8A64))(this, P0, P1, P2, P3, P4, P5);
	}
	template <typename T = int32_t> T __Gen_Wrap_1835(uintptr_t P0, int32_t P1, int32_t P2, int32_t P3) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, int32_t, int32_t, int32_t))(Il2CppBase() + 0x17B8BA8))(this, P0, P1, P2, P3);
	}
	template <typename T = void> T __Gen_Wrap_1836(uintptr_t P0, uintptr_t* P1, uintptr_t* P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t*, uintptr_t*))(Il2CppBase() + 0x17B8CBC))(this, P0, P1, P2);
	}
	template <typename T = float> T __Gen_Wrap_1837(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x17B8E20))(this, P0, P1);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1838(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x17B8F88))(this, P0, P1);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1839(uintptr_t P0, uintptr_t P1, uintptr_t P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x17B90BC))(this, P0, P1, P2);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T __Gen_Wrap_1840() {
		return ((T (*)(ILFixDynamicMethodWrapper*))(Il2CppBase() + 0x17B9204))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T __Gen_Wrap_1841(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17B92F0))(this, P0);
	}
	template <typename T = void> T __Gen_Wrap_1842(uintptr_t P0, uintptr_t P1, uintptr_t P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x17B93EC))(this, P0, P1, P2);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1843(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17B9528))(this, P0);
	}
	template <typename T = int32_t> T __Gen_Wrap_1844(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x17B9624))(this, P0, P1);
	}
	template <typename T = Il2CppString*> T __Gen_Wrap_1845(uintptr_t P0, uintptr_t P1, int32_t P2, int32_t P3, int32_t P4) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, int32_t, int32_t, int32_t))(Il2CppBase() + 0x17B9754))(this, P0, P1, P2, P3, P4);
	}
	template <typename T = Il2CppString*> T __Gen_Wrap_1846(uintptr_t P0, uintptr_t P1, uintptr_t P2, int32_t P3, int32_t P4, int32_t P5) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, uintptr_t, int32_t, int32_t, int32_t))(Il2CppBase() + 0x17B98D8))(this, P0, P1, P2, P3, P4, P5);
	}
	template <typename T = void> T __Gen_Wrap_1847(uintptr_t P0, int32_t P1, uintptr_t P2, int32_t P3) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, int32_t, uintptr_t, int32_t))(Il2CppBase() + 0x17B9A70))(this, P0, P1, P2, P3);
	}
	template <typename T = void> T __Gen_Wrap_1848(uintptr_t P0, uintptr_t P1, int32_t P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x17B9B74))(this, P0, P1, P2);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1849(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17B9C5C))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1850(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x17B9D58))(this, P0, P1);
	}
	template <typename T = bool> T __Gen_Wrap_1851(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17B9E68))(this, P0);
	}
	template <typename T = bool> T __Gen_Wrap_1852(uintptr_t P0, uintptr_t P1, uintptr_t* P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, uintptr_t*))(Il2CppBase() + 0x17B9F3C))(this, P0, P1, P2);
	}
	template <typename T = Il2CppString*> T __Gen_Wrap_1853(uintptr_t P0, uintptr_t P1, uintptr_t P2, int32_t P3, int32_t P4) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, uintptr_t, int32_t, int32_t))(Il2CppBase() + 0x17BA090))(this, P0, P1, P2, P3, P4);
	}
	template <typename T = Il2CppList<int32_t>*> T __Gen_Wrap_1854(uintptr_t P0, uintptr_t P1, uintptr_t P2, int32_t P3, int32_t P4) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, uintptr_t, int32_t, int32_t))(Il2CppBase() + 0x17BA214))(this, P0, P1, P2, P3, P4);
	}
	template <typename T = void> T __Gen_Wrap_1855(uintptr_t P0, uintptr_t P1, uintptr_t P2, uintptr_t P3) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x17BA398))(this, P0, P1, P2, P3);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1856(uintptr_t P0, uintptr_t P1, uintptr_t P2, int32_t P3, int32_t P4) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, uintptr_t, int32_t, int32_t))(Il2CppBase() + 0x17BA4E8))(this, P0, P1, P2, P3, P4);
	}
	template <typename T = int32_t> T __Gen_Wrap_1857(uintptr_t P0, int32_t P1, uintptr_t P2, int32_t P3) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, int32_t, uintptr_t, int32_t))(Il2CppBase() + 0x17BA66C))(this, P0, P1, P2, P3);
	}
	template <typename T = int32_t> T __Gen_Wrap_1858(uintptr_t P0, uintptr_t P1, int32_t P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x17BA780))(this, P0, P1, P2);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1859(uintptr_t P0, int32_t P1, uintptr_t P2, int32_t P3, int32_t P4) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, int32_t, uintptr_t, int32_t, int32_t))(Il2CppBase() + 0x17BA878))(this, P0, P1, P2, P3, P4);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1860(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17BA9FC))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1861(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17BAAF8))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1862(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17BABF4))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1863(uintptr_t P0, int32_t P1, int32_t P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, int32_t, int32_t))(Il2CppBase() + 0x17BACF0))(this, P0, P1, P2);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1864(uintptr_t P0, int32_t P1, int32_t P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, int32_t, int32_t))(Il2CppBase() + 0x17BAE1C))(this, P0, P1, P2);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1865(uintptr_t P0, int32_t P1, int32_t P2, int32_t P3, uintptr_t P4) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, int32_t, int32_t, int32_t, uintptr_t))(Il2CppBase() + 0x17BAF48))(this, P0, P1, P2, P3, P4);
	}
	template <typename T = bool> T __Gen_Wrap_1866(uintptr_t P0, int32_t P1, int32_t P2, int32_t P3, uintptr_t* P4, bool P5, uintptr_t P6) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, int32_t, int32_t, int32_t, uintptr_t*, bool, uintptr_t))(Il2CppBase() + 0x17BB0A4))(this, P0, P1, P2, P3, P4, P5, P6);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1867(uintptr_t P0, int32_t P1, int32_t P2, uintptr_t P3, uintptr_t* P4, uintptr_t* P5) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, int32_t, int32_t, uintptr_t, uintptr_t*, uintptr_t*))(Il2CppBase() + 0x17BB258))(this, P0, P1, P2, P3, P4, P5);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1868(uintptr_t P0, int32_t P1, int32_t P2, int32_t P3) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, int32_t, int32_t, int32_t))(Il2CppBase() + 0x17BB43C))(this, P0, P1, P2, P3);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1869(uintptr_t P0, int32_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, int32_t))(Il2CppBase() + 0x17BB550))(this, P0, P1);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1870(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17BB660))(this, P0);
	}
	template <typename T = void> T __Gen_Wrap_1871(uintptr_t P0, int32_t P1, uintptr_t P2, uintptr_t P3) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, int32_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x17BB75C))(this, P0, P1, P2, P3);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1872(uintptr_t P0, int32_t P1, int32_t P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, int32_t, int32_t))(Il2CppBase() + 0x17BB860))(this, P0, P1, P2);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1873(uintptr_t P0, int32_t P1, int32_t P2, int32_t P3, bool P4, uintptr_t P5) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, int32_t, int32_t, int32_t, bool, uintptr_t))(Il2CppBase() + 0x17BB98C))(this, P0, P1, P2, P3, P4, P5);
	}
	template <typename T = bool> T __Gen_Wrap_1874(Il2CppVector2 P0, Il2CppVector2 P1, float P2, bool P3) {
		return ((T (*)(ILFixDynamicMethodWrapper*, Il2CppVector2, Il2CppVector2, float, bool))(Il2CppBase() + 0x17BBAFC))(this, P0, P1, P2, P3);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1875(uintptr_t P0, int32_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, int32_t))(Il2CppBase() + 0x17BBC78))(this, P0, P1);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1876(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17BBD98))(this, P0);
	}
	template <typename T = Il2CppList<uintptr_t>*> T __Gen_Wrap_1877(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17BBE94))(this, P0);
	}
	template <typename T = float> T __Gen_Wrap_1878(uintptr_t P0, uintptr_t P1, int32_t P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x17BBF90))(this, P0, P1, P2);
	}
	template <typename T = void> T __Gen_Wrap_1879(uintptr_t P0, uintptr_t* P1, uintptr_t* P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t*, uintptr_t*))(Il2CppBase() + 0x17BC088))(this, P0, P1, P2);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1880(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17BC1C8))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1881(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17BC2C4))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1882() {
		return ((T (*)(ILFixDynamicMethodWrapper*))(Il2CppBase() + 0x17BC3C0))(this);
	}
	template <typename T = void> T __Gen_Wrap_1883(uintptr_t P0, int32_t P1, int32_t P2, uintptr_t P3) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, int32_t, int32_t, uintptr_t))(Il2CppBase() + 0x17BC4AC))(this, P0, P1, P2, P3);
	}
	template <typename T = void> T __Gen_Wrap_1884(uintptr_t P0, uintptr_t P1, uintptr_t P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x17BC5D4))(this, P0, P1, P2);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1885(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17BC6BC))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1886(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17BC7B8))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1887(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17BC8B4))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1888(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17BC9B0))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1889(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x17BCAAC))(this, P0, P1);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1890(uintptr_t P0, int32_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, int32_t))(Il2CppBase() + 0x17BCBBC))(this, P0, P1);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1891(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17BCCCC))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1892(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17BCDC8))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1893(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17BCEC4))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1894(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17BCFC0))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1895(uintptr_t P0, uintptr_t P1, uintptr_t P2, Il2CppVector2 P3) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, uintptr_t, Il2CppVector2))(Il2CppBase() + 0x17BD0BC))(this, P0, P1, P2, P3);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1896(uintptr_t P0, uintptr_t P1, uintptr_t P2, Il2CppVector2 P3) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, uintptr_t, Il2CppVector2))(Il2CppBase() + 0x17BD220))(this, P0, P1, P2, P3);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1897(uintptr_t P0, uintptr_t P1, int32_t P2, int32_t P3) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, int32_t, int32_t))(Il2CppBase() + 0x17BD384))(this, P0, P1, P2, P3);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1898(uintptr_t P0, uintptr_t P1, bool P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, bool))(Il2CppBase() + 0x17BD4C4))(this, P0, P1, P2);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1899(uintptr_t P0, bool P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, bool))(Il2CppBase() + 0x17BD5F0))(this, P0, P1);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1900(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17BD700))(this, P0);
	}
	template <typename T = void> T __Gen_Wrap_1901(uintptr_t P0, int32_t P1, uintptr_t P2, int32_t P3) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, int32_t, uintptr_t, int32_t))(Il2CppBase() + 0x17BD7FC))(this, P0, P1, P2, P3);
	}
	template <typename T = void> T __Gen_Wrap_1902(uintptr_t P0, uintptr_t P1, uintptr_t P2, uintptr_t P3, uintptr_t P4, uintptr_t P5, Il2CppVector2 P6) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, Il2CppVector2))(Il2CppBase() + 0x17BD900))(this, P0, P1, P2, P3, P4, P5, P6);
	}
	template <typename T = void> T __Gen_Wrap_1903(uintptr_t P0, uintptr_t P1, Il2CppVector2 P2, uintptr_t P3) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, Il2CppVector2, uintptr_t))(Il2CppBase() + 0x17BDB14))(this, P0, P1, P2, P3);
	}
	template <typename T = void> T __Gen_Wrap_1904(uintptr_t P0, uintptr_t P1, uintptr_t P2, uintptr_t P3, Il2CppVector2 P4) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, uintptr_t, uintptr_t, Il2CppVector2))(Il2CppBase() + 0x17BDC60))(this, P0, P1, P2, P3, P4);
	}
	template <typename T = void> T __Gen_Wrap_1905(uintptr_t P0, uintptr_t P1, uintptr_t P2, uintptr_t P3, Il2CppVector2 P4, uintptr_t P5) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, uintptr_t, uintptr_t, Il2CppVector2, uintptr_t))(Il2CppBase() + 0x17BDE18))(this, P0, P1, P2, P3, P4, P5);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1906(uintptr_t P0, uintptr_t P1, uintptr_t P2, uintptr_t P3, uintptr_t P4, Il2CppVector2 P5, uintptr_t* P6) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, Il2CppVector2, uintptr_t*))(Il2CppBase() + 0x17BDFEC))(this, P0, P1, P2, P3, P4, P5, P6);
	}
	template <typename T = void> T __Gen_Wrap_1907(uintptr_t P0, uintptr_t P1, uintptr_t P2, uintptr_t P3, Il2CppVector2 P4, uintptr_t P5, uintptr_t P6, uintptr_t P7, bool P8) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, uintptr_t, uintptr_t, Il2CppVector2, uintptr_t, uintptr_t, uintptr_t, bool))(Il2CppBase() + 0x17BE218))(this, P0, P1, P2, P3, P4, P5, P6, P7, P8);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1908(uintptr_t P0, uintptr_t P1, uintptr_t P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x17BE438))(this, P0, P1, P2);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1909(uintptr_t P0, uintptr_t P1, uintptr_t P2, bool P3) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, uintptr_t, bool))(Il2CppBase() + 0x17BE564))(this, P0, P1, P2, P3);
	}
	template <typename T = void> T __Gen_Wrap_1910(uintptr_t P0, uintptr_t P1, uintptr_t P2, uintptr_t P3, uintptr_t P4, Il2CppVector2 P5) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, Il2CppVector2))(Il2CppBase() + 0x17BE6A4))(this, P0, P1, P2, P3, P4, P5);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1911(uintptr_t P0, int32_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, int32_t))(Il2CppBase() + 0x17BE878))(this, P0, P1);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1912(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17BE988))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1913(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17BEA84))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1914(uintptr_t P0, int32_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, int32_t))(Il2CppBase() + 0x17BEB80))(this, P0, P1);
	}
	template <typename T = void> T __Gen_Wrap_1915(uintptr_t P0, uintptr_t P1, int32_t P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x17BEC90))(this, P0, P1, P2);
	}
	template <typename T = void> T __Gen_Wrap_1916(int32_t P0, float P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, int32_t, float))(Il2CppBase() + 0x17BED78))(this, P0, P1);
	}
	template <typename T = Il2CppDictionary<int32_t, uintptr_t>*> T __Gen_Wrap_1917(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17BEE54))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1918(uintptr_t P0, uintptr_t P1, uintptr_t P2, float P3, float P4, uintptr_t P5, uintptr_t P6) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, uintptr_t, float, float, uintptr_t, uintptr_t))(Il2CppBase() + 0x17BEF50))(this, P0, P1, P2, P3, P4, P5, P6);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1919(uintptr_t P0, uintptr_t P1, int32_t P2, uintptr_t P3, uintptr_t P4, uintptr_t P5, float P6, float P7, uintptr_t P8, uintptr_t P9) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, int32_t, uintptr_t, uintptr_t, uintptr_t, float, float, uintptr_t, uintptr_t))(Il2CppBase() + 0x17BF0DC))(this, P0, P1, P2, P3, P4, P5, P6, P7, P8, P9);
	}
	template <typename T = void> T __Gen_Wrap_1920(uintptr_t P0, uintptr_t P1, uintptr_t P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x17BF2AC))(this, P0, P1, P2);
	}
	template <typename T = void> T __Gen_Wrap_1921(uintptr_t P0, uintptr_t P1, uintptr_t P2, uintptr_t P3, uintptr_t P4, uintptr_t P5, uintptr_t P6, bool P7) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, bool))(Il2CppBase() + 0x17BF394))(this, P0, P1, P2, P3, P4, P5, P6, P7);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1922(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17BF4F8))(this, P0);
	}
	template <typename T = Il2CppList<uintptr_t>*> T __Gen_Wrap_1923(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17BF5F4))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1924(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17BF6F0))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1925(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17BF7EC))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1926(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17BF8E8))(this, P0);
	}
	template <typename T = void*> T __Gen_Wrap_1927(uintptr_t P0, int32_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, int32_t))(Il2CppBase() + 0x17BF9E4))(this, P0, P1);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1928(uintptr_t P0, uintptr_t P1, int32_t P2, int32_t P3) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, int32_t, int32_t))(Il2CppBase() + 0x17BFAF4))(this, P0, P1, P2, P3);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1929(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17BFC34))(this, P0);
	}
	template <typename T = bool> T __Gen_Wrap_1930(uintptr_t P0, int32_t P1, uintptr_t P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, int32_t, uintptr_t))(Il2CppBase() + 0x17BFD04))(this, P0, P1, P2);
	}
	template <typename T = int32_t> T __Gen_Wrap_1931(uintptr_t P0, int32_t P1, uintptr_t P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, int32_t, uintptr_t))(Il2CppBase() + 0x17BFE00))(this, P0, P1, P2);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1932(uintptr_t P0, int32_t P1, uintptr_t P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, int32_t, uintptr_t))(Il2CppBase() + 0x17BFEF8))(this, P0, P1, P2);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1933(uintptr_t P0, int32_t P1, int32_t P2, uintptr_t P3) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, int32_t, int32_t, uintptr_t))(Il2CppBase() + 0x17C0024))(this, P0, P1, P2, P3);
	}
	template <typename T = void> T __Gen_Wrap_1934(uintptr_t P0, int32_t P1, int32_t P2, uintptr_t P3, uintptr_t P4, int32_t P5) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, int32_t, int32_t, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x17C0164))(this, P0, P1, P2, P3, P4, P5);
	}
	template <typename T = void> T __Gen_Wrap_1935(uintptr_t P0, uintptr_t P1, int32_t P2, int32_t P3, int32_t P4, uintptr_t P5, bool P6) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, int32_t, int32_t, int32_t, uintptr_t, bool))(Il2CppBase() + 0x17C0298))(this, P0, P1, P2, P3, P4, P5, P6);
	}
	template <typename T = void> T __Gen_Wrap_1936(uintptr_t P0, int32_t P1, int32_t P2, uintptr_t P3, uintptr_t P4, int32_t P5, int32_t P6, int32_t P7, uintptr_t P8, bool P9) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, int32_t, int32_t, uintptr_t, uintptr_t, int32_t, int32_t, int32_t, uintptr_t, bool))(Il2CppBase() + 0x17C03E0))(this, P0, P1, P2, P3, P4, P5, P6, P7, P8, P9);
	}
	template <typename T = void> T __Gen_Wrap_1937(uintptr_t P0, uintptr_t P1, uintptr_t P2, uintptr_t P3, int32_t P4, int32_t P5) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, uintptr_t, uintptr_t, int32_t, int32_t))(Il2CppBase() + 0x17C0574))(this, P0, P1, P2, P3, P4, P5);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1938(uintptr_t P0, uintptr_t P1, int32_t P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x17C06A8))(this, P0, P1, P2);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1939(uintptr_t P0, int32_t P1, int32_t P2, uintptr_t P3, uintptr_t P4, int32_t P5) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, int32_t, int32_t, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x17C07D4))(this, P0, P1, P2, P3, P4, P5);
	}
	template <typename T = void> T __Gen_Wrap_1940(uintptr_t P0, uintptr_t P1, uintptr_t P2, int32_t P3) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x17C0944))(this, P0, P1, P2, P3);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1941(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17C0A48))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1942(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17C0B44))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1943(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17C0C40))(this, P0);
	}
	template <typename T = bool> T __Gen_Wrap_1944(uintptr_t P0, uintptr_t P1, uintptr_t P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x17C0D3C))(this, P0, P1, P2);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1945(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17C0E94))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1946(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x17C0F98))(this, P0, P1);
	}
	template <typename T = bool> T __Gen_Wrap_1947(uintptr_t P0, uintptr_t P1, uintptr_t P2, uintptr_t* P3) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, uintptr_t, uintptr_t*))(Il2CppBase() + 0x17C10E8))(this, P0, P1, P2, P3);
	}
	template <typename T = bool> T __Gen_Wrap_1948(uintptr_t P0, uintptr_t P1, uintptr_t P2, uintptr_t P3, bool P4) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, uintptr_t, uintptr_t, bool))(Il2CppBase() + 0x17C1298))(this, P0, P1, P2, P3, P4);
	}
	template <typename T = bool> T __Gen_Wrap_1949(uintptr_t P0, uintptr_t P1, uintptr_t P2, uintptr_t* P3) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, uintptr_t, uintptr_t*))(Il2CppBase() + 0x17C1418))(this, P0, P1, P2, P3);
	}
	template <typename T = bool> T __Gen_Wrap_1950(uintptr_t P0, uintptr_t P1, uintptr_t* P2, bool P3) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, uintptr_t*, bool))(Il2CppBase() + 0x17C15C8))(this, P0, P1, P2, P3);
	}
	template <typename T = bool> T __Gen_Wrap_1951(uintptr_t P0, uintptr_t P1, uintptr_t P2, uintptr_t P3, uintptr_t P4, uintptr_t P5, uintptr_t P6) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x17C1778))(this, P0, P1, P2, P3, P4, P5, P6);
	}
	template <typename T = int32_t> T __Gen_Wrap_1952(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x17C18D4))(this, P0, P1);
	}
	template <typename T = void> T __Gen_Wrap_1953(uintptr_t P0, int32_t P1, uintptr_t P2, uintptr_t P3, bool P4, bool P5) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, int32_t, uintptr_t, uintptr_t, bool, bool))(Il2CppBase() + 0x17C19B8))(this, P0, P1, P2, P3, P4, P5);
	}
	template <typename T = void> T __Gen_Wrap_1954(uintptr_t P0, int32_t P1, uintptr_t P2, uintptr_t P3) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, int32_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x17C1B38))(this, P0, P1, P2, P3);
	}
	template <typename T = bool> T __Gen_Wrap_1955(uintptr_t P0, uintptr_t P1, uintptr_t P2, bool P3) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, uintptr_t, bool))(Il2CppBase() + 0x17C1C88))(this, P0, P1, P2, P3);
	}
	template <typename T = bool> T __Gen_Wrap_1956(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17C1DEC))(this, P0);
	}
	template <typename T = bool> T __Gen_Wrap_1957(uintptr_t P0, int32_t P1, uintptr_t P2, uintptr_t P3, bool P4) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, int32_t, uintptr_t, uintptr_t, bool))(Il2CppBase() + 0x17C1F0C))(this, P0, P1, P2, P3, P4);
	}
	template <typename T = void> T __Gen_Wrap_1958(uintptr_t P0, uintptr_t P1, bool P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, bool))(Il2CppBase() + 0x17C208C))(this, P0, P1, P2);
	}
	template <typename T = void> T __Gen_Wrap_1959(uintptr_t P0, uintptr_t* P1, uintptr_t* P2, uintptr_t* P3, uintptr_t* P4) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t*, uintptr_t*, uintptr_t*, uintptr_t*))(Il2CppBase() + 0x17C21C8))(this, P0, P1, P2, P3, P4);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1960(uintptr_t P0, uintptr_t P1, uintptr_t P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x17C23D0))(this, P0, P1, P2);
	}
	template <typename T = void> T __Gen_Wrap_1961(uintptr_t P0, uintptr_t P1, uintptr_t P2, uintptr_t P3, uintptr_t P4, uintptr_t P5) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x17C2534))(this, P0, P1, P2, P3, P4, P5);
	}
	template <typename T = void> T __Gen_Wrap_1962(uintptr_t P0, bool P1, uintptr_t P2, int32_t P3) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, bool, uintptr_t, int32_t))(Il2CppBase() + 0x17C2668))(this, P0, P1, P2, P3);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1963(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17C276C))(this, P0);
	}
	template <typename T = void*> T __Gen_Wrap_1964(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17C283C))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1965(uintptr_t P0, int32_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, int32_t))(Il2CppBase() + 0x17C2938))(this, P0, P1);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1966(uintptr_t P0, int32_t P1, int32_t P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, int32_t, int32_t))(Il2CppBase() + 0x17C2A48))(this, P0, P1, P2);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1967(uintptr_t P0, uintptr_t P1, uintptr_t P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x17C2B74))(this, P0, P1, P2);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1968(uintptr_t P0, int32_t P1, uintptr_t P2, uintptr_t P3) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, int32_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x17C2CA0))(this, P0, P1, P2, P3);
	}
	template <typename T = void> T __Gen_Wrap_1969(uintptr_t P0, int32_t P1, uintptr_t P2, uintptr_t P3) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, int32_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x17C2DE0))(this, P0, P1, P2, P3);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1970(uintptr_t P0, uintptr_t P1, uintptr_t P2, int32_t P3) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x17C2EE4))(this, P0, P1, P2, P3);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1971(uintptr_t P0, uintptr_t P1, uintptr_t P2, uintptr_t P3, Il2CppVector2 P4) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, uintptr_t, uintptr_t, Il2CppVector2))(Il2CppBase() + 0x17C3024))(this, P0, P1, P2, P3, P4);
	}
	template <typename T = void> T __Gen_Wrap_1972(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x17C319C))(this, P0, P1);
	}
	template <typename T = void> T __Gen_Wrap_1973(uintptr_t P0, uintptr_t P1, uintptr_t P2, int32_t P3, int32_t P4, bool P5) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, uintptr_t, int32_t, int32_t, bool))(Il2CppBase() + 0x17C3270))(this, P0, P1, P2, P3, P4, P5);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1974(uintptr_t P0, uintptr_t P1, uintptr_t P2, Il2CppVector2 P3) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, uintptr_t, Il2CppVector2))(Il2CppBase() + 0x17C33A4))(this, P0, P1, P2, P3);
	}
	template <typename T = void> T __Gen_Wrap_1975(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x17C3508))(this, P0, P1);
	}
	template <typename T = void> T __Gen_Wrap_1976(uintptr_t P0, int32_t P1, int32_t P2, uintptr_t P3, uintptr_t P4) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, int32_t, int32_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x17C35DC))(this, P0, P1, P2, P3, P4);
	}
	template <typename T = void> T __Gen_Wrap_1977(uintptr_t P0, uintptr_t P1, uintptr_t P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x17C36F4))(this, P0, P1, P2);
	}
	template <typename T = void> T __Gen_Wrap_1978(uintptr_t P0, int32_t P1, uintptr_t P2, uintptr_t P3, uintptr_t P4, uintptr_t P5) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, int32_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x17C37DC))(this, P0, P1, P2, P3, P4, P5);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1979(uintptr_t P0, uintptr_t P1, Il2CppVector2 P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, Il2CppVector2))(Il2CppBase() + 0x17C3910))(this, P0, P1, P2);
	}
	template <typename T = void> T __Gen_Wrap_1980(uintptr_t P0, int32_t P1, uintptr_t P2, uintptr_t P3, int32_t P4) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, int32_t, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x17C3A58))(this, P0, P1, P2, P3, P4);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1981(uintptr_t P0, uintptr_t P1, Il2CppVector2 P2, uintptr_t P3, int32_t P4, uintptr_t P5, uintptr_t P6, int32_t P7) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, Il2CppVector2, uintptr_t, int32_t, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x17C3B70))(this, P0, P1, P2, P3, P4, P5, P6, P7);
	}
	template <typename T = void> T __Gen_Wrap_1982(uintptr_t P0, uintptr_t P1, int32_t P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x17C3D34))(this, P0, P1, P2);
	}
	template <typename T = void> T __Gen_Wrap_1983(uintptr_t P0, uintptr_t P1, int32_t P2, uintptr_t P3) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, int32_t, uintptr_t))(Il2CppBase() + 0x17C3E1C))(this, P0, P1, P2, P3);
	}
	template <typename T = void> T __Gen_Wrap_1984(uintptr_t P0, int32_t P1, uintptr_t P2, uintptr_t P3, uintptr_t P4, int32_t P5, uintptr_t P6) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, int32_t, uintptr_t, uintptr_t, uintptr_t, int32_t, uintptr_t))(Il2CppBase() + 0x17C3F20))(this, P0, P1, P2, P3, P4, P5, P6);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1985(uintptr_t P0, uintptr_t P1, uintptr_t P2, Il2CppVector2 P3) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, uintptr_t, Il2CppVector2))(Il2CppBase() + 0x17C4068))(this, P0, P1, P2, P3);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1986(uintptr_t P0, uintptr_t P1, uintptr_t P2, Il2CppVector2 P3, uintptr_t P4, int32_t P5, uintptr_t P6, uintptr_t P7, int32_t P8) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, uintptr_t, Il2CppVector2, uintptr_t, int32_t, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x17C41CC))(this, P0, P1, P2, P3, P4, P5, P6, P7, P8);
	}
	template <typename T = void> T __Gen_Wrap_1987(uintptr_t P0, uintptr_t P1, int32_t P2, uintptr_t P3, uintptr_t P4, uintptr_t P5, int32_t P6, int32_t P7, uintptr_t P8, bool P9) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, int32_t, uintptr_t, uintptr_t, uintptr_t, int32_t, int32_t, uintptr_t, bool))(Il2CppBase() + 0x17C43A4))(this, P0, P1, P2, P3, P4, P5, P6, P7, P8, P9);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1988(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17C455C))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1989(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17C4658))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1990(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17C4754))(this, P0);
	}
	template <typename T = void> T __Gen_Wrap_1991(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x17C4850))(this, P0, P1);
	}
	template <typename T = void> T __Gen_Wrap_1992(uintptr_t P0, uintptr_t P1, uintptr_t P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x17C4968))(this, P0, P1, P2);
	}
	template <typename T = void*> T __Gen_Wrap_1993(uintptr_t P0, uintptr_t P1, uintptr_t P2, uintptr_t P3, bool P4) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, uintptr_t, uintptr_t, bool))(Il2CppBase() + 0x17C4A74))(this, P0, P1, P2, P3, P4);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1994(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17C4BF8))(this, P0);
	}
	template <typename T = void> T __Gen_Wrap_1995(uintptr_t P0, float P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, float))(Il2CppBase() + 0x17C4CF4))(this, P0, P1);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1996(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17C4E54))(this, P0);
	}
	template <typename T = float> T __Gen_Wrap_1997(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17C4F7C))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1998(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17C50D0))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_1999(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17C522C))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_2000(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17C5358))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_2001(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17C54C4))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_2002(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17C55C0))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_2003(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17C5690))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_2004() {
		return ((T (*)(ILFixDynamicMethodWrapper*))(Il2CppBase() + 0x17C5760))(this);
	}
	template <typename T = bool> T __Gen_Wrap_2005(uintptr_t P0, uintptr_t P1, int32_t P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x17C584C))(this, P0, P1, P2);
	}
	template <typename T = bool> T __Gen_Wrap_2006(uintptr_t P0, int32_t P1, int32_t P2, uintptr_t P3, uintptr_t P4, int32_t P5) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, int32_t, int32_t, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x17C5948))(this, P0, P1, P2, P3, P4, P5);
	}
	template <typename T = void> T __Gen_Wrap_2007(uintptr_t P0, int32_t P1, int32_t P2, uintptr_t P3, uintptr_t P4, int32_t P5, uintptr_t P6) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, int32_t, int32_t, uintptr_t, uintptr_t, int32_t, uintptr_t))(Il2CppBase() + 0x17C5A90))(this, P0, P1, P2, P3, P4, P5, P6);
	}
	template <typename T = bool> T __Gen_Wrap_2008(uintptr_t P0, int32_t P1, int32_t P2, uintptr_t P3) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, int32_t, int32_t, uintptr_t))(Il2CppBase() + 0x17C5BD8))(this, P0, P1, P2, P3);
	}
	template <typename T = void*> T __Gen_Wrap_2009(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17C5CF0))(this, P0);
	}
	template <typename T = Il2CppVector3> T __Gen_Wrap_2010(uintptr_t P0, Il2CppVector2 P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, Il2CppVector2))(Il2CppBase() + 0x17C5DEC))(this, P0, P1);
	}
	template <typename T = Il2CppRect> T __Gen_Wrap_2011(uintptr_t P0, uintptr_t P1, Il2CppRect P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, Il2CppRect))(Il2CppBase() + 0x17C5F20))(this, P0, P1, P2);
	}
	template <typename T = Il2CppRect> T __Gen_Wrap_2012(Il2CppRect P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, Il2CppRect))(Il2CppBase() + 0x17C6080))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_2013(uintptr_t P0, uintptr_t P1, Il2CppVector3 P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, Il2CppVector3))(Il2CppBase() + 0x17C61B8))(this, P0, P1, P2);
	}
	template <typename T = void> T __Gen_Wrap_2014(uintptr_t P0, uintptr_t P1, bool P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, bool))(Il2CppBase() + 0x17C6310))(this, P0, P1, P2);
	}
	template <typename T = void> T __Gen_Wrap_2015(uintptr_t P0, uintptr_t P1, bool P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, bool))(Il2CppBase() + 0x17C6458))(this, P0, P1, P2);
	}
	template <typename T = Il2CppString*> T __Gen_Wrap_2016(uintptr_t P0, uintptr_t P1, uintptr_t P2, uintptr_t P3) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x17C6540))(this, P0, P1, P2, P3);
	}
	template <typename T = Il2CppString*> T __Gen_Wrap_2017(uintptr_t P0, uintptr_t P1, int32_t P2, uintptr_t P3) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, int32_t, uintptr_t))(Il2CppBase() + 0x17C6680))(this, P0, P1, P2, P3);
	}
	template <typename T = Il2CppString*> T __Gen_Wrap_2018(uintptr_t P0, uintptr_t P1, uintptr_t P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x17C67C0))(this, P0, P1, P2);
	}
	template <typename T = Il2CppString*> T __Gen_Wrap_2019(uintptr_t P0, int32_t P1, uintptr_t P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, int32_t, uintptr_t))(Il2CppBase() + 0x17C68EC))(this, P0, P1, P2);
	}
	template <typename T = Il2CppString*> T __Gen_Wrap_2020(uintptr_t P0, uintptr_t P1, int32_t P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x17C6A18))(this, P0, P1, P2);
	}
	template <typename T = Il2CppString*> T __Gen_Wrap_2021(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x17C6B44))(this, P0, P1);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_2022(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17C6C54))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_2023(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17C6D24))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_2024(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17C6E28))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_2025(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17C6F2C))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_2026(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17C7028))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_2027(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17C70F8))(this, P0);
	}
	template <typename T = void> T __Gen_Wrap_2028(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x17C71C8))(this, P0, P1);
	}
	template <typename T = void> T __Gen_Wrap_2029(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x17C7364))(this, P0, P1);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_2030(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17C74CC))(this, P0);
	}
	template <typename T = Il2CppList<uintptr_t>*> T __Gen_Wrap_2031(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17C75C8))(this, P0);
	}
	template <typename T = void*> T __Gen_Wrap_2032(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17C76C4))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_2033(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17C77C0))(this, P0);
	}
	template <typename T = Il2CppRect> T __Gen_Wrap_2034(uintptr_t P0, float P1, float P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, float, float))(Il2CppBase() + 0x17C7890))(this, P0, P1, P2);
	}
	template <typename T = void> T __Gen_Wrap_2035(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x17C79BC))(this, P0, P1);
	}
	template <typename T = void> T __Gen_Wrap_2036(uintptr_t P0, int32_t P1, uintptr_t P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, int32_t, uintptr_t))(Il2CppBase() + 0x17C7A90))(this, P0, P1, P2);
	}
	template <typename T = void> T __Gen_Wrap_2037(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x17C7B78))(this, P0, P1);
	}
	template <typename T = void> T __Gen_Wrap_2038(uintptr_t P0, int32_t P1, uintptr_t P2, uintptr_t P3, uintptr_t P4, float P5) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, int32_t, uintptr_t, uintptr_t, uintptr_t, float))(Il2CppBase() + 0x17C7C4C))(this, P0, P1, P2, P3, P4, P5);
	}
	template <typename T = void> T __Gen_Wrap_2039(uintptr_t P0, int32_t P1, uintptr_t P2, uintptr_t P3, uintptr_t P4) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, int32_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x17C7DD4))(this, P0, P1, P2, P3, P4);
	}
	template <typename T = void> T __Gen_Wrap_2040(uintptr_t P0, uintptr_t P1, uintptr_t P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x17C7F40))(this, P0, P1, P2);
	}
	template <typename T = void> T __Gen_Wrap_2041(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x17C8028))(this, P0, P1);
	}
	template <typename T = void> T __Gen_Wrap_2042(uintptr_t P0, int32_t P1, uintptr_t P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, int32_t, uintptr_t))(Il2CppBase() + 0x17C80FC))(this, P0, P1, P2);
	}
	template <typename T = void> T __Gen_Wrap_2043(uintptr_t P0, int32_t P1, uintptr_t P2, uintptr_t P3, uintptr_t P4, uintptr_t P5) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, int32_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x17C81E4))(this, P0, P1, P2, P3, P4, P5);
	}
	template <typename T = void> T __Gen_Wrap_2044(uintptr_t P0, int32_t P1, uintptr_t P2, uintptr_t P3, uintptr_t P4, uintptr_t P5, uintptr_t P6) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, int32_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x17C8318))(this, P0, P1, P2, P3, P4, P5, P6);
	}
	template <typename T = void> T __Gen_Wrap_2045(uintptr_t P0, int32_t P1, uintptr_t P2, uintptr_t P3, uintptr_t P4, uintptr_t P5, uintptr_t P6) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, int32_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x17C8460))(this, P0, P1, P2, P3, P4, P5, P6);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_2046(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17C85A8))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_2047(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x17C8678))(this, P0, P1);
	}
	template <typename T = bool> T __Gen_Wrap_2048(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17C8788))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_2049(int32_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, int32_t))(Il2CppBase() + 0x17C885C))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_2050(uintptr_t P0, int32_t P1, uintptr_t P2, uintptr_t P3, int32_t P4) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, int32_t, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x17C8958))(this, P0, P1, P2, P3, P4);
	}
	template <typename T = void> T __Gen_Wrap_2051(uintptr_t P0, uintptr_t P1, uintptr_t P2, uintptr_t P3) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x17C8AB4))(this, P0, P1, P2, P3);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_2052(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17C8BB8))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_2053(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17C8CB4))(this, P0);
	}
	template <typename T = void> T __Gen_Wrap_2054(uintptr_t P0, uintptr_t P1, uintptr_t P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x17C8DB0))(this, P0, P1, P2);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_2055(uintptr_t P0, int32_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, int32_t))(Il2CppBase() + 0x17C8E98))(this, P0, P1);
	}
	template <typename T = void> T __Gen_Wrap_2056(uintptr_t P0, uint16_t P1, uintptr_t P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uint16_t, uintptr_t))(Il2CppBase() + 0x17C8FA8))(this, P0, P1, P2);
	}
	template <typename T = uint32_t> T __Gen_Wrap_2057(uint32_t P0, uintptr_t P1, int32_t P2, int32_t P3) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uint32_t, uintptr_t, int32_t, int32_t))(Il2CppBase() + 0x17C9090))(this, P0, P1, P2, P3);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_2058(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17C91A4))(this, P0);
	}
	template <typename T = void> T __Gen_Wrap_2059(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x17C92A0))(this, P0, P1);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_2060(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17C93B0))(this, P0);
	}
	template <typename T = uint32_t> T __Gen_Wrap_2061(uintptr_t P0, uint32_t P1, unsigned char P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uint32_t, unsigned char))(Il2CppBase() + 0x17C94B0))(this, P0, P1, P2);
	}
	template <typename T = uint32_t> T __Gen_Wrap_2062(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x17C95A8))(this, P0, P1);
	}
	template <typename T = int32_t> T __Gen_Wrap_2063(uintptr_t P0, int32_t P1, uintptr_t* P2, int32_t P3, int32_t P4) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, int32_t, uintptr_t*, int32_t, int32_t))(Il2CppBase() + 0x17C96B0))(this, P0, P1, P2, P3, P4);
	}
	template <typename T = void> T __Gen_Wrap_2064(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x17C97FC))(this, P0, P1);
	}
	template <typename T = void> T __Gen_Wrap_2065(uintptr_t P0, uintptr_t P1, int32_t P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x17C98D0))(this, P0, P1, P2);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_2066(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17C99DC))(this, P0);
	}
	template <typename T = void> T __Gen_Wrap_2067(unsigned char P0, uintptr_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, unsigned char, uintptr_t))(Il2CppBase() + 0x17C9AAC))(this, P0, P1);
	}
	template <typename T = bool> T __Gen_Wrap_2068(uintptr_t P0, double P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, double))(Il2CppBase() + 0x17C9B80))(this, P0, P1);
	}
	template <typename T = void> T __Gen_Wrap_2069(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x17C9C70))(this, P0, P1);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_2070(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17C9D90))(this, P0);
	}
	template <typename T = bool> T __Gen_Wrap_2071(uintptr_t P0, uintptr_t P1, uintptr_t* P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, uintptr_t*))(Il2CppBase() + 0x17C9E8C))(this, P0, P1, P2);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_2072() {
		return ((T (*)(ILFixDynamicMethodWrapper*))(Il2CppBase() + 0x17C9FAC))(this);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_2073() {
		return ((T (*)(ILFixDynamicMethodWrapper*))(Il2CppBase() + 0x17CA06C))(this);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_2074(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17CA158))(this, P0);
	}
	template <typename T = int64_t> T __Gen_Wrap_2075(uintptr_t P0, int64_t P1, uintptr_t P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, int64_t, uintptr_t))(Il2CppBase() + 0x17CA254))(this, P0, P1, P2);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_2076() {
		return ((T (*)(ILFixDynamicMethodWrapper*))(Il2CppBase() + 0x17CA34C))(this);
	}
	template <typename T = bool> T __Gen_Wrap_2077(uintptr_t P0, uintptr_t* P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t*))(Il2CppBase() + 0x17CA438))(this, P0, P1);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_2078(uintptr_t P0, uintptr_t P1, int32_t P2, int32_t P3, uintptr_t P4, uintptr_t P5) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, int32_t, int32_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x17CA548))(this, P0, P1, P2, P3, P4, P5);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_2079(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17CA6B8))(this, P0);
	}
	template <typename T = void> T __Gen_Wrap_2080(uintptr_t P0, uintptr_t P1, int32_t P2, int32_t P3, bool P4) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, int32_t, int32_t, bool))(Il2CppBase() + 0x17CA7B4))(this, P0, P1, P2, P3, P4);
	}
	template <typename T = uint32_t> T __Gen_Wrap_2081(uint32_t P0, int32_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uint32_t, int32_t))(Il2CppBase() + 0x17CA8CC))(this, P0, P1);
	}
	template <typename T = void> T __Gen_Wrap_2082(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x17CA9B0))(this, P0, P1);
	}
	template <typename T = void> T __Gen_Wrap_2083(uintptr_t P0, uintptr_t P1, uint32_t P2, int32_t P3) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, uint32_t, int32_t))(Il2CppBase() + 0x17CAA84))(this, P0, P1, P2, P3);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T __Gen_Wrap_2084() {
		return ((T (*)(ILFixDynamicMethodWrapper*))(Il2CppBase() + 0x17CAB88))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T __Gen_Wrap_2085(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17CAC74))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_2086() {
		return ((T (*)(ILFixDynamicMethodWrapper*))(Il2CppBase() + 0x17CAD70))(this);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_2087() {
		return ((T (*)(ILFixDynamicMethodWrapper*))(Il2CppBase() + 0x17CAE5C))(this);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_2088(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x17CAF48))(this, P0, P1);
	}
	template <typename T = Il2CppList<Il2CppString*>*> T __Gen_Wrap_2089(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x17CB058))(this, P0, P1);
	}
	template <typename T = bool> T __Gen_Wrap_2090(uintptr_t P0, uintptr_t P1, uintptr_t P2, uintptr_t P3) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x17CB168))(this, P0, P1, P2, P3);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_2091(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17CB280))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_2092(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17CB37C))(this, P0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T __Gen_Wrap_2093(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x17CB478))(this, P0, P1);
	}
	template <typename T = void> T __Gen_Wrap_2094(double P0, uintptr_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, double, uintptr_t))(Il2CppBase() + 0x17CB588))(this, P0, P1);
	}
	template <typename T = int32_t> T __Gen_Wrap_2095(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x17CB664))(this, P0, P1);
	}
	template <typename T = void> T __Gen_Wrap_2096(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17CB748))(this, P0);
	}
	template <typename T = void> T __Gen_Wrap_2097(Il2CppDictionary<Il2CppString*, uintptr_t>* P0, Il2CppString* P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, Il2CppDictionary<Il2CppString*, uintptr_t>*, Il2CppString*))(Il2CppBase() + 0x17CB89C))(this, P0, P1);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_2098(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x173B814))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_2099(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x17CB970))(this, P0, P1);
	}
	template <typename T = int32_t> T __Gen_Wrap_2100(void* P0, void* P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, void*, void*))(Il2CppBase() + 0x17CBA90))(this, P0, P1);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_2101(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17CBBD0))(this, P0);
	}
	template <typename T = bool> T __Gen_Wrap_2102(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17CBCCC))(this, P0);
	}
	template <typename T = Il2CppString*> T __Gen_Wrap_2103(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17CBDA0))(this, P0);
	}
	template <typename T = Il2CppString*> T __Gen_Wrap_2104(void* P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, void*))(Il2CppBase() + 0x17CBE9C))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_2105(void* P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, void*))(Il2CppBase() + 0x17CBF98))(this, P0);
	}
	template <typename T = int32_t> T __Gen_Wrap_2106(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x17CC094))(this, P0, P1);
	}
	template <typename T = void> T __Gen_Wrap_2107(uintptr_t P0, int32_t P1, uintptr_t P2, uintptr_t P3, char P4, uintptr_t P5) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, int32_t, uintptr_t, uintptr_t, char, uintptr_t))(Il2CppBase() + 0x17CC178))(this, P0, P1, P2, P3, P4, P5);
	}
	template <typename T = Il2CppString*> T __Gen_Wrap_2108(uintptr_t P0, uintptr_t P1, char P2, bool P3) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, char, bool))(Il2CppBase() + 0x17CC2AC))(this, P0, P1, P2, P3);
	}
	template <typename T = void> T __Gen_Wrap_2109(uintptr_t P0, uintptr_t P1, char P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, char))(Il2CppBase() + 0x17CC3EC))(this, P0, P1, P2);
	}
	template <typename T = void> T __Gen_Wrap_2110(uintptr_t P0, uintptr_t P1, char P2, uintptr_t P3) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, char, uintptr_t))(Il2CppBase() + 0x17CC4D4))(this, P0, P1, P2, P3);
	}
	template <typename T = void> T __Gen_Wrap_2111(uintptr_t P0, int32_t P1, uintptr_t P2, uintptr_t P3, uintptr_t P4, char P5) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, int32_t, uintptr_t, uintptr_t, uintptr_t, char))(Il2CppBase() + 0x17CC5D8))(this, P0, P1, P2, P3, P4, P5);
	}
	template <typename T = Il2CppList<Il2CppString*>*> T __Gen_Wrap_2112(uintptr_t P0, bool P1, uintptr_t P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, bool, uintptr_t))(Il2CppBase() + 0x17CC70C))(this, P0, P1, P2);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_2113(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x17CC838))(this, P0, P1);
	}
	template <typename T = void> T __Gen_Wrap_2114(uintptr_t P0, uintptr_t P1, int32_t P2, uintptr_t P3) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, int32_t, uintptr_t))(Il2CppBase() + 0x17CC948))(this, P0, P1, P2, P3);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T __Gen_Wrap_2115(uintptr_t P0, uintptr_t P1, char P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, char))(Il2CppBase() + 0x17CCAEC))(this, P0, P1, P2);
	}
	template <typename T = Il2CppString*> T __Gen_Wrap_2116(uintptr_t P0, uintptr_t P1, uintptr_t P2, uintptr_t P3, char P4) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, uintptr_t, uintptr_t, char))(Il2CppBase() + 0x17CCC3C))(this, P0, P1, P2, P3, P4);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_2117(uintptr_t P0, uintptr_t P1, bool P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, bool))(Il2CppBase() + 0x17CCD98))(this, P0, P1, P2);
	}
	template <typename T = Il2CppList<Il2CppString*>*> T __Gen_Wrap_2118(uintptr_t P0, bool P1, bool P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, bool, bool))(Il2CppBase() + 0x17CCEC4))(this, P0, P1, P2);
	}
	template <typename T = void> T __Gen_Wrap_2119(uintptr_t P0, uintptr_t* P1, uintptr_t* P2, bool P3) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t*, uintptr_t*, bool))(Il2CppBase() + 0x17CCFF0))(this, P0, P1, P2, P3);
	}
	template <typename T = Il2CppString*> T __Gen_Wrap_2120(uintptr_t P0, uintptr_t P1, uintptr_t P2, uintptr_t P3, bool P4, bool P5) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, uintptr_t, uintptr_t, bool, bool))(Il2CppBase() + 0x17CD168))(this, P0, P1, P2, P3, P4, P5);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_2121(uintptr_t P0, uintptr_t P1, uintptr_t P2, bool P3) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, uintptr_t, bool))(Il2CppBase() + 0x17CD2D8))(this, P0, P1, P2, P3);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_2122(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x17CD418))(this, P0, P1);
	}
	template <typename T = bool> T __Gen_Wrap_2123(uintptr_t P0, uintptr_t* P1, uintptr_t* P2, uintptr_t* P3, uintptr_t* P4, uintptr_t* P5) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t*, uintptr_t*, uintptr_t*, uintptr_t*, uintptr_t*))(Il2CppBase() + 0x17CD528))(this, P0, P1, P2, P3, P4, P5);
	}
	template <typename T = void> T __Gen_Wrap_2124(uintptr_t P0, uintptr_t P1, uintptr_t P2, uintptr_t* P3, uintptr_t* P4, bool P5) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, uintptr_t, uintptr_t*, uintptr_t*, bool))(Il2CppBase() + 0x17CD750))(this, P0, P1, P2, P3, P4, P5);
	}
	template <typename T = void> T __Gen_Wrap_2125(uintptr_t P0, uintptr_t P1, uintptr_t* P2, uintptr_t* P3) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, uintptr_t*, uintptr_t*))(Il2CppBase() + 0x17CD8F8))(this, P0, P1, P2, P3);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_2126() {
		return ((T (*)(ILFixDynamicMethodWrapper*))(Il2CppBase() + 0x17CDA70))(this);
	}
	template <typename T = Il2CppList<Il2CppString*>*> T __Gen_Wrap_2127(bool P0, bool P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, bool, bool))(Il2CppBase() + 0x17CDB5C))(this, P0, P1);
	}
	template <typename T = void> T __Gen_Wrap_2128(uintptr_t P0, bool P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, bool))(Il2CppBase() + 0x17CDC6C))(this, P0, P1);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_2129(uintptr_t P0, bool P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, bool))(Il2CppBase() + 0x17CDD90))(this, P0, P1);
	}
	template <typename T = bool> T __Gen_Wrap_2130(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17CDEA0))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_2131(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17CDF74))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_2132(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x17CE070))(this, P0, P1);
	}
	template <typename T = void> T __Gen_Wrap_2133(uintptr_t P0, uintptr_t P1, uintptr_t P2, uintptr_t P3, uintptr_t* P4, uintptr_t* P5) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t*, uintptr_t*))(Il2CppBase() + 0x17CE154))(this, P0, P1, P2, P3, P4, P5);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_2134(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x17CE2FC))(this, P0, P1);
	}
	template <typename T = void> T __Gen_Wrap_2135(bool P0, uintptr_t P1, uintptr_t* P2, uintptr_t* P3) {
		return ((T (*)(ILFixDynamicMethodWrapper*, bool, uintptr_t, uintptr_t*, uintptr_t*))(Il2CppBase() + 0x17CE40C))(this, P0, P1, P2, P3);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_2136(uintptr_t P0, uintptr_t P1, uintptr_t P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x17CE558))(this, P0, P1, P2);
	}
	template <typename T = void> T __Gen_Wrap_2137(uintptr_t P0, bool P1, uintptr_t P2, uintptr_t* P3, uintptr_t* P4) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, bool, uintptr_t, uintptr_t*, uintptr_t*))(Il2CppBase() + 0x17CE684))(this, P0, P1, P2, P3, P4);
	}
	template <typename T = bool> T __Gen_Wrap_2138(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17CE7E4))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_2139(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x17CE908))(this, P0, P1);
	}
	template <typename T = Il2CppString*> T __Gen_Wrap_2140(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17CEA30))(this, P0);
	}
	template <typename T = Il2CppString*> T __Gen_Wrap_2141(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17CEB8C))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_2142(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17CECA8))(this, P0);
	}
	template <typename T = Il2CppString*> T __Gen_Wrap_2143(uintptr_t P0, bool P1, int32_t P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, bool, int32_t))(Il2CppBase() + 0x17CEDAC))(this, P0, P1, P2);
	}
	template <typename T = Il2CppString*> T __Gen_Wrap_2144(uintptr_t P0, bool P1, int32_t P2, bool P3) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, bool, int32_t, bool))(Il2CppBase() + 0x17CEED8))(this, P0, P1, P2, P3);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_2145(uintptr_t P0, int32_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, int32_t))(Il2CppBase() + 0x1731300))(this, P0, P1);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_2146(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1730EB0))(this, P0, P1);
	}
	template <typename T = void*> T __Gen_Wrap_2147(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x1731E30))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_2148(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x1735DC0))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_2149(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x1735F60))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_2150(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x1736A90))(this, P0);
	}
	template <typename T = bool> T __Gen_Wrap_2151(void* P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, void*))(Il2CppBase() + 0x17CF018))(this, P0);
	}
	template <typename T = float> T __Gen_Wrap_2152(Il2CppVector3 P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, Il2CppVector3))(Il2CppBase() + 0x17CF12C))(this, P0);
	}
	template <typename T = Il2CppVector3> T __Gen_Wrap_2153(float P0, float P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, float, float))(Il2CppBase() + 0x17CF254))(this, P0, P1);
	}
	template <typename T = Il2CppVector3> T __Gen_Wrap_2154(float P0, float P1, float P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, float, float, float))(Il2CppBase() + 0x17CF36C))(this, P0, P1, P2);
	}
	template <typename T = bool> T __Gen_Wrap_2155(uintptr_t P0, float P1, float P2, float P3, float P4, float P5, float P6) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, float, float, float, float, float, float))(Il2CppBase() + 0x17CF4A0))(this, P0, P1, P2, P3, P4, P5, P6);
	}
	template <typename T = bool> T __Gen_Wrap_2156(uintptr_t P0, float P1, float P2, float P3, float P4, float P5) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, float, float, float, float, float))(Il2CppBase() + 0x17CF604))(this, P0, P1, P2, P3, P4, P5);
	}
	template <typename T = float> T __Gen_Wrap_2157(float P0, float P1, float P2, float P3, float P4) {
		return ((T (*)(ILFixDynamicMethodWrapper*, float, float, float, float, float))(Il2CppBase() + 0x17CF754))(this, P0, P1, P2, P3, P4);
	}
	template <typename T = float> T __Gen_Wrap_2158(uintptr_t P0, Il2CppVector2 P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, Il2CppVector2))(Il2CppBase() + 0x17CF88C))(this, P0, P1);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T __Gen_Wrap_2159(int32_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, int32_t))(Il2CppBase() + 0x17CF9B8))(this, P0);
	}
	template <typename T = int32_t> T __Gen_Wrap_2160(uintptr_t P0, uintptr_t P1, int32_t P2, int32_t P3, int32_t P4) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, int32_t, int32_t, int32_t))(Il2CppBase() + 0x17CFAB4))(this, P0, P1, P2, P3, P4);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_2161(int32_t P0, int32_t P1, int32_t P2, uintptr_t P3, uintptr_t P4) {
		return ((T (*)(ILFixDynamicMethodWrapper*, int32_t, int32_t, int32_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x17CFBDC))(this, P0, P1, P2, P3, P4);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_2162(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17CFD38))(this, P0);
	}
	template <typename T = void> T __Gen_Wrap_2163(uintptr_t P0, Il2CppVector3 P1, uintptr_t P2, uintptr_t P3) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, Il2CppVector3, uintptr_t, uintptr_t))(Il2CppBase() + 0x17CFE34))(this, P0, P1, P2, P3);
	}
	template <typename T = int32_t> T __Gen_Wrap_2164(uintptr_t P0, Il2CppVector3 P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, Il2CppVector3))(Il2CppBase() + 0x17CFFD8))(this, P0, P1);
	}
	template <typename T = float> T __Gen_Wrap_2165(uintptr_t P0, Il2CppVector3 P1, Il2CppVector3 P2, int32_t P3) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, Il2CppVector3, Il2CppVector3, int32_t))(Il2CppBase() + 0x17D0114))(this, P0, P1, P2, P3);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_2166(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17D029C))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_2167(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17D03A0))(this, P0);
	}
	template <typename T = void> T __Gen_Wrap_2168(uintptr_t P0, Il2CppVector3 P1, Il2CppVector3 P2, uintptr_t P3, float P4) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, Il2CppVector3, Il2CppVector3, uintptr_t, float))(Il2CppBase() + 0x17D049C))(this, P0, P1, P2, P3, P4);
	}
	template <typename T = float> T __Gen_Wrap_2169(uintptr_t P0, float P1, bool P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, float, bool))(Il2CppBase() + 0x17D0660))(this, P0, P1, P2);
	}
	template <typename T = void> T __Gen_Wrap_2170(uintptr_t P0, Il2CppVector3 P1, uintptr_t P2, uintptr_t P3, uintptr_t P4, float P5, float P6) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, Il2CppVector3, uintptr_t, uintptr_t, uintptr_t, float, float))(Il2CppBase() + 0x17D0760))(this, P0, P1, P2, P3, P4, P5, P6);
	}
	template <typename T = int64_t> T __Gen_Wrap_2171(uintptr_t P0, int64_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, int64_t))(Il2CppBase() + 0x17D09AC))(this, P0, P1);
	}
	template <typename T = void> T __Gen_Wrap_2172(int64_t P0, uintptr_t* P1, uintptr_t* P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, int64_t, uintptr_t*, uintptr_t*))(Il2CppBase() + 0x17D0A90))(this, P0, P1, P2);
	}
	template <typename T = void> T __Gen_Wrap_2173(float P0, uintptr_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, float, uintptr_t))(Il2CppBase() + 0x17D0BC8))(this, P0, P1);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T __Gen_Wrap_2174(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17D0CA4))(this, P0);
	}
	template <typename T = Il2CppVector2> T __Gen_Wrap_2175(uintptr_t P0, Il2CppVector2 P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, Il2CppVector2))(Il2CppBase() + 0x17D0DA0))(this, P0, P1);
	}
	template <typename T = bool> T __Gen_Wrap_2176(uintptr_t P0, Il2CppQuaternion P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, Il2CppQuaternion))(Il2CppBase() + 0x17D0ED4))(this, P0, P1);
	}
	template <typename T = Il2CppQuaternion> T __Gen_Wrap_2177(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17D101C))(this, P0);
	}
	template <typename T = Il2CppQuaternion> T __Gen_Wrap_2178(uintptr_t P0, Il2CppQuaternion P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, Il2CppQuaternion))(Il2CppBase() + 0x17D1118))(this, P0, P1);
	}
	template <typename T = bool> T __Gen_Wrap_2179(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x17D1264))(this, P0, P1);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_2180(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x17D13AC))(this, P0, P1);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T __Gen_Wrap_2181(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17D14F8))(this, P0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T __Gen_Wrap_2182(uintptr_t P0, bool P1, int32_t P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, bool, int32_t))(Il2CppBase() + 0x17D15F4))(this, P0, P1, P2);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T __Gen_Wrap_2183(uintptr_t P0, float P1, int32_t P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, float, int32_t))(Il2CppBase() + 0x17D1720))(this, P0, P1, P2);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T __Gen_Wrap_2184(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17D184C))(this, P0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T __Gen_Wrap_2185(uintptr_t P0, Il2CppVector2 P1, int32_t P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, Il2CppVector2, int32_t))(Il2CppBase() + 0x17D1948))(this, P0, P1, P2);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T __Gen_Wrap_2186(uintptr_t P0, Il2CppVector3 P1, int32_t P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, Il2CppVector3, int32_t))(Il2CppBase() + 0x17D1A90))(this, P0, P1, P2);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T __Gen_Wrap_2187(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17D1BE8))(this, P0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T __Gen_Wrap_2188(uintptr_t P0, Il2CppQuaternion P1, int32_t P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, Il2CppQuaternion, int32_t))(Il2CppBase() + 0x17D1CE4))(this, P0, P1, P2);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T __Gen_Wrap_2189(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17D1E44))(this, P0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T __Gen_Wrap_2190(uintptr_t P0, uintptr_t P1, int32_t P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x17D1F40))(this, P0, P1, P2);
	}
	template <typename T = void> T __Gen_Wrap_2191(bool P0, Il2CppVector3 P1, Il2CppVector3 P2, uintptr_t P3, float P4, float P5) {
		return ((T (*)(ILFixDynamicMethodWrapper*, bool, Il2CppVector3, Il2CppVector3, uintptr_t, float, float))(Il2CppBase() + 0x17D20A0))(this, P0, P1, P2, P3, P4, P5);
	}
	template <typename T = void> T __Gen_Wrap_2192(Il2CppVector3 P0, Il2CppVector3 P1, float P2, float P3) {
		return ((T (*)(ILFixDynamicMethodWrapper*, Il2CppVector3, Il2CppVector3, float, float))(Il2CppBase() + 0x17D2278))(this, P0, P1, P2, P3);
	}
	template <typename T = void> T __Gen_Wrap_2193(Il2CppVector3 P0, Il2CppVector3 P1, uintptr_t P2, float P3, float P4) {
		return ((T (*)(ILFixDynamicMethodWrapper*, Il2CppVector3, Il2CppVector3, uintptr_t, float, float))(Il2CppBase() + 0x17D23F8))(this, P0, P1, P2, P3, P4);
	}
	template <typename T = bool> T __Gen_Wrap_2194(float P0, float P1, float P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, float, float, float))(Il2CppBase() + 0x17D25BC))(this, P0, P1, P2);
	}
	template <typename T = Il2CppVector2> T __Gen_Wrap_2195(uintptr_t P0, float P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, float))(Il2CppBase() + 0x17D26C8))(this, P0, P1);
	}
	template <typename T = Il2CppRect> T __Gen_Wrap_2196(uintptr_t P0, Il2CppRect P1, Il2CppVector2 P2, uintptr_t P3) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, Il2CppRect, Il2CppVector2, uintptr_t))(Il2CppBase() + 0x17D27E0))(this, P0, P1, P2, P3);
	}
	template <typename T = Il2CppVector3> T __Gen_Wrap_2197(uintptr_t P0, float P1, Il2CppVector3 P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, float, Il2CppVector3))(Il2CppBase() + 0x17D2978))(this, P0, P1, P2);
	}
	template <typename T = float> T __Gen_Wrap_2198(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17D2AD0))(this, P0);
	}
	template <typename T = void> T __Gen_Wrap_2199(uintptr_t P0, uintptr_t P1, uintptr_t P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x17D2BA0))(this, P0, P1, P2);
	}
	template <typename T = void> T __Gen_Wrap_2200(uintptr_t P0, uintptr_t P1, float P2, float P3, float P4, uintptr_t P5, uintptr_t P6, uintptr_t P7, int32_t P8) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, float, float, float, uintptr_t, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x17D2CD8))(this, P0, P1, P2, P3, P4, P5, P6, P7, P8);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_2201(uintptr_t P0, bool P1, float P2, uintptr_t P3) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, bool, float, uintptr_t))(Il2CppBase() + 0x17D2E58))(this, P0, P1, P2, P3);
	}
	template <typename T = void> T __Gen_Wrap_2202(uintptr_t P0, bool P1, float P2, uintptr_t P3) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, bool, float, uintptr_t))(Il2CppBase() + 0x17D2FA0))(this, P0, P1, P2, P3);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_2203(uintptr_t P0, float P1, float P2, uintptr_t P3) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, float, float, uintptr_t))(Il2CppBase() + 0x17D30A4))(this, P0, P1, P2, P3);
	}
	template <typename T = void> T __Gen_Wrap_2204(uintptr_t P0, float P1, float P2, uintptr_t P3) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, float, float, uintptr_t))(Il2CppBase() + 0x17D31E4))(this, P0, P1, P2, P3);
	}
	template <typename T = Il2CppVector3> T __Gen_Wrap_2205(uintptr_t P0, Il2CppVector3 P1, Il2CppVector3 P2, Il2CppVector3 P3) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, Il2CppVector3, Il2CppVector3, Il2CppVector3))(Il2CppBase() + 0x17D32E8))(this, P0, P1, P2, P3);
	}
	template <typename T = void> T __Gen_Wrap_2206(uintptr_t P0, uintptr_t P1, float P2, float P3, Il2CppVector2 P4) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, float, float, Il2CppVector2))(Il2CppBase() + 0x17D349C))(this, P0, P1, P2, P3, P4);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_2207(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x17D35FC))(this, P0, P1);
	}
	template <typename T = void> T __Gen_Wrap_2208(uintptr_t P0, uintptr_t P1, uintptr_t P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x17D370C))(this, P0, P1, P2);
	}
	template <typename T = void> T __Gen_Wrap_2209(uintptr_t P0, uintptr_t P1, uintptr_t P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x17D3838))(this, P0, P1, P2);
	}
	template <typename T = bool> T __Gen_Wrap_2210(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x17D3974))(this, P0, P1);
	}
	template <typename T = Il2CppString*> T __Gen_Wrap_2211(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17D3AD8))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_2212() {
		return ((T (*)(ILFixDynamicMethodWrapper*))(Il2CppBase() + 0x17D3C1C))(this);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_2213(uintptr_t P0, uintptr_t P1, float P2, float P3, float P4, float P5, uintptr_t P6) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, float, float, float, float, uintptr_t))(Il2CppBase() + 0x17D3D08))(this, P0, P1, P2, P3, P4, P5, P6);
	}
	template <typename T = int32_t> T __Gen_Wrap_2214(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17D3E94))(this, P0);
	}
	template <typename T = int32_t> T __Gen_Wrap_2215(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17D3F64))(this, P0);
	}
	template <typename T = int32_t> T __Gen_Wrap_2216(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17D4034))(this, P0);
	}
	template <typename T = int32_t> T __Gen_Wrap_2217(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17D4104))(this, P0);
	}
	template <typename T = int32_t> T __Gen_Wrap_2218(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17D41D4))(this, P0);
	}
	template <typename T = int32_t> T __Gen_Wrap_2219(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17D42A4))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_2220(uintptr_t P0, Il2CppVector2 P1, float P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, Il2CppVector2, float))(Il2CppBase() + 0x17D4374))(this, P0, P1, P2);
	}
	template <typename T = void> T __Gen_Wrap_2221(uintptr_t P0, uintptr_t P1, float P2, float P3, float P4, Il2CppVector2 P5) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, float, float, float, Il2CppVector2))(Il2CppBase() + 0x17D44C4))(this, P0, P1, P2, P3, P4, P5);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_2222(uintptr_t P0, uintptr_t P1, float P2, float P3, float P4) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, float, float, float))(Il2CppBase() + 0x17D4640))(this, P0, P1, P2, P3, P4);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_2223() {
		return ((T (*)(ILFixDynamicMethodWrapper*))(Il2CppBase() + 0x17D479C))(this);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_2224() {
		return ((T (*)(ILFixDynamicMethodWrapper*))(Il2CppBase() + 0x17D4888))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T __Gen_Wrap_2225(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17D4974))(this, P0);
	}
	template <typename T = void*> T __Gen_Wrap_2226(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17D4A70))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_2227(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17D4B6C))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_2228(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17D4C68))(this, P0);
	}
	template <typename T = void*> T __Gen_Wrap_2229(uintptr_t P0, uintptr_t P1, bool P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, bool))(Il2CppBase() + 0x17D4D64))(this, P0, P1, P2);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_2230(uintptr_t P0, int64_t P1, uintptr_t P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, int64_t, uintptr_t))(Il2CppBase() + 0x17D4E90))(this, P0, P1, P2);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_2231(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17D4FBC))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_2232(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x17D50B8))(this, P0, P1);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_2233(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17D51C8))(this, P0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T __Gen_Wrap_2234(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17D52C4))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_2235(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17D53C0))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_2236(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17D54BC))(this, P0);
	}
	template <typename T = void> T __Gen_Wrap_2237(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17D55B8))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_2238(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17D5678))(this, P0);
	}
	template <typename T = void> T __Gen_Wrap_2239(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x17D5748))(this, P0, P1);
	}
	template <typename T = void> T __Gen_Wrap_2240(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x17D581C))(this, P0, P1);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_2241(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17D592C))(this, P0);
	}
	template <typename T = void> T __Gen_Wrap_2242(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x17D59FC))(this, P0, P1);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T __Gen_Wrap_2243(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17D5AD0))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_2244(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17D5BCC))(this, P0);
	}
	template <typename T = void> T __Gen_Wrap_2245(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x17D5C9C))(this, P0, P1);
	}
	template <typename T = void> T __Gen_Wrap_2246(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17D5D70))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_2247() {
		return ((T (*)(ILFixDynamicMethodWrapper*))(Il2CppBase() + 0x17D5E30))(this);
	}
	template <typename T = void> T __Gen_Wrap_2248(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17D5F1C))(this, P0);
	}
	template <typename T = bool> T __Gen_Wrap_2249(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17D5FDC))(this, P0);
	}
	template <typename T = bool> T __Gen_Wrap_2250(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17D60B0))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_2251(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17D61C4))(this, P0);
	}
	template <typename T = void> T __Gen_Wrap_2252(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x17D62C0))(this, P0, P1);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_2253(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x17D6394))(this, P0, P1);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_2254() {
		return ((T (*)(ILFixDynamicMethodWrapper*))(Il2CppBase() + 0x17D64A4))(this);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_2255() {
		return ((T (*)(ILFixDynamicMethodWrapper*))(Il2CppBase() + 0x17D6590))(this);
	}
	template <typename T = void> T __Gen_Wrap_2256(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x17D667C))(this, P0, P1);
	}
	template <typename T = void> T __Gen_Wrap_2257(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17D6750))(this, P0);
	}
	template <typename T = void> T __Gen_Wrap_2258(uintptr_t P0, uintptr_t P1, uintptr_t P2, uintptr_t P3) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x17D6810))(this, P0, P1, P2, P3);
	}
	template <typename T = void> T __Gen_Wrap_2259(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x17D6914))(this, P0, P1);
	}
	template <typename T = bool> T __Gen_Wrap_2260(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17D69E8))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_2261(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x17D6B50))(this, P0, P1);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_2262(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x17D6C88))(this, P0, P1);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_2263() {
		return ((T (*)(ILFixDynamicMethodWrapper*))(Il2CppBase() + 0x17D6D98))(this);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_2264(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17D6E84))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_2265(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17D6F80))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_2266(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17D707C))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_2267(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17D7178))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_2268(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17D7274))(this, P0);
	}
	template <typename T = void> T __Gen_Wrap_2269(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x17D7370))(this, P0, P1);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_2270(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17D7444))(this, P0);
	}
	template <typename T = void> T __Gen_Wrap_2271(uintptr_t P0, int64_t P1, uintptr_t P2, uintptr_t P3) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, int64_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x17D7540))(this, P0, P1, P2, P3);
	}
	template <typename T = void> T __Gen_Wrap_2272(uintptr_t P0, uintptr_t P1, uintptr_t P2, int32_t P3, uintptr_t P4, uintptr_t P5, uintptr_t P6) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, uintptr_t, int32_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x17D7644))(this, P0, P1, P2, P3, P4, P5, P6);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_2273(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17D778C))(this, P0);
	}
	template <typename T = void> T __Gen_Wrap_2274(uintptr_t P0, uintptr_t P1, uintptr_t P2, uintptr_t P3) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x17D7888))(this, P0, P1, P2, P3);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_2275(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17D798C))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_2276(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17D7A5C))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_2277(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17D7B2C))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_2278(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17D7BFC))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_2279(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17D7CCC))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_2280(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17D7D9C))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_2281(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17D7E6C))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_2282(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17D7F3C))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_2283(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17D800C))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_2284(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17D80DC))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_2285(uintptr_t P0, uintptr_t P1, uintptr_t P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x17D81D8))(this, P0, P1, P2);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_2286(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17D8304))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_2287() {
		return ((T (*)(ILFixDynamicMethodWrapper*))(Il2CppBase() + 0x17D8400))(this);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_2288(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17D84EC))(this, P0);
	}
	template <typename T = void> T __Gen_Wrap_2289(uintptr_t P0, bool P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, bool))(Il2CppBase() + 0x17D8658))(this, P0, P1);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_2290(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17D872C))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_2291(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17D87FC))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_2292(Il2CppArray<uintptr_t>* P0, uintptr_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x17D88F8))(this, P0, P1);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_2293(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17D89DC))(this, P0);
	}
	template <typename T = void> T __Gen_Wrap_2294(uintptr_t P0, uint32_t P1, uintptr_t P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uint32_t, uintptr_t))(Il2CppBase() + 0x17D8AD8))(this, P0, P1, P2);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_2295(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17D8BC0))(this, P0);
	}
	template <typename T = void> T __Gen_Wrap_2296(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17D8CBC))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_2297(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17D8D7C))(this, P0);
	}
	template <typename T = void> T __Gen_Wrap_2298(uintptr_t P0, uintptr_t P1, uintptr_t P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x17D8E78))(this, P0, P1, P2);
	}
	template <typename T = void> T __Gen_Wrap_2299(uintptr_t P0, uintptr_t P1, uintptr_t P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x17D8F60))(this, P0, P1, P2);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_2300(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17D9048))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_2301(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17D9144))(this, P0);
	}
	template <typename T = void*> T __Gen_Wrap_2302(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17D9240))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_2303(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17D933C))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_2304(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17D940C))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_2305(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17D9508))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_2306(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17D95D8))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_2307(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x17D96A8))(this, P0, P1);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_2308(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x17D978C))(this, P0, P1);
	}
	template <typename T = void> T __Gen_Wrap_2309(uintptr_t P0, uintptr_t P1, uintptr_t P2, uintptr_t P3) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x17D989C))(this, P0, P1, P2, P3);
	}
	template <typename T = void> T __Gen_Wrap_2310(uintptr_t P0, Il2CppString* P1, uintptr_t P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, Il2CppString*, uintptr_t))(Il2CppBase() + 0x17D99A0))(this, P0, P1, P2);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_2311(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17D9A88))(this, P0);
	}
	template <typename T = void> T __Gen_Wrap_2312(uintptr_t P0, uintptr_t P1, uintptr_t P2, uintptr_t P3) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x17D9B84))(this, P0, P1, P2, P3);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_2313(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17D9C88))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_2314(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17D9D58))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_2315(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17D9E28))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_2316(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17D9F24))(this, P0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T __Gen_Wrap_2317(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17DA020))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_2318(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x17DA18C))(this, P0, P1);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_2319(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17DA29C))(this, P0);
	}
	template <typename T = void> T __Gen_Wrap_2320(uintptr_t P0, bool P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, bool))(Il2CppBase() + 0x17DA408))(this, P0, P1);
	}
	template <typename T = Il2CppString*> T __Gen_Wrap_2321(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17DA4DC))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_2322(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17DA648))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_2323(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x17DA718))(this, P0, P1);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_2324(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17DA828))(this, P0);
	}
	template <typename T = void*> T __Gen_Wrap_2325(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17DA924))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_2326(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17DAA20))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_2327(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17DAAF0))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_2328(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17DABC0))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_2329(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17DACBC))(this, P0);
	}
	template <typename T = void> T __Gen_Wrap_2330(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17DADB8))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_2331(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17DAE78))(this, P0);
	}
	template <typename T = void> T __Gen_Wrap_2332(uintptr_t P0, Il2CppList<uintptr_t>* P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x17DAF74))(this, P0, P1);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_2333(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x17DB048))(this, P0, P1);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_2334(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17DB158))(this, P0);
	}
	template <typename T = void*> T __Gen_Wrap_2335(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17DB254))(this, P0);
	}
	template <typename T = void> T __Gen_Wrap_2336(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17DB350))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_2337(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17DB410))(this, P0);
	}
	template <typename T = void> T __Gen_Wrap_2338(Il2CppArray<uintptr_t>* P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x17DB50C))(this, P0);
	}
	template <typename T = void> T __Gen_Wrap_2339(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17DB5CC))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_2340(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17DB68C))(this, P0);
	}
	template <typename T = void> T __Gen_Wrap_2341(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17DB788))(this, P0);
	}
	template <typename T = void> T __Gen_Wrap_2342(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x17DB848))(this, P0, P1);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_2343(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17DB91C))(this, P0);
	}
	template <typename T = void> T __Gen_Wrap_2344(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x17DBA18))(this, P0, P1);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_2345(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17DBAEC))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_2346(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17DBBE8))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_2347(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17DBCE4))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_2348(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17DBDE0))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_2349(uintptr_t P0, uintptr_t P1, uintptr_t P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x17DBEDC))(this, P0, P1, P2);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_2350(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17DC008))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_2351(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17DC104))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_2352(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17DC200))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_2353(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17DC2FC))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_2354(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17DC3CC))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_2355(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x17DC49C))(this, P0, P1);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_2356(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17DC5AC))(this, P0);
	}
	template <typename T = void*> T __Gen_Wrap_2357(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17DC6A8))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_2358(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x17DC7A4))(this, P0, P1);
	}
	template <typename T = void> T __Gen_Wrap_2359(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17DC8B4))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_2360(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17DC974))(this, P0);
	}
	template <typename T = void> T __Gen_Wrap_2361(uintptr_t P0, uintptr_t P1, uintptr_t P2, uintptr_t P3, int32_t P4, uintptr_t P5, uintptr_t P6) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, uintptr_t, uintptr_t, int32_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x17DCA70))(this, P0, P1, P2, P3, P4, P5, P6);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_2362(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17DCBB8))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_2363(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17DCCB4))(this, P0);
	}
	template <typename T = void> T __Gen_Wrap_2364(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17DCDB0))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_2365(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17DCE70))(this, P0);
	}
	template <typename T = void> T __Gen_Wrap_2366(uintptr_t P0, uintptr_t P1, uintptr_t P2, uintptr_t P3, int32_t P4, uintptr_t P5) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, uintptr_t, uintptr_t, int32_t, uintptr_t))(Il2CppBase() + 0x17DCF6C))(this, P0, P1, P2, P3, P4, P5);
	}
	template <typename T = void> T __Gen_Wrap_2367(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17DD0A0))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_2368(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17DD160))(this, P0);
	}
	template <typename T = void> T __Gen_Wrap_2369(uintptr_t P0, uintptr_t P1, uintptr_t P2, int32_t P3, uintptr_t P4, uintptr_t P5, uintptr_t P6, uintptr_t P7) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, uintptr_t, int32_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x17DD25C))(this, P0, P1, P2, P3, P4, P5, P6, P7);
	}
	template <typename T = void> T __Gen_Wrap_2370(uintptr_t P0, uintptr_t P1, int64_t P2, uintptr_t P3) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, int64_t, uintptr_t))(Il2CppBase() + 0x17DD3C0))(this, P0, P1, P2, P3);
	}
	template <typename T = void> T __Gen_Wrap_2371(uintptr_t P0, uintptr_t P1, int64_t P2, uintptr_t P3, uintptr_t P4) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, int64_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x17DD4C4))(this, P0, P1, P2, P3, P4);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_2372(Il2CppArray<uintptr_t>* P0, uintptr_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x17DD5DC))(this, P0, P1);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_2373(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17DD6C0))(this, P0);
	}
	template <typename T = Il2CppList<uintptr_t>*> T __Gen_Wrap_2374(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17DD7BC))(this, P0);
	}
	template <typename T = void> T __Gen_Wrap_2375(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17DD8B8))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_2376(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17DD978))(this, P0);
	}
	template <typename T = void> T __Gen_Wrap_2377(uintptr_t P0, uintptr_t P1, uintptr_t P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x17DDA74))(this, P0, P1, P2);
	}
	template <typename T = void> T __Gen_Wrap_2378(uintptr_t P0, uintptr_t P1, uintptr_t P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x17DDB5C))(this, P0, P1, P2);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_2379(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17DDC44))(this, P0);
	}
	template <typename T = void> T __Gen_Wrap_2380(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17DDD40))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_2381(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17DDE00))(this, P0);
	}
	template <typename T = void> T __Gen_Wrap_2382(uintptr_t P0, uintptr_t P1, uintptr_t P2, uintptr_t P3) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x17DDEFC))(this, P0, P1, P2, P3);
	}
	template <typename T = void> T __Gen_Wrap_2383(uintptr_t P0, uintptr_t P1, uintptr_t P2, uintptr_t P3) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x17DE000))(this, P0, P1, P2, P3);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_2384(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17DE104))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_2385(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17DE200))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_2386(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17DE304))(this, P0);
	}
	template <typename T = int64_t> T __Gen_Wrap_2387(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17DE400))(this, P0);
	}
	template <typename T = int64_t> T __Gen_Wrap_2388(void* P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, void*))(Il2CppBase() + 0x17DE50C))(this, P0);
	}
	template <typename T = void> T __Gen_Wrap_2389(int64_t P0, uintptr_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, int64_t, uintptr_t))(Il2CppBase() + 0x17DE61C))(this, P0, P1);
	}
	template <typename T = void> T __Gen_Wrap_2390(int64_t P0, uintptr_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, int64_t, uintptr_t))(Il2CppBase() + 0x17DE6F0))(this, P0, P1);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_2391(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17DE7C4))(this, P0);
	}
	template <typename T = void> T __Gen_Wrap_2392(int64_t P0, uintptr_t P1, uintptr_t P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, int64_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x17DE894))(this, P0, P1, P2);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_2393(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17DE97C))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_2394(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17DEA78))(this, P0);
	}
	template <typename T = void> T __Gen_Wrap_2395(uintptr_t P0, uintptr_t P1, uintptr_t P2, int64_t P3, uintptr_t P4, uintptr_t P5) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, uintptr_t, int64_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x17DEB74))(this, P0, P1, P2, P3, P4, P5);
	}
	template <typename T = void> T __Gen_Wrap_2396(uintptr_t P0, uintptr_t P1, uintptr_t P2, void* P3, uintptr_t P4, uintptr_t P5) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, uintptr_t, void*, uintptr_t, uintptr_t))(Il2CppBase() + 0x17DECA8))(this, P0, P1, P2, P3, P4, P5);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_2397(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17DEE24))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_2398(int64_t P0, uintptr_t P1, uintptr_t P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, int64_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x17DEEF4))(this, P0, P1, P2);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_2399(int64_t P0, uintptr_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, int64_t, uintptr_t))(Il2CppBase() + 0x17DF028))(this, P0, P1);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_2400(uintptr_t P0, int64_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, int64_t))(Il2CppBase() + 0x17DF148))(this, P0, P1);
	}
	template <typename T = void> T __Gen_Wrap_2401(int64_t P0, Il2CppString* P1, Il2CppArray<uintptr_t>* P2, bool P3) {
		return ((T (*)(ILFixDynamicMethodWrapper*, int64_t, Il2CppString*, Il2CppArray<uintptr_t>*, bool))(Il2CppBase() + 0x17DF268))(this, P0, P1, P2, P3);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T __Gen_Wrap_2402(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x17DF36C))(this, P0, P1);
	}
	template <typename T = void> T __Gen_Wrap_2403(int64_t P0, uintptr_t P1, uintptr_t P2, uintptr_t P3, bool P4, uintptr_t P5) {
		return ((T (*)(ILFixDynamicMethodWrapper*, int64_t, uintptr_t, uintptr_t, uintptr_t, bool, uintptr_t))(Il2CppBase() + 0x17DF47C))(this, P0, P1, P2, P3, P4, P5);
	}
	template <typename T = void> T __Gen_Wrap_2404(int64_t P0, Il2CppString* P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, int64_t, Il2CppString*))(Il2CppBase() + 0x17DF5B0))(this, P0, P1);
	}
	template <typename T = void> T __Gen_Wrap_2405(int64_t P0, uintptr_t P1, uintptr_t P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, int64_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x17DF684))(this, P0, P1, P2);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_2406(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17DF76C))(this, P0);
	}
	template <typename T = void> T __Gen_Wrap_2407(int64_t P0, uintptr_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, int64_t, uintptr_t))(Il2CppBase() + 0x17DF868))(this, P0, P1);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_2408(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17DF93C))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_2409(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17DFA38))(this, P0);
	}
	template <typename T = void> T __Gen_Wrap_2410(int64_t P0, uintptr_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, int64_t, uintptr_t))(Il2CppBase() + 0x17DFB3C))(this, P0, P1);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_2411(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17DFC10))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_2412(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17DFD0C))(this, P0);
	}
	template <typename T = void> T __Gen_Wrap_2413(uintptr_t P0, uintptr_t P1, void* P2, uintptr_t P3) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, void*, uintptr_t))(Il2CppBase() + 0x17DFE08))(this, P0, P1, P2, P3);
	}
	template <typename T = void> T __Gen_Wrap_2414(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x17DFF54))(this, P0, P1);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_2415(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17E006C))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_2416() {
		return ((T (*)(ILFixDynamicMethodWrapper*))(Il2CppBase() + 0x17E0168))(this);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_2417(uintptr_t P0, uint32_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uint32_t))(Il2CppBase() + 0x17E0254))(this, P0, P1);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_2418(uintptr_t P0, uint64_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uint64_t))(Il2CppBase() + 0x17E0364))(this, P0, P1);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_2419(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17E0474))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_2420(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17E0570))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_2421() {
		return ((T (*)(ILFixDynamicMethodWrapper*))(Il2CppBase() + 0x17E066C))(this);
	}
	template <typename T = void> T __Gen_Wrap_2422(uintptr_t P0, uintptr_t P1, Il2CppArray<uintptr_t>* P2, bool P3) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, Il2CppArray<uintptr_t>*, bool))(Il2CppBase() + 0x17E0758))(this, P0, P1, P2, P3);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_2423(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17E085C))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_2424(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17E0958))(this, P0);
	}
	template <typename T = void> T __Gen_Wrap_2425(uintptr_t P0, uintptr_t P1, uintptr_t P2, uintptr_t P3, bool P4, uintptr_t P5) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, uintptr_t, uintptr_t, bool, uintptr_t))(Il2CppBase() + 0x17E0A54))(this, P0, P1, P2, P3, P4, P5);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_2426(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x17E0B88))(this, P0, P1);
	}
	template <typename T = void> T __Gen_Wrap_2427(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x17E0C98))(this, P0, P1);
	}
	template <typename T = void> T __Gen_Wrap_2428(uintptr_t P0, uintptr_t P1, uintptr_t P2, uintptr_t P3) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x17E0D6C))(this, P0, P1, P2, P3);
	}
	template <typename T = void> T __Gen_Wrap_2429(uintptr_t P0, uintptr_t P1, uintptr_t P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x17E0E70))(this, P0, P1, P2);
	}
	template <typename T = void> T __Gen_Wrap_2430(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17E0F58))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_2431(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17E1018))(this, P0);
	}
	template <typename T = void> T __Gen_Wrap_2432(uintptr_t P0, uint32_t P1, uint32_t P2, uint32_t P3, uint64_t P4, uintptr_t P5) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uint32_t, uint32_t, uint32_t, uint64_t, uintptr_t))(Il2CppBase() + 0x17E1114))(this, P0, P1, P2, P3, P4, P5);
	}
	template <typename T = void> T __Gen_Wrap_2433(uintptr_t P0, uint32_t P1, uint32_t P2, uint32_t P3, uintptr_t P4) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uint32_t, uint32_t, uint32_t, uintptr_t))(Il2CppBase() + 0x17E1248))(this, P0, P1, P2, P3, P4);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_2434(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17E1360))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_2435(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x17E1430))(this, P0, P1);
	}
	template <typename T = void> T __Gen_Wrap_2436(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17E1540))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_2437(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17E1600))(this, P0);
	}
	template <typename T = void> T __Gen_Wrap_2438(uintptr_t P0, uint32_t P1, uint32_t P2, bool P3, uintptr_t P4) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uint32_t, uint32_t, bool, uintptr_t))(Il2CppBase() + 0x17E16FC))(this, P0, P1, P2, P3, P4);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_2439(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17E1814))(this, P0);
	}
	template <typename T = void*> T __Gen_Wrap_2440(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17E1910))(this, P0);
	}
	template <typename T = void> T __Gen_Wrap_2441(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17E1A0C))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_2442(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17E1ACC))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_2443(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17E1BC8))(this, P0);
	}
	template <typename T = void> T __Gen_Wrap_2444(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17E1CC4))(this, P0);
	}
	template <typename T = void> T __Gen_Wrap_2445(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17E1D84))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_2446(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17E1E44))(this, P0);
	}
	template <typename T = void> T __Gen_Wrap_2447(uintptr_t P0, bool P1, uintptr_t P2, int32_t P3, int32_t P4) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, bool, uintptr_t, int32_t, int32_t))(Il2CppBase() + 0x17E1F40))(this, P0, P1, P2, P3, P4);
	}
	template <typename T = void> T __Gen_Wrap_2448(uintptr_t P0, uintptr_t P1, uintptr_t P2, int32_t P3, int32_t P4, bool P5) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, uintptr_t, int32_t, int32_t, bool))(Il2CppBase() + 0x17E2058))(this, P0, P1, P2, P3, P4, P5);
	}
	template <typename T = void> T __Gen_Wrap_2449(uintptr_t P0, bool P1, uintptr_t P2, uintptr_t P3, int32_t P4, int32_t P5) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, bool, uintptr_t, uintptr_t, int32_t, int32_t))(Il2CppBase() + 0x17E218C))(this, P0, P1, P2, P3, P4, P5);
	}
	template <typename T = void> T __Gen_Wrap_2450(uintptr_t P0, bool P1, uintptr_t P2, uintptr_t P3) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, bool, uintptr_t, uintptr_t))(Il2CppBase() + 0x17E22C0))(this, P0, P1, P2, P3);
	}
	template <typename T = Il2CppList<uintptr_t>*> T __Gen_Wrap_2451(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17E23C4))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_2452(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x17E24C0))(this, P0, P1);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_2453(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17E25D0))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_2454(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17E26CC))(this, P0);
	}
	template <typename T = Il2CppString*> T __Gen_Wrap_2455(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17E27C8))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_2456(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17E28C4))(this, P0);
	}
	template <typename T = Il2CppString*> T __Gen_Wrap_2457(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17E29C0))(this, P0);
	}
	template <typename T = bool> T __Gen_Wrap_2458(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17E2ABC))(this, P0);
	}
	template <typename T = void> T __Gen_Wrap_2459(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x17E2B90))(this, P0, P1);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_2460(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17E2C64))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_2461(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17E2D34))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_2462(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17E2E04))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_2463(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17E2F00))(this, P0);
	}
	template <typename T = void> T __Gen_Wrap_2464(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17E2FD0))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_2465(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17E3090))(this, P0);
	}
	template <typename T = void> T __Gen_Wrap_2466(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17E318C))(this, P0);
	}
	template <typename T = void> T __Gen_Wrap_2467(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x17E324C))(this, P0, P1);
	}
	template <typename T = void> T __Gen_Wrap_2468(uintptr_t P0, uintptr_t P1, Il2CppArray<uintptr_t>* P2, uintptr_t P3, Il2CppArray<uintptr_t>* P4) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, Il2CppArray<uintptr_t>*, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x17E3320))(this, P0, P1, P2, P3, P4);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_2469(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x17E3438))(this, P0, P1);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_2470(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17E3548))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_2471(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17E3618))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_2472(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17E36E8))(this, P0);
	}
	template <typename T = void> T __Gen_Wrap_2473(Il2CppArray<uintptr_t>* P0, Il2CppArray<uintptr_t>* P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x17E37E4))(this, P0, P1);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_2474(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17E38B8))(this, P0);
	}
	template <typename T = void> T __Gen_Wrap_2475(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x17E3988))(this, P0, P1);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_2476(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17E3A5C))(this, P0);
	}
	template <typename T = void> T __Gen_Wrap_2477(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17E3B58))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_2478(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17E3C18))(this, P0);
	}
	template <typename T = void> T __Gen_Wrap_2479(uintptr_t P0, uintptr_t P1, uintptr_t P2, uintptr_t P3, uintptr_t P4) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x17E3D14))(this, P0, P1, P2, P3, P4);
	}
	template <typename T = void> T __Gen_Wrap_2480(uintptr_t P0, uintptr_t P1, uintptr_t P2, uintptr_t P3, bool P4, uintptr_t P5, uintptr_t P6) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, uintptr_t, uintptr_t, bool, uintptr_t, uintptr_t))(Il2CppBase() + 0x17E3E2C))(this, P0, P1, P2, P3, P4, P5, P6);
	}
	template <typename T = void> T __Gen_Wrap_2481(uintptr_t P0, uintptr_t P1, uintptr_t P2, uintptr_t P3, uintptr_t P4) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x17E3F74))(this, P0, P1, P2, P3, P4);
	}
	template <typename T = void> T __Gen_Wrap_2482(uintptr_t P0, uintptr_t P1, uintptr_t P2, bool P3, uintptr_t P4, uintptr_t P5) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, uintptr_t, bool, uintptr_t, uintptr_t))(Il2CppBase() + 0x17E408C))(this, P0, P1, P2, P3, P4, P5);
	}
	template <typename T = void> T __Gen_Wrap_2483(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17E41C0))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_2484(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17E4280))(this, P0);
	}
	template <typename T = void> T __Gen_Wrap_2485(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17E4350))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_2486(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17E4410))(this, P0);
	}
	template <typename T = void> T __Gen_Wrap_2487(uintptr_t P0, bool P1, bool P2, uint32_t P3, uintptr_t P4, uintptr_t P5) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, bool, bool, uint32_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x17E450C))(this, P0, P1, P2, P3, P4, P5);
	}
	template <typename T = void> T __Gen_Wrap_2488(uintptr_t P0, uintptr_t P1, uint32_t P2, bool P3, bool P4, uintptr_t P5) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, uint32_t, bool, bool, uintptr_t))(Il2CppBase() + 0x17E4640))(this, P0, P1, P2, P3, P4, P5);
	}
	template <typename T = bool> T __Gen_Wrap_2489(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17E4774))(this, P0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T __Gen_Wrap_2490(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17E48DC))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_2491(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x17E4A48))(this, P0, P1);
	}
	template <typename T = Il2CppString*> T __Gen_Wrap_2492(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17E4B58))(this, P0);
	}
	template <typename T = void*> T __Gen_Wrap_2493(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17E4CC4))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_2494(uintptr_t P0, uint64_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uint64_t))(Il2CppBase() + 0x17E4E30))(this, P0, P1);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_2495(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17E4F40))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_2496(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17E503C))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_2497(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17E5138))(this, P0);
	}
	template <typename T = void> T __Gen_Wrap_2498(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17E525C))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_2499(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17E531C))(this, P0);
	}
	template <typename T = void> T __Gen_Wrap_2500(uintptr_t P0, uintptr_t P1, uintptr_t P2, uintptr_t P3, uintptr_t P4) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x17E5418))(this, P0, P1, P2, P3, P4);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_2501(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17E5584))(this, P0);
	}
	template <typename T = void*> T __Gen_Wrap_2502(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17E5680))(this, P0);
	}
	template <typename T = void> T __Gen_Wrap_2503(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17E577C))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_2504(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17E583C))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_2505(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17E5938))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_2506(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x17E5A08))(this, P0, P1);
	}
	template <typename T = void> T __Gen_Wrap_2507(uintptr_t P0, uintptr_t P1, uintptr_t P2, uintptr_t P3) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x17E5B40))(this, P0, P1, P2, P3);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_2508() {
		return ((T (*)(ILFixDynamicMethodWrapper*))(Il2CppBase() + 0x17E5C90))(this);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_2509(uintptr_t P0, uint32_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uint32_t))(Il2CppBase() + 0x17E5D7C))(this, P0, P1);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_2510(uintptr_t P0, uint64_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uint64_t))(Il2CppBase() + 0x17E5E8C))(this, P0, P1);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_2511(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17E5F9C))(this, P0);
	}
	template <typename T = void> T __Gen_Wrap_2512(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x17E6098))(this, P0, P1);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_2513(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17E616C))(this, P0);
	}
	template <typename T = void> T __Gen_Wrap_2514(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17E6268))(this, P0);
	}
	template <typename T = void*> T __Gen_Wrap_2515(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x17E6328))(this, P0, P1);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_2516(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17E6438))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_2517(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x17E6534))(this, P0, P1);
	}
	template <typename T = void> T __Gen_Wrap_2518(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17E6644))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_2519(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17E6704))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_2520(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17E6800))(this, P0);
	}
	template <typename T = void*> T __Gen_Wrap_2521(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17E68FC))(this, P0);
	}
	template <typename T = void> T __Gen_Wrap_2522(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17E69F8))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_2523(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17E6AB8))(this, P0);
	}
	template <typename T = void> T __Gen_Wrap_2524(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17E6BB4))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_2525(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17E6C74))(this, P0);
	}
	template <typename T = void> T __Gen_Wrap_2526(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x17E6D70))(this, P0, P1);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_2527() {
		return ((T (*)(ILFixDynamicMethodWrapper*))(Il2CppBase() + 0x17E6E44))(this);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_2528(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x17E6F30))(this, P0, P1);
	}
	template <typename T = void> T __Gen_Wrap_2529(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17E7040))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_2530(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x17E7100))(this, P0, P1);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_2531(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17E71E4))(this, P0);
	}
	template <typename T = uint32_t> T __Gen_Wrap_2532(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x17E72B4))(this, P0, P1);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_2533(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x17E7398))(this, P0, P1);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_2534(uintptr_t P0, uintptr_t P1, uint32_t P2, uintptr_t P3) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, uint32_t, uintptr_t))(Il2CppBase() + 0x17E747C))(this, P0, P1, P2, P3);
	}
	template <typename T = void> T __Gen_Wrap_2535(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17E75BC))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_2536(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17E767C))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_2537(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17E7778))(this, P0);
	}
	template <typename T = bool> T __Gen_Wrap_2538(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x17E7874))(this, P0, P1);
	}
	template <typename T = bool> T __Gen_Wrap_2539(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x17E795C))(this, P0, P1);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_2540(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x17E7A44))(this, P0, P1);
	}
	template <typename T = void> T __Gen_Wrap_2541(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17E7B54))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_2542(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17E7C14))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_2543(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17E7D10))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_2544(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17E7E0C))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_2545(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17E7F08))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_2546(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17E7FD8))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_2547(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x17E80A8))(this, P0, P1);
	}
	template <typename T = void> T __Gen_Wrap_2548(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17E81B8))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_2549(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17E8278))(this, P0);
	}
	template <typename T = void> T __Gen_Wrap_2550(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17E8374))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_2551(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17E8434))(this, P0);
	}
	template <typename T = void> T __Gen_Wrap_2552(uintptr_t P0, uintptr_t P1, uintptr_t P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x17E8530))(this, P0, P1, P2);
	}
	template <typename T = void> T __Gen_Wrap_2553(uintptr_t P0, uintptr_t P1, uintptr_t P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x17E8618))(this, P0, P1, P2);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_2554() {
		return ((T (*)(ILFixDynamicMethodWrapper*))(Il2CppBase() + 0x17E8700))(this);
	}
	template <typename T = void> T __Gen_Wrap_2555(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17E87EC))(this, P0);
	}
	template <typename T = void> T __Gen_Wrap_2556(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x17E88AC))(this, P0, P1);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_2557(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x17E8980))(this, P0, P1);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_2558(uintptr_t P0, bool P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, bool))(Il2CppBase() + 0x17E8A90))(this, P0, P1);
	}
	template <typename T = void> T __Gen_Wrap_2559(int32_t P0, uintptr_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, int32_t, uintptr_t))(Il2CppBase() + 0x17E8BA0))(this, P0, P1);
	}
	template <typename T = void> T __Gen_Wrap_2560(uintptr_t P0, uintptr_t P1, uintptr_t P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x17E8C74))(this, P0, P1, P2);
	}
	template <typename T = void> T __Gen_Wrap_2561(uintptr_t P0, uintptr_t P1, uintptr_t P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x17E8D5C))(this, P0, P1, P2);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_2562(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17E8E44))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_2563(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17E8F40))(this, P0);
	}
	template <typename T = void> T __Gen_Wrap_2564(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x17E903C))(this, P0, P1);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_2565(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17E9158))(this, P0);
	}
	template <typename T = void> T __Gen_Wrap_2566(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x17E9254))(this, P0, P1);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_2567() {
		return ((T (*)(ILFixDynamicMethodWrapper*))(Il2CppBase() + 0x17E9328))(this);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_2568(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17E9414))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_2569(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17E94E4))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_2570(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17E95E0))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_2571(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17E96B0))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_2572(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17E9780))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_2573(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17E9850))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_2574(int64_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, int64_t))(Il2CppBase() + 0x17E994C))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_2575(uintptr_t P0, int64_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, int64_t))(Il2CppBase() + 0x17E9A48))(this, P0, P1);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_2576(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x17E9B58))(this, P0, P1);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_2577(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17E9C68))(this, P0);
	}
	template <typename T = Il2CppString*> T __Gen_Wrap_2578(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x17E9D80))(this, P0, P1);
	}
	template <typename T = void*> T __Gen_Wrap_2579(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17E9E90))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_2580(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17E9F8C))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_2581(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17EA088))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_2582(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17EA184))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_2583(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x17EA280))(this, P0, P1);
	}
	template <typename T = bool> T __Gen_Wrap_2584(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17EA364))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_2585(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17EA438))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_2586(uintptr_t P0, bool P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, bool))(Il2CppBase() + 0x17EA508))(this, P0, P1);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_2587(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x17EA618))(this, P0, P1);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_2588(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17EA728))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_2589(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17EA824))(this, P0);
	}
	template <typename T = bool> T __Gen_Wrap_2590(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x17EA920))(this, P0, P1);
	}
	template <typename T = bool> T __Gen_Wrap_2591(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x17EAA08))(this, P0, P1);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_2592(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17EAAF0))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_2593(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17EABC0))(this, P0);
	}
	template <typename T = bool> T __Gen_Wrap_2594(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17EAC90))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_2595(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17EADD0))(this, P0);
	}
	template <typename T = Il2CppString*> T __Gen_Wrap_2596(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17EAF0C))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_2597(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17EB050))(this, P0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T __Gen_Wrap_2598(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17EB1BC))(this, P0);
	}
	template <typename T = int64_t> T __Gen_Wrap_2599(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17EB318))(this, P0);
	}
	template <typename T = Il2CppString*> T __Gen_Wrap_2600(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17EB46C))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_2601(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17EB5C8))(this, P0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T __Gen_Wrap_2602(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17EB71C))(this, P0);
	}
	template <typename T = Il2CppString*> T __Gen_Wrap_2603(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17EB878))(this, P0);
	}
	template <typename T = int64_t> T __Gen_Wrap_2604(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17EB9D4))(this, P0);
	}
	template <typename T = void*> T __Gen_Wrap_2605(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17EBB10))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_2606(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17EBC54))(this, P0);
	}
	template <typename T = void> T __Gen_Wrap_2607(uintptr_t P0, uintptr_t P1, uintptr_t P2, uint32_t P3) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, uintptr_t, uint32_t))(Il2CppBase() + 0x17EBD24))(this, P0, P1, P2, P3);
	}
	template <typename T = void> T __Gen_Wrap_2608(uintptr_t P0, uintptr_t P1, uintptr_t P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x17EBE28))(this, P0, P1, P2);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_2609(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17EBF10))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_2610(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17EBFE0))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_2611(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17EC0B0))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_2612(uintptr_t P0, uintptr_t P1, uintptr_t P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x17EC180))(this, P0, P1, P2);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_2613(uintptr_t P0, int32_t P1, uintptr_t P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, int32_t, uintptr_t))(Il2CppBase() + 0x17EC2AC))(this, P0, P1, P2);
	}
	template <typename T = bool> T __Gen_Wrap_2614(uintptr_t P0, uintptr_t* P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t*))(Il2CppBase() + 0x17EC3D8))(this, P0, P1);
	}
	template <typename T = bool> T __Gen_Wrap_2615(uintptr_t P0, uintptr_t P1, uintptr_t* P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, uintptr_t*))(Il2CppBase() + 0x17EC510))(this, P0, P1, P2);
	}
	template <typename T = char> T __Gen_Wrap_2616(uintptr_t P0, uintptr_t P1, int32_t P2, char P3) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, int32_t, char))(Il2CppBase() + 0x17EC664))(this, P0, P1, P2, P3);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_2617(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17EC778))(this, P0);
	}
	template <typename T = Il2CppList<uintptr_t>*> T __Gen_Wrap_2618(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17EC848))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_2619(uintptr_t P0, bool P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, bool))(Il2CppBase() + 0x17EC944))(this, P0, P1);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_2620(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17ECA54))(this, P0);
	}
	template <typename T = void> T __Gen_Wrap_2621(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x17ECB24))(this, P0, P1);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_2622() {
		return ((T (*)(ILFixDynamicMethodWrapper*))(Il2CppBase() + 0x17ECBF8))(this);
	}
	template <typename T = bool> T __Gen_Wrap_2623(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17ECCE4))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_2624(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17ECDB8))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_2625() {
		return ((T (*)(ILFixDynamicMethodWrapper*))(Il2CppBase() + 0x17ECEB4))(this);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_2626(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17ECFA0))(this, P0);
	}
	template <typename T = float> T __Gen_Wrap_2627(uintptr_t P0, float P1, float P2, float P3) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, float, float, float))(Il2CppBase() + 0x17ED09C))(this, P0, P1, P2, P3);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_2628(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17ED1B8))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_2629(float P0, float P1, float P2, float P3) {
		return ((T (*)(ILFixDynamicMethodWrapper*, float, float, float, float))(Il2CppBase() + 0x17ED2B4))(this, P0, P1, P2, P3);
	}
	template <typename T = Il2CppVector2> T __Gen_Wrap_2630(uintptr_t P0, Il2CppVector2 P1, Il2CppVector2 P2, float P3, float P4) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, Il2CppVector2, Il2CppVector2, float, float))(Il2CppBase() + 0x17ED3FC))(this, P0, P1, P2, P3, P4);
	}
	template <typename T = Il2CppVector3> T __Gen_Wrap_2631(uintptr_t P0, Il2CppVector3 P1, Il2CppVector3 P2, float P3, float P4) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, Il2CppVector3, Il2CppVector3, float, float))(Il2CppBase() + 0x17ED590))(this, P0, P1, P2, P3, P4);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_2632(uintptr_t P0, uintptr_t P1, uintptr_t P2, float P3, float P4) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, uintptr_t, float, float))(Il2CppBase() + 0x17ED73C))(this, P0, P1, P2, P3, P4);
	}
	template <typename T = Il2CppQuaternion> T __Gen_Wrap_2633(uintptr_t P0, Il2CppQuaternion P1, Il2CppQuaternion P2, float P3, float P4) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, Il2CppQuaternion, Il2CppQuaternion, float, float))(Il2CppBase() + 0x17ED8FC))(this, P0, P1, P2, P3, P4);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T __Gen_Wrap_2634(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17EDABC))(this, P0);
	}
	template <typename T = void> T __Gen_Wrap_2635(uintptr_t P0, int64_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, int64_t))(Il2CppBase() + 0x17EDBB8))(this, P0, P1);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_2636(uintptr_t P0, bool P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, bool))(Il2CppBase() + 0x17EDC8C))(this, P0, P1);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_2637(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17EDD9C))(this, P0);
	}
	template <typename T = bool> T __Gen_Wrap_2638(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17EDE98))(this, P0);
	}
	template <typename T = void*> T __Gen_Wrap_2639(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x17EDFAC))(this, P0, P1);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_2640(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17EE0BC))(this, P0);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_2641(uintptr_t P0, uintptr_t P1, int32_t P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x17EE1B8))(this, P0, P1, P2);
	}
	template <typename T = int32_t> T __Gen_Wrap_2642(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x17EE308))(this, P0, P1);
	}
	template <typename T = bool> T __Gen_Wrap_2643(uintptr_t P0, uintptr_t P1, uintptr_t P2, uintptr_t P3) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x17EE438))(this, P0, P1, P2, P3);
	}
	template <typename T = bool> T __Gen_Wrap_2644(uintptr_t P0, uintptr_t P1, uintptr_t P2, uintptr_t P3, int32_t P4) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x17EE550))(this, P0, P1, P2, P3, P4);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_2645(uintptr_t P0, uintptr_t P1, bool P2, bool P3) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, bool, bool))(Il2CppBase() + 0x17EE6C8))(this, P0, P1, P2, P3);
	}
	template <typename T = bool> T __Gen_Wrap_2646(uintptr_t P0, uintptr_t P1, uintptr_t P2, uintptr_t P3, bool P4, bool P5) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, uintptr_t, uintptr_t, bool, bool))(Il2CppBase() + 0x17EE834))(this, P0, P1, P2, P3, P4, P5);
	}
	template <typename T = bool> T __Gen_Wrap_2647(uintptr_t P0, uintptr_t P1, uintptr_t P2, uintptr_t P3, uintptr_t P4) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x17EE9C8))(this, P0, P1, P2, P3, P4);
	}
	template <typename T = float> T __Gen_Wrap_2648(uintptr_t P0, float P1, float P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, float, float))(Il2CppBase() + 0x17EEBC0))(this, P0, P1, P2);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_2649(uintptr_t P0, uintptr_t P1, float P2, uintptr_t P3) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, float, uintptr_t))(Il2CppBase() + 0x17EED04))(this, P0, P1, P2, P3);
	}
	template <typename T = bool> T __Gen_Wrap_2650(uintptr_t P0, uintptr_t P1, uintptr_t P2, uintptr_t P3) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x17EEEAC))(this, P0, P1, P2, P3);
	}
	template <typename T = void> T __Gen_Wrap_2651(uintptr_t P0, uintptr_t P1, uintptr_t P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x17EF058))(this, P0, P1, P2);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_2652(uintptr_t P0, uintptr_t P1, uintptr_t P2, uintptr_t P3, uintptr_t P4, uintptr_t P5) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x17EF18C))(this, P0, P1, P2, P3, P4, P5);
	}
	template <typename T = void> T __Gen_Wrap_2653(uintptr_t P0, uintptr_t P1, uintptr_t P2, uintptr_t P3, uintptr_t P4, uintptr_t P5, uintptr_t P6) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x17EF2FC))(this, P0, P1, P2, P3, P4, P5, P6);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_2654(uintptr_t P0, uintptr_t P1, uintptr_t P2, void* P3, void* P4, uintptr_t P5) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, uintptr_t, void*, void*, uintptr_t))(Il2CppBase() + 0x17EF444))(this, P0, P1, P2, P3, P4, P5);
	}
	template <typename T = void> T __Gen_Wrap_2655(uintptr_t P0, uintptr_t P1, uintptr_t P2, uintptr_t P3, void* P4, void* P5, uintptr_t P6) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, uintptr_t, uintptr_t, void*, void*, uintptr_t))(Il2CppBase() + 0x17EF5EC))(this, P0, P1, P2, P3, P4, P5, P6);
	}
	template <typename T = void> T __Gen_Wrap_2656(uintptr_t P0, uintptr_t P1, uintptr_t P2, uintptr_t P3, uintptr_t P4, int32_t P5, uintptr_t P6, uintptr_t P7) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, int32_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x17EF78C))(this, P0, P1, P2, P3, P4, P5, P6, P7);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_2657(uintptr_t P0) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t))(Il2CppBase() + 0x17EF8F0))(this, P0);
	}
	template <typename T = void> T __Gen_Wrap_2658(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x17EF9C0))(this, P0, P1);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_2659(uintptr_t P0, uintptr_t P1, bool P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, bool))(Il2CppBase() + 0x17EFA94))(this, P0, P1, P2);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_2660(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x17EFBC0))(this, P0, P1);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_2661(uintptr_t P0, bool P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, bool))(Il2CppBase() + 0x17EFCD0))(this, P0, P1);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_2662(uintptr_t P0, uintptr_t P1, float P2) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t, float))(Il2CppBase() + 0x17EFDE0))(this, P0, P1, P2);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_2663(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x17EFF0C))(this, P0, P1);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_2664(uintptr_t P0, float P1) {
		return ((T (*)(ILFixDynamicMethodWrapper*, uintptr_t, float))(Il2CppBase() + 0x17F001C))(this, P0, P1);
	}
	template <typename T = uintptr_t> T __Gen_Wrap_2665() {
		return ((T (*)(ILFixDynamicMethodWrapper*))(Il2CppBase() + 0x17F0134))(this);
	}

};

}
