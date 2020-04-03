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

#ifndef _PROVIDER_SCHEDULER_H_
#define _PROVIDER_SCHEDULER_H_

#include <stdio.h>
#include <pthread.h>
#include <semaphore.h>
#include <stdbool.h>
#include "ocstack.h"
#include "NSCommon.h"
#include "NSConstants.h"
#include "NSStructs.h"
#include "experimental/logger.h"
#include "oic_malloc.h"
#include "oic_string.h"
#include "NSUtil.h"

extern NSTask* NSHeadMsg[THREAD_COUNT]; /**< Current MSG */
extern NSTask* NSTailMsg[THREAD_COUNT]; /**< Recently MSG */

extern pthread_t NSThread[THREAD_COUNT];
extern pthread_mutex_t NSMutex[THREAD_COUNT];
extern sem_t NSSemaphore[THREAD_COUNT];
extern bool NSIsRunning[THREAD_COUNT];

extern void * NSCallbackResponseSchedule(void *ptr);
extern void * NSDiscoverySchedule(void *ptr);
extern void * NSSubScriptionSchedule(void *ptr);
extern void * NSNotificationSchedule(void *ptr);
extern void * NSTopicSchedule(void * ptr);

/**
 * set list
 */
void NSSetList(void);

/**
 * Initialize scheduler.
 *
 * @return true if initialized, otherwise false.
 */
bool NSInitScheduler(void);

/**
 * start scheduler.
 *
 * @return true if scheduler start, otherwise false.
 */
bool NSStartScheduler(void);

/**
 * stop scheduler.
 *
 * @return true if scheduler stop, otherwise false.
 */
bool NSStopScheduler(void);

/**
 * Push queue.
 *
 * @param[in] schedulerType   scheduler type
 * @param[in] taskType        task type
 * @param[in] data            data to push
 */
void NSPushQueue(NSSchedulerType schedulerType, NSTaskType taskType, void* data);

/**
 * Free data.
 *
 * @param[in] type    scheduler type
 * @param[in] task    task type
 */
void NSFreeData(NSSchedulerType type, NSTask * task);

#endif /* _PROVIDER_SCHEDULER_H_ */
