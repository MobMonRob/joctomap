package es.usc.citius.lab.joctomap;

import java.util.List;

import es.usc.citius.lab.joctomap.util.NativeObject;


/**
 * Represents a node of the {@link JOctree}, which is identified
 * with a unique {@link JOctreeKey}. The node contains information
 * about the occupancy in a region of the map. Also, in unexplored
 * regions of the map, there is no nodes to represent that region.
 * Since this is a native object, it extends to {@link NativeObject}
 * to store the pointer properly.
 *
 * @author Adrián González Sieira <adrian.gonzalez@usc.es>
 */
public class JOctreeNode extends NativeObject{

	/**
	 * Default constructor for the class, that initializes
	 * the pointer to the native object.
	 * 
	 * @param pointer to the native object
	 */
	public JOctreeNode(long pointer) {
		super(pointer);
	}
	
	/**
	 * Retrieves the probability of occupancy of the node.
	 * 
	 * @return [0, 1] probability of occupancy
	 */
	public native double getOccupancy();
	
	/**
	 * Retrieves the value stored in the node.
	 * 
	 * @return current node value
	 */
	public native float getValue();
	
	/**
	 * Retrieves the list of children of the node
	 *  
	 * @return list of children of the node
	 */
	public native List<JOctreeNode> getChildren();
	
	/**
	 * Retrieve the i-th child of the node, if exists.
	 * 
	 * @param i child number
	 * @return {@link JOctreeNode} if child exists, null otherwise
	 */
	public native JOctreeNode getChild(int i);
	
	/**
	 * Queries the number of children of this node.
	 * 
	 * @return number of children
	 */
	public native int getNumChildren();
	
	/**
	 * Queries if the i-th child of the node exists.
	 * 
	 * @param i i-th element
	 * @return
	 */
	public native boolean childExists(int i);
	
	/**
	 * Queries if this is a leaf node.
	 * 
	 * @return true if this is not a leaf node
	 */
	public native boolean hasChildren();
	
	/**
	 * Queries if this is a collapsible node.
	 * 
	 * @return true if all childs of the node exist, and they have not children of their own
	 */
	public native boolean collapsible();
}