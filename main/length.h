#pragma once
#include <iostream>
#include "unit.h"

class Length : public Unit {
    Length(double);
public:

    virtual Unit* get_base_unit();

    static Length INCH;
    static Length FEET;
    static Length YARD;
    static Length CM;
};