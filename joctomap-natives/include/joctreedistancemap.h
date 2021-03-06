/**
 * Copyright (C) 2014-2017 Adrián González Sieira (adrian.gonzalez@usc.es)
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *         http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class es_usc_citius_lab_joctomap_distance_JOctreeDistanceMap */

#ifndef _Included_es_usc_citius_lab_joctomap_distance_JOctreeDistanceMap
#define _Included_es_usc_citius_lab_joctomap_distance_JOctreeDistanceMap
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     es_usc_citius_lab_joctomap_distance_JOctreeDistanceMap
 * Method:    update
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_es_usc_citius_lab_joctomap_distance_JOctreeDistanceMap_update
  (JNIEnv *, jobject);

/*
 * Class:     es_usc_citius_lab_joctomap_distance_JOctreeDistanceMap
 * Method:    getDistance
 * Signature: (DDD)D
 */
JNIEXPORT jdouble JNICALL Java_es_usc_citius_lab_joctomap_distance_JOctreeDistanceMap_getDistance__DDD
  (JNIEnv *, jobject, jdouble, jdouble, jdouble);

/*
 * Class:     es_usc_citius_lab_joctomap_distance_JOctreeDistanceMap
 * Method:    getDistance
 * Signature: (Les/usc/citius/lab/joctomap/octree/JOctreeKey;)D
 */
JNIEXPORT jdouble JNICALL Java_es_usc_citius_lab_joctomap_distance_JOctreeDistanceMap_getDistance__Les_usc_citius_lab_joctomap_octree_JOctreeKey_2
  (JNIEnv *, jobject, jobject);

/*
 * Class:     es_usc_citius_lab_joctomap_distance_JOctreeDistanceMap
 * Method:    getDistanceAndClosestObstacle
 * Signature: (DDD)Les/usc/citius/lab/joctomap/util/Obstacle;
 */
JNIEXPORT jobject JNICALL Java_es_usc_citius_lab_joctomap_distance_JOctreeDistanceMap_getDistanceAndClosestObstacle
  (JNIEnv *, jobject, jdouble, jdouble, jdouble);

/*
 * Class:     es_usc_citius_lab_joctomap_distance_JOctreeDistanceMap
 * Method:    create
 * Signature: (Les/usc/citius/lab/joctomap/octree/JOctree;D)Les/usc/citius/lab/joctomap/distance/JOctreeDistanceMap;
 */
JNIEXPORT jobject JNICALL Java_es_usc_citius_lab_joctomap_distance_JOctreeDistanceMap_create
  (JNIEnv *, jclass, jobject, jdouble);

/*
 * Class:     es_usc_citius_lab_joctomap_distance_JOctreeDistanceMap
 * Method:    dispose
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_es_usc_citius_lab_joctomap_distance_JOctreeDistanceMap_dispose
  (JNIEnv *, jobject);

#ifdef __cplusplus
}
#endif
#endif
