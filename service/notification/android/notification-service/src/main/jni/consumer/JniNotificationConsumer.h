/******************************************************************
 *
 * Copyright 2016 Samsung Electronics All Rights Reserved.
 *
 *
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 ******************************************************************/

/* DO NOT EDIT THIS FILE - it is machine generated */
#include "JniNotificationCommon.h"

#ifndef JNI_NOTIFICATION_CONSUMER_H
#define JNI_NOTIFICATION_CONSUMER_H

#ifdef __cplusplus
extern "C" {
#endif

/*
 * Class:     org_iotivity_service_ns_consumer_ConsumerService
 * Method:    nativeStart
 * Signature: (Lorg/iotivity/service/ns/consumer/ConsumerService/OnProviderDiscoveredListener;)V
 */
JNIEXPORT void JNICALL Java_org_iotivity_service_ns_consumer_ConsumerService_nativeStart
(JNIEnv *, jobject, jobject);

/*
 * Class:     org_iotivity_service_ns_consumer_ConsumerService
 * Method:    nativeStop
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_iotivity_service_ns_consumer_ConsumerService_nativeStop
(JNIEnv *, jobject);

/*
 * Class:     org_iotivity_service_ns_consumer_ConsumerService
 * Method:    nativeEnableRemoteService
 * Signature: (Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL
Java_org_iotivity_service_ns_consumer_ConsumerService_nativeEnableRemoteService
(JNIEnv *, jobject, jstring);

/*
 * Class:     org_iotivity_service_ns_consumer_ConsumerService
 * Method:    nativeSubscribeMQService
 * Signature: (Ljava/lang/String;Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL
Java_org_iotivity_service_ns_consumer_ConsumerService_nativeSubscribeMQService
(JNIEnv *, jobject, jstring, jstring);

/*
 * Class:     org_iotivity_service_ns_consumer_ConsumerService
 * Method:    nativeRescanProvider
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_iotivity_service_ns_consumer_ConsumerService_nativeRescanProvider
(JNIEnv *, jobject);

/*
 * Class:     org_iotivity_service_ns_consumer_Provider
 * Method:    nativeSubscribe
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_iotivity_service_ns_consumer_Provider_nativeSubscribe
(JNIEnv *, jobject);


/*
 * Class:     org_iotivity_service_ns_consumer_Provider
 * Method:    nativeUnsubscribe
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_iotivity_service_ns_consumer_Provider_nativeUnsubscribe
(JNIEnv *, jobject);

/*
 * Class:     org_iotivity_service_ns_consumer_Provider
 * Method:    nativeSendSyncInfo
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_org_iotivity_service_ns_consumer_Provider_nativeSendSyncInfo
(JNIEnv *, jobject, jlong, jint);

/*
 * Class:     org_iotivity_service_ns_consumer_Provider
 * Method:    nativeSetListener
 * Signature: (Lorg/iotivity/service/ns/consumer/Provider/OnProviderStateListener;Lorg/iotivity/service/ns/consumer/Provider/OnMessageReceivedListener;Lorg/iotivity/service/ns/consumer/Provider/OnSyncInfoReceivedListener;)V
 */
JNIEXPORT void JNICALL Java_org_iotivity_service_ns_consumer_Provider_nativeSetListener
(JNIEnv *, jobject, jobject, jobject, jobject);

/*
 * Class:     org_iotivity_service_ns_consumer_Provider
 * Method:    nativeGetTopicList
 * Signature: ()Lorg/iotivity/service/ns/common/TopicsList;
 */
JNIEXPORT jobject JNICALL Java_org_iotivity_service_ns_consumer_Provider_nativeGetTopicList
(JNIEnv *, jobject);

/*
 * Class:     org_iotivity_service_ns_consumer_Provider
 * Method:    nativeUpdateTopicList
 * Signature: (Lorg/iotivity/service/ns/common/TopicsList;)V
 */
JNIEXPORT void JNICALL Java_org_iotivity_service_ns_consumer_Provider_nativeUpdateTopicList
(JNIEnv *, jobject, jobject);

/*
 * Class:     org_iotivity_service_ns_consumer_Provider
 * Method:    nativeGetProviderState
 * Signature: ()Lorg/iotivity/service/ns/consumer/Provider$ProviderState;
 */
JNIEXPORT jobject JNICALL Java_org_iotivity_service_ns_consumer_Provider_nativeGetProviderState
(JNIEnv *, jobject);

/*
 * Class:     org_iotivity_service_ns_consumer_Provider
 * Method:    nativeIsSubscribed
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_org_iotivity_service_ns_consumer_Provider_nativeIsSubscribed
(JNIEnv *, jobject);

/*
 * Class:     org_iotivity_service_ns_consumer_Provider
 * Method:    nativeDispose
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_iotivity_service_ns_consumer_Provider_nativeDispose
(JNIEnv *env, jobject object);

#ifdef __cplusplus
}
#endif
#endif