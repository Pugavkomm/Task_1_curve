# Task 1: curve
A small program in C++ that implement support of 2D curves hierarchy. The program generates a vector of lines and ellipses. Then it displays their type, derivative and point depending on the parameter.

_To design the program, a class was developed that describes a point in a `DIM`-dimensional space. The Curve class was also developed, which is the base class for the two child classes Line and Ellipse. The first class describes a line, and the second class describes an ellipse. This program was written with the possibility of unifying the code for any dimension, although this is not fully implemented._

## Documentation
[Documentation](http://95.182.120.16:3000/)

## Make

`make` -> output main 

## Structure
```
|- ./
---| Makefile

---| src/
---|---------| main.cpp
---| include/
---|---------| consts.h
---|---------| Curve.h
---|---------| Ellipse.h
---|---------| Line.h
---|---------| Point.h
---| lib/...
---|output/ 
---|---------|main
---| docs/
---|---------| docbook/
---|---------| html/
---|---------| xml/
---|---------| doxygen_conf

```

