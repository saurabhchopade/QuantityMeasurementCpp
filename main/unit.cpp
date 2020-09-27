#include "unit.h"

Unit::Unit(double factor_value): conversion_factor(factor_value){}

double Unit::base_conversion(double value) {
    return this->conversion_factor * value;
}