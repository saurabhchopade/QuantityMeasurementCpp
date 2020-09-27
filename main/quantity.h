#include "unit.h"
#include <any>
#include <iostream>
class Quantity {
public:
    double value;
    Unit *unit;
    Quantity();
    Quantity(double, Unit*);
    double get_base_value() const;
    bool operator== (std::any other) const;
    bool operator!= (std::any other) const;
};