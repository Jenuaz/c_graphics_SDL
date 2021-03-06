Course: "How to create own render"
----------------
This course nested all needable information for C language with SDL graphic libruaty to how create own render.
Step by step you will implement your own render. And you will be able to undestand who it works. 
I think my help will be in next thing I will provide to you all external material what can help you
to finish this course. I studying all this info from "Ray Tracing in One Weekend" Peter Shirley. But he 
provide all information on C++ language and some kind of .ppm format to visualize result of work of his program 
instead of his method I will use SDL. 
By the way you need to preinstall needed SDL framework on your PC. It can be done on you MacOS by using "brew".
So do the next: 
    brew install sdl2 && brew install sdl2_mixer && brew install sdl2_ttf && brew install sdl2_image
Then in home folder you will find:
    cd ~/.brew/Cellar
next folders sdl2 , sdl2_ttf (all those what we installed by previouse command:
    cp {all those folders} in your project. (copy);
And you can git clone one of presented projects in this repository (cp {all your folders from Cellar related to SDL} and replace in cloned project all folder in sdl folder. In simple words just replace folders inside sdl folder of project by your cellar sdl folders.

The basic ray-tracing algorightm
----
Fundamently rendering process can be organized in two general ways:

-object-order rendering - where each object is considered in turn, and for each object all pixels that it influence 
are found and updated;

-image-order rendering - each pixel is considered in turn, and for each pixel all the objects that influence it
are found and the pixel value is computed;

Our ray-tracer will works by computing one pixl at a time, and for each pixel the basic task is to find the object
that is seen at that pixel position in the image. Each rays through the pixel looks in different direction, and any 
object that is seen by through that pixel must intersect our traced ray - the line that emanates from the camera 
(view point) in the direction that ray through pixel direct.  The particular object we want is the one that intersects
the viewing ray nearest the camera, beacuse that objects blocks the view of any othe objects behind. 

A basic ray tracer has three parts:
1. Ray generation - computation the origin and direction of each pixel's viewing ray based on the camera geometry.
2. Ray intersection - to find intersection with object on the scene and find the closest one. 
3. Shading - computation the pixel color based on the result of ray intersection. (We will have a sctructure: hit_record; with all neaded info).

Structure of our basic program will be the next:
 
    for each pixel do:    
      compute viewing ray
      find first object hit by ray and its surface normal n
      set puxel color to value computed from hit point, light , and n
    
    

Literature:
---
Shapes: https://graphics.stanford.edu/courses/cs348b-16-spring-content/lectures/02_rt1/02_rt1_slides.pdf

Intersections with cone: http://lousodrome.net/blog/light/2017/01/03/intersection-of-a-ray-and-a-cone/

Intersections with cone and cylinder : https://mrl.nyu.edu/~dzorin/rend05/lecture2.pdf

Raytracing concept and how to calculate the ray: https://www.khanacademy.org/partner-content/pixar/rendering/rendering1/a/start-here-rendering

All needed info about RT in one place: http://cosinekitty.com/raytrace/contents.html

Ray tracing primitives: https://www.cl.cam.ac.uk/teaching/1999/AGraphHCI/SMAG/node2.html

Visualization of shape equations: https://www.geogebra.org/3d
