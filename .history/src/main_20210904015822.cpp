#include <iostream>

#include "Shape.h"
#include "Line.h"
#include "Ellipse.h"
#include <vector>
using shape = Curves::Shape<double>;
using line = Curves::Line<double>;
using ellipse = Curves::Ellipse<double>;

int main(int argc, char *argv[])
{
	std::vector<shape*> curves_vector;
	shape* temp_shape;
	Line l;
	temp_shape = &line();
	
	return 0; 
}