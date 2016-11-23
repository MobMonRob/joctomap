/**
 * Copyright (C) 2014-2016 Adrián González Sieira (adrian.gonzalez@usc.es)
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
/* Header for class es_usc_citius_lab_joctomap_util_JOctreeUtils */

#ifndef _Included_es_usc_citius_lab_joctomap_util_JOctreeUtils
#define _Included_es_usc_citius_lab_joctomap_util_JOctreeUtils
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     es_usc_citius_lab_joctomap_util_JOctreeUtils
 * Method:    getOccupiedKeysBetween
 * Signature: (Les/usc/citius/lab/joctomap/octree/JOctree;Les/usc/citius/lab/motionplanner/core/spatial/Point3D;Les/usc/citius/lab/motionplanner/core/spatial/Point3D;)Ljava/util/Collection;
 */
JNIEXPORT jobject JNICALL Java_es_usc_citius_lab_joctomap_util_JOctreeUtils_getOccupiedKeysBetween
  (JNIEnv *, jclass, jobject, jobject, jobject);

/*
 * Class:     es_usc_citius_lab_joctomap_util_JOctreeUtils
 * Method:    getOccupiedCoordinatesBetween
 * Signature: (Les/usc/citius/lab/joctomap/octree/JOctree;Les/usc/citius/lab/motionplanner/core/spatial/Point3D;Les/usc/citius/lab/motionplanner/core/spatial/Point3D;)Ljava/util/Collection;
 */
JNIEXPORT jobject JNICALL Java_es_usc_citius_lab_joctomap_util_JOctreeUtils_getOccupiedCoordinatesBetween
  (JNIEnv *, jclass, jobject, jobject, jobject);

/*
 * Class:     es_usc_citius_lab_joctomap_util_JOctreeUtils
 * Method:    resolutionAt
 * Signature: (Les/usc/citius/lab/joctomap/octree/JOctree;Les/usc/citius/lab/motionplanner/core/spatial/Point3D;)F
 */
JNIEXPORT jfloat JNICALL Java_es_usc_citius_lab_joctomap_util_JOctreeUtils_resolutionAt
  (JNIEnv *, jclass, jobject, jobject);

/*
 * Class:     es_usc_citius_lab_joctomap_util_JOctreeUtils
 * Method:    resolutionAddedIn
 * Signature: (Les/usc/citius/lab/joctomap/octree/JOctree;Les/usc/citius/lab/motionplanner/core/spatial/Point3D;Les/usc/citius/lab/motionplanner/core/spatial/Point3D;)F
 */
JNIEXPORT jfloat JNICALL Java_es_usc_citius_lab_joctomap_util_JOctreeUtils_resolutionAddedIn
  (JNIEnv *, jclass, jobject, jobject, jobject);

/*
 * Class:     es_usc_citius_lab_joctomap_util_JOctreeUtils
 * Method:    availableH2DMRTransitions
 * Signature: (Les/usc/citius/lab/joctomap/octree/JOctree;Les/usc/citius/lab/joctomap/util/AdjacencyMap;[FLjava/util/Map;FFILes/usc/citius/lab/motionplanner/core/spatial/Point2D;)Ljava/lang/Iterable;
 */
JNIEXPORT jobject JNICALL Java_es_usc_citius_lab_joctomap_util_JOctreeUtils_availableH2DMRTransitions
  (JNIEnv *, jclass, jobject, jobject, jfloatArray, jobject, jfloat, jfloat, jint, jobject);

/*
 * Class:     es_usc_citius_lab_joctomap_util_JOctreeUtils
 * Method:    queryClosed
 * Signature: (Les/usc/citius/lab/joctomap/octree/JOctree;Les/usc/citius/lab/joctomap/util/AdjacencyMap;Les/usc/citius/lab/motionplanner/core/spatial/Point2D;Ljava/util/Map;F)Les/usc/citius/lab/motionplanner/core/util/Pair;
 */
JNIEXPORT jobject JNICALL Java_es_usc_citius_lab_joctomap_util_JOctreeUtils_queryClosed
  (JNIEnv *, jclass, jobject, jobject, jobject, jobject, jfloat);

#ifdef __cplusplus
}
#endif
#endif
