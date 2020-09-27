#pragma once
#include <iostream>

class Unit {
public:
    double conversion_factor;
    Unit(double);

    double base_conversion(double);
    virtual Unit* get_base_unit() = 0;   
};