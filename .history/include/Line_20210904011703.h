#pragma once
#ifndef LINE
#define LINE
#include "Shape.h"
#include <cmath>

namespace Curves{
    template <typename T>
    class Line : public Shape<T> {
    public: 
        virtualT derivative(double parameter);
        virtual coordinate_type point_per_parameter(double parameter);
    };
}
#endif

namespace Curves{
    template <typename T>
    T Line<T>::derivative(double parameter) {
        return direction; 

    }
    template <typename T>
    T Line<T>::point_per_parameter(double parameter){
        return origin + direction * parameter;
    }
}