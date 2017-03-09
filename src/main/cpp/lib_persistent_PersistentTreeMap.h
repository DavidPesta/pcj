/* Copyright (C) 2017  Intel Corporation
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General public synchronized License
 * version 2 only, as published by the Free Software Foundation.
 * This file has been designated as subject to the "Classpath"
 * exception as provided in the LICENSE file that accompanied
 * this code.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General public synchronized License version 2 for more details (a copy
 * is included in the LICENSE file that accompanied this code).
 *
 * You should have received a copy of the GNU General public synchronized License
 * version 2 along with this program; if not, write to the Free
 * Software Foundation, Inc., 51 Franklin Street, Fifth Floor,
 * Boston, MA  02110-1301, USA.
 */

/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class lib_persistent_PersistentTreeMap */

#ifndef _Included_lib_persistent_PersistentTreeMap
#define _Included_lib_persistent_PersistentTreeMap
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     lib_persistent_PersistentTreeMap
 * Method:    nativeCreateTreeMap
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_lib_persistent_PersistentTreeMap_nativeCreateTreeMap
  (JNIEnv *, jobject);

/*
 * Class:     lib_persistent_PersistentTreeMap
 * Method:    nativeCheckTreeMapExists
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_lib_persistent_PersistentTreeMap_nativeCheckTreeMapExists
  (JNIEnv *, jclass, jlong);

/*
 * Class:     lib_persistent_PersistentTreeMap
 * Method:    nativePut
 * Signature: (JJJ)Llib/persistent/Persistent;
 */
JNIEXPORT jobject JNICALL Java_lib_persistent_PersistentTreeMap_nativePut
  (JNIEnv *, jobject, jlong, jlong, jlong);

/*
 * Class:     lib_persistent_PersistentTreeMap
 * Method:    nativeGet
 * Signature: (JJ)J
 */
JNIEXPORT jlong JNICALL Java_lib_persistent_PersistentTreeMap_nativeGet
  (JNIEnv *, jobject, jlong, jlong);

/*
 * Class:     lib_persistent_PersistentTreeMap
 * Method:    nativeRemove
 * Signature: (JJ)Llib/persistent/Persistent;
 */
JNIEXPORT jobject JNICALL Java_lib_persistent_PersistentTreeMap_nativeRemove
  (JNIEnv *, jobject, jlong, jlong);

/*
 * Class:     lib_persistent_PersistentTreeMap
 * Method:    nativeSize
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_lib_persistent_PersistentTreeMap_nativeSize
  (JNIEnv *, jobject, jlong);

/*
 * Class:     lib_persistent_PersistentTreeMap
 * Method:    nativeGetFirstNode
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_lib_persistent_PersistentTreeMap_nativeGetFirstNode
  (JNIEnv *, jobject, jlong);

/*
 * Class:     lib_persistent_PersistentTreeMap
 * Method:    nativeGetLastNode
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_lib_persistent_PersistentTreeMap_nativeGetLastNode
  (JNIEnv *, jobject, jlong);

/*
 * Class:     lib_persistent_PersistentTreeMap
 * Method:    nativeGetSuccessor
 * Signature: (JJ)J
 */
JNIEXPORT jlong JNICALL Java_lib_persistent_PersistentTreeMap_nativeGetSuccessor
  (JNIEnv *, jobject, jlong, jlong);

/*
 * Class:     lib_persistent_PersistentTreeMap
 * Method:    nativeGetPredecessor
 * Signature: (JJ)J
 */
JNIEXPORT jlong JNICALL Java_lib_persistent_PersistentTreeMap_nativeGetPredecessor
  (JNIEnv *, jobject, jlong, jlong);

/*
 * Class:     lib_persistent_PersistentTreeMap
 * Method:    nativeGetNodeKey
 * Signature: (JJ)Llib/persistent/Persistent;
 */
JNIEXPORT jobject JNICALL Java_lib_persistent_PersistentTreeMap_nativeGetNodeKey
  (JNIEnv *, jobject, jlong, jlong);

/*
 * Class:     lib_persistent_PersistentTreeMap
 * Method:    nativeGetNodeValue
 * Signature: (JJ)Llib/persistent/Persistent;
 */
JNIEXPORT jobject JNICALL Java_lib_persistent_PersistentTreeMap_nativeGetNodeValue
  (JNIEnv *, jobject, jlong, jlong);

/*
 * Class:     lib_persistent_PersistentTreeMap
 * Method:    nativeClear
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_lib_persistent_PersistentTreeMap_nativeClear
  (JNIEnv *, jobject, jlong);

/*
 * Class:     lib_persistent_PersistentTreeMap
 * Method:    nativePutAll
 * Signature: (J[J[JI)V
 */
JNIEXPORT void JNICALL Java_lib_persistent_PersistentTreeMap_nativePutAll
  (JNIEnv *, jobject, jlong, jlongArray, jlongArray, jint);

/*
 * Class:     lib_persistent_PersistentTreeMap
 * Method:    nativeRemoveAll
 * Signature: (J[JI)V
 */
JNIEXPORT void JNICALL Java_lib_persistent_PersistentTreeMap_nativeRemoveAll
  (JNIEnv *, jobject, jlong, jlongArray, jint);

#ifdef __cplusplus
}
#endif
#endif