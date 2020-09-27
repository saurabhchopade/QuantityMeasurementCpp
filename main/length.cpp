#include "length.h"

Length::Length(double factor) : Unit(factor){}

Length Length::INCH(1);
Length Length::FEET(12);
Length Length::YARD(36);

Unit* Length::get_base_unit() {
    return &Length::INCH;
}