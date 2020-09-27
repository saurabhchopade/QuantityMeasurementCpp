#pragma once
#include <iostream>
#include "unit.h"

class Volume : public Unit {
    Volume(double);
public:

    virtual Unit* get_base_unit();

    static Volume ML;
    static Volume GALLON;
    static Volume LITRES;
};