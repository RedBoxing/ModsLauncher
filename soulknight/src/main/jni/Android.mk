LOCAL_PATH := $(call my-dir)
MAIN_LOCAL_PATH := $(call my-dir)
include $(CLEAR_VARS)
LOCAL_MODULE := soulknight

LOCAL_CFLAGS += -Wno-error=format-security -fvisibility=hidden -ffunction-sections -fdata-sections -w
LOCAL_CPPFLAGS += -Wno-error=format-security -fvisibility=hidden -ffunction-sections -fdata-sections -w -Werror -s -std=c++17 -Wno-error=c++11-narrowing -fms-extensions
LOCAL_LDFLAGS += -Wl,--gc-sections,--strip-all
LOCAL_ARM_MODE := arm

LOCAL_C_INCLUDES += $(MAIN_LOCAL_PATH)

LOCAL_SRC_FILES := main.cpp \
		   Patching/Patch.cpp \
		   Substrate/hde64.c \
           Substrate/SubstrateDebug.cpp \
           Substrate/SubstrateHook.cpp \
           Substrate/SubstratePosixMemory.cpp \
           X64Hook\And64InlineHook.cpp \

LOCAL_LDLIBS := -llog -landroid

include $(BUILD_SHARED_LIBRARY)