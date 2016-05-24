package es.usc.citius.lab.joctomap.util;

import es.usc.citius.lab.joctomap.octree.JOctree;
import es.usc.citius.lab.motionplanner.core.spatial.Point2D;
import es.usc.citius.lab.motionplanner.core.spatial.Pose2D;
import java.io.IOException;

/**
 * This class implements a collision checker which uses native methods to determine
 * the collision in a 2D octree using 2D shapes (circular and rectangular).
 *
 * @author Adrián González Sieira <adrian.gonzalez@usc.es>
 */
public class CollisionChecker2D {
    
    //place to load the dynamic libraries used in the code
    static{
        try {
            NativeUtils.loadLibraryFromJar("/joctomap-natives/libjoctomap.so");
        } catch (IOException ex) {
            throw new RuntimeException(ex);
        }
    }
    
    /**
     * Checks if there is a collision given an octree and a curren pose, 
     * considering a circular shape of the robot centered in the pose
     * given as parameter.
     * 
     * @param octree instance of octree
     * @param pose pose where the shape is rotated
     * @param radius radius of the circular shape
     * @return true if there is a collision with the obstacles in the map
     */
    public static native boolean collides(JOctree octree, Point2D pose, float radius);
    
    /**
     * Checks if there is a collision given an octree and a curren pose, 
     * considering a rectangular shape, defined by a distance in x and y from
     * the robot center of rotation, which is centered in the pose given as 
     * parameter.
     * 
     * @param octree instance of octree
     * @param pose pose where the shape is rotated
     * @param dx distance in x from the rotation center to the borders
     * @param dy distance in y from the rotation center to the borders
     * @return true if there is a collision with the obstacles in the map
     */
    public static native boolean collides(JOctree octree, Pose2D pose, float dx, float dy);
    
}