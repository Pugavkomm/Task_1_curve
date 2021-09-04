/**
 * @file point.h
 * @brief Point class interface
 */
#ifndef POINT
#define POINT
#include "consts.h"
#include <stdexcept>
/**
     * @brief Point is point in DIM space
     * 
     */
template <typename T>
class Point
{

/**
     * @brief point = (x1, x2, ..., DIM). DIM - is space dimension 
     * 
     */
    point_type point[DIM];
public:
    using point_type = T
    /**
         * @brief Default constructor that defines a point at the origin.
         */
    Point();

    /**
         * @brief The constructor defines point.
         * @param coordinate - point (x1, x2, x3, ..., DIM)
         */
    Point(point_type... coordinate){
        if (coordinate.length != DIM)
            throw out_of_range("DIM = ")
        for(auto i = 0; i < DIM; ++i){

        }
    }

    /**
         * @brief The method sets the coordinates of the point.
         * @param x, y, z are coordinates of input.
         */
    void setPoint(double x, double y, double z);

    /**
         * @brief The method prints point.
         * @param left left operand.
         * @param right right operand.
         */
    void printPoint() const;

    /**
        * @brief Calculates the sum of the squares of the coordinates of a point
        * @returns the sum of the squares of the coordinates of a point
        */
};
#endif