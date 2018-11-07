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
package es.usc.citius.lab.joctomap.iterators;

import es.usc.citius.lab.joctomap.octree.JOctree;
import es.usc.citius.lab.joctomap.octree.JOctreeKey;
import es.usc.citius.lab.joctomap.octree.JOctreeNode;
import es.usc.citius.lab.motionplanner.core.spatial.Point3D;

/**
 * Implements an iterator for navigating the {@link JOctreeNode} of a {@link JOctree}, which only traverses the leaves in a given bounding box.
 *
 * @author Adrián González Sieira {@literal <adrian.gonzalez@usc.es>}
 */
public class LeafBBXIterator extends OctreeIterator{
	
	/**
	 * Default constructor for this class, that takes the native pointer to the iterator and
	 * the native pointer to the end point of the created iterator.
	 * 
	 * @param pointer pointer to the native object (JNI global reference)
	 */
	private LeafBBXIterator(long pointer) {
		super(pointer);
	}

	@Override
	public native boolean hasNext();

	@Override
	public native JOctreeKey next();

	@Override
	public native JOctreeKey key();

	@Override
	public native int depth();

	@Override
	public native Point3D coordinate();

	@Override
	public native float x();

	@Override
	public native float y();

	@Override
	public native float z();

	@Override
	public native float size();

	@Override
	public native JOctreeNode node();

        @Override
        public native void dispose();
        
        @Override
        protected void finalize() throws Throwable {
            super.finalize(); //To change body of generated methods, choose Tools | Templates.
            dispose();
        }
}
