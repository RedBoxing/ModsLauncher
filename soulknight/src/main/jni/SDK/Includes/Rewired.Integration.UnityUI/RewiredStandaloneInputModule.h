#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace Rewired.Integration.UnityUI {

class RewiredStandaloneInputModule
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Rewired.Integration.UnityUI", "RewiredStandaloneInputModule"));
	}

	template <typename T = Il2CppString*> static T& DEFAULT_ACTION_MOVE_HORIZONTAL() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& DEFAULT_ACTION_MOVE_VERTICAL() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& DEFAULT_ACTION_SUBMIT() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& DEFAULT_ACTION_CANCEL() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& rewiredInputManager() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = bool> T& useAllRewiredGamePlayers() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = bool> T& useRewiredSystemPlayer() {
		return *(T*)((uintptr_t)this + 0x79);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& rewiredPlayerIds() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = bool> T& usePlayingPlayersOnly() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& playerMice() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = bool> T& moveOneElementPerAxisPress() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = bool> T& setActionsById() {
		return *(T*)((uintptr_t)this + 0x99);
	}
	template <typename T = int32_t> T& horizontalActionId() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = int32_t> T& verticalActionId() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = int32_t> T& submitActionId() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = int32_t> T& cancelActionId() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = Il2CppString*> T& m_HorizontalAxis() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = Il2CppString*> T& m_VerticalAxis() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = Il2CppString*> T& m_SubmitButton() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = Il2CppString*> T& m_CancelButton() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = float> T& m_InputActionsPerSecond() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = float> T& m_RepeatDelay() {
		return *(T*)((uintptr_t)this + 0xD4);
	}
	template <typename T = bool> T& m_allowMouseInput() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = bool> T& m_allowMouseInputIfTouchSupported() {
		return *(T*)((uintptr_t)this + 0xD9);
	}
	template <typename T = bool> T& m_allowTouchInput() {
		return *(T*)((uintptr_t)this + 0xDA);
	}
	template <typename T = bool> T& m_deselectIfBackgroundClicked() {
		return *(T*)((uintptr_t)this + 0xDB);
	}
	template <typename T = bool> T& m_deselectBeforeSelecting() {
		return *(T*)((uintptr_t)this + 0xDC);
	}
	template <typename T = bool> T& m_ForceModuleActive() {
		return *(T*)((uintptr_t)this + 0xDD);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& playerIds() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = bool> T& recompiling() {
		return *(T*)((uintptr_t)this + 0xE8);
	}
	template <typename T = bool> T& isTouchSupported() {
		return *(T*)((uintptr_t)this + 0xE9);
	}
	template <typename T = double> T& m_PrevActionTime() {
		return *(T*)((uintptr_t)this + 0xF0);
	}
	template <typename T = Il2CppVector2> T& m_LastMoveVector() {
		return *(T*)((uintptr_t)this + 0xF8);
	}
	template <typename T = int32_t> T& m_ConsecutiveMoveCount() {
		return *(T*)((uintptr_t)this + 0x100);
	}
	template <typename T = bool> T& m_HasFocus() {
		return *(T*)((uintptr_t)this + 0x104);
	}

	template <typename T = uintptr_t> T get_RewiredInputManager() {
		return ((T (*)(RewiredStandaloneInputModule*))(Il2CppBase() + 0x2693140))(this);
	}
	template <typename T = void> T set_RewiredInputManager(uintptr_t value) {
		return ((T (*)(RewiredStandaloneInputModule*, uintptr_t))(Il2CppBase() + 0x26931A0))(this, value);
	}
	template <typename T = bool> T get_UseAllRewiredGamePlayers() {
		return ((T (*)(RewiredStandaloneInputModule*))(Il2CppBase() + 0x2693214))(this);
	}
	template <typename T = void> T set_UseAllRewiredGamePlayers(bool value) {
		return ((T (*)(RewiredStandaloneInputModule*, bool))(Il2CppBase() + 0x2693274))(this, value);
	}
	template <typename T = bool> T get_UseRewiredSystemPlayer() {
		return ((T (*)(RewiredStandaloneInputModule*))(Il2CppBase() + 0x26938A0))(this);
	}
	template <typename T = void> T set_UseRewiredSystemPlayer(bool value) {
		return ((T (*)(RewiredStandaloneInputModule*, bool))(Il2CppBase() + 0x2693900))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_RewiredPlayerIds() {
		return ((T (*)(RewiredStandaloneInputModule*))(Il2CppBase() + 0x26939A0))(this);
	}
	template <typename T = void> T set_RewiredPlayerIds(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(RewiredStandaloneInputModule*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x2693ABC))(this, value);
	}
	template <typename T = bool> T get_UsePlayingPlayersOnly() {
		return ((T (*)(RewiredStandaloneInputModule*))(Il2CppBase() + 0x2693C1C))(this);
	}
	template <typename T = void> T set_UsePlayingPlayersOnly(bool value) {
		return ((T (*)(RewiredStandaloneInputModule*, bool))(Il2CppBase() + 0x2693C7C))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_PlayerMice() {
		return ((T (*)(RewiredStandaloneInputModule*))(Il2CppBase() + 0x2693CF4))(this);
	}
	template <typename T = void> T set_PlayerMice(Il2CppList<uintptr_t>* value) {
		return ((T (*)(RewiredStandaloneInputModule*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x2693DA4))(this, value);
	}
	template <typename T = bool> T get_MoveOneElementPerAxisPress() {
		return ((T (*)(RewiredStandaloneInputModule*))(Il2CppBase() + 0x2693E88))(this);
	}
	template <typename T = void> T set_MoveOneElementPerAxisPress(bool value) {
		return ((T (*)(RewiredStandaloneInputModule*, bool))(Il2CppBase() + 0x2693EE8))(this, value);
	}
	template <typename T = bool> T get_allowMouseInput() {
		return ((T (*)(RewiredStandaloneInputModule*))(Il2CppBase() + 0x2693F60))(this);
	}
	template <typename T = void> T set_allowMouseInput(bool value) {
		return ((T (*)(RewiredStandaloneInputModule*, bool))(Il2CppBase() + 0x2693FC0))(this, value);
	}
	template <typename T = bool> T get_allowMouseInputIfTouchSupported() {
		return ((T (*)(RewiredStandaloneInputModule*))(Il2CppBase() + 0x2694038))(this);
	}
	template <typename T = void> T set_allowMouseInputIfTouchSupported(bool value) {
		return ((T (*)(RewiredStandaloneInputModule*, bool))(Il2CppBase() + 0x2694098))(this, value);
	}
	template <typename T = bool> T get_allowTouchInput() {
		return ((T (*)(RewiredStandaloneInputModule*))(Il2CppBase() + 0x2694110))(this);
	}
	template <typename T = void> T set_allowTouchInput(bool value) {
		return ((T (*)(RewiredStandaloneInputModule*, bool))(Il2CppBase() + 0x2694170))(this, value);
	}
	template <typename T = bool> T get_deselectIfBackgroundClicked() {
		return ((T (*)(RewiredStandaloneInputModule*))(Il2CppBase() + 0x26941E8))(this);
	}
	template <typename T = void> T set_deselectIfBackgroundClicked(bool value) {
		return ((T (*)(RewiredStandaloneInputModule*, bool))(Il2CppBase() + 0x2694248))(this, value);
	}
	template <typename T = bool> T get_deselectBeforeSelecting() {
		return ((T (*)(RewiredStandaloneInputModule*))(Il2CppBase() + 0x26942C0))(this);
	}
	template <typename T = void> T set_deselectBeforeSelecting(bool value) {
		return ((T (*)(RewiredStandaloneInputModule*, bool))(Il2CppBase() + 0x2694320))(this, value);
	}
	template <typename T = bool> T get_SetActionsById() {
		return ((T (*)(RewiredStandaloneInputModule*))(Il2CppBase() + 0x2694398))(this);
	}
	template <typename T = void> T set_SetActionsById(bool value) {
		return ((T (*)(RewiredStandaloneInputModule*, bool))(Il2CppBase() + 0x26943F8))(this, value);
	}
	template <typename T = int32_t> T get_HorizontalActionId() {
		return ((T (*)(RewiredStandaloneInputModule*))(Il2CppBase() + 0x2694498))(this);
	}
	template <typename T = void> T set_HorizontalActionId(int32_t value) {
		return ((T (*)(RewiredStandaloneInputModule*, int32_t))(Il2CppBase() + 0x26944F8))(this, value);
	}
	template <typename T = int32_t> T get_VerticalActionId() {
		return ((T (*)(RewiredStandaloneInputModule*))(Il2CppBase() + 0x2694678))(this);
	}
	template <typename T = void> T set_VerticalActionId(int32_t value) {
		return ((T (*)(RewiredStandaloneInputModule*, int32_t))(Il2CppBase() + 0x26946D8))(this, value);
	}
	template <typename T = int32_t> T get_SubmitActionId() {
		return ((T (*)(RewiredStandaloneInputModule*))(Il2CppBase() + 0x2694858))(this);
	}
	template <typename T = void> T set_SubmitActionId(int32_t value) {
		return ((T (*)(RewiredStandaloneInputModule*, int32_t))(Il2CppBase() + 0x26948B8))(this, value);
	}
	template <typename T = int32_t> T get_CancelActionId() {
		return ((T (*)(RewiredStandaloneInputModule*))(Il2CppBase() + 0x2694A38))(this);
	}
	template <typename T = void> T set_CancelActionId(int32_t value) {
		return ((T (*)(RewiredStandaloneInputModule*, int32_t))(Il2CppBase() + 0x2694A98))(this, value);
	}
	template <typename T = bool> T get_isMouseSupported() {
		return ((T (*)(RewiredStandaloneInputModule*))(Il2CppBase() + 0x2694C18))(this);
	}
	template <typename T = bool> T get_isTouchAllowed() {
		return ((T (*)(RewiredStandaloneInputModule*))(Il2CppBase() + 0x2694CAC))(this);
	}
	template <typename T = bool> T get_allowActivationOnMobileDevice() {
		return ((T (*)(RewiredStandaloneInputModule*))(Il2CppBase() + 0x2694D0C))(this);
	}
	template <typename T = void> T set_allowActivationOnMobileDevice(bool value) {
		return ((T (*)(RewiredStandaloneInputModule*, bool))(Il2CppBase() + 0x2694D6C))(this, value);
	}
	template <typename T = bool> T get_forceModuleActive() {
		return ((T (*)(RewiredStandaloneInputModule*))(Il2CppBase() + 0x2694DE4))(this);
	}
	template <typename T = void> T set_forceModuleActive(bool value) {
		return ((T (*)(RewiredStandaloneInputModule*, bool))(Il2CppBase() + 0x2694E44))(this, value);
	}
	template <typename T = float> T get_inputActionsPerSecond() {
		return ((T (*)(RewiredStandaloneInputModule*))(Il2CppBase() + 0x2694EBC))(this);
	}
	template <typename T = void> T set_inputActionsPerSecond(float value) {
		return ((T (*)(RewiredStandaloneInputModule*, float))(Il2CppBase() + 0x2694F1C))(this, value);
	}
	template <typename T = float> T get_repeatDelay() {
		return ((T (*)(RewiredStandaloneInputModule*))(Il2CppBase() + 0x2694F90))(this);
	}
	template <typename T = void> T set_repeatDelay(float value) {
		return ((T (*)(RewiredStandaloneInputModule*, float))(Il2CppBase() + 0x2694FF0))(this, value);
	}
	template <typename T = Il2CppString*> T get_horizontalAxis() {
		return ((T (*)(RewiredStandaloneInputModule*))(Il2CppBase() + 0x2695064))(this);
	}
	template <typename T = void> T set_horizontalAxis(Il2CppString* value) {
		return ((T (*)(RewiredStandaloneInputModule*, Il2CppString*))(Il2CppBase() + 0x26950C4))(this, value);
	}
	template <typename T = Il2CppString*> T get_verticalAxis() {
		return ((T (*)(RewiredStandaloneInputModule*))(Il2CppBase() + 0x26951DC))(this);
	}
	template <typename T = void> T set_verticalAxis(Il2CppString* value) {
		return ((T (*)(RewiredStandaloneInputModule*, Il2CppString*))(Il2CppBase() + 0x269523C))(this, value);
	}
	template <typename T = Il2CppString*> T get_submitButton() {
		return ((T (*)(RewiredStandaloneInputModule*))(Il2CppBase() + 0x2695354))(this);
	}
	template <typename T = void> T set_submitButton(Il2CppString* value) {
		return ((T (*)(RewiredStandaloneInputModule*, Il2CppString*))(Il2CppBase() + 0x26953B4))(this, value);
	}
	template <typename T = Il2CppString*> T get_cancelButton() {
		return ((T (*)(RewiredStandaloneInputModule*))(Il2CppBase() + 0x26954CC))(this);
	}
	template <typename T = void> T set_cancelButton(Il2CppString* value) {
		return ((T (*)(RewiredStandaloneInputModule*, Il2CppString*))(Il2CppBase() + 0x269552C))(this, value);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(RewiredStandaloneInputModule*))(Il2CppBase() + 0x2695738))(this);
	}
	template <typename T = void> T UpdateModule() {
		return ((T (*)(RewiredStandaloneInputModule*))(Il2CppBase() + 0x2695AF0))(this);
	}
	template <typename T = bool> T IsModuleSupported() {
		return ((T (*)(RewiredStandaloneInputModule*))(Il2CppBase() + 0x2695D7C))(this);
	}
	template <typename T = bool> T ShouldActivateModule() {
		return ((T (*)(RewiredStandaloneInputModule*))(Il2CppBase() + 0x2695DDC))(this);
	}
	template <typename T = void> T ActivateModule() {
		return ((T (*)(RewiredStandaloneInputModule*))(Il2CppBase() + 0x26968CC))(this);
	}
	template <typename T = void> T DeactivateModule() {
		return ((T (*)(RewiredStandaloneInputModule*))(Il2CppBase() + 0x2696A54))(this);
	}
	template <typename T = void> T Process() {
		return ((T (*)(RewiredStandaloneInputModule*))(Il2CppBase() + 0x2696AC0))(this);
	}
	template <typename T = bool> T ProcessTouchEvents() {
		return ((T (*)(RewiredStandaloneInputModule*))(Il2CppBase() + 0x26974B4))(this);
	}
	template <typename T = void> T ProcessTouchPress(uintptr_t pointerEvent, bool pressed, bool released) {
		return ((T (*)(RewiredStandaloneInputModule*, uintptr_t, bool, bool))(Il2CppBase() + 0x26979A8))(this, pointerEvent, pressed, released);
	}
	template <typename T = bool> T SendSubmitEventToSelectedObject() {
		return ((T (*)(RewiredStandaloneInputModule*))(Il2CppBase() + 0x2697194))(this);
	}
	template <typename T = Il2CppVector2> T GetRawMoveVector() {
		return ((T (*)(RewiredStandaloneInputModule*))(Il2CppBase() + 0x2698760))(this);
	}
	template <typename T = bool> T SendMoveEventToSelectedObject() {
		return ((T (*)(RewiredStandaloneInputModule*))(Il2CppBase() + 0x2696DD8))(this);
	}
	template <typename T = void> T CheckButtonOrKeyMovement(uintptr_t* downHorizontal, uintptr_t* downVertical) {
		return ((T (*)(RewiredStandaloneInputModule*, uintptr_t*, uintptr_t*))(Il2CppBase() + 0x2698C34))(this, downHorizontal, downVertical);
	}
	template <typename T = void> T ProcessMouseEvents() {
		return ((T (*)(RewiredStandaloneInputModule*))(Il2CppBase() + 0x26977AC))(this);
	}
	template <typename T = void> T ProcessMouseEvent(int32_t playerId, int32_t pointerIndex) {
		return ((T (*)(RewiredStandaloneInputModule*, int32_t, int32_t))(Il2CppBase() + 0x2698E30))(this, playerId, pointerIndex);
	}
	template <typename T = bool> T SendUpdateEventToSelectedObject() {
		return ((T (*)(RewiredStandaloneInputModule*))(Il2CppBase() + 0x2696C48))(this);
	}
	template <typename T = void> T ProcessMousePress(uintptr_t data) {
		return ((T (*)(RewiredStandaloneInputModule*, uintptr_t))(Il2CppBase() + 0x2699290))(this, data);
	}
	template <typename T = void> T HandleMouseTouchDeselectionOnSelectionChanged(uintptr_t currentOverGo, uintptr_t pointerEvent) {
		return ((T (*)(RewiredStandaloneInputModule*, uintptr_t, uintptr_t))(Il2CppBase() + 0x26984F4))(this, currentOverGo, pointerEvent);
	}
	template <typename T = void> T OnApplicationFocus(bool hasFocus) {
		return ((T (*)(RewiredStandaloneInputModule*, bool))(Il2CppBase() + 0x2699A44))(this, hasFocus);
	}
	template <typename T = bool> T ShouldIgnoreEventsOnNoFocus() {
		return ((T (*)(RewiredStandaloneInputModule*))(Il2CppBase() + 0x2695C8C))(this);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(RewiredStandaloneInputModule*))(Il2CppBase() + 0x2699ABC))(this);
	}
	template <typename T = bool> T IsDefaultPlayer(int32_t playerId) {
		return ((T (*)(RewiredStandaloneInputModule*, int32_t))(Il2CppBase() + 0x2699B9C))(this, playerId);
	}
	template <typename T = void> T InitializeRewired() {
		return ((T (*)(RewiredStandaloneInputModule*))(Il2CppBase() + 0x2695914))(this);
	}
	template <typename T = void> T SetupRewiredVars() {
		return ((T (*)(RewiredStandaloneInputModule*))(Il2CppBase() + 0x2693314))(this);
	}
	template <typename T = void> T SetUpRewiredPlayerMice() {
		return ((T (*)(RewiredStandaloneInputModule*))(Il2CppBase() + 0x269A124))(this);
	}
	template <typename T = void> T SetUpRewiredActions() {
		return ((T (*)(RewiredStandaloneInputModule*))(Il2CppBase() + 0x2699DD0))(this);
	}
	template <typename T = bool> T GetButton(uintptr_t player, int32_t actionId) {
		return ((T (*)(RewiredStandaloneInputModule*, uintptr_t, int32_t))(Il2CppBase() + 0x2698AE4))(this, player, actionId);
	}
	template <typename T = bool> T GetButtonDown(uintptr_t player, int32_t actionId) {
		return ((T (*)(RewiredStandaloneInputModule*, uintptr_t, int32_t))(Il2CppBase() + 0x2696270))(this, player, actionId);
	}
	template <typename T = bool> T GetNegativeButton(uintptr_t player, int32_t actionId) {
		return ((T (*)(RewiredStandaloneInputModule*, uintptr_t, int32_t))(Il2CppBase() + 0x2698B8C))(this, player, actionId);
	}
	template <typename T = bool> T GetNegativeButtonDown(uintptr_t player, int32_t actionId) {
		return ((T (*)(RewiredStandaloneInputModule*, uintptr_t, int32_t))(Il2CppBase() + 0x2696318))(this, player, actionId);
	}
	template <typename T = float> T GetAxis(uintptr_t player, int32_t actionId) {
		return ((T (*)(RewiredStandaloneInputModule*, uintptr_t, int32_t))(Il2CppBase() + 0x26963C0))(this, player, actionId);
	}
	template <typename T = void> T CheckEditorRecompile() {
		return ((T (*)(RewiredStandaloneInputModule*))(Il2CppBase() + 0x2695BC4))(this);
	}
	template <typename T = void> T OnEditorRecompile() {
		return ((T (*)(RewiredStandaloneInputModule*))(Il2CppBase() + 0x269A2A8))(this);
	}
	template <typename T = void> T ClearRewiredVars() {
		return ((T (*)(RewiredStandaloneInputModule*))(Il2CppBase() + 0x269A310))(this);
	}
	template <typename T = bool> T DidAnyMouseMove() {
		return ((T (*)(RewiredStandaloneInputModule*))(Il2CppBase() + 0x2696468))(this);
	}
	template <typename T = bool> T GetMouseButtonDownOnAnyMouse(int32_t buttonIndex) {
		return ((T (*)(RewiredStandaloneInputModule*, int32_t))(Il2CppBase() + 0x2696698))(this, buttonIndex);
	}
	template <typename T = void> T OnRewiredInitialized() {
		return ((T (*)(RewiredStandaloneInputModule*))(Il2CppBase() + 0x269A394))(this);
	}
	template <typename T = void> T OnRewiredShutDown() {
		return ((T (*)(RewiredStandaloneInputModule*))(Il2CppBase() + 0x269A3F4))(this);
	}
	template <typename T = bool> T iFixBaseProxy_get_isMouseSupported() {
		return ((T (*)(RewiredStandaloneInputModule*))(Il2CppBase() + 0x269A454))(this);
	}
	template <typename T = void> T iFixBaseProxy_Awake() {
		return ((T (*)(RewiredStandaloneInputModule*))(Il2CppBase() + 0x269A458))(this);
	}
	template <typename T = void> T iFixBaseProxy_UpdateModule() {
		return ((T (*)(RewiredStandaloneInputModule*))(Il2CppBase() + 0x269A460))(this);
	}
	template <typename T = bool> T iFixBaseProxy_IsModuleSupported() {
		return ((T (*)(RewiredStandaloneInputModule*))(Il2CppBase() + 0x269A468))(this);
	}
	template <typename T = bool> T iFixBaseProxy_ShouldActivateModule() {
		return ((T (*)(RewiredStandaloneInputModule*))(Il2CppBase() + 0x269A470))(this);
	}
	template <typename T = void> T iFixBaseProxy_ActivateModule() {
		return ((T (*)(RewiredStandaloneInputModule*))(Il2CppBase() + 0x269A478))(this);
	}
	template <typename T = void> T iFixBaseProxy_DeactivateModule() {
		return ((T (*)(RewiredStandaloneInputModule*))(Il2CppBase() + 0x269A480))(this);
	}
	template <typename T = void> T iFixBaseProxy_OnDestroy() {
		return ((T (*)(RewiredStandaloneInputModule*))(Il2CppBase() + 0x269A488))(this);
	}

};

}
