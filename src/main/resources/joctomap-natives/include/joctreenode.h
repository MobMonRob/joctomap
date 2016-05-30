/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class es_usc_citius_lab_joctomap_octree_JOctreeNode */

#ifndef _Included_es_usc_citius_lab_joctomap_octree_JOctreeNode
#define _Included_es_usc_citius_lab_joctomap_octree_JOctreeNode
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     es_usc_citius_lab_joctomap_octree_JOctreeNode
 * Method:    dispose
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_es_usc_citius_lab_joctomap_octree_JOctreeNode_dispose
  (JNIEnv *, jobject);

/*
 * Class:     es_usc_citius_lab_joctomap_octree_JOctreeNode
 * Method:    getOccupancy
 * Signature: ()D
 */
JNIEXPORT jdouble JNICALL Java_es_usc_citius_lab_joctomap_octree_JOctreeNode_getOccupancy
  (JNIEnv *, jobject);

/*
 * Class:     es_usc_citius_lab_joctomap_octree_JOctreeNode
 * Method:    getValue
 * Signature: ()F
 */
JNIEXPORT jfloat JNICALL Java_es_usc_citius_lab_joctomap_octree_JOctreeNode_getValue
  (JNIEnv *, jobject);

/*
 * Class:     es_usc_citius_lab_joctomap_octree_JOctreeNode
 * Method:    getChildren
 * Signature: ()Ljava/util/List;
 */
JNIEXPORT jobject JNICALL Java_es_usc_citius_lab_joctomap_octree_JOctreeNode_getChildren
  (JNIEnv *, jobject);

/*
 * Class:     es_usc_citius_lab_joctomap_octree_JOctreeNode
 * Method:    getChild
 * Signature: (I)Les/usc/citius/lab/joctomap/octree/JOctreeNode;
 */
JNIEXPORT jobject JNICALL Java_es_usc_citius_lab_joctomap_octree_JOctreeNode_getChild
  (JNIEnv *, jobject, jint);

/*
 * Class:     es_usc_citius_lab_joctomap_octree_JOctreeNode
 * Method:    getNumChildren
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_es_usc_citius_lab_joctomap_octree_JOctreeNode_getNumChildren
  (JNIEnv *, jobject);

/*
 * Class:     es_usc_citius_lab_joctomap_octree_JOctreeNode
 * Method:    childExists
 * Signature: (I)Z
 */
JNIEXPORT jboolean JNICALL Java_es_usc_citius_lab_joctomap_octree_JOctreeNode_childExists
  (JNIEnv *, jobject, jint);

/*
 * Class:     es_usc_citius_lab_joctomap_octree_JOctreeNode
 * Method:    hasChildren
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_es_usc_citius_lab_joctomap_octree_JOctreeNode_hasChildren
  (JNIEnv *, jobject);

/*
 * Class:     es_usc_citius_lab_joctomap_octree_JOctreeNode
 * Method:    collapsible
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_es_usc_citius_lab_joctomap_octree_JOctreeNode_collapsible
  (JNIEnv *, jobject);

#ifdef __cplusplus
}
#endif
#endif
