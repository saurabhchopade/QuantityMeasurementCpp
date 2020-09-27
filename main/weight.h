#pragma once
#include <iostream>
#include "unit.h"

class Weight : public Unit {
    Weight(double);
public:

    virtual Unit* get_base_unit();

    static Weight KG;
    static Weight GRAM;
    static Weight TONNE;
};