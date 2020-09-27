#include "quantity.h"
#include <iostream>

Quantity::Quantity() {}
Quantity::Quantity(double value, Unit* unit) : value(value), unit(unit){}

double Quantity::get_base_value() const {
    return this->unit->base_conversion(this->value);
}

bool Quantity::operator== (std::any other) const {
    Quantity* otherQuantityConversion = (std::any_cast<Quantity>(&other) == nullptr) ? std::any_cast<Quantity*>(other) : std::any_cast<Quantity>(&other);

    return this->get_base_value() == otherQuantityConversion->get_base_value() &&   
            this->unit->get_base_unit() == otherQuantityConversion->unit->get_base_unit();   
}

bool Quantity::operator!= (std::any other) const {
    Quantity* otherQuantityConversion = (std::any_cast<Quantity>(&other) == nullptr) ? std::any_cast<Quantity*>(other) : std::any_cast<Quantity>(&other);

    return !(this->get_base_value() == otherQuantityConversion->get_base_value() && 
            this->unit->get_base_unit() == otherQuantityConversion->unit->get_base_unit());   
}

Quantity Quantity::operator+ (Quantity other) const {
    double value = this->get_base_value() + other.get_base_value();
   
    Unit* unit = this->unit->get_base_unit();
    Quantity additionOfQuantities(value, unit);
   
    return additionOfQuantities;
} 