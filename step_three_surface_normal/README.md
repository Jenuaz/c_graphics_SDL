Surface normals
--------
 At the beginning we need to get ourselves an surface normal, to make a shade. In three dimensions, a surface normal, or simply normal, to a surface at a point P is a vector that is perpendicular to the tangent plane to that surface at P. The word "normal" is also used as an adjective: a line normal to a plane, the normal component of a force, the normal vector, etc.

<img width="300" alt="screen shot 2018-12-25 at 3 15 42 pm" src="https://upload.wikimedia.org/wikipedia/commons/1/10/Reflection_angles.svg">

 To be more precise and understandable normal vector is vecotr that perpendicular to the surface, and points out. By convention lenght of normals vectors equal to unit length. We won't enforce that in the code. This can cause to bugs but 
 we got what we got. For the sphere, the normal is in the direction of the hitpoint minus the center:
 
 <img width="300" alt="screen shot 2018-12-25 at 3 15 42 pm" src="http://cosinekitty.com/raytrace/figure_6_2_spherenorm.png">
 
