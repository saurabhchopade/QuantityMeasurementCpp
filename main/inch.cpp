#include <typeinfo>
#include "inch.h"

Inch::Inch(double value) {
    this->value = value;
}

bool Inch::operator== (Inch other) const {
    return ((this->value == other.value) && (typeid(this->value).name() 
            ==  typeid(other.value).name()));
}

bool Inch::operator== (Inch *other) const {
    if(other == nullptr) {
        return false;
    }
    return ((this->value == other->value) &&  typeid(this->value).name()
              ==  typeid(other->value).name());
}