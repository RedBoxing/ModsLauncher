LOCAL_PATH := $(call my-dir)
MAIN_LOCAL_PATH := $(call my-dir)
include $(CLEAR_VARS)
LOCAL_MODULE := security

LOCAL_CFLAGS := -Wno-error=format-security -fpermissive
LOCAL_CFLAGS += -fno-rtti -fno-exceptions

LOCAL_C_INCLUDES += $(MAIN_LOCAL_PATH)

LOCAL_SRC_FILES := main.cpp \

LOCAL_LDLIBS := -llog

include $(BUILD_SHARED_LIBRARY)