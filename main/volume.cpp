#include "volume.h"

Volume::Volume(double factor) : Unit(factor){}

Volume Volume::LITRES(1);
Volume Volume::GALLON(3.78);
Volume Volume::ML(0.001);

Unit* Volume::get_base_unit() {
    return &Volume::LITRES;
}