#include "quantity.h"
#include <iostream>

Quantity::Quantity() {}
Quantity::Quantity(double value, Unit* unit) : value(value), unit(unit){}

double Quantity::get_base_value() const {
    return this->unit->base_conversion(this->value);
}

bool Quantity::operator== (std::any other) const {
    Quantity* otherQuantityConversion = (std::any_cast<Quantity>(&other) == nullptr) ? std::any_cast<Quantity*>(other) : std::any_cast<Quantity>(&other);

    return this->get_base_value() == otherQuantityConversion->get_base_value();   
}

bool Quantity::operator!= (std::any other) const {
    Quantity* otherQuantityConversion = (std::any_cast<Quantity>(&other) == nullptr) ? std::any_cast<Quantity*>(other) : std::any_cast<Quantity>(&other);

    return this->get_base_value() == otherQuantityConversion->get_base_value();   
}