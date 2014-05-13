package es.usc.citius.lab.joctomap.iterators;

import java.util.Iterator;

import es.usc.citius.lab.joctomap.octree.JOctree;
import es.usc.citius.lab.joctomap.octree.JOctreeKey;
import es.usc.citius.lab.joctomap.util.NativeObject;

/**
 * Implements an iterator for the {@link JOctreeNode} of a
 * given {@link JOctree}, which  
 *
 * @author Adrián González Sieira <adrian.gonzalez@usc.es>
 */
public class LeafBBXIterator extends NativeObject implements Iterator<JOctreeKey>{

	public LeafBBXIterator(long pointer) {
		super(pointer);
	}

	@Override
	public native boolean hasNext();

	@Override
	public native JOctreeKey next();

	@Override
	public void remove() {
		throw new UnsupportedOperationException("LeafBBXIterator does not support remove operation");
	}

}
