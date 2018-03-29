/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_mediatek_demo_smartconnection_JniLoader */

#ifndef _Included_com_mediatek_demo_smartconnection_JniLoader
#define _Included_com_mediatek_demo_smartconnection_JniLoader
#ifdef __cplusplus
extern "C" {
#endif
#undef com_mediatek_demo_smartconnection_JniLoader_ERROR_CODE_OK
#define com_mediatek_demo_smartconnection_JniLoader_ERROR_CODE_OK 0L
#undef com_mediatek_demo_smartconnection_JniLoader_ERROR_CODE_NOT_INITINED
#define com_mediatek_demo_smartconnection_JniLoader_ERROR_CODE_NOT_INITINED -1L
#undef com_mediatek_demo_smartconnection_JniLoader_ERROR_CODE_WRONG_TYPE
#define com_mediatek_demo_smartconnection_JniLoader_ERROR_CODE_WRONG_TYPE -2L
#undef com_mediatek_demo_smartconnection_JniLoader_ERROR_CODE_WRONG_PARAMETER
#define com_mediatek_demo_smartconnection_JniLoader_ERROR_CODE_WRONG_PARAMETER -3L
#undef com_mediatek_demo_smartconnection_JniLoader_ERROR_CODE_CRYPTED_FAILED
#define com_mediatek_demo_smartconnection_JniLoader_ERROR_CODE_CRYPTED_FAILED -4L
#undef com_mediatek_demo_smartconnection_JniLoader_ERROR_CODE_NOT_ENOUGH_MEMORY
#define com_mediatek_demo_smartconnection_JniLoader_ERROR_CODE_NOT_ENOUGH_MEMORY -5L
#undef com_mediatek_demo_smartconnection_JniLoader_ERROR_CODE_EXCEED_MAX_LENGTH
#define com_mediatek_demo_smartconnection_JniLoader_ERROR_CODE_EXCEED_MAX_LENGTH -6L
#undef com_mediatek_demo_smartconnection_JniLoader_ERROR_CODE_ALREADY_STARTED
#define com_mediatek_demo_smartconnection_JniLoader_ERROR_CODE_ALREADY_STARTED -7L
#undef com_mediatek_demo_smartconnection_JniLoader_ERROR_CODE_ALREADY_STOPED
#define com_mediatek_demo_smartconnection_JniLoader_ERROR_CODE_ALREADY_STOPED -8L
#undef com_mediatek_demo_smartconnection_JniLoader_ERROR_CODE_FAILED_TO_START
#define com_mediatek_demo_smartconnection_JniLoader_ERROR_CODE_FAILED_TO_START -9L
/*
 * Class:     com_mediatek_demo_smartconnection_JniLoader
 * Method:    GetProtoVersion
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_com_mediatek_demo_smartconnection_JniLoader_GetProtoVersion
  (JNIEnv *, jobject);

/*
 * Class:     com_mediatek_demo_smartconnection_JniLoader
 * Method:    GetLibVersion
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_com_mediatek_demo_smartconnection_JniLoader_GetLibVersion
  (JNIEnv *, jobject);

/*
 * Class:     com_mediatek_demo_smartconnection_JniLoader
 * Method:    InitSmartConnection
 * Signature: (Ljava/lang/String;III)I
 */
JNIEXPORT jint JNICALL Java_com_mediatek_demo_smartconnection_JniLoader_InitSmartConnection
  (JNIEnv *, jobject, jstring, jstring, jint, jint, jint);

/*
 * Class:     com_mediatek_demo_smartconnection_JniLoader
 * Method:    SetSendInterval
 * Signature: (I)I
 */
JNIEXPORT jint JNICALL Java_com_mediatek_demo_smartconnection_JniLoader_SetSendInterval
  (JNIEnv *, jobject, jfloat, jfloat);

/*
 * Class:     com_mediatek_demo_smartconnection_JniLoader
 * Method:    StartSmartConnection
 * Signature: (Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)I
 */
JNIEXPORT jint JNICALL Java_com_mediatek_demo_smartconnection_JniLoader_StartSmartConnection
  (JNIEnv *, jobject, jstring, jstring, jstring);

/*
 * Class:     com_mediatek_demo_smartconnection_JniLoader
 * Method:    StopSmartConnection
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_com_mediatek_demo_smartconnection_JniLoader_StopSmartConnection
  (JNIEnv *, jobject);

#ifdef __cplusplus
}
#endif
#endif
