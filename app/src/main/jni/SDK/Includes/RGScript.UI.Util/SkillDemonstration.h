#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace RGScript.UI.Util {

class SkillDemonstration
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "RGScript.UI.Util", "SkillDemonstration"));
	}

	template <typename T = uintptr_t> static T& Type() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _startTimer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& _endTimer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& _restartTimer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& _moveBackTimer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = Il2CppString*> static T& _startFuncName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = Il2CppString*> static T& _endFuncName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = Il2CppString*> static T& _exitFuncName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& _skillDemonstration() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& _heroType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = int32_t> static T& _skinIndex() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& _controller() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = float> static T& TimeToStart() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> static T& CommonDuration() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> static T& CommonTimeToRestart() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> static T& _duration() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = float> static T& _timeToRestart() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = Il2CppVector3> static T& StakePos() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = Il2CppVector3> static T& ControllerPos() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}
	template <typename T = Il2CppString*> static T& StakePath() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& MonkeyPath() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& BoarPath() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& OrcPath() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> static T& IsShowing() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	template <typename T = float> static T& C00TimeToRestart2() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7C);
	}
	template <typename T = float> static T& C01Duration0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x80);
	}
	template <typename T = float> static T& C01TimeToRestart0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x84);
	}
	template <typename T = float> static T& C01Duration1() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x88);
	}
	template <typename T = float> static T& C01TimeToRestart1() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8C);
	}
	template <typename T = float> static T& C01Duration2() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x90);
	}
	template <typename T = float> static T& C01TimeToRestart2() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x94);
	}
	template <typename T = float> static T& C03Duration0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x98);
	}
	template <typename T = float> static T& C03Duration2() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x9C);
	}
	template <typename T = float> static T& C04Duration1() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA0);
	}
	template <typename T = float> static T& C04Duration2() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA4);
	}
	template <typename T = float> static T& C04TimeToRestart2() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA8);
	}
	template <typename T = float> static T& C05Duration1() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xAC);
	}
	template <typename T = float> static T& C05TimeToRestart1() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB0);
	}
	template <typename T = float> static T& C06Duration2() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB4);
	}
	template <typename T = float> static T& C06TimeToRestart2() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB8);
	}
	template <typename T = float> static T& C07Duration0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xBC);
	}
	template <typename T = float> static T& C07TimeToRestart0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC0);
	}
	template <typename T = float> static T& C07Duration1() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC4);
	}
	template <typename T = float> static T& C07TimeToRestart1() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC8);
	}
	template <typename T = float> static T& C07Duration2() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xCC);
	}
	template <typename T = float> static T& C07TimeToRestart2() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD0);
	}
	template <typename T = float> static T& C08Duration0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD4);
	}
	template <typename T = float> static T& C08TimeToRestart0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD8);
	}
	template <typename T = float> static T& C08Duration1() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xDC);
	}
	template <typename T = float> static T& C09Duration0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE0);
	}
	template <typename T = float> static T& C09TimeToRestart0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE4);
	}
	template <typename T = float> static T& C09Duration1() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE8);
	}
	template <typename T = float> static T& C09TimeToRestart1() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xEC);
	}
	template <typename T = float> static T& C09Duration2() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xF0);
	}
	template <typename T = float> static T& C09TimeToRestart2() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xF4);
	}
	template <typename T = float> static T& C10TimeToRestart0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xF8);
	}
	template <typename T = float> static T& C11Duration2() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xFC);
	}
	template <typename T = float> static T& C12Duration2() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x100);
	}
	template <typename T = float> static T& C12TimeToRestart2() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x104);
	}
	template <typename T = float> static T& C13Duration0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x108);
	}
	template <typename T = float> static T& C13Duration1() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10C);
	}
	template <typename T = float> static T& C13Duration2() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x110);
	}
	template <typename T = float> static T& C13TimeToRestart2() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x114);
	}
	template <typename T = float> static T& C14Duration0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x118);
	}
	template <typename T = float> static T& C14TimeToRestart0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x11C);
	}
	template <typename T = float> static T& C14Duration1() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x120);
	}
	template <typename T = float> static T& C14Duration2() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x124);
	}
	template <typename T = float> static T& C14TimeToRestart2() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x128);
	}
	template <typename T = float> static T& C15Duration0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x12C);
	}
	template <typename T = float> static T& C15TimeToRestart0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x130);
	}
	template <typename T = float> static T& C16TimeToRestart0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x134);
	}
	template <typename T = float> static T& C16TimeToRestart1() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x138);
	}
	template <typename T = float> static T& C16Duration2() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x13C);
	}
	template <typename T = float> static T& C17Duration0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x140);
	}
	template <typename T = float> static T& C17TimeToRestart0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x144);
	}
	template <typename T = float> static T& C18Duration0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x148);
	}
	template <typename T = float> static T& C18TimeToRestart0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14C);
	}
	template <typename T = float> static T& C19Duration0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x150);
	}
	template <typename T = float> static T& C19TimeToRestart0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x154);
	}
	template <typename T = Il2CppVector3> static T& monster1Pos() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x158);
	}
	template <typename T = Il2CppVector3> static T& monster2Pos() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x164);
	}

	template <typename T = bool> static T get_IsShowing() {
		return ((T (*)(void *))(Il2CppBase() + 0x45420A0))(0);
	}
	template <typename T = void> static T set_IsShowing(bool value) {
		return ((T (*)(void *, bool))(Il2CppBase() + 0x4542108))(0, value);
	}
	template <typename T = void> static T CommonEnter() {
		return ((T (*)(void *))(Il2CppBase() + 0x4542178))(0);
	}
	template <typename T = void> static T CommonStart() {
		return ((T (*)(void *))(Il2CppBase() + 0x4542340))(0);
	}
	template <typename T = void> static T CommonEnd() {
		return ((T (*)(void *))(Il2CppBase() + 0x45424E4))(0);
	}
	template <typename T = void> static T CommonExit() {
		return ((T (*)(void *))(Il2CppBase() + 0x4542624))(0);
	}
	template <typename T = void> static T CallFunc(Il2CppString* funcName, Il2CppString* defaultFuncName) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x454286C))(0, funcName, defaultFuncName);
	}
	template <typename T = void> static T DestroyTextObjects() {
		return ((T (*)(void *))(Il2CppBase() + 0x45429AC))(0);
	}
	template <typename T = void> static T DestroyTempObjects() {
		return ((T (*)(void *))(Il2CppBase() + 0x4542C5C))(0);
	}
	template <typename T = void> static T CancelTimers() {
		return ((T (*)(void *))(Il2CppBase() + 0x4542EA4))(0);
	}
	template <typename T = void> static T Start() {
		return ((T (*)(void *))(Il2CppBase() + 0x4542FF8))(0);
	}
	template <typename T = void> static T CreateCharacter() {
		return ((T (*)(void *))(Il2CppBase() + 0x45431E0))(0);
	}
	template <typename T = void> static T Enter(uintptr_t skillDemonstration, uintptr_t heroType, int32_t skinIndex, int32_t skillIndex) {
		return ((T (*)(void *, uintptr_t, uintptr_t, int32_t, int32_t))(Il2CppBase() + 0x4543594))(0, skillDemonstration, heroType, skinIndex, skillIndex);
	}
	template <typename T = void> static T Exit() {
		return ((T (*)(void *))(Il2CppBase() + 0x4543B24))(0);
	}
	template <typename T = void> static T Destroy() {
		return ((T (*)(void *))(Il2CppBase() + 0x4543CC0))(0);
	}
	template <typename T = void> static T ChangeSkin(int32_t skinIndex) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x4543D88))(0, skinIndex);
	}
	template <typename T = void> static T ChangeSkill(int32_t skillIndex) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x4543EA8))(0, skillIndex);
	}
	template <typename T = void> static T ControllerBackToOriginPos() {
		return ((T (*)(void *))(Il2CppBase() + 0x4543FCC))(0);
	}
	template <typename T = uintptr_t> static T CreateMonster(Il2CppString* prefabName) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x4544190))(0, prefabName);
	}
	template <typename T = void> static T ClearArrowsOnStake() {
		return ((T (*)(void *))(Il2CppBase() + 0x45444A4))(0);
	}
	template <typename T = void> static T C00Enter1() {
		return ((T (*)(void *))(Il2CppBase() + 0x454465C))(0);
	}
	template <typename T = void> static T C00Exit1() {
		return ((T (*)(void *))(Il2CppBase() + 0x4544814))(0);
	}
	template <typename T = void> static T C01Enter0() {
		return ((T (*)(void *))(Il2CppBase() + 0x4544900))(0);
	}
	template <typename T = void> static T C01Start0() {
		return ((T (*)(void *))(Il2CppBase() + 0x4544A84))(0);
	}
	template <typename T = void> static T C01End0() {
		return ((T (*)(void *))(Il2CppBase() + 0x4544BB8))(0);
	}
	template <typename T = void> static T C01Enter1() {
		return ((T (*)(void *))(Il2CppBase() + 0x4544D24))(0);
	}
	template <typename T = void> static T C01Start1() {
		return ((T (*)(void *))(Il2CppBase() + 0x4544EA8))(0);
	}
	template <typename T = void> static T C01End1() {
		return ((T (*)(void *))(Il2CppBase() + 0x4545194))(0);
	}
	template <typename T = void> static T C01Enter2() {
		return ((T (*)(void *))(Il2CppBase() + 0x4545344))(0);
	}
	template <typename T = void> static T C01Start2() {
		return ((T (*)(void *))(Il2CppBase() + 0x45454C8))(0);
	}
	template <typename T = void> static T C01End2() {
		return ((T (*)(void *))(Il2CppBase() + 0x4545824))(0);
	}
	template <typename T = void> static T C03Start0() {
		return ((T (*)(void *))(Il2CppBase() + 0x45459D4))(0);
	}
	template <typename T = void> static T C03End0() {
		return ((T (*)(void *))(Il2CppBase() + 0x4545B48))(0);
	}
	template <typename T = void> static T C03Start1() {
		return ((T (*)(void *))(Il2CppBase() + 0x4545CA4))(0);
	}
	template <typename T = void> static T C03Start2() {
		return ((T (*)(void *))(Il2CppBase() + 0x4545DA0))(0);
	}
	template <typename T = void> static T C03End2() {
		return ((T (*)(void *))(Il2CppBase() + 0x4545F14))(0);
	}
	template <typename T = void> static T C04Start0() {
		return ((T (*)(void *))(Il2CppBase() + 0x4546070))(0);
	}
	template <typename T = void> static T C04Start1() {
		return ((T (*)(void *))(Il2CppBase() + 0x454616C))(0);
	}
	template <typename T = void> static T C04Enter2() {
		return ((T (*)(void *))(Il2CppBase() + 0x4546358))(0);
	}
	template <typename T = void> static T C04Start2() {
		return ((T (*)(void *))(Il2CppBase() + 0x45464D8))(0);
	}
	template <typename T = void> static T C04End2() {
		return ((T (*)(void *))(Il2CppBase() + 0x4546700))(0);
	}
	template <typename T = void> static T C05Start0() {
		return ((T (*)(void *))(Il2CppBase() + 0x4546754))(0);
	}
	template <typename T = void> static T C05End0() {
		return ((T (*)(void *))(Il2CppBase() + 0x4546894))(0);
	}
	template <typename T = void> static T C05Exit0() {
		return ((T (*)(void *))(Il2CppBase() + 0x4546A18))(0);
	}
	template <typename T = void> static T C05Start1() {
		return ((T (*)(void *))(Il2CppBase() + 0x4546B80))(0);
	}
	template <typename T = void> static T C05End1() {
		return ((T (*)(void *))(Il2CppBase() + 0x4546D20))(0);
	}
	template <typename T = void> static T C05Exit1() {
		return ((T (*)(void *))(Il2CppBase() + 0x4546D74))(0);
	}
	template <typename T = void> static T C05Start2() {
		return ((T (*)(void *))(Il2CppBase() + 0x4546E38))(0);
	}
	template <typename T = void> static T C05End2() {
		return ((T (*)(void *))(Il2CppBase() + 0x4546F78))(0);
	}
	template <typename T = void> static T C06Enter2() {
		return ((T (*)(void *))(Il2CppBase() + 0x4547018))(0);
	}
	template <typename T = void> static T C06Start2() {
		return ((T (*)(void *))(Il2CppBase() + 0x45470BC))(0);
	}
	template <typename T = void> static T C07Enter0() {
		return ((T (*)(void *))(Il2CppBase() + 0x4547308))(0);
	}
	template <typename T = void> static T C07Start0() {
		return ((T (*)(void *))(Il2CppBase() + 0x45473AC))(0);
	}
	template <typename T = void> static T C07Start1() {
		return ((T (*)(void *))(Il2CppBase() + 0x4547548))(0);
	}
	template <typename T = void> static T C07Exit1() {
		return ((T (*)(void *))(Il2CppBase() + 0x4547680))(0);
	}
	template <typename T = void> static T C0Start2() {
		return ((T (*)(void *))(Il2CppBase() + 0x45477E8))(0);
	}
	template <typename T = void> static T C07End2() {
		return ((T (*)(void *))(Il2CppBase() + 0x45478E4))(0);
	}
	template <typename T = void> static T C08Start0() {
		return ((T (*)(void *))(Il2CppBase() + 0x45479DC))(0);
	}
	template <typename T = void> static T C08Start1() {
		return ((T (*)(void *))(Il2CppBase() + 0x4547A78))(0);
	}
	template <typename T = void> static T C08End1() {
		return ((T (*)(void *))(Il2CppBase() + 0x4547B74))(0);
	}
	template <typename T = void> static T C08Start2() {
		return ((T (*)(void *))(Il2CppBase() + 0x4547C34))(0);
	}
	template <typename T = void> static T C09Enter0() {
		return ((T (*)(void *))(Il2CppBase() + 0x4547D70))(0);
	}
	template <typename T = void> static T C09Start0() {
		return ((T (*)(void *))(Il2CppBase() + 0x4547DC4))(0);
	}
	template <typename T = void> static T C09End0() {
		return ((T (*)(void *))(Il2CppBase() + 0x4547F60))(0);
	}
	template <typename T = void> static T C09Enter1() {
		return ((T (*)(void *))(Il2CppBase() + 0x4547FFC))(0);
	}
	template <typename T = void> static T C09Start1() {
		return ((T (*)(void *))(Il2CppBase() + 0x4548180))(0);
	}
	template <typename T = void> static T C09End1() {
		return ((T (*)(void *))(Il2CppBase() + 0x4548534))(0);
	}
	template <typename T = void> static T C09Start2() {
		return ((T (*)(void *))(Il2CppBase() + 0x45486E4))(0);
	}
	template <typename T = void> static T C09End2() {
		return ((T (*)(void *))(Il2CppBase() + 0x4548A10))(0);
	}
	template <typename T = void> static T C10Enter0() {
		return ((T (*)(void *))(Il2CppBase() + 0x4548AD4))(0);
	}
	template <typename T = void> static T C10Start0() {
		return ((T (*)(void *))(Il2CppBase() + 0x4548C54))(0);
	}
	template <typename T = void> static T C10Start2() {
		return ((T (*)(void *))(Il2CppBase() + 0x4548D50))(0);
	}
	template <typename T = void> static T C11Start0() {
		return ((T (*)(void *))(Il2CppBase() + 0x4548EC4))(0);
	}
	template <typename T = void> static T C11Start1() {
		return ((T (*)(void *))(Il2CppBase() + 0x4548F60))(0);
	}
	template <typename T = void> static T C11Start2() {
		return ((T (*)(void *))(Il2CppBase() + 0x4548FFC))(0);
	}
	template <typename T = void> static T C12Enter2() {
		return ((T (*)(void *))(Il2CppBase() + 0x454913C))(0);
	}
	template <typename T = void> static T C12Start2() {
		return ((T (*)(void *))(Il2CppBase() + 0x4549404))(0);
	}
	template <typename T = void> static T C12Exit2() {
		return ((T (*)(void *))(Il2CppBase() + 0x4549500))(0);
	}
	template <typename T = void> static T C13Enter0() {
		return ((T (*)(void *))(Il2CppBase() + 0x4549664))(0);
	}
	template <typename T = void> static T C13Start0() {
		return ((T (*)(void *))(Il2CppBase() + 0x45496B8))(0);
	}
	template <typename T = void> static T C13End0() {
		return ((T (*)(void *))(Il2CppBase() + 0x45497B4))(0);
	}
	template <typename T = void> static T C13Enter1() {
		return ((T (*)(void *))(Il2CppBase() + 0x45498C8))(0);
	}
	template <typename T = void> static T C13End1() {
		return ((T (*)(void *))(Il2CppBase() + 0x454991C))(0);
	}
	template <typename T = void> static T C13Enter2() {
		return ((T (*)(void *))(Il2CppBase() + 0x45499B8))(0);
	}
	template <typename T = void> static T C13Start2() {
		return ((T (*)(void *))(Il2CppBase() + 0x4549C80))(0);
	}
	template <typename T = void> static T C13Exit2() {
		return ((T (*)(void *))(Il2CppBase() + 0x4549D7C))(0);
	}
	template <typename T = void> static T C14Enter0() {
		return ((T (*)(void *))(Il2CppBase() + 0x4549EE0))(0);
	}
	template <typename T = void> static T C14Start0() {
		return ((T (*)(void *))(Il2CppBase() + 0x4549F84))(0);
	}
	template <typename T = void> static T C14Start1() {
		return ((T (*)(void *))(Il2CppBase() + 0x454A1D8))(0);
	}
	template <typename T = void> static T C14Enter2() {
		return ((T (*)(void *))(Il2CppBase() + 0x454A274))(0);
	}
	template <typename T = void> static T C14Start2() {
		return ((T (*)(void *))(Il2CppBase() + 0x454A3F8))(0);
	}
	template <typename T = void> static T C14End2() {
		return ((T (*)(void *))(Il2CppBase() + 0x454A6A0))(0);
	}
	template <typename T = void> static T C15Start0() {
		return ((T (*)(void *))(Il2CppBase() + 0x454A7D4))(0);
	}
	template <typename T = void> static T C16Start0() {
		return ((T (*)(void *))(Il2CppBase() + 0x454A9B0))(0);
	}
	template <typename T = void> static T C16Enter1() {
		return ((T (*)(void *))(Il2CppBase() + 0x454AAAC))(0);
	}
	template <typename T = void> static T C16Start1() {
		return ((T (*)(void *))(Il2CppBase() + 0x454AB50))(0);
	}
	template <typename T = void> static T C16Enter2() {
		return ((T (*)(void *))(Il2CppBase() + 0x454AD9C))(0);
	}
	template <typename T = void> static T C16Start2() {
		return ((T (*)(void *))(Il2CppBase() + 0x454AFC0))(0);
	}
	template <typename T = void> static T C16End2() {
		return ((T (*)(void *))(Il2CppBase() + 0x454B164))(0);
	}
	template <typename T = void> static T C17Enter0() {
		return ((T (*)(void *))(Il2CppBase() + 0x454B200))(0);
	}
	template <typename T = void> static T C17Start0() {
		return ((T (*)(void *))(Il2CppBase() + 0x454B2A4))(0);
	}
	template <typename T = void> static T C17End0() {
		return ((T (*)(void *))(Il2CppBase() + 0x454B52C))(0);
	}
	template <typename T = void> static T C18Start0() {
		return ((T (*)(void *))(Il2CppBase() + 0x454B700))(0);
	}
	template <typename T = void> static T C19Enter0() {
		return ((T (*)(void *))(Il2CppBase() + 0x454B874))(0);
	}
	template <typename T = void> static T C19Start0() {
		return ((T (*)(void *))(Il2CppBase() + 0x454BABC))(0);
	}
	template <typename T = void> static T C19End0() {
		return ((T (*)(void *))(Il2CppBase() + 0x454C044))(0);
	}
	template <typename T = void> static T C19Exit0() {
		return ((T (*)(void *))(Il2CppBase() + 0x454C108))(0);
	}

};

}
