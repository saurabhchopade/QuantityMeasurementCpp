#include "volume.h"

Volume::Volume(double factor) : Unit(factor){}

Volume Volume::LITRES(1000.00);
Volume Volume::GALLON(3780.00);

Unit* Volume::get_base_unit() {
    return &Volume::LITRES;
}