#pragma once
#ifndef LINE
#define LINE
#include "Shape.h"
#include <cmath>

namespace Curves{
    template <typename T>
    class Line : public Shape<T> {
    public: 
        virtual coordinate_type derivative(double parameter) const;
        virtual coordinate_type point_per_parameter(double parameter) const;
    };
}
#endif

namespace Curves{
    template <typename T>
    coordinate_type Line<T>::derivative(double parameter) const{
        return direction; 

    }
    template <typename T>
    virtual coordinate_type Line<T>::point_per_parameter(double parameter) const{
        return origin + direction * parameter;
    }
}