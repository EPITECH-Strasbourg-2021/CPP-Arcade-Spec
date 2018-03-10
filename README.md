# C++ Module: Arcade Protocol Specification

This document covers the interfaces and the protocol between the Graphics libraries and the Game libraries in the context of the EPITECH C++ Arcade project.

If you are going to implement this specification, please pay attention to not modify any class or enum names and to keep those under the "Arcade" namespace.

## Utilities

The protocol will be referring to a few primitives for representing things like Vectors and Colors.  
This section describes their prototypes.  

***Files:** Vect.hpp / Color.hpp / Keys.hpp*


## Graphic Library / Game Library interoperability

This sections describes objects that will be common for both the graphics libraries and the game libraries.

***Files:** PixelBox.hpp / TextBox.hpp*


## Graphics Libraries

This section describes the API that each graphics library should inherit, implement and expose.

***Files:** IGraphicLib.hpp*


## Game Libraries

This section describes the API that each game library should inherit, implement and expose.

***Files:** IGameModule.hpp*
