#pragma once
#include "Il2Cpp/Il2Cpp.h"

class RelicEntranceRoom
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RelicEntranceRoom"));
	}

	template <typename T = uintptr_t> T& levelPatternConfig() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& runePrefabs() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& runeControllers() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& relicEntranceGate() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& onComplete() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& runeParentTransform() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = Il2CppVector3> T& runePositionOffset() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& room() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& cameraFocus() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = float> T& controlDuration() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = float> T& puzzleDuration() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = uintptr_t> T& lightPointerPrefab() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = float> T& pointerMoveDuration() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = float> T& pointerFadeDuration() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = float> T& pointerAlpha() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = float> T& controllerActiveDuration() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> T& runeEffectPrefab() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = float> T& pointerFailShakeDuration() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = Il2CppVector3> T& pointerFailShakeStrength() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = int32_t> T& pointerFailShakeVibrato() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = float> T& startTriggerEffectDuration() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = float> T& completeControllerDelay() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = float> T& completeFadeDuration() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = uintptr_t> T& completeTileColor() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& fadeInRenderers() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = float> T& fadeInDuration() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = uintptr_t> T& pointerArriveClip() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = uintptr_t> T& pointerNotMoveClip() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = uintptr_t> T& puzzleStartClip() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = uintptr_t> T& onGameComplete() {
		return *(T*)((uintptr_t)this + 0xE8);
	}
	template <typename T = Il2CppDictionary<int32_t, uintptr_t>*> T& _runePrefabs() {
		return *(T*)((uintptr_t)this + 0xF0);
	}
	template <typename T = Il2CppDictionary<int32_t, uintptr_t>*> T& _runes() {
		return *(T*)((uintptr_t)this + 0xF8);
	}
	template <typename T = uintptr_t> T& _moveDirection() {
		return *(T*)((uintptr_t)this + 0x100);
	}
	template <typename T = uintptr_t> T& _controlState() {
		return *(T*)((uintptr_t)this + 0x104);
	}
	template <typename T = int32_t> T& _currentRuneIndex() {
		return *(T*)((uintptr_t)this + 0x108);
	}
	template <typename T = float> T& _prevControlTime() {
		return *(T*)((uintptr_t)this + 0x10C);
	}
	template <typename T = uintptr_t> T& _controller() {
		return *(T*)((uintptr_t)this + 0x110);
	}
	template <typename T = uintptr_t> T& _pointerTransform() {
		return *(T*)((uintptr_t)this + 0x118);
	}
	template <typename T = uintptr_t> T& _pointerRenderer() {
		return *(T*)((uintptr_t)this + 0x120);
	}
	template <typename T = uintptr_t> T& _puzzleTimeCounter() {
		return *(T*)((uintptr_t)this + 0x128);
	}
	template <typename T = uintptr_t> T& _gameState() {
		return *(T*)((uintptr_t)this + 0x130);
	}
	template <typename T = uintptr_t> T& _pointerNotMoveClipCold() {
		return *(T*)((uintptr_t)this + 0x138);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _runeMatrix() {
		return *(T*)((uintptr_t)this + 0x140);
	}
	template <typename T = uintptr_t> T& _runeSize() {
		return *(T*)((uintptr_t)this + 0x148);
	}
	template <typename T = Il2CppDictionary<int32_t, void*>*> T& _coloredTilePool() {
		return *(T*)((uintptr_t)this + 0x150);
	}
	template <typename T = bool> T& _isInControl() {
		return *(T*)((uintptr_t)this + 0x158);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(RelicEntranceRoom*))(Il2CppBase() + 0x42B8ABC))(this);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(RelicEntranceRoom*))(Il2CppBase() + 0x42B8DBC))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(RelicEntranceRoom*))(Il2CppBase() + 0x42B8EA0))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(RelicEntranceRoom*))(Il2CppBase() + 0x42B963C))(this);
	}
	template <typename T = void> T OnSyncGetRelicMessage(uintptr_t eventBase) {
		return ((T (*)(RelicEntranceRoom*, uintptr_t))(Il2CppBase() + 0x42BA0DC))(this, eventBase);
	}
	template <typename T = void> T OnExitTriggerRuneMessage(uintptr_t relicEntranceMessage) {
		return ((T (*)(RelicEntranceRoom*, uintptr_t))(Il2CppBase() + 0x42BA228))(this, relicEntranceMessage);
	}
	template <typename T = void> T OnEnterTriggerRuneMessage(uintptr_t relicEntranceMessage) {
		return ((T (*)(RelicEntranceRoom*, uintptr_t))(Il2CppBase() + 0x42BA52C))(this, relicEntranceMessage);
	}
	template <typename T = void> T OnMoveTriggerRuneMessage(uintptr_t relicEntranceMessage) {
		return ((T (*)(RelicEntranceRoom*, uintptr_t))(Il2CppBase() + 0x42BA880))(this, relicEntranceMessage);
	}
	template <typename T = void> T StartGame() {
		return ((T (*)(RelicEntranceRoom*))(Il2CppBase() + 0x42BB7F8))(this);
	}
	template <typename T = void> T ExitTriggerRune(bool isDown) {
		return ((T (*)(RelicEntranceRoom*, bool))(Il2CppBase() + 0x42B9090))(this, isDown);
	}
	template <typename T = void> T HidePointer() {
		return ((T (*)(RelicEntranceRoom*))(Il2CppBase() + 0x42BAC30))(this);
	}
	template <typename T = void> T ExitTriggerRuneMessage(bool isDown) {
		return ((T (*)(RelicEntranceRoom*, bool))(Il2CppBase() + 0x42B93EC))(this, isDown);
	}
	template <typename T = void> T TriggerRune(uintptr_t interactModel) {
		return ((T (*)(RelicEntranceRoom*, uintptr_t))(Il2CppBase() + 0x42BBB0C))(this, interactModel);
	}
	template <typename T = void> T TriggerRuneProcess() {
		return ((T (*)(RelicEntranceRoom*))(Il2CppBase() + 0x42BAF7C))(this);
	}
	template <typename T = void> T OnOpenDoorDirectly() {
		return ((T (*)(RelicEntranceRoom*))(Il2CppBase() + 0x42BBFB4))(this);
	}
	template <typename T = void> T ShowPointer() {
		return ((T (*)(RelicEntranceRoom*))(Il2CppBase() + 0x42BAD18))(this);
	}
	template <typename T = uintptr_t> T ShowStartTriggerEffect(uintptr_t rune) {
		return ((T (*)(RelicEntranceRoom*, uintptr_t))(Il2CppBase() + 0x42BBED4))(this, rune);
	}
	template <typename T = void> T TakeRuneEffect(uintptr_t position, int32_t index) {
		return ((T (*)(RelicEntranceRoom*, uintptr_t, int32_t))(Il2CppBase() + 0x42BC144))(this, position, index);
	}
	template <typename T = void> T Control(uintptr_t movementInput) {
		return ((T (*)(RelicEntranceRoom*, uintptr_t))(Il2CppBase() + 0x42BC4D4))(this, movementInput);
	}
	template <typename T = void> T MovePointer() {
		return ((T (*)(RelicEntranceRoom*))(Il2CppBase() + 0x42BB214))(this);
	}
	template <typename T = void> T PuzzleCompleteCheck() {
		return ((T (*)(RelicEntranceRoom*))(Il2CppBase() + 0x42BCE80))(this);
	}
	template <typename T = void> T PuzzleComplete() {
		return ((T (*)(RelicEntranceRoom*))(Il2CppBase() + 0x42BD154))(this);
	}
	template <typename T = void> T MoveToNewPosition(bool isEndPosition, uintptr_t newPosition, uintptr_t currentRune) {
		return ((T (*)(RelicEntranceRoom*, bool, uintptr_t, uintptr_t))(Il2CppBase() + 0x42BCC3C))(this, isEndPosition, newPosition, currentRune);
	}
	template <typename T = void> T MoveToPrevPosition(uintptr_t currentRune, uintptr_t newPosition) {
		return ((T (*)(RelicEntranceRoom*, uintptr_t, uintptr_t))(Il2CppBase() + 0x42BC9C0))(this, currentRune, newPosition);
	}
	template <typename T = void> T FadeOutColoredTile(uintptr_t coloredTile, int32_t runeIndex) {
		return ((T (*)(RelicEntranceRoom*, uintptr_t, int32_t))(Il2CppBase() + 0x42BD978))(this, coloredTile, runeIndex);
	}
	template <typename T = int32_t> T GetCurrentColoredCount() {
		return ((T (*)(RelicEntranceRoom*))(Il2CppBase() + 0x42BCFB0))(this);
	}
	template <typename T = uintptr_t> static T GetMoveDirectionVector(uintptr_t moveDirection) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x42BC83C))(0, moveDirection);
	}
	template <typename T = void> T InstantiateRunes() {
		return ((T (*)(RelicEntranceRoom*))(Il2CppBase() + 0x42B96A4))(this);
	}
	template <typename T = void> T InitRunePointer() {
		return ((T (*)(RelicEntranceRoom*))(Il2CppBase() + 0x42B9ED0))(this);
	}
	template <typename T = uintptr_t> T GetColoredTile(int32_t runeIndex) {
		return ((T (*)(RelicEntranceRoom*, int32_t))(Il2CppBase() + 0x42BDCB8))(this, runeIndex);
	}
	template <typename T = uintptr_t> T GetMoveDirection(Il2CppVector2 direction) {
		return ((T (*)(RelicEntranceRoom*, Il2CppVector2))(Il2CppBase() + 0x42BC6C8))(this, direction);
	}
	template <typename T = void> T ShowColoredTile(uintptr_t position, int32_t runeIndex) {
		return ((T (*)(RelicEntranceRoom*, uintptr_t, int32_t))(Il2CppBase() + 0x42BA984))(this, position, runeIndex);
	}
	template <typename T = void> T Awakeb__46_0(uintptr_t r) {
		return ((T (*)(RelicEntranceRoom*, uintptr_t))(Il2CppBase() + 0x42BDFCC))(this, r);
	}
	template <typename T = void> T HidePointerb__56_0() {
		return ((T (*)(RelicEntranceRoom*))(Il2CppBase() + 0x42BDFD0))(this);
	}
	template <typename T = void> T MovePointerb__65_0() {
		return ((T (*)(RelicEntranceRoom*))(Il2CppBase() + 0x42BE01C))(this);
	}
	template <typename T = void> T MovePointerb__65_1() {
		return ((T (*)(RelicEntranceRoom*))(Il2CppBase() + 0x42BE028))(this);
	}
	template <typename T = void> T PuzzleCompleteb__67_1() {
		return ((T (*)(RelicEntranceRoom*))(Il2CppBase() + 0x42BE050))(this);
	}

};

}
