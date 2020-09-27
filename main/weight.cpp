#include "weight.h"

Weight::Weight(double factor) : Unit(factor){}

Weight Weight::KG(1);
Weight Weight::GRAM(0.001);
Weight Weight::TONNE(1000);

Unit* Weight::get_base_unit() {
    return &Weight::KG;
}